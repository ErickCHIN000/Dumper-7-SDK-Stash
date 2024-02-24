#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearModifiedPickupUtilityTruckWheel.BP_RearModifiedPickupUtilityTruckWheel_C
// (None)

class UClass* UBP_RearModifiedPickupUtilityTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearModifiedPickupUtilityTruckWheel_C");

	return Clss;
}


// BP_RearModifiedPickupUtilityTruckWheel_C BP_RearModifiedPickupUtilityTruckWheel.Default__BP_RearModifiedPickupUtilityTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearModifiedPickupUtilityTruckWheel_C* UBP_RearModifiedPickupUtilityTruckWheel_C::GetDefaultObj()
{
	static class UBP_RearModifiedPickupUtilityTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearModifiedPickupUtilityTruckWheel_C*>(UBP_RearModifiedPickupUtilityTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


