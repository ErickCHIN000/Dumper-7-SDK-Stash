#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_SoftImpactShake.Vehicle_SoftImpactShake_C
// (None)

class UClass* UVehicle_SoftImpactShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_SoftImpactShake_C");

	return Clss;
}


// Vehicle_SoftImpactShake_C Vehicle_SoftImpactShake.Default__Vehicle_SoftImpactShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicle_SoftImpactShake_C* UVehicle_SoftImpactShake_C::GetDefaultObj()
{
	static class UVehicle_SoftImpactShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicle_SoftImpactShake_C*>(UVehicle_SoftImpactShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


