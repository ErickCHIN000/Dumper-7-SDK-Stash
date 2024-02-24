#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_HiltMod_BansheeClaw_Leg.Ability_HiltMod_BansheeClaw_Leg_C
// (None)

class UClass* UAbility_HiltMod_BansheeClaw_Leg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_HiltMod_BansheeClaw_Leg_C");

	return Clss;
}


// Ability_HiltMod_BansheeClaw_Leg_C Ability_HiltMod_BansheeClaw_Leg.Default__Ability_HiltMod_BansheeClaw_Leg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_HiltMod_BansheeClaw_Leg_C* UAbility_HiltMod_BansheeClaw_Leg_C::GetDefaultObj()
{
	static class UAbility_HiltMod_BansheeClaw_Leg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_HiltMod_BansheeClaw_Leg_C*>(UAbility_HiltMod_BansheeClaw_Leg_C::StaticClass()->DefaultObject);

	return Default;
}

}


