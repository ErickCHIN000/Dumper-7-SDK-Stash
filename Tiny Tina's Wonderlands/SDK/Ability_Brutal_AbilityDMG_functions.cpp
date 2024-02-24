#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Brutal_AbilityDMG.Ability_Brutal_AbilityDMG_C
// (None)

class UClass* UAbility_Brutal_AbilityDMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Brutal_AbilityDMG_C");

	return Clss;
}


// Ability_Brutal_AbilityDMG_C Ability_Brutal_AbilityDMG.Default__Ability_Brutal_AbilityDMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Brutal_AbilityDMG_C* UAbility_Brutal_AbilityDMG_C::GetDefaultObj()
{
	static class UAbility_Brutal_AbilityDMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Brutal_AbilityDMG_C*>(UAbility_Brutal_AbilityDMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


