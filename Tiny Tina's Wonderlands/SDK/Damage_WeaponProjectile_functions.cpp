#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_WeaponProjectile.Damage_WeaponProjectile_C
// (None)

class UClass* UDamage_WeaponProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_WeaponProjectile_C");

	return Clss;
}


// Damage_WeaponProjectile_C Damage_WeaponProjectile.Default__Damage_WeaponProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_WeaponProjectile_C* UDamage_WeaponProjectile_C::GetDefaultObj()
{
	static class UDamage_WeaponProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_WeaponProjectile_C*>(UDamage_WeaponProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


