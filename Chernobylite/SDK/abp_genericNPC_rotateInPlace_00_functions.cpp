#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C
// (None)

class UClass* UAbp_genericNPC_rotateInPlace_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_genericNPC_rotateInPlace_00_C");

	return Clss;
}


// abp_genericNPC_rotateInPlace_00_C abp_genericNPC_rotateInPlace_00.Default__abp_genericNPC_rotateInPlace_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_genericNPC_rotateInPlace_00_C* UAbp_genericNPC_rotateInPlace_00_C::GetDefaultObj()
{
	static class UAbp_genericNPC_rotateInPlace_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_genericNPC_rotateInPlace_00_C*>(UAbp_genericNPC_rotateInPlace_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_genericNPC_rotateInPlace_00_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimGraph");

	Params::UAbp_genericNPC_rotateInPlace_00_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_E207AAE24F524BFCA444208CF02372F6
// (BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_E207AAE24F524BFCA444208CF02372F6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_E207AAE24F524BFCA444208CF02372F6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_7254F0CE4309F94B97C123A5CA128EAB
// (BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_7254F0CE4309F94B97C123A5CA128EAB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_7254F0CE4309F94B97C123A5CA128EAB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_B244ACA5438219D3D29F9E90711CBDDF
// (BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_B244ACA5438219D3D29F9E90711CBDDF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_B244ACA5438219D3D29F9E90711CBDDF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_genericNPC_rotateInPlace_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "BlueprintUpdateAnimation");

	Params::UAbp_genericNPC_rotateInPlace_00_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_8050F4A64E4623FF3EA1C68ECEFC8535
// (BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_8050F4A64E4623FF3EA1C68ECEFC8535()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_8050F4A64E4623FF3EA1C68ECEFC8535");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimNotify_OnTargetDeltaRead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::AnimNotify_OnTargetDeltaRead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimNotify_OnTargetDeltaRead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimNotify_OnIdleReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::AnimNotify_OnIdleReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimNotify_OnIdleReached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.OnRotateInPlaceReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::OnRotateInPlaceReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "OnRotateInPlaceReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimNotify_OnReturnToIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::AnimNotify_OnReturnToIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimNotify_OnReturnToIdle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimNotify_OnRotatingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::AnimNotify_OnRotatingLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimNotify_OnRotatingLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_7425E9B04062E1E28CC1BB85A0B26045
// (BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_7425E9B04062E1E28CC1BB85A0B26045()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_7425E9B04062E1E28CC1BB85A0B26045");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.AnimNotify_OnRotatingFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_genericNPC_rotateInPlace_00_C::AnimNotify_OnRotatingFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "AnimNotify_OnRotatingFull");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C.ExecuteUbergraph_abp_genericNPC_rotateInPlace_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_npc_00_C*             K2Node_DynamicCast_AsBa_Ch_Npc_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_genericNPC_rotateInPlace_00_C::ExecuteUbergraph_abp_genericNPC_rotateInPlace_00(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_FClamp_ReturnValue, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_genericNPC_rotateInPlace_00_C", "ExecuteUbergraph_abp_genericNPC_rotateInPlace_00");

	Params::UAbp_genericNPC_rotateInPlace_00_C_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Ch_Npc_00 = K2Node_DynamicCast_AsBa_Ch_Npc_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_2 = CallFunc_Abs_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_5 = CallFunc_Greater_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue_1 = CallFunc_NormalizedDeltaRotator_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


