#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Bleed3.WeaponMod_Bleed3_C
// (Actor)

class UClass* AWeaponMod_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Bleed3_C");

	return Clss;
}


// WeaponMod_Bleed3_C WeaponMod_Bleed3.Default__WeaponMod_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Bleed3_C* AWeaponMod_Bleed3_C::GetDefaultObj()
{
	static class AWeaponMod_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Bleed3_C*>(AWeaponMod_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


