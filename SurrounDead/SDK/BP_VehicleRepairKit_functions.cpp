#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleRepairKit.BP_VehicleRepairKit_C
// (Actor)

class UClass* ABP_VehicleRepairKit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleRepairKit_C");

	return Clss;
}


// BP_VehicleRepairKit_C BP_VehicleRepairKit.Default__BP_VehicleRepairKit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VehicleRepairKit_C* ABP_VehicleRepairKit_C::GetDefaultObj()
{
	static class ABP_VehicleRepairKit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VehicleRepairKit_C*>(ABP_VehicleRepairKit_C::StaticClass()->DefaultObject);

	return Default;
}

}


