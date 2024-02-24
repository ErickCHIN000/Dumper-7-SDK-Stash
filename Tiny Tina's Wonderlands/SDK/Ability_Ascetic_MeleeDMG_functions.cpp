#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ascetic_MeleeDMG.Ability_Ascetic_MeleeDMG_C
// (None)

class UClass* UAbility_Ascetic_MeleeDMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ascetic_MeleeDMG_C");

	return Clss;
}


// Ability_Ascetic_MeleeDMG_C Ability_Ascetic_MeleeDMG.Default__Ability_Ascetic_MeleeDMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ascetic_MeleeDMG_C* UAbility_Ascetic_MeleeDMG_C::GetDefaultObj()
{
	static class UAbility_Ascetic_MeleeDMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ascetic_MeleeDMG_C*>(UAbility_Ascetic_MeleeDMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


