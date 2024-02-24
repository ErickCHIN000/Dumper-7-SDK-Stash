#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GE_VehicleSpeed.BP_GE_VehicleSpeed_C
// (None)

class UClass* UBP_GE_VehicleSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GE_VehicleSpeed_C");

	return Clss;
}


// BP_GE_VehicleSpeed_C BP_GE_VehicleSpeed.Default__BP_GE_VehicleSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GE_VehicleSpeed_C* UBP_GE_VehicleSpeed_C::GetDefaultObj()
{
	static class UBP_GE_VehicleSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GE_VehicleSpeed_C*>(UBP_GE_VehicleSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


