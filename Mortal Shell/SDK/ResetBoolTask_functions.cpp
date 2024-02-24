#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResetBoolTask.ResetBoolTask_C
// (None)

class UClass* UResetBoolTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetBoolTask_C");

	return Clss;
}


// ResetBoolTask_C ResetBoolTask.Default__ResetBoolTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResetBoolTask_C* UResetBoolTask_C::GetDefaultObj()
{
	static class UResetBoolTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetBoolTask_C*>(UResetBoolTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResetBoolTask.ResetBoolTask_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetBoolTask_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetBoolTask_C", "ReceiveExecute");

	Params::UResetBoolTask_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetBoolTask.ResetBoolTask_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetBoolTask_C::ReceiveAbort(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetBoolTask_C", "ReceiveAbort");

	Params::UResetBoolTask_C_ReceiveAbort_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetBoolTask.ResetBoolTask_C.ExecuteUbergraph_ResetBoolTask
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetBoolTask_C::ExecuteUbergraph_ResetBoolTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetBoolTask_C", "ExecuteUbergraph_ResetBoolTask");

	Params::UResetBoolTask_C_ExecuteUbergraph_ResetBoolTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


