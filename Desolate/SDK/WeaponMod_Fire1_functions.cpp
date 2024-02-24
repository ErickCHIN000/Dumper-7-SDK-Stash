#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Fire1.WeaponMod_Fire1_C
// (Actor)

class UClass* AWeaponMod_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Fire1_C");

	return Clss;
}


// WeaponMod_Fire1_C WeaponMod_Fire1.Default__WeaponMod_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Fire1_C* AWeaponMod_Fire1_C::GetDefaultObj()
{
	static class AWeaponMod_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Fire1_C*>(AWeaponMod_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


