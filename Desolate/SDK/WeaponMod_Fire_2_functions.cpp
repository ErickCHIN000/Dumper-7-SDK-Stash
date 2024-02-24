#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Fire_2.WeaponMod_Fire_2_C
// (Actor)

class UClass* AWeaponMod_Fire_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Fire_2_C");

	return Clss;
}


// WeaponMod_Fire_2_C WeaponMod_Fire_2.Default__WeaponMod_Fire_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Fire_2_C* AWeaponMod_Fire_2_C::GetDefaultObj()
{
	static class AWeaponMod_Fire_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Fire_2_C*>(AWeaponMod_Fire_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


