#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Ice_2.WeaponMod_Ice_2_C
// (Actor)

class UClass* AWeaponMod_Ice_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Ice_2_C");

	return Clss;
}


// WeaponMod_Ice_2_C WeaponMod_Ice_2.Default__WeaponMod_Ice_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Ice_2_C* AWeaponMod_Ice_2_C::GetDefaultObj()
{
	static class AWeaponMod_Ice_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Ice_2_C*>(AWeaponMod_Ice_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


