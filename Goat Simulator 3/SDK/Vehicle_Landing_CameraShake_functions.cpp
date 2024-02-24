#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Landing_CameraShake.Vehicle_Landing_CameraShake_C
// (None)

class UClass* UVehicle_Landing_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Landing_CameraShake_C");

	return Clss;
}


// Vehicle_Landing_CameraShake_C Vehicle_Landing_CameraShake.Default__Vehicle_Landing_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicle_Landing_CameraShake_C* UVehicle_Landing_CameraShake_C::GetDefaultObj()
{
	static class UVehicle_Landing_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicle_Landing_CameraShake_C*>(UVehicle_Landing_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


