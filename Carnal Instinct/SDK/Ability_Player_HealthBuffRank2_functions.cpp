#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_HealthBuffRank2.Ability_Player_HealthBuffRank2_C
// (Actor)

class UClass* AAbility_Player_HealthBuffRank2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_HealthBuffRank2_C");

	return Clss;
}


// Ability_Player_HealthBuffRank2_C Ability_Player_HealthBuffRank2.Default__Ability_Player_HealthBuffRank2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Player_HealthBuffRank2_C* AAbility_Player_HealthBuffRank2_C::GetDefaultObj()
{
	static class AAbility_Player_HealthBuffRank2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Player_HealthBuffRank2_C*>(AAbility_Player_HealthBuffRank2_C::StaticClass()->DefaultObject);

	return Default;
}

}


