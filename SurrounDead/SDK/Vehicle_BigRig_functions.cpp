#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_BigRig.Vehicle_BigRig_C
// (Actor, Pawn)

class UClass* AVehicle_BigRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_BigRig_C");

	return Clss;
}


// Vehicle_BigRig_C Vehicle_BigRig.Default__Vehicle_BigRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_BigRig_C* AVehicle_BigRig_C::GetDefaultObj()
{
	static class AVehicle_BigRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_BigRig_C*>(AVehicle_BigRig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_BigRig.Vehicle_BigRig_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_BigRig_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_BigRig_C", "UserConstructionScript");

	Params::AVehicle_BigRig_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


