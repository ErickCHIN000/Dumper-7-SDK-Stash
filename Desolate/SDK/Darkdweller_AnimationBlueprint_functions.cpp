#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C
// (None)

class UClass* UDarkdweller_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Darkdweller_AnimationBlueprint_C");

	return Clss;
}


// Darkdweller_AnimationBlueprint_C Darkdweller_AnimationBlueprint.Default__Darkdweller_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkdweller_AnimationBlueprint_C* UDarkdweller_AnimationBlueprint_C::GetDefaultObj()
{
	static class UDarkdweller_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkdweller_AnimationBlueprint_C*>(UDarkdweller_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDarkdweller_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AnimGraph");

	Params::UDarkdweller_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AB_SyncIdleType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDarkweller_PatrolTypes IdleType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDarkdweller_AnimationBlueprint_C::AB_SyncIdleType(enum class EAIStates State, enum class EDarkweller_PatrolTypes IdleType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AB_SyncIdleType");

	Params::UDarkdweller_AnimationBlueprint_C_AB_SyncIdleType_Params Parms{};

	Parms.State = State;
	Parms.IdleType = IdleType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDarkdweller_AnimationBlueprint_C::AB_SyncState(enum class EAIStates State, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AB_SyncState");

	Params::UDarkdweller_AnimationBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_7FA9D0B84B4C45FB7EC23A8007DA3F6A
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_7FA9D0B84B4C45FB7EC23A8007DA3F6A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_7FA9D0B84B4C45FB7EC23A8007DA3F6A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_B7D2B7CE41E5F12102D3BF8F7E525A23
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_B7D2B7CE41E5F12102D3BF8F7E525A23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_B7D2B7CE41E5F12102D3BF8F7E525A23");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8EDAE0914F1EF0EA3B318A9A51AD6A3C
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8EDAE0914F1EF0EA3B318A9A51AD6A3C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8EDAE0914F1EF0EA3B318A9A51AD6A3C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8784A6934FF693DA7FBC6197981A6B92
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8784A6934FF693DA7FBC6197981A6B92()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8784A6934FF693DA7FBC6197981A6B92");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_D86D3543468A22DE1885A4B354DE952A
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_D86D3543468A22DE1885A4B354DE952A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_D86D3543468A22DE1885A4B354DE952A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_3BF578774099AFB93427ACA4C044511D
// (BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_3BF578774099AFB93427ACA4C044511D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_3BF578774099AFB93427ACA4C044511D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDarkdweller_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UDarkdweller_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AnimNotify_ThrowStone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::AnimNotify_ThrowStone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AnimNotify_ThrowStone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.AnimNotify_StopDaze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDarkdweller_AnimationBlueprint_C::AnimNotify_StopDaze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "AnimNotify_StopDaze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C.ExecuteUbergraph_Darkdweller_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADarkdweller_Character_C*    K2Node_DynamicCast_AsDarkdweller_Character                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDarkdweller_AnimationBlueprint_C::ExecuteUbergraph_Darkdweller_AnimationBlueprint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ADarkdweller_Character_C* K2Node_DynamicCast_AsDarkdweller_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Darkdweller_AnimationBlueprint_C", "ExecuteUbergraph_Darkdweller_AnimationBlueprint");

	Params::UDarkdweller_AnimationBlueprint_C_ExecuteUbergraph_Darkdweller_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsDarkdweller_Character = K2Node_DynamicCast_AsDarkdweller_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


