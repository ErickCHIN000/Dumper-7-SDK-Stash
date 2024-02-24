#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Electric2.WeaponMod_Electric2_C
// (Actor)

class UClass* AWeaponMod_Electric2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Electric2_C");

	return Clss;
}


// WeaponMod_Electric2_C WeaponMod_Electric2.Default__WeaponMod_Electric2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Electric2_C* AWeaponMod_Electric2_C::GetDefaultObj()
{
	static class AWeaponMod_Electric2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Electric2_C*>(AWeaponMod_Electric2_C::StaticClass()->DefaultObject);

	return Default;
}

}


