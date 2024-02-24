#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Brutal_GunDMG.Ability_Brutal_GunDMG_C
// (None)

class UClass* UAbility_Brutal_GunDMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Brutal_GunDMG_C");

	return Clss;
}


// Ability_Brutal_GunDMG_C Ability_Brutal_GunDMG.Default__Ability_Brutal_GunDMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Brutal_GunDMG_C* UAbility_Brutal_GunDMG_C::GetDefaultObj()
{
	static class UAbility_Brutal_GunDMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Brutal_GunDMG_C*>(UAbility_Brutal_GunDMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


