#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_SetBoolValue.AI_SetBoolValue_C
// (None)

class UClass* UAI_SetBoolValue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_SetBoolValue_C");

	return Clss;
}


// AI_SetBoolValue_C AI_SetBoolValue.Default__AI_SetBoolValue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_SetBoolValue_C* UAI_SetBoolValue_C::GetDefaultObj()
{
	static class UAI_SetBoolValue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_SetBoolValue_C*>(UAI_SetBoolValue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AI_SetBoolValue.AI_SetBoolValue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAI_SetBoolValue_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_SetBoolValue_C", "ReceiveExecuteAI");

	Params::UAI_SetBoolValue_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_SetBoolValue.AI_SetBoolValue_C.ExecuteUbergraph_AI_SetBoolValue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAI_SetBoolValue_C::ExecuteUbergraph_AI_SetBoolValue(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_SetBoolValue_C", "ExecuteUbergraph_AI_SetBoolValue");

	Params::UAI_SetBoolValue_C_ExecuteUbergraph_AI_SetBoolValue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


