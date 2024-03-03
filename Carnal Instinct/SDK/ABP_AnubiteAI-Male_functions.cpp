#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C
// (None)

class UClass* UABP_AnubiteAIMinusMale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AnubiteAI-Male_C");

	return Clss;
}


// ABP_AnubiteAI-Male_C ABP_AnubiteAI-Male.Default__ABP_AnubiteAI-Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AnubiteAIMinusMale_C* UABP_AnubiteAIMinusMale_C::GetDefaultObj()
{
	static class UABP_AnubiteAIMinusMale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AnubiteAIMinusMale_C*>(UABP_AnubiteAIMinusMale_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_AnubiteAIMinusMale_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "AnimGraph");

	Params::UABP_AnubiteAIMinusMale_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnubiteAI-Male_AnimGraphNode_BlendListByBool_5225AE574F881E13FEE62785C130EEAB
// (BlueprintEvent)
// Parameters:

void UABP_AnubiteAIMinusMale_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnubiteAIMinusMale_AnimGraphNode_BlendListByBool_5225AE574F881E13FEE62785C130EEAB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnubiteAI-Male_AnimGraphNode_BlendListByBool_5225AE574F881E13FEE62785C130EEAB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AnubiteAIMinusMale_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "BlueprintUpdateAnimation");

	Params::UABP_AnubiteAIMinusMale_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_AnubiteAIMinusMale_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.OnActivityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Activity              Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_AnubiteAIMinusMale_C::OnActivityChanged(enum class E_Activity Status, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "OnActivityChanged");

	Params::UABP_AnubiteAIMinusMale_C_OnActivityChanged_Params Parms{};

	Parms.Status = Status;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_AnubiteAI-Male.ABP_AnubiteAI-Male_C.ExecuteUbergraph_ABP_AnubiteAI-Male
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_CombatState_C>K2Node_DynamicCast_AsI_Combat_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCombat_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseAI_C*                K2Node_DynamicCast_AsBP_Base_AI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStateManagerComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Activity              K2Node_CustomEvent_Status                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AnubiteAIMinusMale_C::ExecuteUbergraph_ABP_AnubiteAIMinusMale(int32 EntryPoint, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInCombat_Value, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UStateManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class E_Activity K2Node_CustomEvent_Status, bool K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AnubiteAI-Male_C", "ExecuteUbergraph_ABP_AnubiteAI-Male");

	Params::UABP_AnubiteAIMinusMale_C_ExecuteUbergraph_ABP_AnubiteAIMinusMale_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsI_Combat_State = K2Node_DynamicCast_AsI_Combat_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsInCombat_Value = CallFunc_GetIsInCombat_Value;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_AI = K2Node_DynamicCast_AsBP_Base_AI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


