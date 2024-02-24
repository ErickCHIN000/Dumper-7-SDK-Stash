#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Front4x4Wheel.BP_Front4x4Wheel_C
// (None)

class UClass* UBP_Front4x4Wheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Front4x4Wheel_C");

	return Clss;
}


// BP_Front4x4Wheel_C BP_Front4x4Wheel.Default__BP_Front4x4Wheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Front4x4Wheel_C* UBP_Front4x4Wheel_C::GetDefaultObj()
{
	static class UBP_Front4x4Wheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Front4x4Wheel_C*>(UBP_Front4x4Wheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


