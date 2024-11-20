#pragma once

#include <playerslot.h>
#include <igameeventsystem.h>

#define HUD_PRINTTALK		3
#define HUD_PRINTCENTER		4

void PrintToChat(CPlayerSlot player, const char* message);
void PrintToChatAll(const char* message);