/**
 * vim: set ts=4 sw=4 tw=99 noet :
 * ======================================================
 * Metamod:Source Sample Plugin
 * Written by AlliedModders LLC.
 * ======================================================
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from 
 * the use of this software.
 *
 * This sample plugin is public domain.
 */

#include <stdio.h>
#include "Voice.h"
#include "iserver.h"
#include "audio.h"
#include "protobuf/generated/netmessages.pb.h"

SH_DECL_HOOK3_void(IServerGameDLL, GameFrame, SH_NOATTRIB, 0, bool, bool, bool);
SH_DECL_HOOK4_void(IServerGameClients, ClientActive, SH_NOATTRIB, 0, CPlayerSlot, bool, const char *, uint64);
SH_DECL_HOOK5_void(IServerGameClients, ClientDisconnect, SH_NOATTRIB, 0, CPlayerSlot, ENetworkDisconnectionReason, const char *, uint64, const char *);
SH_DECL_HOOK4_void(IServerGameClients, ClientPutInServer, SH_NOATTRIB, 0, CPlayerSlot, char const *, int, uint64);
SH_DECL_HOOK1_void(IServerGameClients, ClientSettingsChanged, SH_NOATTRIB, 0, CPlayerSlot );
SH_DECL_HOOK6_void(IServerGameClients, OnClientConnected, SH_NOATTRIB, 0, CPlayerSlot, const char*, uint64, const char *, const char *, bool);
SH_DECL_HOOK6(IServerGameClients, ClientConnect, SH_NOATTRIB, 0, bool, CPlayerSlot, const char*, uint64, const char *, bool, CBufferString *);
SH_DECL_HOOK2(IGameEventManager2, FireEvent, SH_NOATTRIB, 0, bool, IGameEvent *, bool);

SH_DECL_HOOK2_void( IServerGameClients, ClientCommand, SH_NOATTRIB, 0, CPlayerSlot, const CCommand & );

VoiceData g_VoiceData;
IServerGameDLL *server = NULL;
IServerGameClients *gameclients = NULL;
IVEngineServer *engine = NULL;
IGameEventManager2 *gameevents = NULL;
IGameEventSystem* g_gameEventSystem = nullptr;
ICvar *icvar = NULL;
INetworkGameServer* g_pNetworkGameServer = nullptr;
IVEngineServer2* g_pEngineServer2 = nullptr;

int g_SectionNumber = 0;

CServerSideClient* g_AudioPlayerClient = nullptr;

// Should only be called within the active game loop (i e map should be loaded and active)
// otherwise that'll be nullptr!
CGlobalVars *GetGameGlobals()
{
	INetworkGameServer *server = g_pNetworkServerService->GetIGameServer();

	if(!server)
		return nullptr;

	return g_pNetworkServerService->GetIGameServer()->GetGlobals();
}

PLUGIN_EXPOSE(VoiceData, g_VoiceData);
bool VoiceData::Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlen, bool late)
{
	PLUGIN_SAVEVARS();

	GET_V_IFACE_CURRENT(GetEngineFactory, g_pEngineServer2, IVEngineServer2, SOURCE2ENGINETOSERVER_INTERFACE_VERSION);
	GET_V_IFACE_CURRENT(GetEngineFactory, engine, IVEngineServer, INTERFACEVERSION_VENGINESERVER);
	GET_V_IFACE_CURRENT(GetEngineFactory, icvar, ICvar, CVAR_INTERFACE_VERSION);
	GET_V_IFACE_ANY(GetServerFactory, server, IServerGameDLL, INTERFACEVERSION_SERVERGAMEDLL);
	GET_V_IFACE_ANY(GetServerFactory, gameclients, IServerGameClients, INTERFACEVERSION_SERVERGAMECLIENTS);
	GET_V_IFACE_ANY(GetEngineFactory, g_pNetworkServerService, INetworkServerService, NETWORKSERVERSERVICE_INTERFACE_VERSION);
	GET_V_IFACE_ANY(GetEngineFactory, g_gameEventSystem, IGameEventSystem, GAMEEVENTSYSTEM_INTERFACE_VERSION);

	// Currently doesn't work from within mm side, use GetGameGlobals() in the mean time instead
	// gpGlobals = ismm->GetCGlobals();

	// Required to get the IMetamodListener events
	g_SMAPI->AddListener( this, this );

	META_CONPRINTF( "Starting plugin.\n" );

	SH_ADD_HOOK(IServerGameDLL, GameFrame, server, SH_MEMBER(this, &VoiceData::Hook_GameFrame), true);
	SH_ADD_HOOK(IServerGameClients, ClientActive, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientActive), true);
	SH_ADD_HOOK(IServerGameClients, ClientDisconnect, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientDisconnect), true);
	SH_ADD_HOOK(IServerGameClients, ClientPutInServer, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientPutInServer), true);
	SH_ADD_HOOK(IServerGameClients, ClientSettingsChanged, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientSettingsChanged), false);
	SH_ADD_HOOK(IServerGameClients, OnClientConnected, gameclients, SH_MEMBER(this, &VoiceData::Hook_OnClientConnected), false);
	SH_ADD_HOOK(IServerGameClients, ClientConnect, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientConnect), false);
	SH_ADD_HOOK(IServerGameClients, ClientCommand, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientCommand), false);

	META_CONPRINTF( "All hooks started!\n" );

	g_pCVar = icvar;
	ConVar_Register( FCVAR_RELEASE | FCVAR_CLIENT_CAN_EXECUTE | FCVAR_GAMEDLL );

	g_pNetworkGameServer = g_pNetworkServerService->GetIGameServer();

	return true;
}

bool VoiceData::Unload(char *error, size_t maxlen)
{
	SH_REMOVE_HOOK(IServerGameDLL, GameFrame, server, SH_MEMBER(this, &VoiceData::Hook_GameFrame), true);
	SH_REMOVE_HOOK(IServerGameClients, ClientActive, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientActive), true);
	SH_REMOVE_HOOK(IServerGameClients, ClientDisconnect, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientDisconnect), true);
	SH_REMOVE_HOOK(IServerGameClients, ClientPutInServer, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientPutInServer), true);
	SH_REMOVE_HOOK(IServerGameClients, ClientSettingsChanged, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientSettingsChanged), false);
	SH_REMOVE_HOOK(IServerGameClients, OnClientConnected, gameclients, SH_MEMBER(this, &VoiceData::Hook_OnClientConnected), false);
	SH_REMOVE_HOOK(IServerGameClients, ClientConnect, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientConnect), false);
	SH_REMOVE_HOOK(IServerGameClients, ClientCommand, gameclients, SH_MEMBER(this, &VoiceData::Hook_ClientCommand), false);

	if (g_pNetworkGameServer)
		delete g_pNetworkGameServer;

	if (g_pEngineServer2)
		delete g_pEngineServer2;

	return true;
}

void VoiceData::AllPluginsLoaded()
{
	/* This is where we'd do stuff that relies on the mod or other plugins 
	 * being initialized (for example, cvars added and events registered).
	 */
}

CUtlVector<CServerSideClient*>* GetClientList()
{
	if (!g_pNetworkGameServer)
		return nullptr;

#ifdef PLATFORM_WINDOWS
	static constexpr int offset = 78;
#else
	static constexpr int offset = 80;
#endif
	return (CUtlVector<CServerSideClient*> *)(&g_pNetworkGameServer[offset]);
}

CServerSideClient* GetClientBySlot(CPlayerSlot slot)
{
	CUtlVector<CServerSideClient*>* pClients = GetClientList();

	if (!pClients)
		return nullptr;

	return pClients->Element(slot.Get());
}

CServerSideClient* GetFakeClient(const char* name)
{
	auto pClients = GetClientList();
	CServerSideClient* fakeClient = nullptr;
	for (int i = 0; i < pClients->Count(); i++)
	{
		if (pClients->IsValidIndex(i))
		{
			auto client = pClients->Element(i);
			if (client->IsInGame() && (client->IsFakePlayer() || client->IsHLTV()))
			{
				fakeClient = client;
				break;
			}
		}
	}
	if (!fakeClient)
	{
		CPlayerSlot slot = g_pEngineServer2->CreateFakeClient(name);
		fakeClient = GetClientBySlot(slot);
	}
	return fakeClient;
}

void VoiceData::Init()
{

}

void VoiceData::HandleVoiceData()
{

}

void InitialSendingVoiceData(const char* filepath)
{
	auto byte = AudioPlayer::GetAudioByte(filepath);
}

void VoiceData::SendVoiceData(std::vector<uint8_t> data)
{
	INetworkMessageInternal* pSVC_VoiceData = g_pNetworkMessages->FindNetworkMessageById(47);
	CNetMessagePB<CSVCMsg_VoiceData>* pData = pSVC_VoiceData->AllocateMessage()->ToPB<CSVCMsg_VoiceData>();

	g_AudioPlayerClient = GetFakeClient("Sympho Bot");

	pData->set_xuid(0);
	pData->set_client(g_AudioPlayerClient->GetPlayerSlot().Get());
	CMsgVoiceAudio *audio = pData->mutable_audio();

	std::string audioString(data.begin(), data.end());

	audio->set_allocated_voice_data(&audioString);
	audio->set_format(VOICEDATA_FORMAT_ENGINE);
	audio->set_sample_rate(24000);
	audio->set_sequence_bytes(0);
	audio->set_section_number(0);
	audio->set_voice_level(1.0);
	audio->set_uncompressed_sample_offset(0);

	CUtlVector<CServerSideClient*>* client_list = GetClientList();
	for (int i = 0; i < client_list->Count(); i++)
	{
		if (!client_list->IsValidIndex(i))
		{
			continue;
		}
		CServerSideClient* client = client_list->Element(i);
		if (client->IsInGame() && !client->IsFakePlayer() && !client->IsHLTV())
		{
			client->GetNetChannel()->SendNetMessage(pData, NetChannelBufType_t::BUF_VOICE);
		}
	}
}

void VoiceData::Hook_ClientActive( CPlayerSlot slot, bool bLoadGame, const char *pszName, uint64 xuid )
{
	META_CONPRINTF( "Hook_ClientActive(%d, %d, \"%s\", %d)\n", slot, bLoadGame, pszName, xuid );
}

void VoiceData::Hook_ClientCommand( CPlayerSlot slot, const CCommand &args )
{
	META_CONPRINTF( "Hook_ClientCommand(%d, \"%s\")\n", slot, args.GetCommandString() );
}

void VoiceData::Hook_ClientSettingsChanged( CPlayerSlot slot )
{
	META_CONPRINTF( "Hook_ClientSettingsChanged(%d)\n", slot );
}

void VoiceData::Hook_OnClientConnected( CPlayerSlot slot, const char *pszName, uint64 xuid, const char *pszNetworkID, const char *pszAddress, bool bFakePlayer )
{
	META_CONPRINTF( "Hook_OnClientConnected(%d, \"%s\", %d, \"%s\", \"%s\", %d)\n", slot, pszName, xuid, pszNetworkID, pszAddress, bFakePlayer );
}

bool VoiceData::Hook_ClientConnect( CPlayerSlot slot, const char *pszName, uint64 xuid, const char *pszNetworkID, bool unk1, CBufferString *pRejectReason )
{
	META_CONPRINTF( "Hook_ClientConnect(%d, \"%s\", %d, \"%s\", %d, \"%s\")\n", slot, pszName, xuid, pszNetworkID, unk1, pRejectReason->ToGrowable()->Get() );

	RETURN_META_VALUE(MRES_IGNORED, true);
}

void VoiceData::Hook_ClientPutInServer( CPlayerSlot slot, char const *pszName, int type, uint64 xuid )
{
	META_CONPRINTF( "Hook_ClientPutInServer(%d, \"%s\", %d, %d)\n", slot, pszName, type, xuid );
}

void VoiceData::Hook_ClientDisconnect( CPlayerSlot slot, ENetworkDisconnectionReason reason, const char *pszName, uint64 xuid, const char *pszNetworkID )
{
	META_CONPRINTF( "Hook_ClientDisconnect(%d, %d, \"%s\", %d, \"%s\")\n", slot, reason, pszName, xuid, pszNetworkID );
}

void VoiceData::Hook_GameFrame( bool simulating, bool bFirstTick, bool bLastTick )
{
	HandleVoiceData();
}

void VoiceData::OnLevelInit( char const *pMapName,
									 char const *pMapEntities,
									 char const *pOldLevel,
									 char const *pLandmarkName,
									 bool loadGame,
									 bool background )
{
	META_CONPRINTF("OnLevelInit(%s)\n", pMapName);
}

void VoiceData::OnLevelShutdown()
{
	META_CONPRINTF("OnLevelShutdown()\n");
}

bool VoiceData::Pause(char *error, size_t maxlen)
{
	return true;
}

bool VoiceData::Unpause(char *error, size_t maxlen)
{
	return true;
}

const char *VoiceData::GetLicense()
{
	return "Public Domain";
}

const char *VoiceData::GetVersion()
{
	return "1.0";
}

const char *VoiceData::GetDate()
{
	return __DATE__;
}

const char *VoiceData::GetLogTag()
{
	return "VOICEDATA";
}

const char *VoiceData::GetAuthor()
{
	return "Oylsister";
}

const char *VoiceData::GetDescription()
{
	return "Send Voice data to Voice chat";
}

const char *VoiceData::GetName()
{
	return "Voice Data";
}

const char *VoiceData::GetURL()
{
	return "https://github.com/Oylsister";
}
