#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Fire3.WeaponMod_Fire3_C
// (Actor)

class UClass* AWeaponMod_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Fire3_C");

	return Clss;
}


// WeaponMod_Fire3_C WeaponMod_Fire3.Default__WeaponMod_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Fire3_C* AWeaponMod_Fire3_C::GetDefaultObj()
{
	static class AWeaponMod_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Fire3_C*>(AWeaponMod_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


