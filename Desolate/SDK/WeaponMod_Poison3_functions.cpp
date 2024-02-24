#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Poison3.WeaponMod_Poison3_C
// (Actor)

class UClass* AWeaponMod_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Poison3_C");

	return Clss;
}


// WeaponMod_Poison3_C WeaponMod_Poison3.Default__WeaponMod_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Poison3_C* AWeaponMod_Poison3_C::GetDefaultObj()
{
	static class AWeaponMod_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Poison3_C*>(AWeaponMod_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}


