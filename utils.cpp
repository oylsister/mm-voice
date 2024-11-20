#pragma once

#include <utils.h>
#include <recipientfilters.h>
#include "networksystem/inetworkmessages.h"
#include "protobuf/generated/usermessages.pb.h";

extern IGameEventSystem* g_gameEventSystem;

void PrintToChat(CPlayerSlot player, const char* message)
{
	INetworkMessageInternal* pNetMsg = g_pNetworkMessages->FindNetworkMessagePartial("TextMsg");

	auto data = pNetMsg->AllocateMessage()->ToPB<CUserMessageTextMsg>();

	data->set_dest(HUD_PRINTTALK);
	data->add_param(message);

	CSingleRecipientFilter filter(player);

	g_gameEventSystem->PostEventAbstract(-1, false, &filter, pNetMsg, data, 0);

	delete data;
}

void PrintToChatAll(const char* message)
{
	INetworkMessageInternal* pNetMsg = g_pNetworkMessages->FindNetworkMessagePartial("TextMsg");

	auto data = pNetMsg->AllocateMessage()->ToPB<CUserMessageTextMsg>();

	data->set_dest(HUD_PRINTTALK);
	data->add_param(message);

	CRecipientFilter filter{};

	filter.AddAllPlayers();

	g_gameEventSystem->PostEventAbstract(-1, false, &filter, pNetMsg, data, 0);

	delete data;
}