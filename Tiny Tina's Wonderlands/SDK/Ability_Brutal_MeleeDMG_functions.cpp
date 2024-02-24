#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Brutal_MeleeDMG.Ability_Brutal_MeleeDMG_C
// (None)

class UClass* UAbility_Brutal_MeleeDMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Brutal_MeleeDMG_C");

	return Clss;
}


// Ability_Brutal_MeleeDMG_C Ability_Brutal_MeleeDMG.Default__Ability_Brutal_MeleeDMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Brutal_MeleeDMG_C* UAbility_Brutal_MeleeDMG_C::GetDefaultObj()
{
	static class UAbility_Brutal_MeleeDMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Brutal_MeleeDMG_C*>(UAbility_Brutal_MeleeDMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


