#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_RV.Vehicle_RV_C
// (Actor, Pawn)

class UClass* AVehicle_RV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_RV_C");

	return Clss;
}


// Vehicle_RV_C Vehicle_RV.Default__Vehicle_RV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_RV_C* AVehicle_RV_C::GetDefaultObj()
{
	static class AVehicle_RV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_RV_C*>(AVehicle_RV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_RV.Vehicle_RV_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_RV_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_RV_C", "UserConstructionScript");

	Params::AVehicle_RV_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


