#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_DestructibleOverlapShake.Vehicle_DestructibleOverlapShake_C
// (None)

class UClass* UVehicle_DestructibleOverlapShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_DestructibleOverlapShake_C");

	return Clss;
}


// Vehicle_DestructibleOverlapShake_C Vehicle_DestructibleOverlapShake.Default__Vehicle_DestructibleOverlapShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicle_DestructibleOverlapShake_C* UVehicle_DestructibleOverlapShake_C::GetDefaultObj()
{
	static class UVehicle_DestructibleOverlapShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicle_DestructibleOverlapShake_C*>(UVehicle_DestructibleOverlapShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


