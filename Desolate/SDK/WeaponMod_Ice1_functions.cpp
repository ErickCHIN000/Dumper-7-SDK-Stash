#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Ice1.WeaponMod_Ice1_C
// (Actor)

class UClass* AWeaponMod_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Ice1_C");

	return Clss;
}


// WeaponMod_Ice1_C WeaponMod_Ice1.Default__WeaponMod_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Ice1_C* AWeaponMod_Ice1_C::GetDefaultObj()
{
	static class AWeaponMod_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Ice1_C*>(AWeaponMod_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


