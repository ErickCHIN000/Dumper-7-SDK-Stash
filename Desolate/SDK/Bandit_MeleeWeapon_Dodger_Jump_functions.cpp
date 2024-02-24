#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_MeleeWeapon_Dodger_Jump.Bandit_MeleeWeapon_Dodger_Jump_C
// (Actor)

class UClass* ABandit_MeleeWeapon_Dodger_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_MeleeWeapon_Dodger_Jump_C");

	return Clss;
}


// Bandit_MeleeWeapon_Dodger_Jump_C Bandit_MeleeWeapon_Dodger_Jump.Default__Bandit_MeleeWeapon_Dodger_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_MeleeWeapon_Dodger_Jump_C* ABandit_MeleeWeapon_Dodger_Jump_C::GetDefaultObj()
{
	static class ABandit_MeleeWeapon_Dodger_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_MeleeWeapon_Dodger_Jump_C*>(ABandit_MeleeWeapon_Dodger_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


