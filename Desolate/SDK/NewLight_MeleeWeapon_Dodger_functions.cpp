#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_MeleeWeapon_Dodger.NewLight_MeleeWeapon_Dodger_C
// (Actor)

class UClass* ANewLight_MeleeWeapon_Dodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_MeleeWeapon_Dodger_C");

	return Clss;
}


// NewLight_MeleeWeapon_Dodger_C NewLight_MeleeWeapon_Dodger.Default__NewLight_MeleeWeapon_Dodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_MeleeWeapon_Dodger_C* ANewLight_MeleeWeapon_Dodger_C::GetDefaultObj()
{
	static class ANewLight_MeleeWeapon_Dodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_MeleeWeapon_Dodger_C*>(ANewLight_MeleeWeapon_Dodger_C::StaticClass()->DefaultObject);

	return Default;
}

}


