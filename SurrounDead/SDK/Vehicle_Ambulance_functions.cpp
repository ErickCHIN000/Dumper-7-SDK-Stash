#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Ambulance.Vehicle_Ambulance_C
// (Actor, Pawn)

class UClass* AVehicle_Ambulance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Ambulance_C");

	return Clss;
}


// Vehicle_Ambulance_C Vehicle_Ambulance.Default__Vehicle_Ambulance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_Ambulance_C* AVehicle_Ambulance_C::GetDefaultObj()
{
	static class AVehicle_Ambulance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_Ambulance_C*>(AVehicle_Ambulance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_Ambulance.Vehicle_Ambulance_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_Ambulance_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Ambulance_C", "UserConstructionScript");

	Params::AVehicle_Ambulance_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


