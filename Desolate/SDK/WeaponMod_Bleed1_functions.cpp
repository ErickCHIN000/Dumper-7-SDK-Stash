#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Bleed1.WeaponMod_Bleed1_C
// (Actor)

class UClass* AWeaponMod_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Bleed1_C");

	return Clss;
}


// WeaponMod_Bleed1_C WeaponMod_Bleed1.Default__WeaponMod_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Bleed1_C* AWeaponMod_Bleed1_C::GetDefaultObj()
{
	static class AWeaponMod_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Bleed1_C*>(AWeaponMod_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


