#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Ice3.WeaponMod_Ice3_C
// (Actor)

class UClass* AWeaponMod_Ice3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Ice3_C");

	return Clss;
}


// WeaponMod_Ice3_C WeaponMod_Ice3.Default__WeaponMod_Ice3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Ice3_C* AWeaponMod_Ice3_C::GetDefaultObj()
{
	static class AWeaponMod_Ice3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Ice3_C*>(AWeaponMod_Ice3_C::StaticClass()->DefaultObject);

	return Default;
}

}


