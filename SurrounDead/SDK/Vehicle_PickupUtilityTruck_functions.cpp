#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_PickupUtilityTruck.Vehicle_PickupUtilityTruck_C
// (Actor, Pawn)

class UClass* AVehicle_PickupUtilityTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_PickupUtilityTruck_C");

	return Clss;
}


// Vehicle_PickupUtilityTruck_C Vehicle_PickupUtilityTruck.Default__Vehicle_PickupUtilityTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_PickupUtilityTruck_C* AVehicle_PickupUtilityTruck_C::GetDefaultObj()
{
	static class AVehicle_PickupUtilityTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_PickupUtilityTruck_C*>(AVehicle_PickupUtilityTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_PickupUtilityTruck.Vehicle_PickupUtilityTruck_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_PickupUtilityTruck_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_PickupUtilityTruck_C", "UserConstructionScript");

	Params::AVehicle_PickupUtilityTruck_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


