#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WaterMill_Wheel.BP_WaterMill_Wheel_C
// (Actor)

class UClass* ABP_WaterMill_Wheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WaterMill_Wheel_C");

	return Clss;
}


// BP_WaterMill_Wheel_C BP_WaterMill_Wheel.Default__BP_WaterMill_Wheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WaterMill_Wheel_C* ABP_WaterMill_Wheel_C::GetDefaultObj()
{
	static class ABP_WaterMill_Wheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WaterMill_Wheel_C*>(ABP_WaterMill_Wheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


