#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Vehicle_HeavyWeapon.DamageSource_Vehicle_HeavyWeapon_C
// (None)

class UClass* UDamageSource_Vehicle_HeavyWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Vehicle_HeavyWeapon_C");

	return Clss;
}


// DamageSource_Vehicle_HeavyWeapon_C DamageSource_Vehicle_HeavyWeapon.Default__DamageSource_Vehicle_HeavyWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Vehicle_HeavyWeapon_C* UDamageSource_Vehicle_HeavyWeapon_C::GetDefaultObj()
{
	static class UDamageSource_Vehicle_HeavyWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Vehicle_HeavyWeapon_C*>(UDamageSource_Vehicle_HeavyWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


