#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Poison2.WeaponMod_Poison2_C
// (Actor)

class UClass* AWeaponMod_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Poison2_C");

	return Clss;
}


// WeaponMod_Poison2_C WeaponMod_Poison2.Default__WeaponMod_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Poison2_C* AWeaponMod_Poison2_C::GetDefaultObj()
{
	static class AWeaponMod_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Poison2_C*>(AWeaponMod_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


