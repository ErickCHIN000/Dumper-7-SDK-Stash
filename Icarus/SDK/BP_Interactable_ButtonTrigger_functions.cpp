#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C
// (None)

class UClass* UBP_Interactable_ButtonTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_ButtonTrigger_C");

	return Clss;
}


// BP_Interactable_ButtonTrigger_C BP_Interactable_ButtonTrigger.Default__BP_Interactable_ButtonTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_ButtonTrigger_C* UBP_Interactable_ButtonTrigger_C::GetDefaultObj()
{
	static class UBP_Interactable_ButtonTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_ButtonTrigger_C*>(UBP_Interactable_ButtonTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_ButtonTrigger_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_ButtonTrigger_C", "CanInteract");

	Params::UBP_Interactable_ButtonTrigger_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_ButtonTrigger_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_ButtonTrigger_C", "Interact");

	Params::UBP_Interactable_ButtonTrigger_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.ExecuteUbergraph_BP_Interactable_ButtonTrigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_ButtonTrigger_C::ExecuteUbergraph_BP_Interactable_ButtonTrigger(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_ButtonTrigger_C", "ExecuteUbergraph_BP_Interactable_ButtonTrigger");

	Params::UBP_Interactable_ButtonTrigger_C_ExecuteUbergraph_BP_Interactable_ButtonTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.OnButtonHold__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Interactable_ButtonTrigger_C::OnButtonHold__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_ButtonTrigger_C", "OnButtonHold__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.OnButtonInteract__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Interactable_ButtonTrigger_C::OnButtonInteract__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_ButtonTrigger_C", "OnButtonInteract__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


