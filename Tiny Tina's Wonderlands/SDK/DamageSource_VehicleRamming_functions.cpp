#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_VehicleRamming.DamageSource_VehicleRamming_C
// (None)

class UClass* UDamageSource_VehicleRamming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_VehicleRamming_C");

	return Clss;
}


// DamageSource_VehicleRamming_C DamageSource_VehicleRamming.Default__DamageSource_VehicleRamming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_VehicleRamming_C* UDamageSource_VehicleRamming_C::GetDefaultObj()
{
	static class UDamageSource_VehicleRamming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_VehicleRamming_C*>(UDamageSource_VehicleRamming_C::StaticClass()->DefaultObject);

	return Default;
}

}


