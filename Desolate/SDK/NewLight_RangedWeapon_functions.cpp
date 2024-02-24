#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_RangedWeapon.NewLight_RangedWeapon_C
// (Actor)

class UClass* ANewLight_RangedWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_RangedWeapon_C");

	return Clss;
}


// NewLight_RangedWeapon_C NewLight_RangedWeapon.Default__NewLight_RangedWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_RangedWeapon_C* ANewLight_RangedWeapon_C::GetDefaultObj()
{
	static class ANewLight_RangedWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_RangedWeapon_C*>(ANewLight_RangedWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


