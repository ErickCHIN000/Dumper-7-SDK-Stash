#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearUtilityPickupTruckWheel.BP_RearUtilityPickupTruckWheel_C
// (None)

class UClass* UBP_RearUtilityPickupTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearUtilityPickupTruckWheel_C");

	return Clss;
}


// BP_RearUtilityPickupTruckWheel_C BP_RearUtilityPickupTruckWheel.Default__BP_RearUtilityPickupTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearUtilityPickupTruckWheel_C* UBP_RearUtilityPickupTruckWheel_C::GetDefaultObj()
{
	static class UBP_RearUtilityPickupTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearUtilityPickupTruckWheel_C*>(UBP_RearUtilityPickupTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


