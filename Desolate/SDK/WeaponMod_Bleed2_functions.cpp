#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Bleed2.WeaponMod_Bleed2_C
// (Actor)

class UClass* AWeaponMod_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Bleed2_C");

	return Clss;
}


// WeaponMod_Bleed2_C WeaponMod_Bleed2.Default__WeaponMod_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Bleed2_C* AWeaponMod_Bleed2_C::GetDefaultObj()
{
	static class AWeaponMod_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Bleed2_C*>(AWeaponMod_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


