#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Poison1.WeaponMod_Poison1_C
// (Actor)

class UClass* AWeaponMod_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Poison1_C");

	return Clss;
}


// WeaponMod_Poison1_C WeaponMod_Poison1.Default__WeaponMod_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Poison1_C* AWeaponMod_Poison1_C::GetDefaultObj()
{
	static class AWeaponMod_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Poison1_C*>(AWeaponMod_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


