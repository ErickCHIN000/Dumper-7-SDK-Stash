#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_DummyMove.BP_Interactable_DummyMove_C
// (None)

class UClass* UBP_Interactable_DummyMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_DummyMove_C");

	return Clss;
}


// BP_Interactable_DummyMove_C BP_Interactable_DummyMove.Default__BP_Interactable_DummyMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_DummyMove_C* UBP_Interactable_DummyMove_C::GetDefaultObj()
{
	static class UBP_Interactable_DummyMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_DummyMove_C*>(UBP_Interactable_DummyMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_DummyMove.BP_Interactable_DummyMove_C.GetInteractionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Deployable_AITargetDummy_C*K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsMoving_IsMoving                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UBP_Interactable_DummyMove_C::GetInteractionText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsMoving_IsMoving, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_DummyMove_C", "GetInteractionText");

	Params::UBP_Interactable_DummyMove_C_GetInteractionText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy = K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsMoving_IsMoving = CallFunc_GetIsMoving_IsMoving;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_DummyMove.BP_Interactable_DummyMove_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Deployable_AITargetDummy_C*K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_DummyMove_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_DummyMove_C", "CanInteract");

	Params::UBP_Interactable_DummyMove_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy = K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_DummyMove.BP_Interactable_DummyMove_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_DummyMove_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_DummyMove_C", "Interact");

	Params::UBP_Interactable_DummyMove_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_DummyMove.BP_Interactable_DummyMove_C.ExecuteUbergraph_BP_Interactable_DummyMove
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Deployable_AITargetDummy_C*K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_DummyMove_C::ExecuteUbergraph_BP_Interactable_DummyMove(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_DummyMove_C", "ExecuteUbergraph_BP_Interactable_DummyMove");

	Params::UBP_Interactable_DummyMove_C_ExecuteUbergraph_BP_Interactable_DummyMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy = K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


