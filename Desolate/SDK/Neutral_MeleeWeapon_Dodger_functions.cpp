#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Neutral_MeleeWeapon_Dodger.Neutral_MeleeWeapon_Dodger_C
// (Actor)

class UClass* ANeutral_MeleeWeapon_Dodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Neutral_MeleeWeapon_Dodger_C");

	return Clss;
}


// Neutral_MeleeWeapon_Dodger_C Neutral_MeleeWeapon_Dodger.Default__Neutral_MeleeWeapon_Dodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeutral_MeleeWeapon_Dodger_C* ANeutral_MeleeWeapon_Dodger_C::GetDefaultObj()
{
	static class ANeutral_MeleeWeapon_Dodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeutral_MeleeWeapon_Dodger_C*>(ANeutral_MeleeWeapon_Dodger_C::StaticClass()->DefaultObject);

	return Default;
}

}


