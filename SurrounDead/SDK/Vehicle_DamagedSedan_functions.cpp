#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_DamagedSedan.Vehicle_DamagedSedan_C
// (Actor, Pawn)

class UClass* AVehicle_DamagedSedan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_DamagedSedan_C");

	return Clss;
}


// Vehicle_DamagedSedan_C Vehicle_DamagedSedan.Default__Vehicle_DamagedSedan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_DamagedSedan_C* AVehicle_DamagedSedan_C::GetDefaultObj()
{
	static class AVehicle_DamagedSedan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_DamagedSedan_C*>(AVehicle_DamagedSedan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_DamagedSedan.Vehicle_DamagedSedan_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_DamagedSedan_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_DamagedSedan_C", "UserConstructionScript");

	Params::AVehicle_DamagedSedan_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


