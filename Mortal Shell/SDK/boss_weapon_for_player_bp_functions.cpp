#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass boss_weapon_for_player_bp.boss_weapon_for_player_bp_C
// (Actor)

class UClass* Aboss_weapon_for_player_bp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("boss_weapon_for_player_bp_C");

	return Clss;
}


// boss_weapon_for_player_bp_C boss_weapon_for_player_bp.Default__boss_weapon_for_player_bp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aboss_weapon_for_player_bp_C* Aboss_weapon_for_player_bp_C::GetDefaultObj()
{
	static class Aboss_weapon_for_player_bp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aboss_weapon_for_player_bp_C*>(Aboss_weapon_for_player_bp_C::StaticClass()->DefaultObject);

	return Default;
}

}


