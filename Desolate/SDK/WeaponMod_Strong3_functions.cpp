#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Strong3.WeaponMod_Strong3_C
// (Actor)

class UClass* AWeaponMod_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Strong3_C");

	return Clss;
}


// WeaponMod_Strong3_C WeaponMod_Strong3.Default__WeaponMod_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Strong3_C* AWeaponMod_Strong3_C::GetDefaultObj()
{
	static class AWeaponMod_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Strong3_C*>(AWeaponMod_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}


