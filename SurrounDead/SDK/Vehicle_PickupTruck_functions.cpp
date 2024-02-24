#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_PickupTruck.Vehicle_PickupTruck_C
// (Actor, Pawn)

class UClass* AVehicle_PickupTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_PickupTruck_C");

	return Clss;
}


// Vehicle_PickupTruck_C Vehicle_PickupTruck.Default__Vehicle_PickupTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_PickupTruck_C* AVehicle_PickupTruck_C::GetDefaultObj()
{
	static class AVehicle_PickupTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_PickupTruck_C*>(AVehicle_PickupTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_PickupTruck.Vehicle_PickupTruck_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_PickupTruck_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_PickupTruck_C", "UserConstructionScript");

	Params::AVehicle_PickupTruck_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


