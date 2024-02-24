#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Brutal_CritChance.Ability_Brutal_CritChance_C
// (None)

class UClass* UAbility_Brutal_CritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Brutal_CritChance_C");

	return Clss;
}


// Ability_Brutal_CritChance_C Ability_Brutal_CritChance.Default__Ability_Brutal_CritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Brutal_CritChance_C* UAbility_Brutal_CritChance_C::GetDefaultObj()
{
	static class UAbility_Brutal_CritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Brutal_CritChance_C*>(UAbility_Brutal_CritChance_C::StaticClass()->DefaultObject);

	return Default;
}

}


