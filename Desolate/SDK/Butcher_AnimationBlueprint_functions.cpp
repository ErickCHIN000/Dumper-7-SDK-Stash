#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C
// (None)

class UClass* UButcher_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_AnimationBlueprint_C");

	return Clss;
}


// Butcher_AnimationBlueprint_C Butcher_AnimationBlueprint.Default__Butcher_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButcher_AnimationBlueprint_C* UButcher_AnimationBlueprint_C::GetDefaultObj()
{
	static class UButcher_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButcher_AnimationBlueprint_C*>(UButcher_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UButcher_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimGraph");

	Params::UButcher_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UButcher_AnimationBlueprint_C::UpdateState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "UpdateState");

	Params::UButcher_AnimationBlueprint_C_UpdateState_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_FD9DAC2C4C444746EF50DFBEA825CC97
// (BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_FD9DAC2C4C444746EF50DFBEA825CC97()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_FD9DAC2C4C444746EF50DFBEA825CC97");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_4CAD7874406FB13F9113799FB36B3ABE
// (BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_4CAD7874406FB13F9113799FB36B3ABE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_TransitionResult_4CAD7874406FB13F9113799FB36B3ABE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_BlendListByBool_5A487A1F4C75C4023FA8D1A89C1F72D6
// (BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_BlendListByBool_5A487A1F4C75C4023FA8D1A89C1F72D6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Butcher_AnimationBlueprint_AnimGraphNode_BlendListByBool_5A487A1F4C75C4023FA8D1A89C1F72D6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButcher_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UButcher_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_StopDaze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_StopDaze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_StopDaze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_ActivateTraps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_ActivateTraps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_ActivateTraps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_ButcherCircularAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_ButcherCircularAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_ButcherCircularAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_StopStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_StopStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_StopStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_EndStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_EndStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_EndStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.AnimNotify_ButcherStartStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButcher_AnimationBlueprint_C::AnimNotify_ButcherStartStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "AnimNotify_ButcherStartStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Butcher_AnimationBlueprint.Butcher_AnimationBlueprint_C.ExecuteUbergraph_Butcher_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AButcher_Character_C*        K2Node_DynamicCast_AsButcher_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UButcher_AnimationBlueprint_C::ExecuteUbergraph_Butcher_AnimationBlueprint(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AButcher_Character_C* K2Node_DynamicCast_AsButcher_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_OnFootStep_ReturnValue, int32 Temp_int_Variable, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Butcher_AnimationBlueprint_C", "ExecuteUbergraph_Butcher_AnimationBlueprint");

	Params::UButcher_AnimationBlueprint_C_ExecuteUbergraph_Butcher_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsButcher_Character = K2Node_DynamicCast_AsButcher_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAimOffsets_ReturnValue = CallFunc_GetAimOffsets_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


