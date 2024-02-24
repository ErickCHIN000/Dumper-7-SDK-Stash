#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_ModifiedPickupUtilityTruck.Vehicle_ModifiedPickupUtilityTruck_C
// (Actor, Pawn)

class UClass* AVehicle_ModifiedPickupUtilityTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_ModifiedPickupUtilityTruck_C");

	return Clss;
}


// Vehicle_ModifiedPickupUtilityTruck_C Vehicle_ModifiedPickupUtilityTruck.Default__Vehicle_ModifiedPickupUtilityTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_ModifiedPickupUtilityTruck_C* AVehicle_ModifiedPickupUtilityTruck_C::GetDefaultObj()
{
	static class AVehicle_ModifiedPickupUtilityTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_ModifiedPickupUtilityTruck_C*>(AVehicle_ModifiedPickupUtilityTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_ModifiedPickupUtilityTruck.Vehicle_ModifiedPickupUtilityTruck_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_ModifiedPickupUtilityTruck_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_ModifiedPickupUtilityTruck_C", "UserConstructionScript");

	Params::AVehicle_ModifiedPickupUtilityTruck_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


