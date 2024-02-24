#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResetValueTask.ResetValueTask_C
// (None)

class UClass* UResetValueTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetValueTask_C");

	return Clss;
}


// ResetValueTask_C ResetValueTask.Default__ResetValueTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResetValueTask_C* UResetValueTask_C::GetDefaultObj()
{
	static class UResetValueTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetValueTask_C*>(UResetValueTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResetValueTask.ResetValueTask_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetValueTask_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetValueTask_C", "ReceiveExecute");

	Params::UResetValueTask_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetValueTask.ResetValueTask_C.ExecuteUbergraph_ResetValueTask
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetValueTask_C::ExecuteUbergraph_ResetValueTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetValueTask_C", "ExecuteUbergraph_ResetValueTask");

	Params::UResetValueTask_C_ExecuteUbergraph_ResetValueTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


