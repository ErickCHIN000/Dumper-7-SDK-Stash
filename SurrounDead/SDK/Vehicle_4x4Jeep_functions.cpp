#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_4x4Jeep.Vehicle_4x4Jeep_C
// (Actor, Pawn)

class UClass* AVehicle_4x4Jeep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_4x4Jeep_C");

	return Clss;
}


// Vehicle_4x4Jeep_C Vehicle_4x4Jeep.Default__Vehicle_4x4Jeep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_4x4Jeep_C* AVehicle_4x4Jeep_C::GetDefaultObj()
{
	static class AVehicle_4x4Jeep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_4x4Jeep_C*>(AVehicle_4x4Jeep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_4x4Jeep.Vehicle_4x4Jeep_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_4x4Jeep_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_4x4Jeep_C", "UserConstructionScript");

	Params::AVehicle_4x4Jeep_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


