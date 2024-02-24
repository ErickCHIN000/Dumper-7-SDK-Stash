#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wheel_Front_SUV.BP_Wheel_Front_SUV_C
// (None)

class UClass* UBP_Wheel_Front_SUV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wheel_Front_SUV_C");

	return Clss;
}


// BP_Wheel_Front_SUV_C BP_Wheel_Front_SUV.Default__BP_Wheel_Front_SUV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Wheel_Front_SUV_C* UBP_Wheel_Front_SUV_C::GetDefaultObj()
{
	static class UBP_Wheel_Front_SUV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Wheel_Front_SUV_C*>(UBP_Wheel_Front_SUV_C::StaticClass()->DefaultObject);

	return Default;
}

}


