#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weapon_Default_LightProjectile.Weapon_Default_LightProjectile_C
// (None)

class UClass* UWeapon_Default_LightProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weapon_Default_LightProjectile_C");

	return Clss;
}


// Weapon_Default_LightProjectile_C Weapon_Default_LightProjectile.Default__Weapon_Default_LightProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeapon_Default_LightProjectile_C* UWeapon_Default_LightProjectile_C::GetDefaultObj()
{
	static class UWeapon_Default_LightProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeapon_Default_LightProjectile_C*>(UWeapon_Default_LightProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


