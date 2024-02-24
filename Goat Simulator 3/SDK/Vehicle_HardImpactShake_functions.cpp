#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_HardImpactShake.Vehicle_HardImpactShake_C
// (None)

class UClass* UVehicle_HardImpactShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_HardImpactShake_C");

	return Clss;
}


// Vehicle_HardImpactShake_C Vehicle_HardImpactShake.Default__Vehicle_HardImpactShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicle_HardImpactShake_C* UVehicle_HardImpactShake_C::GetDefaultObj()
{
	static class UVehicle_HardImpactShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicle_HardImpactShake_C*>(UVehicle_HardImpactShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


