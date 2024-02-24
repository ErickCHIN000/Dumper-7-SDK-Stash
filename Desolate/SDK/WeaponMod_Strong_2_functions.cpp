#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Strong_2.WeaponMod_Strong_2_C
// (Actor)

class UClass* AWeaponMod_Strong_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Strong_2_C");

	return Clss;
}


// WeaponMod_Strong_2_C WeaponMod_Strong_2.Default__WeaponMod_Strong_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Strong_2_C* AWeaponMod_Strong_2_C::GetDefaultObj()
{
	static class AWeaponMod_Strong_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Strong_2_C*>(AWeaponMod_Strong_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


