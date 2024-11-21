#pragma once

#include <utils.h>
#include <recipientfilters.h>
#include "networksystem/inetworkmessages.h"
#include "protobuf/generated/usermessages.pb.h";

extern IGameEventSystem* g_gameEventSystem;

void PrintToChat(CPlayerSlot player, const char* message, ...)
{
	va_list args;
	va_start(args, message);

	char buf[256];
	V_vsnprintf(buf, sizeof(buf), message, args);

	va_end(args);

	INetworkMessageInternal* pNetMsg = g_pNetworkMessages->FindNetworkMessagePartial("TextMsg");

	auto data = pNetMsg->AllocateMessage()->ToPB<CUserMessageTextMsg>();

	data->set_dest(HUD_PRINTTALK);
	data->add_param(buf);

	CSingleRecipientFilter filter(player);

	g_gameEventSystem->PostEventAbstract(-1, false, &filter, pNetMsg, data, 0);

	delete data;
}

void PrintToChatAll(const char* message, ...)
{
	va_list args;
	va_start(args, message);

	char buf[256];
	V_vsnprintf(buf, sizeof(buf), message, args);

	va_end(args);

	INetworkMessageInternal* pNetMsg = g_pNetworkMessages->FindNetworkMessagePartial("TextMsg");

	auto data = pNetMsg->AllocateMessage()->ToPB<CUserMessageTextMsg>();

	data->set_dest(HUD_PRINTTALK);
	data->add_param(buf);

	CRecipientFilter filter{};

	filter.AddAllPlayers();

	g_gameEventSystem->PostEventAbstract(-1, false, &filter, pNetMsg, data, 0);

	delete data;
}