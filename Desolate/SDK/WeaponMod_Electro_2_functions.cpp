#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Electro_2.WeaponMod_Electro_2_C
// (Actor)

class UClass* AWeaponMod_Electro_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Electro_2_C");

	return Clss;
}


// WeaponMod_Electro_2_C WeaponMod_Electro_2.Default__WeaponMod_Electro_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Electro_2_C* AWeaponMod_Electro_2_C::GetDefaultObj()
{
	static class AWeaponMod_Electro_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Electro_2_C*>(AWeaponMod_Electro_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


