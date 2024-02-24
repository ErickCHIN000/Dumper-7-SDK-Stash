#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_MeleeWeapon_Tank.NewLight_MeleeWeapon_Tank_C
// (Actor)

class UClass* ANewLight_MeleeWeapon_Tank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_MeleeWeapon_Tank_C");

	return Clss;
}


// NewLight_MeleeWeapon_Tank_C NewLight_MeleeWeapon_Tank.Default__NewLight_MeleeWeapon_Tank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_MeleeWeapon_Tank_C* ANewLight_MeleeWeapon_Tank_C::GetDefaultObj()
{
	static class ANewLight_MeleeWeapon_Tank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_MeleeWeapon_Tank_C*>(ANewLight_MeleeWeapon_Tank_C::StaticClass()->DefaultObject);

	return Default;
}

}


