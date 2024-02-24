#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Fire2.WeaponMod_Fire2_C
// (Actor)

class UClass* AWeaponMod_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Fire2_C");

	return Clss;
}


// WeaponMod_Fire2_C WeaponMod_Fire2.Default__WeaponMod_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Fire2_C* AWeaponMod_Fire2_C::GetDefaultObj()
{
	static class AWeaponMod_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Fire2_C*>(AWeaponMod_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


