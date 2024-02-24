#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Strong_1.WeaponMod_Strong_1_C
// (Actor)

class UClass* AWeaponMod_Strong_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Strong_1_C");

	return Clss;
}


// WeaponMod_Strong_1_C WeaponMod_Strong_1.Default__WeaponMod_Strong_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Strong_1_C* AWeaponMod_Strong_1_C::GetDefaultObj()
{
	static class AWeaponMod_Strong_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Strong_1_C*>(AWeaponMod_Strong_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


