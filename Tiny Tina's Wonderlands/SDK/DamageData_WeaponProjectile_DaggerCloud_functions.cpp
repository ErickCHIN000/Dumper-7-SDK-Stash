#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_WeaponProjectile_DaggerCloud.DamageData_WeaponProjectile_DaggerCloud_C
// (None)

class UClass* UDamageData_WeaponProjectile_DaggerCloud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_WeaponProjectile_DaggerCloud_C");

	return Clss;
}


// DamageData_WeaponProjectile_DaggerCloud_C DamageData_WeaponProjectile_DaggerCloud.Default__DamageData_WeaponProjectile_DaggerCloud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_WeaponProjectile_DaggerCloud_C* UDamageData_WeaponProjectile_DaggerCloud_C::GetDefaultObj()
{
	static class UDamageData_WeaponProjectile_DaggerCloud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_WeaponProjectile_DaggerCloud_C*>(UDamageData_WeaponProjectile_DaggerCloud_C::StaticClass()->DefaultObject);

	return Default;
}

}


