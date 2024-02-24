#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_FlatbedTruck.Vehicle_FlatbedTruck_C
// (Actor, Pawn)

class UClass* AVehicle_FlatbedTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_FlatbedTruck_C");

	return Clss;
}


// Vehicle_FlatbedTruck_C Vehicle_FlatbedTruck.Default__Vehicle_FlatbedTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_FlatbedTruck_C* AVehicle_FlatbedTruck_C::GetDefaultObj()
{
	static class AVehicle_FlatbedTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_FlatbedTruck_C*>(AVehicle_FlatbedTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_FlatbedTruck.Vehicle_FlatbedTruck_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_FlatbedTruck_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_FlatbedTruck_C", "UserConstructionScript");

	Params::AVehicle_FlatbedTruck_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


