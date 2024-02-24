#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Electro_1.WeaponMod_Electro_1_C
// (Actor)

class UClass* AWeaponMod_Electro_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Electro_1_C");

	return Clss;
}


// WeaponMod_Electro_1_C WeaponMod_Electro_1.Default__WeaponMod_Electro_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Electro_1_C* AWeaponMod_Electro_1_C::GetDefaultObj()
{
	static class AWeaponMod_Electro_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Electro_1_C*>(AWeaponMod_Electro_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


