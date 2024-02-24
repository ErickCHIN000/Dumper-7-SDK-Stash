#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResetFloatTask.ResetFloatTask_C
// (None)

class UClass* UResetFloatTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetFloatTask_C");

	return Clss;
}


// ResetFloatTask_C ResetFloatTask.Default__ResetFloatTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResetFloatTask_C* UResetFloatTask_C::GetDefaultObj()
{
	static class UResetFloatTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetFloatTask_C*>(UResetFloatTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResetFloatTask.ResetFloatTask_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetFloatTask_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetFloatTask_C", "ReceiveExecute");

	Params::UResetFloatTask_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetFloatTask.ResetFloatTask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetFloatTask_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetFloatTask_C", "ReceiveAbortAI");

	Params::UResetFloatTask_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetFloatTask.ResetFloatTask_C.ExecuteUbergraph_ResetFloatTask
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetFloatTask_C::ExecuteUbergraph_ResetFloatTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetFloatTask_C", "ExecuteUbergraph_ResetFloatTask");

	Params::UResetFloatTask_C_ExecuteUbergraph_ResetFloatTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


