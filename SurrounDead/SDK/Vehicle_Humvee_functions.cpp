#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_Humvee.Vehicle_Humvee_C
// (Actor, Pawn)

class UClass* AVehicle_Humvee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_Humvee_C");

	return Clss;
}


// Vehicle_Humvee_C Vehicle_Humvee.Default__Vehicle_Humvee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_Humvee_C* AVehicle_Humvee_C::GetDefaultObj()
{
	static class AVehicle_Humvee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_Humvee_C*>(AVehicle_Humvee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_Humvee.Vehicle_Humvee_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USpotLightComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AVehicle_Humvee_C::UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Humvee_C", "UserConstructionScript");

	Params::AVehicle_Humvee_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vehicle_Humvee.Vehicle_Humvee_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVehicle_Humvee_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Humvee_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vehicle_Humvee.Vehicle_Humvee_C.ExecuteUbergraph_Vehicle_Humvee
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVehicle_Humvee_C::ExecuteUbergraph_Vehicle_Humvee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_Humvee_C", "ExecuteUbergraph_Vehicle_Humvee");

	Params::AVehicle_Humvee_C_ExecuteUbergraph_Vehicle_Humvee_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


