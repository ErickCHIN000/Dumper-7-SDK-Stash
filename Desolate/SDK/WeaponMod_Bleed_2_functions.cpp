#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Bleed_2.WeaponMod_Bleed_2_C
// (Actor)

class UClass* AWeaponMod_Bleed_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Bleed_2_C");

	return Clss;
}


// WeaponMod_Bleed_2_C WeaponMod_Bleed_2.Default__WeaponMod_Bleed_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Bleed_2_C* AWeaponMod_Bleed_2_C::GetDefaultObj()
{
	static class AWeaponMod_Bleed_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Bleed_2_C*>(AWeaponMod_Bleed_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


