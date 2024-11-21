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

#ifndef _INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_
#define _INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_

#include <ISmmPlugin.h>
#include <igameevents.h>
#include <sh_vector.h>
#include <igameeventsystem.h>
#include "networksystem/inetworkmessages.h"
#include <protobuf/generated/network_connection.pb.h>
#include <serversideclient.h>

class VoiceData : public ISmmPlugin, public IMetamodListener
{
public:
	bool Load(PluginId id, ISmmAPI* ismm, char* error, size_t maxlen, bool late);
	bool Unload(char* error, size_t maxlen);
	bool Pause(char* error, size_t maxlen);
	bool Unpause(char* error, size_t maxlen);
	void AllPluginsLoaded();
public: //hooks
	void OnLevelInit(char const* pMapName,
		char const* pMapEntities,
		char const* pOldLevel,
		char const* pLandmarkName,
		bool loadGame,
		bool background);
	void Hook_GameFrame(bool simulating, bool bFirstTick, bool bLastTick);
	void Hook_PostEvent(CSplitScreenSlot nSlot, bool bLocalOnly, int nClientCount, const uint64* clients, INetworkMessageInternal* pEvent, const CNetMessage* pData, unsigned long nSize, NetChannelBufType_t bufType);
public: // function
	void SendVoiceData(std::vector<uint8_t> data);
public:
	const char* GetAuthor();
	const char* GetName();
	const char* GetDescription();
	const char* GetURL();
	const char* GetLicense();
	const char* GetVersion();
	const char* GetDate();
	const char* GetLogTag();
};

extern VoiceData g_VoiceData;

PLUGIN_GLOBALVARS();

#endif //_INCLUDE_METAMOD_SOURCE_STUB_PLUGIN_H_
