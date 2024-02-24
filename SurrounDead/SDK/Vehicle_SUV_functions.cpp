#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_SUV.Vehicle_SUV_C
// (Actor, Pawn)

class UClass* AVehicle_SUV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_SUV_C");

	return Clss;
}


// Vehicle_SUV_C Vehicle_SUV.Default__Vehicle_SUV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_SUV_C* AVehicle_SUV_C::GetDefaultObj()
{
	static class AVehicle_SUV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_SUV_C*>(AVehicle_SUV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_SUV.Vehicle_SUV_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_SUV_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_SUV_C", "UserConstructionScript");

	Params::AVehicle_SUV_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


