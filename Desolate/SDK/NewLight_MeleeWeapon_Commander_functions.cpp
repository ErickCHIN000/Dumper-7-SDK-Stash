#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_MeleeWeapon_Commander.NewLight_MeleeWeapon_Commander_C
// (Actor)

class UClass* ANewLight_MeleeWeapon_Commander_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_MeleeWeapon_Commander_C");

	return Clss;
}


// NewLight_MeleeWeapon_Commander_C NewLight_MeleeWeapon_Commander.Default__NewLight_MeleeWeapon_Commander_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_MeleeWeapon_Commander_C* ANewLight_MeleeWeapon_Commander_C::GetDefaultObj()
{
	static class ANewLight_MeleeWeapon_Commander_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_MeleeWeapon_Commander_C*>(ANewLight_MeleeWeapon_Commander_C::StaticClass()->DefaultObject);

	return Default;
}

}


