#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ascetic_SpellDMG.Ability_Ascetic_SpellDMG_C
// (None)

class UClass* UAbility_Ascetic_SpellDMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ascetic_SpellDMG_C");

	return Clss;
}


// Ability_Ascetic_SpellDMG_C Ability_Ascetic_SpellDMG.Default__Ability_Ascetic_SpellDMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ascetic_SpellDMG_C* UAbility_Ascetic_SpellDMG_C::GetDefaultObj()
{
	static class UAbility_Ascetic_SpellDMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ascetic_SpellDMG_C*>(UAbility_Ascetic_SpellDMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


