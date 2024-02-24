#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Electric1.WeaponMod_Electric1_C
// (Actor)

class UClass* AWeaponMod_Electric1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Electric1_C");

	return Clss;
}


// WeaponMod_Electric1_C WeaponMod_Electric1.Default__WeaponMod_Electric1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Electric1_C* AWeaponMod_Electric1_C::GetDefaultObj()
{
	static class AWeaponMod_Electric1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Electric1_C*>(AWeaponMod_Electric1_C::StaticClass()->DefaultObject);

	return Default;
}

}


