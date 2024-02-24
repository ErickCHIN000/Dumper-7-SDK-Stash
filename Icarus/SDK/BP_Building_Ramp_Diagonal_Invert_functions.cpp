#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Ramp_Diagonal_Invert.BP_Building_Ramp_Diagonal_Invert_C
// (Actor)

class UClass* ABP_Building_Ramp_Diagonal_Invert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Ramp_Diagonal_Invert_C");

	return Clss;
}


// BP_Building_Ramp_Diagonal_Invert_C BP_Building_Ramp_Diagonal_Invert.Default__BP_Building_Ramp_Diagonal_Invert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Ramp_Diagonal_Invert_C* ABP_Building_Ramp_Diagonal_Invert_C::GetDefaultObj()
{
	static class ABP_Building_Ramp_Diagonal_Invert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Ramp_Diagonal_Invert_C*>(ABP_Building_Ramp_Diagonal_Invert_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Ramp_Diagonal_Invert.BP_Building_Ramp_Diagonal_Invert_C.GetBlockingBypass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BuildingClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVectorPair>         BlockingPreRotate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  GridSpaceTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         BypassBlocking                                                   (Parm, OutParm)
// TArray<struct FVectorPair>         PreRotate                                                        (Edit, BlueprintVisible)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair                                     (NoDestructor)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_1                                   (NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_2                                   (NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_3                                   (NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_4                                   (NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_5                                   (NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         CallFunc_GetBlockingBypass_BypassBlocking                        (ReferenceParm)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_6                                   (NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_7                                   (NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array_4                                         (ReferenceParm)

void ABP_Building_Ramp_Diagonal_Invert_C::GetBlockingBypass(class UClass* BuildingClass, TArray<struct FVectorPair>& BlockingPreRotate, const struct FTransform& GridSpaceTransform, TArray<struct FVectorPair>* BypassBlocking, const TArray<struct FVectorPair>& PreRotate, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVectorPair& K2Node_MakeStruct_VectorPair, bool CallFunc_NotEqual_RotatorRotator_ReturnValue_1, const struct FVectorPair& K2Node_MakeStruct_VectorPair_1, const struct FVectorPair& K2Node_MakeStruct_VectorPair_2, const struct FVectorPair& K2Node_MakeStruct_VectorPair_3, TArray<struct FVectorPair>& K2Node_MakeArray_Array, bool CallFunc_ClassIsChildOf_ReturnValue_2, TArray<struct FVectorPair>& K2Node_MakeArray_Array_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, TArray<struct FVectorPair>& K2Node_MakeArray_Array_2, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, bool CallFunc_NotEqual_RotatorRotator_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_4, const struct FVectorPair& K2Node_MakeStruct_VectorPair_4, const struct FVectorPair& K2Node_MakeStruct_VectorPair_5, TArray<struct FVectorPair>& K2Node_MakeArray_Array_3, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_3, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking, const struct FVectorPair& K2Node_MakeStruct_VectorPair_6, const struct FVectorPair& K2Node_MakeStruct_VectorPair_7, TArray<struct FVectorPair>& K2Node_MakeArray_Array_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Ramp_Diagonal_Invert_C", "GetBlockingBypass");

	Params::ABP_Building_Ramp_Diagonal_Invert_C_GetBlockingBypass_Params Parms{};

	Parms.BuildingClass = BuildingClass;
	Parms.BlockingPreRotate = BlockingPreRotate;
	Parms.GridSpaceTransform = GridSpaceTransform;
	Parms.PreRotate = PreRotate;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue = CallFunc_NotEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.K2Node_MakeStruct_VectorPair = K2Node_MakeStruct_VectorPair;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue_1 = CallFunc_NotEqual_RotatorRotator_ReturnValue_1;
	Parms.K2Node_MakeStruct_VectorPair_1 = K2Node_MakeStruct_VectorPair_1;
	Parms.K2Node_MakeStruct_VectorPair_2 = K2Node_MakeStruct_VectorPair_2;
	Parms.K2Node_MakeStruct_VectorPair_3 = K2Node_MakeStruct_VectorPair_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue_2 = CallFunc_NotEqual_RotatorRotator_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.K2Node_MakeStruct_VectorPair_4 = K2Node_MakeStruct_VectorPair_4;
	Parms.K2Node_MakeStruct_VectorPair_5 = K2Node_MakeStruct_VectorPair_5;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetBlockingBypass_BypassBlocking = CallFunc_GetBlockingBypass_BypassBlocking;
	Parms.K2Node_MakeStruct_VectorPair_6 = K2Node_MakeStruct_VectorPair_6;
	Parms.K2Node_MakeStruct_VectorPair_7 = K2Node_MakeStruct_VectorPair_7;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;

	UObject::ProcessEvent(Func, &Parms);

	if (BypassBlocking != nullptr)
		*BypassBlocking = std::move(Parms.BypassBlocking);

}


// Function BP_Building_Ramp_Diagonal_Invert.BP_Building_Ramp_Diagonal_Invert_C.ShouldRotate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERotationalDirections   Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  GridSpaceTrans                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UClass*                      NewBuilding                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HitDistanceFromCenter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Dots                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    WorldRotToTest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    GridspaceRotTestAgainst                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     RawHitNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Shifted                                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
// bool                               WantsBlockLikePlacement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  BlockLikePlacementExtra                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  ExtraGridSpaceTrans                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  WorkingTransform                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc                                   (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_13                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_14                            (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_15                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_16                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_17                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_18                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_19                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_20                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_22                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_23                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_24                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_11                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_12                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_13                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans                                  (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_1                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_1                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_1                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_25                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_26                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_1                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_27                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_28                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_2                                 (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_3                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_21                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_29                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_22                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_30                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_31                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_2                                (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_14                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_23                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_32                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc                                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_3                             (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_33                            (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_4                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_3                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_1                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_4                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_24                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_2                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_34                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_25                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_35                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_36                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_6                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_7                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_5                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_4                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_8                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_9                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_6                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_5                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_3                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_10                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_26                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_4                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_37                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Ramp_Diagonal_Invert_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceTrans, const struct FTransform& WorkingTransform, enum class ERotationalDirections WorkingDirection, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, const struct FTransform& CallFunc_RightShift_ShiftedLoc, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_13, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_15, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_16, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_5, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue_18, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_19, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_20, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FVector& CallFunc_BreakTransform_Location_10, const struct FRotator& CallFunc_BreakTransform_Rotation_10, const struct FVector& CallFunc_BreakTransform_Scale_10, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, float CallFunc_Abs_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FVector& CallFunc_BreakTransform_Location_11, const struct FRotator& CallFunc_BreakTransform_Rotation_11, const struct FVector& CallFunc_BreakTransform_Scale_11, const struct FVector& CallFunc_BreakTransform_Location_12, const struct FRotator& CallFunc_BreakTransform_Rotation_12, const struct FVector& CallFunc_BreakTransform_Scale_12, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_9, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_21, const struct FTransform& CallFunc_MakeTransform_ReturnValue_22, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FVector& CallFunc_BreakTransform_Location_13, const struct FRotator& CallFunc_BreakTransform_Rotation_13, const struct FVector& CallFunc_BreakTransform_Scale_13, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_23, const struct FVector& CallFunc_BreakTransform_Location_14, const struct FRotator& CallFunc_BreakTransform_Rotation_14, const struct FVector& CallFunc_BreakTransform_Scale_14, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_24, bool K2Node_SwitchEnum_CmpSuccess_8, const struct FVector& CallFunc_BreakTransform_Location_15, const struct FRotator& CallFunc_BreakTransform_Rotation_15, const struct FVector& CallFunc_BreakTransform_Scale_15, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FVector& CallFunc_BreakTransform_Location_16, const struct FRotator& CallFunc_BreakTransform_Rotation_16, const struct FVector& CallFunc_BreakTransform_Scale_16, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_7, float CallFunc_Abs_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_8, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_9, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_10, float CallFunc_Abs_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_11, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_12, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_13, const struct FTransform& CallFunc_DownShift_ShiftedLoc, const struct FTransform& CallFunc_LeftShift_ShiftedTrans, bool K2Node_SwitchEnum_CmpSuccess_9, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, const struct FTransform& CallFunc_DownShift_ShiftedLoc_1, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_1, bool K2Node_SwitchEnum_CmpSuccess_10, const struct FVector& CallFunc_BreakTransform_Location_17, const struct FRotator& CallFunc_BreakTransform_Rotation_17, const struct FVector& CallFunc_BreakTransform_Scale_17, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_13, const struct FVector& CallFunc_BreakTransform_Location_18, const struct FRotator& CallFunc_BreakTransform_Rotation_18, const struct FVector& CallFunc_BreakTransform_Scale_18, const struct FTransform& CallFunc_MakeTransform_ReturnValue_25, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_14, const struct FTransform& CallFunc_MakeTransform_ReturnValue_26, const struct FVector& CallFunc_BreakTransform_Location_19, const struct FRotator& CallFunc_BreakTransform_Rotation_19, const struct FVector& CallFunc_BreakTransform_Scale_19, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_15, const struct FTransform& CallFunc_RightShift_ShiftedLoc_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_27, bool K2Node_SwitchEnum_CmpSuccess_11, const struct FVector& CallFunc_BreakTransform_Location_20, const struct FRotator& CallFunc_BreakTransform_Rotation_20, const struct FVector& CallFunc_BreakTransform_Scale_20, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_16, const struct FTransform& CallFunc_MakeTransform_ReturnValue_28, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_2, const struct FTransform& CallFunc_RightShift_ShiftedLoc_2, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess_12, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FTransform& CallFunc_RightShift_ShiftedLoc_3, const struct FVector& CallFunc_BreakTransform_Location_21, const struct FRotator& CallFunc_BreakTransform_Rotation_21, const struct FVector& CallFunc_BreakTransform_Scale_21, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue_29, const struct FVector& CallFunc_BreakTransform_Location_22, const struct FRotator& CallFunc_BreakTransform_Rotation_22, const struct FVector& CallFunc_BreakTransform_Scale_22, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_18, const struct FTransform& CallFunc_MakeTransform_ReturnValue_30, const struct FTransform& CallFunc_UpShift_ShiftedLoc, const struct FTransform& CallFunc_MakeTransform_ReturnValue_31, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_2, bool K2Node_SwitchEnum_CmpSuccess_13, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_14, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess_14, const struct FVector& CallFunc_BreakTransform_Location_23, const struct FRotator& CallFunc_BreakTransform_Rotation_23, const struct FVector& CallFunc_BreakTransform_Scale_23, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_19, const struct FTransform& CallFunc_MakeTransform_ReturnValue_32, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_15, bool CallFunc_ClassIsChildOf_ReturnValue_1, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_20, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_21, const struct FTransform& CallFunc_MakeTransform_ReturnValue_33, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_3, const struct FTransform& CallFunc_RightShift_ShiftedLoc_4, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_3, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_4, const struct FVector& CallFunc_BreakTransform_Location_24, const struct FRotator& CallFunc_BreakTransform_Rotation_24, const struct FVector& CallFunc_BreakTransform_Scale_24, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_22, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_10, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_34, const struct FVector& CallFunc_BreakTransform_Location_25, const struct FRotator& CallFunc_BreakTransform_Rotation_25, const struct FVector& CallFunc_BreakTransform_Scale_25, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_23, const struct FTransform& CallFunc_MakeTransform_ReturnValue_35, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_16, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_24, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_25, bool K2Node_SwitchEnum_CmpSuccess_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue_36, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_6, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_7, const struct FTransform& CallFunc_RightShift_ShiftedLoc_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_8, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_9, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_18, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_5, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_6, const struct FTransform& CallFunc_RightShift_ShiftedLoc_6, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_5, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_3, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_10, const struct FVector& CallFunc_BreakTransform_Location_26, const struct FRotator& CallFunc_BreakTransform_Rotation_26, const struct FVector& CallFunc_BreakTransform_Scale_26, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_26, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_11, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_37, bool CallFunc_ClassIsChildOf_ReturnValue_4, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_7, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_6, bool CallFunc_ClassIsChildOf_ReturnValue_7, bool CallFunc_ClassIsChildOf_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Ramp_Diagonal_Invert_C", "ShouldRotate");

	Params::ABP_Building_Ramp_Diagonal_Invert_C_ShouldRotate_Params Parms{};

	Parms.Direction = Direction;
	Parms.GridSpaceTrans = GridSpaceTrans;
	Parms.NewBuilding = NewBuilding;
	Parms.HitDistanceFromCenter = HitDistanceFromCenter;
	Parms.Dots = Dots;
	Parms.WorldRotToTest = WorldRotToTest;
	Parms.GridspaceRotTestAgainst = GridspaceRotTestAgainst;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.ExtraGridSpaceTrans = ExtraGridSpaceTrans;
	Parms.WorkingTransform = WorkingTransform;
	Parms.WorkingDirection = WorkingDirection;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_BackwardsShift_ShiftedLoc = CallFunc_BackwardsShift_ShiftedLoc;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_ComposeRotators_ReturnValue_3 = CallFunc_ComposeRotators_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_RightShift_ShiftedLoc = CallFunc_RightShift_ShiftedLoc;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_4 = CallFunc_ComposeRotators_ReturnValue_4;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_13 = CallFunc_MakeTransform_ReturnValue_13;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_14 = CallFunc_MakeTransform_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_15 = CallFunc_MakeTransform_ReturnValue_15;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_16 = CallFunc_MakeTransform_ReturnValue_16;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_ComposeRotators_ReturnValue_5 = CallFunc_ComposeRotators_ReturnValue_5;
	Parms.CallFunc_ComposeRotators_ReturnValue_6 = CallFunc_ComposeRotators_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_17 = CallFunc_MakeTransform_ReturnValue_17;
	Parms.CallFunc_MakeTransform_ReturnValue_18 = CallFunc_MakeTransform_ReturnValue_18;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_ComposeRotators_ReturnValue_7 = CallFunc_ComposeRotators_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_19 = CallFunc_MakeTransform_ReturnValue_19;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_ComposeRotators_ReturnValue_8 = CallFunc_ComposeRotators_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_20 = CallFunc_MakeTransform_ReturnValue_20;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_BreakTransform_Location_10 = CallFunc_BreakTransform_Location_10;
	Parms.CallFunc_BreakTransform_Rotation_10 = CallFunc_BreakTransform_Rotation_10;
	Parms.CallFunc_BreakTransform_Scale_10 = CallFunc_BreakTransform_Scale_10;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_4 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_5 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_BreakTransform_Location_11 = CallFunc_BreakTransform_Location_11;
	Parms.CallFunc_BreakTransform_Rotation_11 = CallFunc_BreakTransform_Rotation_11;
	Parms.CallFunc_BreakTransform_Scale_11 = CallFunc_BreakTransform_Scale_11;
	Parms.CallFunc_BreakTransform_Location_12 = CallFunc_BreakTransform_Location_12;
	Parms.CallFunc_BreakTransform_Rotation_12 = CallFunc_BreakTransform_Rotation_12;
	Parms.CallFunc_BreakTransform_Scale_12 = CallFunc_BreakTransform_Scale_12;
	Parms.CallFunc_ComposeRotators_ReturnValue_9 = CallFunc_ComposeRotators_ReturnValue_9;
	Parms.CallFunc_ComposeRotators_ReturnValue_10 = CallFunc_ComposeRotators_ReturnValue_10;
	Parms.CallFunc_Add_VectorVector_ReturnValue_6 = CallFunc_Add_VectorVector_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_7 = CallFunc_Add_VectorVector_ReturnValue_7;
	Parms.CallFunc_MakeTransform_ReturnValue_21 = CallFunc_MakeTransform_ReturnValue_21;
	Parms.CallFunc_MakeTransform_ReturnValue_22 = CallFunc_MakeTransform_ReturnValue_22;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_BreakTransform_Location_13 = CallFunc_BreakTransform_Location_13;
	Parms.CallFunc_BreakTransform_Rotation_13 = CallFunc_BreakTransform_Rotation_13;
	Parms.CallFunc_BreakTransform_Scale_13 = CallFunc_BreakTransform_Scale_13;
	Parms.CallFunc_ComposeRotators_ReturnValue_11 = CallFunc_ComposeRotators_ReturnValue_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_Add_VectorVector_ReturnValue_8 = CallFunc_Add_VectorVector_ReturnValue_8;
	Parms.CallFunc_MakeTransform_ReturnValue_23 = CallFunc_MakeTransform_ReturnValue_23;
	Parms.CallFunc_BreakTransform_Location_14 = CallFunc_BreakTransform_Location_14;
	Parms.CallFunc_BreakTransform_Rotation_14 = CallFunc_BreakTransform_Rotation_14;
	Parms.CallFunc_BreakTransform_Scale_14 = CallFunc_BreakTransform_Scale_14;
	Parms.CallFunc_ComposeRotators_ReturnValue_12 = CallFunc_ComposeRotators_ReturnValue_12;
	Parms.CallFunc_Add_VectorVector_ReturnValue_9 = CallFunc_Add_VectorVector_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_24 = CallFunc_MakeTransform_ReturnValue_24;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_BreakTransform_Location_15 = CallFunc_BreakTransform_Location_15;
	Parms.CallFunc_BreakTransform_Rotation_15 = CallFunc_BreakTransform_Rotation_15;
	Parms.CallFunc_BreakTransform_Scale_15 = CallFunc_BreakTransform_Scale_15;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_BreakTransform_Location_16 = CallFunc_BreakTransform_Location_16;
	Parms.CallFunc_BreakTransform_Rotation_16 = CallFunc_BreakTransform_Rotation_16;
	Parms.CallFunc_BreakTransform_Scale_16 = CallFunc_BreakTransform_Scale_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_6 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_7 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_8 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_9 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_9;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_10 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Abs_ReturnValue_2 = CallFunc_Abs_ReturnValue_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_11 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_11;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_12 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_12;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_13 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_13;
	Parms.CallFunc_DownShift_ShiftedLoc = CallFunc_DownShift_ShiftedLoc;
	Parms.CallFunc_LeftShift_ShiftedTrans = CallFunc_LeftShift_ShiftedTrans;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_DownShift_ShiftedLoc_1 = CallFunc_DownShift_ShiftedLoc_1;
	Parms.CallFunc_LeftShift_ShiftedTrans_1 = CallFunc_LeftShift_ShiftedTrans_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_1 = CallFunc_BackwardsShift_ShiftedLoc_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_BreakTransform_Location_17 = CallFunc_BreakTransform_Location_17;
	Parms.CallFunc_BreakTransform_Rotation_17 = CallFunc_BreakTransform_Rotation_17;
	Parms.CallFunc_BreakTransform_Scale_17 = CallFunc_BreakTransform_Scale_17;
	Parms.CallFunc_ComposeRotators_ReturnValue_13 = CallFunc_ComposeRotators_ReturnValue_13;
	Parms.CallFunc_BreakTransform_Location_18 = CallFunc_BreakTransform_Location_18;
	Parms.CallFunc_BreakTransform_Rotation_18 = CallFunc_BreakTransform_Rotation_18;
	Parms.CallFunc_BreakTransform_Scale_18 = CallFunc_BreakTransform_Scale_18;
	Parms.CallFunc_MakeTransform_ReturnValue_25 = CallFunc_MakeTransform_ReturnValue_25;
	Parms.CallFunc_ComposeRotators_ReturnValue_14 = CallFunc_ComposeRotators_ReturnValue_14;
	Parms.CallFunc_MakeTransform_ReturnValue_26 = CallFunc_MakeTransform_ReturnValue_26;
	Parms.CallFunc_BreakTransform_Location_19 = CallFunc_BreakTransform_Location_19;
	Parms.CallFunc_BreakTransform_Rotation_19 = CallFunc_BreakTransform_Rotation_19;
	Parms.CallFunc_BreakTransform_Scale_19 = CallFunc_BreakTransform_Scale_19;
	Parms.CallFunc_ComposeRotators_ReturnValue_15 = CallFunc_ComposeRotators_ReturnValue_15;
	Parms.CallFunc_RightShift_ShiftedLoc_1 = CallFunc_RightShift_ShiftedLoc_1;
	Parms.CallFunc_MakeTransform_ReturnValue_27 = CallFunc_MakeTransform_ReturnValue_27;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.CallFunc_BreakTransform_Location_20 = CallFunc_BreakTransform_Location_20;
	Parms.CallFunc_BreakTransform_Rotation_20 = CallFunc_BreakTransform_Rotation_20;
	Parms.CallFunc_BreakTransform_Scale_20 = CallFunc_BreakTransform_Scale_20;
	Parms.CallFunc_ComposeRotators_ReturnValue_16 = CallFunc_ComposeRotators_ReturnValue_16;
	Parms.CallFunc_MakeTransform_ReturnValue_28 = CallFunc_MakeTransform_ReturnValue_28;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_2 = CallFunc_BackwardsShift_ShiftedLoc_2;
	Parms.CallFunc_RightShift_ShiftedLoc_2 = CallFunc_RightShift_ShiftedLoc_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess_12 = K2Node_SwitchEnum_CmpSuccess_12;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_RightShift_ShiftedLoc_3 = CallFunc_RightShift_ShiftedLoc_3;
	Parms.CallFunc_BreakTransform_Location_21 = CallFunc_BreakTransform_Location_21;
	Parms.CallFunc_BreakTransform_Rotation_21 = CallFunc_BreakTransform_Rotation_21;
	Parms.CallFunc_BreakTransform_Scale_21 = CallFunc_BreakTransform_Scale_21;
	Parms.CallFunc_ComposeRotators_ReturnValue_17 = CallFunc_ComposeRotators_ReturnValue_17;
	Parms.CallFunc_MakeTransform_ReturnValue_29 = CallFunc_MakeTransform_ReturnValue_29;
	Parms.CallFunc_BreakTransform_Location_22 = CallFunc_BreakTransform_Location_22;
	Parms.CallFunc_BreakTransform_Rotation_22 = CallFunc_BreakTransform_Rotation_22;
	Parms.CallFunc_BreakTransform_Scale_22 = CallFunc_BreakTransform_Scale_22;
	Parms.CallFunc_ComposeRotators_ReturnValue_18 = CallFunc_ComposeRotators_ReturnValue_18;
	Parms.CallFunc_MakeTransform_ReturnValue_30 = CallFunc_MakeTransform_ReturnValue_30;
	Parms.CallFunc_UpShift_ShiftedLoc = CallFunc_UpShift_ShiftedLoc;
	Parms.CallFunc_MakeTransform_ReturnValue_31 = CallFunc_MakeTransform_ReturnValue_31;
	Parms.CallFunc_LeftShift_ShiftedTrans_2 = CallFunc_LeftShift_ShiftedTrans_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_13 = K2Node_SwitchEnum_CmpSuccess_13;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_14 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_14;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_14 = K2Node_SwitchEnum_CmpSuccess_14;
	Parms.CallFunc_BreakTransform_Location_23 = CallFunc_BreakTransform_Location_23;
	Parms.CallFunc_BreakTransform_Rotation_23 = CallFunc_BreakTransform_Rotation_23;
	Parms.CallFunc_BreakTransform_Scale_23 = CallFunc_BreakTransform_Scale_23;
	Parms.CallFunc_ComposeRotators_ReturnValue_19 = CallFunc_ComposeRotators_ReturnValue_19;
	Parms.CallFunc_MakeTransform_ReturnValue_32 = CallFunc_MakeTransform_ReturnValue_32;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_15 = K2Node_SwitchEnum_CmpSuccess_15;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_InverseTransformRotation_ReturnValue = CallFunc_InverseTransformRotation_ReturnValue;
	Parms.CallFunc_ForwardShift_ShiftedLoc = CallFunc_ForwardShift_ShiftedLoc;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_3 = CallFunc_BackwardsShift_ShiftedLoc_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_20 = CallFunc_ComposeRotators_ReturnValue_20;
	Parms.CallFunc_ComposeRotators_ReturnValue_21 = CallFunc_ComposeRotators_ReturnValue_21;
	Parms.CallFunc_MakeTransform_ReturnValue_33 = CallFunc_MakeTransform_ReturnValue_33;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_RightShift_ShiftedLoc_4 = CallFunc_RightShift_ShiftedLoc_4;
	Parms.CallFunc_LeftShift_ShiftedTrans_3 = CallFunc_LeftShift_ShiftedTrans_3;
	Parms.CallFunc_ForwardShift_ShiftedLoc_1 = CallFunc_ForwardShift_ShiftedLoc_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_4 = CallFunc_BackwardsShift_ShiftedLoc_4;
	Parms.CallFunc_BreakTransform_Location_24 = CallFunc_BreakTransform_Location_24;
	Parms.CallFunc_BreakTransform_Rotation_24 = CallFunc_BreakTransform_Rotation_24;
	Parms.CallFunc_BreakTransform_Scale_24 = CallFunc_BreakTransform_Scale_24;
	Parms.CallFunc_ComposeRotators_ReturnValue_22 = CallFunc_ComposeRotators_ReturnValue_22;
	Parms.CallFunc_ForwardShift_ShiftedLoc_2 = CallFunc_ForwardShift_ShiftedLoc_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_10 = CallFunc_Add_VectorVector_ReturnValue_10;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_5 = CallFunc_BackwardsShift_ShiftedLoc_5;
	Parms.CallFunc_MakeTransform_ReturnValue_34 = CallFunc_MakeTransform_ReturnValue_34;
	Parms.CallFunc_BreakTransform_Location_25 = CallFunc_BreakTransform_Location_25;
	Parms.CallFunc_BreakTransform_Rotation_25 = CallFunc_BreakTransform_Rotation_25;
	Parms.CallFunc_BreakTransform_Scale_25 = CallFunc_BreakTransform_Scale_25;
	Parms.CallFunc_ComposeRotators_ReturnValue_23 = CallFunc_ComposeRotators_ReturnValue_23;
	Parms.CallFunc_MakeTransform_ReturnValue_35 = CallFunc_MakeTransform_ReturnValue_35;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_16 = K2Node_SwitchEnum_CmpSuccess_16;
	Parms.CallFunc_NegateRotator_ReturnValue_1 = CallFunc_NegateRotator_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_1 = CallFunc_InverseTransformRotation_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1 = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_24 = CallFunc_ComposeRotators_ReturnValue_24;
	Parms.CallFunc_ComposeRotators_ReturnValue_25 = CallFunc_ComposeRotators_ReturnValue_25;
	Parms.K2Node_SwitchEnum_CmpSuccess_17 = K2Node_SwitchEnum_CmpSuccess_17;
	Parms.CallFunc_MakeTransform_ReturnValue_36 = CallFunc_MakeTransform_ReturnValue_36;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_6 = CallFunc_BackwardsShift_ShiftedLoc_6;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_7 = CallFunc_BackwardsShift_ShiftedLoc_7;
	Parms.CallFunc_RightShift_ShiftedLoc_5 = CallFunc_RightShift_ShiftedLoc_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_4 = CallFunc_LeftShift_ShiftedTrans_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_8 = CallFunc_BackwardsShift_ShiftedLoc_8;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_9 = CallFunc_BackwardsShift_ShiftedLoc_9;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_18 = K2Node_SwitchEnum_CmpSuccess_18;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_RightShift_ShiftedLoc_6 = CallFunc_RightShift_ShiftedLoc_6;
	Parms.CallFunc_LeftShift_ShiftedTrans_5 = CallFunc_LeftShift_ShiftedTrans_5;
	Parms.CallFunc_ForwardShift_ShiftedLoc_3 = CallFunc_ForwardShift_ShiftedLoc_3;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_10 = CallFunc_BackwardsShift_ShiftedLoc_10;
	Parms.CallFunc_BreakTransform_Location_26 = CallFunc_BreakTransform_Location_26;
	Parms.CallFunc_BreakTransform_Rotation_26 = CallFunc_BreakTransform_Rotation_26;
	Parms.CallFunc_BreakTransform_Scale_26 = CallFunc_BreakTransform_Scale_26;
	Parms.CallFunc_ComposeRotators_ReturnValue_26 = CallFunc_ComposeRotators_ReturnValue_26;
	Parms.CallFunc_ForwardShift_ShiftedLoc_4 = CallFunc_ForwardShift_ShiftedLoc_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_11 = CallFunc_Add_VectorVector_ReturnValue_11;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_11 = CallFunc_BackwardsShift_ShiftedLoc_11;
	Parms.CallFunc_MakeTransform_ReturnValue_37 = CallFunc_MakeTransform_ReturnValue_37;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_7 = CallFunc_ClassIsChildOf_ReturnValue_7;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_8 = CallFunc_ClassIsChildOf_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}

}


