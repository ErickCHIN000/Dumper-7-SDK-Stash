#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass player_dragon_placeholder.player_dragon_placeholder_C
// (Actor)

class UClass* APlayer_dragon_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("player_dragon_placeholder_C");

	return Clss;
}


// player_dragon_placeholder_C player_dragon_placeholder.Default__player_dragon_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayer_dragon_placeholder_C* APlayer_dragon_placeholder_C::GetDefaultObj()
{
	static class APlayer_dragon_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayer_dragon_placeholder_C*>(APlayer_dragon_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


