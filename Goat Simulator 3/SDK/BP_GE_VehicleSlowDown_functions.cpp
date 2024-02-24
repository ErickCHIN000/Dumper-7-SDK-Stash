#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GE_VehicleSlowDown.BP_GE_VehicleSlowDown_C
// (None)

class UClass* UBP_GE_VehicleSlowDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GE_VehicleSlowDown_C");

	return Clss;
}


// BP_GE_VehicleSlowDown_C BP_GE_VehicleSlowDown.Default__BP_GE_VehicleSlowDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GE_VehicleSlowDown_C* UBP_GE_VehicleSlowDown_C::GetDefaultObj()
{
	static class UBP_GE_VehicleSlowDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GE_VehicleSlowDown_C*>(UBP_GE_VehicleSlowDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


