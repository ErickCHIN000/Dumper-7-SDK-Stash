#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C
// (None)

class UClass* UBlindMan_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_AnimationBlueprint_C");

	return Clss;
}


// BlindMan_AnimationBlueprint_C BlindMan_AnimationBlueprint.Default__BlindMan_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlindMan_AnimationBlueprint_C* UBlindMan_AnimationBlueprint_C::GetDefaultObj()
{
	static class UBlindMan_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlindMan_AnimationBlueprint_C*>(UBlindMan_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBlindMan_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "AnimGraph");

	Params::UBlindMan_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlindMan_AnimationBlueprint_C::UpdateState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "UpdateState");

	Params::UBlindMan_AnimationBlueprint_C_UpdateState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_551332934615619B0E3153A7065D235C
// (BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_551332934615619B0E3153A7065D235C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_551332934615619B0E3153A7065D235C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_BE3730E846BD623731E82396AC99E775
// (BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_BE3730E846BD623731E82396AC99E775()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BlindMan_AnimationBlueprint_AnimGraphNode_TransitionResult_BE3730E846BD623731E82396AC99E775");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlindMan_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UBlindMan_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.AnimNotify_BlindMan_JumpAttackStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::AnimNotify_BlindMan_JumpAttackStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "AnimNotify_BlindMan_JumpAttackStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.AnimNotify_BlindMan_ProcessJumpAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBlindMan_AnimationBlueprint_C::AnimNotify_BlindMan_ProcessJumpAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "AnimNotify_BlindMan_ProcessJumpAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindMan_AnimationBlueprint.BlindMan_AnimationBlueprint_C.ExecuteUbergraph_BlindMan_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABlindMan_Character_C*       K2Node_DynamicCast_AsBlind_Man_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlindMan_AnimationBlueprint_C::ExecuteUbergraph_BlindMan_AnimationBlueprint(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABlindMan_Character_C* K2Node_DynamicCast_AsBlind_Man_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnFootStep_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindMan_AnimationBlueprint_C", "ExecuteUbergraph_BlindMan_AnimationBlueprint");

	Params::UBlindMan_AnimationBlueprint_C_ExecuteUbergraph_BlindMan_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBlind_Man_Character = K2Node_DynamicCast_AsBlind_Man_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


