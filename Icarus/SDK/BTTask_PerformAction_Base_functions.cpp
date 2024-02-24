#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PerformAction_Base.BTTask_PerformAction_Base_C
// (None)

class UClass* UBTTask_PerformAction_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PerformAction_Base_C");

	return Clss;
}


// BTTask_PerformAction_Base_C BTTask_PerformAction_Base.Default__BTTask_PerformAction_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PerformAction_Base_C* UBTTask_PerformAction_Base_C::GetDefaultObj()
{
	static class UBTTask_PerformAction_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PerformAction_Base_C*>(UBTTask_PerformAction_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PerformAction_Base_C::DoAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "DoAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.OnMontageNotifyBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PerformAction_Base_C::OnMontageNotifyBegin(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "OnMontageNotifyBegin");

	Params::UBTTask_PerformAction_Base_C_OnMontageNotifyBegin_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PerformAction_Base_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "ReceiveExecuteAI");

	Params::UBTTask_PerformAction_Base_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.OnMontageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PerformAction_Base_C::OnMontageComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "OnMontageComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PerformAction_Base_C::ReceiveAbort(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "ReceiveAbort");

	Params::UBTTask_PerformAction_Base_C_ReceiveAbort_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.OnMontageInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PerformAction_Base_C::OnMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "OnMontageInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PerformAction_Base.BTTask_PerformAction_Base_C.ExecuteUbergraph_BTTask_PerformAction_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_NotifyName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_Event_Notify                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_PerformAction_Base_C::ExecuteUbergraph_BTTask_PerformAction_Base(int32 EntryPoint, class FName K2Node_Event_NotifyName, class UAnimNotify* K2Node_Event_Notify, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_OwnerActor, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Base_C", "ExecuteUbergraph_BTTask_PerformAction_Base");

	Params::UBTTask_PerformAction_Base_C_ExecuteUbergraph_BTTask_PerformAction_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NotifyName = K2Node_Event_NotifyName;
	Parms.K2Node_Event_Notify = K2Node_Event_Notify;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


