#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_GolfCart.Vehicle_GolfCart_C
// (Actor, Pawn)

class UClass* AVehicle_GolfCart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_GolfCart_C");

	return Clss;
}


// Vehicle_GolfCart_C Vehicle_GolfCart.Default__Vehicle_GolfCart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_GolfCart_C* AVehicle_GolfCart_C::GetDefaultObj()
{
	static class AVehicle_GolfCart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_GolfCart_C*>(AVehicle_GolfCart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_GolfCart.Vehicle_GolfCart_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_GolfCart_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_GolfCart_C", "UserConstructionScript");

	Params::AVehicle_GolfCart_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


