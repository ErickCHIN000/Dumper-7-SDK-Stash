#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_StandIn_Player_HeroStatue.BPChar_StandIn_Player_HeroStatue_C
// (Actor, Pawn)

class UClass* ABPChar_StandIn_Player_HeroStatue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_StandIn_Player_HeroStatue_C");

	return Clss;
}


// BPChar_StandIn_Player_HeroStatue_C BPChar_StandIn_Player_HeroStatue.Default__BPChar_StandIn_Player_HeroStatue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_StandIn_Player_HeroStatue_C* ABPChar_StandIn_Player_HeroStatue_C::GetDefaultObj()
{
	static class ABPChar_StandIn_Player_HeroStatue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_StandIn_Player_HeroStatue_C*>(ABPChar_StandIn_Player_HeroStatue_C::StaticClass()->DefaultObject);

	return Default;
}

}


