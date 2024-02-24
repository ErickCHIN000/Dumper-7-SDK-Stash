#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGVehicleManager.BP_GGVehicleManager_C
// (None)

class UClass* UBP_GGVehicleManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGVehicleManager_C");

	return Clss;
}


// BP_GGVehicleManager_C BP_GGVehicleManager.Default__BP_GGVehicleManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGVehicleManager_C* UBP_GGVehicleManager_C::GetDefaultObj()
{
	static class UBP_GGVehicleManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGVehicleManager_C*>(UBP_GGVehicleManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


