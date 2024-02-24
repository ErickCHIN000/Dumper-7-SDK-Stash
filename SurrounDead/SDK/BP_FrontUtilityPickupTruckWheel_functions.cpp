#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontUtilityPickupTruckWheel.BP_FrontUtilityPickupTruckWheel_C
// (None)

class UClass* UBP_FrontUtilityPickupTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontUtilityPickupTruckWheel_C");

	return Clss;
}


// BP_FrontUtilityPickupTruckWheel_C BP_FrontUtilityPickupTruckWheel.Default__BP_FrontUtilityPickupTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontUtilityPickupTruckWheel_C* UBP_FrontUtilityPickupTruckWheel_C::GetDefaultObj()
{
	static class UBP_FrontUtilityPickupTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontUtilityPickupTruckWheel_C*>(UBP_FrontUtilityPickupTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


