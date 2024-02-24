#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IncrementIntValueTask.IncrementIntValueTask_C
// (None)

class UClass* UIncrementIntValueTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IncrementIntValueTask_C");

	return Clss;
}


// IncrementIntValueTask_C IncrementIntValueTask.Default__IncrementIntValueTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIncrementIntValueTask_C* UIncrementIntValueTask_C::GetDefaultObj()
{
	static class UIncrementIntValueTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIncrementIntValueTask_C*>(UIncrementIntValueTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IncrementIntValueTask.IncrementIntValueTask_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIncrementIntValueTask_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncrementIntValueTask_C", "ReceiveExecute");

	Params::UIncrementIntValueTask_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IncrementIntValueTask.IncrementIntValueTask_C.ExecuteUbergraph_IncrementIntValueTask
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlackboardValueAsInt_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIncrementIntValueTask_C::ExecuteUbergraph_IncrementIntValueTask(int32 EntryPoint, int32 Temp_int_Variable, class AActor* K2Node_Event_OwnerActor, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncrementIntValueTask_C", "ExecuteUbergraph_IncrementIntValueTask");

	Params::UIncrementIntValueTask_C_ExecuteUbergraph_IncrementIntValueTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsInt_ReturnValue = CallFunc_GetBlackboardValueAsInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


