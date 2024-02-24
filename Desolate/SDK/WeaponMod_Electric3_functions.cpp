#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponMod_Electric3.WeaponMod_Electric3_C
// (Actor)

class UClass* AWeaponMod_Electric3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponMod_Electric3_C");

	return Clss;
}


// WeaponMod_Electric3_C WeaponMod_Electric3.Default__WeaponMod_Electric3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponMod_Electric3_C* AWeaponMod_Electric3_C::GetDefaultObj()
{
	static class AWeaponMod_Electric3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponMod_Electric3_C*>(AWeaponMod_Electric3_C::StaticClass()->DefaultObject);

	return Default;
}

}


