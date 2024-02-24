#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontModifiedPickupUtilityTruckWheel.BP_FrontModifiedPickupUtilityTruckWheel_C
// (None)

class UClass* UBP_FrontModifiedPickupUtilityTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontModifiedPickupUtilityTruckWheel_C");

	return Clss;
}


// BP_FrontModifiedPickupUtilityTruckWheel_C BP_FrontModifiedPickupUtilityTruckWheel.Default__BP_FrontModifiedPickupUtilityTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontModifiedPickupUtilityTruckWheel_C* UBP_FrontModifiedPickupUtilityTruckWheel_C::GetDefaultObj()
{
	static class UBP_FrontModifiedPickupUtilityTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontModifiedPickupUtilityTruckWheel_C*>(UBP_FrontModifiedPickupUtilityTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


