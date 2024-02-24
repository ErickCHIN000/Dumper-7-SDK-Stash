#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Poison_1.WeaponMod_Poison_1_C
// (Actor)

class UClass* AWeaponMod_Poison_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Poison_1_C");

	return Clss;
}


// WeaponMod_Poison_1_C WeaponMod_Poison_1.Default__WeaponMod_Poison_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Poison_1_C* AWeaponMod_Poison_1_C::GetDefaultObj()
{
	static class AWeaponMod_Poison_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Poison_1_C*>(AWeaponMod_Poison_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


