#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Charger.Vehicle_Charger_C
// (Actor, Pawn)

class UClass* AVehicle_Charger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Charger_C");

	return Clss;
}


// Vehicle_Charger_C Vehicle_Charger.Default__Vehicle_Charger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_Charger_C* AVehicle_Charger_C::GetDefaultObj()
{
	static class AVehicle_Charger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_Charger_C*>(AVehicle_Charger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_Charger.Vehicle_Charger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_Charger_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Charger_C", "UserConstructionScript");

	Params::AVehicle_Charger_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


