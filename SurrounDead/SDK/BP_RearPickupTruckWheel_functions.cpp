#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearPickupTruckWheel.BP_RearPickupTruckWheel_C
// (None)

class UClass* UBP_RearPickupTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearPickupTruckWheel_C");

	return Clss;
}


// BP_RearPickupTruckWheel_C BP_RearPickupTruckWheel.Default__BP_RearPickupTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearPickupTruckWheel_C* UBP_RearPickupTruckWheel_C::GetDefaultObj()
{
	static class UBP_RearPickupTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearPickupTruckWheel_C*>(UBP_RearPickupTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


