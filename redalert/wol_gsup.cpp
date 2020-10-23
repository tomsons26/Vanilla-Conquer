//
// Copyright 2020 Electronic Arts Inc.
//
// TiberianDawn.DLL and RedAlert.dll and corresponding source code is free
// software: you can redistribute it and/or modify it under the terms of
// the GNU General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.

// TiberianDawn.DLL and RedAlert.dll and corresponding source code is distributed
// in the hope that it will be useful, but with permitted additional restrictions
// under Section 7 of the GPL. See the GNU General Public License in LICENSE.TXT
// distributed with this program. You should have received a copy of the
// GNU General Public License along with permitted additional restrictions
// with this program. If not, see https://github.com/electronicarts/CnC_Remastered_Collection

#include <string.h>
//***********************************************************************************************
bool bSpecialAftermathScenario(const char* szScenarioDescription)
{
    //	Returns true if szScenarioDescription matches one of the descriptions for Aftermath multiplayer
    //	scenarios that have special Aftermath-only units *embedded* within them.
    if (strcmp(szScenarioDescription, "Booby Traps (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "Central Conflict Extreme (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "Circles of Death (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "Holy Grounds (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "Island Wars Extreme (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "King of the Hills Extreme (Mega 8 players)") == 0
        || strcmp(szScenarioDescription, "The Hills Have Eyes (Mega 8 players)") == 0)
        return true;
    return false;
}
