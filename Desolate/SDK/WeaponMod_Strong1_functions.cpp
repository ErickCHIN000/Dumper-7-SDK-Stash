#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Strong1.WeaponMod_Strong1_C
// (Actor)

class UClass* AWeaponMod_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Strong1_C");

	return Clss;
}


// WeaponMod_Strong1_C WeaponMod_Strong1.Default__WeaponMod_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Strong1_C* AWeaponMod_Strong1_C::GetDefaultObj()
{
	static class AWeaponMod_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Strong1_C*>(AWeaponMod_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


