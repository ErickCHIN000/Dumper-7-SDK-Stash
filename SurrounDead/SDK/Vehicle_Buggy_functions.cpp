#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Buggy.Vehicle_Buggy_C
// (Actor, Pawn)

class UClass* AVehicle_Buggy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Buggy_C");

	return Clss;
}


// Vehicle_Buggy_C Vehicle_Buggy.Default__Vehicle_Buggy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_Buggy_C* AVehicle_Buggy_C::GetDefaultObj()
{
	static class AVehicle_Buggy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_Buggy_C*>(AVehicle_Buggy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_Buggy.Vehicle_Buggy_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_Buggy_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Buggy_C", "UserConstructionScript");

	Params::AVehicle_Buggy_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


