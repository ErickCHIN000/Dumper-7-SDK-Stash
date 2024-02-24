#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontPickupTruckWheel.BP_FrontPickupTruckWheel_C
// (None)

class UClass* UBP_FrontPickupTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontPickupTruckWheel_C");

	return Clss;
}


// BP_FrontPickupTruckWheel_C BP_FrontPickupTruckWheel.Default__BP_FrontPickupTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontPickupTruckWheel_C* UBP_FrontPickupTruckWheel_C::GetDefaultObj()
{
	static class UBP_FrontPickupTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontPickupTruckWheel_C*>(UBP_FrontPickupTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


