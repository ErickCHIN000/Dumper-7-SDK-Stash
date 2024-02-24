#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C
// (None)

class UClass* USubAnim_npc_lookAt_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("subAnim_npc_lookAt_00_C");

	return Clss;
}


// subAnim_npc_lookAt_00_C subAnim_npc_lookAt_00.Default__subAnim_npc_lookAt_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubAnim_npc_lookAt_00_C* USubAnim_npc_lookAt_00_C::GetDefaultObj()
{
	static class USubAnim_npc_lookAt_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubAnim_npc_lookAt_00_C*>(USubAnim_npc_lookAt_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USubAnim_npc_lookAt_00_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_lookAt_00_C", "AnimGraph");

	Params::USubAnim_npc_lookAt_00_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubAnim_npc_lookAt_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_lookAt_00_C", "BlueprintUpdateAnimation");

	Params::USubAnim_npc_lookAt_00_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void USubAnim_npc_lookAt_00_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_lookAt_00_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C.Expensive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubAnim_npc_lookAt_00_C::Expensive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_lookAt_00_C", "Expensive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C.ExecuteUbergraph_subAnim_npc_lookAt_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHeadTracingProperties      CallFunc_GetHeadTracingProperties_ReturnValue                    (ConstParm, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_2                        (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Normal_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_3                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubAnim_npc_lookAt_00_C::ExecuteUbergraph_subAnim_npc_lookAt_00(int32 EntryPoint, float Temp_float_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FHeadTracingProperties& CallFunc_GetHeadTracingProperties_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_3, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, class FName CallFunc_MakeLiteralName_ReturnValue_3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float Temp_float_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_5, const struct FVector& CallFunc_Normal_ReturnValue_4, const struct FVector& CallFunc_Normal_ReturnValue_5, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_4, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_5, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_2, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_lookAt_00_C", "ExecuteUbergraph_subAnim_npc_lookAt_00");

	Params::USubAnim_npc_lookAt_00_C_ExecuteUbergraph_subAnim_npc_lookAt_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCGAICharacter_1 = K2Node_DynamicCast_AsCGAICharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetHeadTracingProperties_ReturnValue = CallFunc_GetHeadTracingProperties_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_2 = CallFunc_GetSocketTransform_ReturnValue_2;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_MakeRotFromX_ReturnValue_2 = CallFunc_MakeRotFromX_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_3 = CallFunc_Subtract_VectorVector_ReturnValue_3;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue_1 = CallFunc_NormalizedDeltaRotator_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_3 = CallFunc_Normal_ReturnValue_3;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_MakeRotFromX_ReturnValue_3 = CallFunc_MakeRotFromX_ReturnValue_3;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_GetSocketTransform_ReturnValue_3 = CallFunc_GetSocketTransform_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_4 = CallFunc_Subtract_VectorVector_ReturnValue_4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_5 = CallFunc_Subtract_VectorVector_ReturnValue_5;
	Parms.CallFunc_Normal_ReturnValue_4 = CallFunc_Normal_ReturnValue_4;
	Parms.CallFunc_Normal_ReturnValue_5 = CallFunc_Normal_ReturnValue_5;
	Parms.CallFunc_MakeRotFromX_ReturnValue_4 = CallFunc_MakeRotFromX_ReturnValue_4;
	Parms.CallFunc_MakeRotFromX_ReturnValue_5 = CallFunc_MakeRotFromX_ReturnValue_5;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue_2 = CallFunc_NormalizedDeltaRotator_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_BreakRotator_Roll_5 = CallFunc_BreakRotator_Roll_5;
	Parms.CallFunc_BreakRotator_Pitch_5 = CallFunc_BreakRotator_Pitch_5;
	Parms.CallFunc_BreakRotator_Yaw_5 = CallFunc_BreakRotator_Yaw_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


