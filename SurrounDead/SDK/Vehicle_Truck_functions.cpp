#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Truck.Vehicle_Truck_C
// (Actor, Pawn)

class UClass* AVehicle_Truck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Truck_C");

	return Clss;
}


// Vehicle_Truck_C Vehicle_Truck.Default__Vehicle_Truck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_Truck_C* AVehicle_Truck_C::GetDefaultObj()
{
	static class AVehicle_Truck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_Truck_C*>(AVehicle_Truck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_Truck.Vehicle_Truck_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_Truck_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Truck_C", "UserConstructionScript");

	Params::AVehicle_Truck_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


