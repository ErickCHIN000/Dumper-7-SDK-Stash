#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Vehicle_Weapon.DamageSource_Vehicle_Weapon_C
// (None)

class UClass* UDamageSource_Vehicle_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Vehicle_Weapon_C");

	return Clss;
}


// DamageSource_Vehicle_Weapon_C DamageSource_Vehicle_Weapon.Default__DamageSource_Vehicle_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Vehicle_Weapon_C* UDamageSource_Vehicle_Weapon_C::GetDefaultObj()
{
	static class UDamageSource_Vehicle_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Vehicle_Weapon_C*>(UDamageSource_Vehicle_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


