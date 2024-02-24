#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Wall.BP_Building_Wall_C
// (Actor)

class UClass* ABP_Building_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Wall_C");

	return Clss;
}


// BP_Building_Wall_C BP_Building_Wall.Default__BP_Building_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Wall_C* ABP_Building_Wall_C::GetDefaultObj()
{
	static class ABP_Building_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Wall_C*>(ABP_Building_Wall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Wall.BP_Building_Wall_C.DecideShifting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    RotationToTest_world_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    RotationTestingAgainst_gridspace_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  GridSpaceLOCHitPlaneRot                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UClass*                      Building_Class                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DistanceBetweenHitAndCenter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RawHitNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  GridSpaceLOCWithGridSpaceRot                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   RelativeRotationEnum                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WantsBlockLikePlacement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  BlockLikePlacementExtraDelta                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot             (IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   CallFunc_DecideShifting_RelativeRotationEnum                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DecideShifting_WantsBlockLikePlacement                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DecideShifting_BlockLikePlacementExtraDelta             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue                             (IsPlainOldData, NoDestructor)

void ABP_Building_Wall_C::DecideShifting(const struct FRotator& RotationToTest_world_, const struct FRotator& RotationTestingAgainst_gridspace_, const struct FTransform& GridSpaceLOCHitPlaneRot, class UClass* Building_Class, float DistanceBetweenHitAndCenter, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections* RelativeRotationEnum, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtraDelta, const struct FTransform& CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections CallFunc_DecideShifting_RelativeRotationEnum, bool CallFunc_DecideShifting_WantsBlockLikePlacement, const struct FTransform& CallFunc_DecideShifting_BlockLikePlacementExtraDelta, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_SelectTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Wall_C", "DecideShifting");

	Params::ABP_Building_Wall_C_DecideShifting_Params Parms{};

	Parms.RotationToTest_world_ = RotationToTest_world_;
	Parms.RotationTestingAgainst_gridspace_ = RotationTestingAgainst_gridspace_;
	Parms.GridSpaceLOCHitPlaneRot = GridSpaceLOCHitPlaneRot;
	Parms.Building_Class = Building_Class;
	Parms.DistanceBetweenHitAndCenter = DistanceBetweenHitAndCenter;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot = CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot;
	Parms.CallFunc_DecideShifting_RelativeRotationEnum = CallFunc_DecideShifting_RelativeRotationEnum;
	Parms.CallFunc_DecideShifting_WantsBlockLikePlacement = CallFunc_DecideShifting_WantsBlockLikePlacement;
	Parms.CallFunc_DecideShifting_BlockLikePlacementExtraDelta = CallFunc_DecideShifting_BlockLikePlacementExtraDelta;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SelectTransform_ReturnValue = CallFunc_SelectTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GridSpaceLOCWithGridSpaceRot != nullptr)
		*GridSpaceLOCWithGridSpaceRot = std::move(Parms.GridSpaceLOCWithGridSpaceRot);

	if (RelativeRotationEnum != nullptr)
		*RelativeRotationEnum = Parms.RelativeRotationEnum;

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtraDelta != nullptr)
		*BlockLikePlacementExtraDelta = std::move(Parms.BlockLikePlacementExtraDelta);

}


// Function BP_Building_Wall.BP_Building_Wall_C.IsBuildingOutside
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Building_Wall_C::IsBuildingOutside(float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Wall_C", "IsBuildingOutside");

	Params::ABP_Building_Wall_C_IsBuildingOutside_Params Parms{};

	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue_1 = CallFunc_GetActorUpVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_TransformLocation_ReturnValue_1 = CallFunc_TransformLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Building_Wall.BP_Building_Wall_C.ShouldRotate
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
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  WorkingTransform                                                 (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_1                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans                                  (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc                                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_3                             (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_2                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_1                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_1                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_4                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_1                                  (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_2                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_2                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_5                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_3                                (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_3                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_1                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_2                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_6                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_4                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_5                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_3                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_3                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_4                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_6                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_4                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_5                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_7                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_7                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_6                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_5                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_8                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_7                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_8                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_8                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_4                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_9                                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_5                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_DownShift_ShiftedLoc_2                                  (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_6                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_6                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_9                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_9                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_7                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_10                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_10                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_7                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_8                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_8                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_11                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_11                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_9                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_12                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_12                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_9                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_10                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_10                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_13                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_13                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_2                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_3                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_13                            (IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_14                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_15                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_14                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_11                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_14                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_17                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_11                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_18                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_15                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_16                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_12                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_17                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_12                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_19                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_13                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_15                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_13                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_20                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_8                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_9                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_Reverse_OutTrans                                        (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_10                                   (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_14                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_16                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_21                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_15                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_22                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_14                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_18                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_17                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_16                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_23                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_4                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_18                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_1                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_19                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_20                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_19                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Reverse_OutTrans_2                                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_15                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_24                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_21                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_17                              (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_18                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_11                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_12                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_25                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_22                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_23                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_24                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_25                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_26                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_27                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_26                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_27                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_28                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_29                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_13                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_RightShift_ShiftedLoc_16                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_14                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_28                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_19                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_15                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_30                            (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_29                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_16                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ForwardShift_ShiftedLoc_20                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_LeftShift_ShiftedTrans_30                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_17                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_UpShift_ShiftedLoc_18                                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BackwardsShift_ShiftedLoc_31                            (IsPlainOldData, NoDestructor)

void ABP_Building_Wall_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceTrans, enum class ERotationalDirections WorkingDirection, const struct FTransform& WorkingTransform, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, bool K2Node_SwitchEnum_CmpSuccess, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FTransform& CallFunc_RightShift_ShiftedLoc, const struct FTransform& CallFunc_RightShift_ShiftedLoc_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_DownShift_ShiftedLoc, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_1, const struct FTransform& CallFunc_LeftShift_ShiftedTrans, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_1, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_RightShift_ShiftedLoc_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_1, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_4, const struct FTransform& CallFunc_DownShift_ShiftedLoc_1, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_2, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_2, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_5, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_3, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FTransform& CallFunc_UpShift_ShiftedLoc, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_3, const struct FTransform& CallFunc_UpShift_ShiftedLoc_1, const struct FTransform& CallFunc_UpShift_ShiftedLoc_2, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_6, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_4, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_5, const struct FTransform& CallFunc_UpShift_ShiftedLoc_3, const struct FTransform& CallFunc_RightShift_ShiftedLoc_3, const struct FTransform& CallFunc_UpShift_ShiftedLoc_4, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_6, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_4, const struct FTransform& CallFunc_UpShift_ShiftedLoc_5, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_7, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_7, const struct FTransform& CallFunc_UpShift_ShiftedLoc_6, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_8, const struct FTransform& CallFunc_UpShift_ShiftedLoc_7, const struct FTransform& CallFunc_UpShift_ShiftedLoc_8, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_8, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_RightShift_ShiftedLoc_4, const struct FTransform& CallFunc_UpShift_ShiftedLoc_9, const struct FTransform& CallFunc_RightShift_ShiftedLoc_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, const struct FTransform& CallFunc_DownShift_ShiftedLoc_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, const struct FTransform& CallFunc_RightShift_ShiftedLoc_6, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_6, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_9, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_9, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FTransform& CallFunc_RightShift_ShiftedLoc_7, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_10, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, const struct FTransform& CallFunc_RightShift_ShiftedLoc_8, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_8, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_11, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_11, bool K2Node_SwitchEnum_CmpSuccess_8, const struct FTransform& CallFunc_RightShift_ShiftedLoc_9, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_12, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_12, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_9, bool K2Node_SwitchEnum_CmpSuccess_9, const struct FTransform& CallFunc_RightShift_ShiftedLoc_10, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_10, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_13, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_13, const struct FRotator& CallFunc_NegateRotator_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_2, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_9, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue_1, const struct FRotator& CallFunc_NegateRotator_ReturnValue_3, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue_2, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_3, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_6, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_10, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_13, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_4, bool K2Node_SwitchEnum_CmpSuccess_10, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_14, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_12, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_14, const struct FTransform& CallFunc_RightShift_ShiftedLoc_11, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_14, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_16, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_17, bool CallFunc_ClassIsChildOf_ReturnValue_7, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_5, bool K2Node_SwitchEnum_CmpSuccess_11, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_11, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_18, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_15, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_16, const struct FTransform& CallFunc_RightShift_ShiftedLoc_12, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_17, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_12, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_19, const struct FTransform& CallFunc_RightShift_ShiftedLoc_13, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_13, const struct FTransform& CallFunc_MakeTransform_ReturnValue_15, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_13, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_20, bool CallFunc_ClassIsChildOf_ReturnValue_8, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_6, bool CallFunc_ClassIsChildOf_ReturnValue_9, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_7, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_8, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_9, const struct FTransform& CallFunc_Reverse_OutTrans, bool K2Node_SwitchEnum_CmpSuccess_12, const struct FTransform& CallFunc_UpShift_ShiftedLoc_10, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_14, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_14, const struct FTransform& CallFunc_MakeTransform_ReturnValue_16, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_21, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_15, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_22, const struct FTransform& CallFunc_RightShift_ShiftedLoc_14, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_18, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_17, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_16, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_23, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue_4, const struct FRotator& CallFunc_NegateRotator_ReturnValue_4, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_4, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_16, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue_18, const struct FTransform& CallFunc_Reverse_OutTrans_1, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_19, bool K2Node_SwitchEnum_CmpSuccess_13, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_20, const struct FVector& CallFunc_BreakTransform_Location_10, const struct FRotator& CallFunc_BreakTransform_Rotation_10, const struct FVector& CallFunc_BreakTransform_Scale_10, const struct FTransform& CallFunc_MakeTransform_ReturnValue_19, const struct FTransform& CallFunc_Reverse_OutTrans_2, bool CallFunc_ClassIsChildOf_ReturnValue_10, bool K2Node_SwitchEnum_CmpSuccess_14, bool K2Node_SwitchEnum_CmpSuccess_15, bool CallFunc_Less_FloatFloat_ReturnValue_4, const struct FTransform& CallFunc_RightShift_ShiftedLoc_15, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_24, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_21, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_17, bool K2Node_SwitchEnum_CmpSuccess_16, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_18, const struct FTransform& CallFunc_UpShift_ShiftedLoc_11, const struct FTransform& CallFunc_UpShift_ShiftedLoc_12, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_25, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_22, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_23, bool CallFunc_ClassIsChildOf_ReturnValue_11, bool CallFunc_ClassIsChildOf_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_24, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_25, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_26, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_27, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_26, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_27, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_28, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_29, bool K2Node_SwitchEnum_CmpSuccess_17, const struct FTransform& CallFunc_UpShift_ShiftedLoc_13, const struct FTransform& CallFunc_RightShift_ShiftedLoc_16, const struct FTransform& CallFunc_UpShift_ShiftedLoc_14, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_28, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_19, const struct FTransform& CallFunc_UpShift_ShiftedLoc_15, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_30, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_29, const struct FTransform& CallFunc_UpShift_ShiftedLoc_16, const struct FTransform& CallFunc_ForwardShift_ShiftedLoc_20, const struct FTransform& CallFunc_LeftShift_ShiftedTrans_30, const struct FTransform& CallFunc_UpShift_ShiftedLoc_17, const struct FTransform& CallFunc_UpShift_ShiftedLoc_18, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc_31)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Wall_C", "ShouldRotate");

	Params::ABP_Building_Wall_C_ShouldRotate_Params Parms{};

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
	Parms.WorkingDirection = WorkingDirection;
	Parms.WorkingTransform = WorkingTransform;
	Parms.CallFunc_BackwardsShift_ShiftedLoc = CallFunc_BackwardsShift_ShiftedLoc;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_InverseTransformRotation_ReturnValue = CallFunc_InverseTransformRotation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_RightShift_ShiftedLoc = CallFunc_RightShift_ShiftedLoc;
	Parms.CallFunc_RightShift_ShiftedLoc_1 = CallFunc_RightShift_ShiftedLoc_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_DownShift_ShiftedLoc = CallFunc_DownShift_ShiftedLoc;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_1 = CallFunc_BackwardsShift_ShiftedLoc_1;
	Parms.CallFunc_LeftShift_ShiftedTrans = CallFunc_LeftShift_ShiftedTrans;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_3 = CallFunc_ComposeRotators_ReturnValue_3;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_2 = CallFunc_BackwardsShift_ShiftedLoc_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_NegateRotator_ReturnValue_1 = CallFunc_NegateRotator_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_1 = CallFunc_InverseTransformRotation_ReturnValue_1;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1 = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1;
	Parms.CallFunc_ForwardShift_ShiftedLoc = CallFunc_ForwardShift_ShiftedLoc;
	Parms.CallFunc_ComposeRotators_ReturnValue_4 = CallFunc_ComposeRotators_ReturnValue_4;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_3 = CallFunc_BackwardsShift_ShiftedLoc_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_5 = CallFunc_ComposeRotators_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_RightShift_ShiftedLoc_2 = CallFunc_RightShift_ShiftedLoc_2;
	Parms.CallFunc_LeftShift_ShiftedTrans_1 = CallFunc_LeftShift_ShiftedTrans_1;
	Parms.CallFunc_ForwardShift_ShiftedLoc_1 = CallFunc_ForwardShift_ShiftedLoc_1;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_4 = CallFunc_BackwardsShift_ShiftedLoc_4;
	Parms.CallFunc_DownShift_ShiftedLoc_1 = CallFunc_DownShift_ShiftedLoc_1;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_6 = CallFunc_ComposeRotators_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_ForwardShift_ShiftedLoc_2 = CallFunc_ForwardShift_ShiftedLoc_2;
	Parms.CallFunc_LeftShift_ShiftedTrans_2 = CallFunc_LeftShift_ShiftedTrans_2;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_5 = CallFunc_BackwardsShift_ShiftedLoc_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_7 = CallFunc_ComposeRotators_ReturnValue_7;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_UpShift_ShiftedLoc = CallFunc_UpShift_ShiftedLoc;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_3 = CallFunc_LeftShift_ShiftedTrans_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_8 = CallFunc_ComposeRotators_ReturnValue_8;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_ForwardShift_ShiftedLoc_3 = CallFunc_ForwardShift_ShiftedLoc_3;
	Parms.CallFunc_UpShift_ShiftedLoc_1 = CallFunc_UpShift_ShiftedLoc_1;
	Parms.CallFunc_UpShift_ShiftedLoc_2 = CallFunc_UpShift_ShiftedLoc_2;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_6 = CallFunc_BackwardsShift_ShiftedLoc_6;
	Parms.CallFunc_LeftShift_ShiftedTrans_4 = CallFunc_LeftShift_ShiftedTrans_4;
	Parms.CallFunc_LeftShift_ShiftedTrans_5 = CallFunc_LeftShift_ShiftedTrans_5;
	Parms.CallFunc_UpShift_ShiftedLoc_3 = CallFunc_UpShift_ShiftedLoc_3;
	Parms.CallFunc_RightShift_ShiftedLoc_3 = CallFunc_RightShift_ShiftedLoc_3;
	Parms.CallFunc_UpShift_ShiftedLoc_4 = CallFunc_UpShift_ShiftedLoc_4;
	Parms.CallFunc_LeftShift_ShiftedTrans_6 = CallFunc_LeftShift_ShiftedTrans_6;
	Parms.CallFunc_ForwardShift_ShiftedLoc_4 = CallFunc_ForwardShift_ShiftedLoc_4;
	Parms.CallFunc_UpShift_ShiftedLoc_5 = CallFunc_UpShift_ShiftedLoc_5;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_7 = CallFunc_BackwardsShift_ShiftedLoc_7;
	Parms.CallFunc_LeftShift_ShiftedTrans_7 = CallFunc_LeftShift_ShiftedTrans_7;
	Parms.CallFunc_UpShift_ShiftedLoc_6 = CallFunc_UpShift_ShiftedLoc_6;
	Parms.CallFunc_ForwardShift_ShiftedLoc_5 = CallFunc_ForwardShift_ShiftedLoc_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_8 = CallFunc_LeftShift_ShiftedTrans_8;
	Parms.CallFunc_UpShift_ShiftedLoc_7 = CallFunc_UpShift_ShiftedLoc_7;
	Parms.CallFunc_UpShift_ShiftedLoc_8 = CallFunc_UpShift_ShiftedLoc_8;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_8 = CallFunc_BackwardsShift_ShiftedLoc_8;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_RightShift_ShiftedLoc_4 = CallFunc_RightShift_ShiftedLoc_4;
	Parms.CallFunc_UpShift_ShiftedLoc_9 = CallFunc_UpShift_ShiftedLoc_9;
	Parms.CallFunc_RightShift_ShiftedLoc_5 = CallFunc_RightShift_ShiftedLoc_5;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.CallFunc_DownShift_ShiftedLoc_2 = CallFunc_DownShift_ShiftedLoc_2;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_RightShift_ShiftedLoc_6 = CallFunc_RightShift_ShiftedLoc_6;
	Parms.CallFunc_ForwardShift_ShiftedLoc_6 = CallFunc_ForwardShift_ShiftedLoc_6;
	Parms.CallFunc_LeftShift_ShiftedTrans_9 = CallFunc_LeftShift_ShiftedTrans_9;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_9 = CallFunc_BackwardsShift_ShiftedLoc_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_RightShift_ShiftedLoc_7 = CallFunc_RightShift_ShiftedLoc_7;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_10 = CallFunc_BackwardsShift_ShiftedLoc_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_10 = CallFunc_LeftShift_ShiftedTrans_10;
	Parms.CallFunc_ForwardShift_ShiftedLoc_7 = CallFunc_ForwardShift_ShiftedLoc_7;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_RightShift_ShiftedLoc_8 = CallFunc_RightShift_ShiftedLoc_8;
	Parms.CallFunc_ForwardShift_ShiftedLoc_8 = CallFunc_ForwardShift_ShiftedLoc_8;
	Parms.CallFunc_LeftShift_ShiftedTrans_11 = CallFunc_LeftShift_ShiftedTrans_11;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_11 = CallFunc_BackwardsShift_ShiftedLoc_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_RightShift_ShiftedLoc_9 = CallFunc_RightShift_ShiftedLoc_9;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_12 = CallFunc_BackwardsShift_ShiftedLoc_12;
	Parms.CallFunc_LeftShift_ShiftedTrans_12 = CallFunc_LeftShift_ShiftedTrans_12;
	Parms.CallFunc_ForwardShift_ShiftedLoc_9 = CallFunc_ForwardShift_ShiftedLoc_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_RightShift_ShiftedLoc_10 = CallFunc_RightShift_ShiftedLoc_10;
	Parms.CallFunc_ForwardShift_ShiftedLoc_10 = CallFunc_ForwardShift_ShiftedLoc_10;
	Parms.CallFunc_LeftShift_ShiftedTrans_13 = CallFunc_LeftShift_ShiftedTrans_13;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_13 = CallFunc_BackwardsShift_ShiftedLoc_13;
	Parms.CallFunc_NegateRotator_ReturnValue_2 = CallFunc_NegateRotator_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_2 = CallFunc_GetTransform_ReturnValue_2;
	Parms.CallFunc_MakeRotFromX_ReturnValue_2 = CallFunc_MakeRotFromX_ReturnValue_2;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_2 = CallFunc_InverseTransformRotation_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_2 = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_9 = CallFunc_ComposeRotators_ReturnValue_9;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue_1 = CallFunc_EqualEqual_RotatorRotator_ReturnValue_1;
	Parms.CallFunc_NegateRotator_ReturnValue_3 = CallFunc_NegateRotator_ReturnValue_3;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue_2 = CallFunc_EqualEqual_RotatorRotator_ReturnValue_2;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue_3 = CallFunc_EqualEqual_RotatorRotator_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_3 = CallFunc_GetTransform_ReturnValue_3;
	Parms.CallFunc_MakeRotFromX_ReturnValue_3 = CallFunc_MakeRotFromX_ReturnValue_3;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_3 = CallFunc_InverseTransformRotation_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_3 = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_10 = CallFunc_ComposeRotators_ReturnValue_10;
	Parms.CallFunc_ComposeRotators_ReturnValue_11 = CallFunc_ComposeRotators_ReturnValue_11;
	Parms.CallFunc_MakeTransform_ReturnValue_13 = CallFunc_MakeTransform_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_14 = CallFunc_BackwardsShift_ShiftedLoc_14;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_ComposeRotators_ReturnValue_12 = CallFunc_ComposeRotators_ReturnValue_12;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_15 = CallFunc_BackwardsShift_ShiftedLoc_15;
	Parms.CallFunc_MakeTransform_ReturnValue_14 = CallFunc_MakeTransform_ReturnValue_14;
	Parms.CallFunc_RightShift_ShiftedLoc_11 = CallFunc_RightShift_ShiftedLoc_11;
	Parms.CallFunc_LeftShift_ShiftedTrans_14 = CallFunc_LeftShift_ShiftedTrans_14;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_16 = CallFunc_BackwardsShift_ShiftedLoc_16;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_17 = CallFunc_BackwardsShift_ShiftedLoc_17;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_7 = CallFunc_ClassIsChildOf_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.CallFunc_ForwardShift_ShiftedLoc_11 = CallFunc_ForwardShift_ShiftedLoc_11;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_18 = CallFunc_BackwardsShift_ShiftedLoc_18;
	Parms.CallFunc_LeftShift_ShiftedTrans_15 = CallFunc_LeftShift_ShiftedTrans_15;
	Parms.CallFunc_LeftShift_ShiftedTrans_16 = CallFunc_LeftShift_ShiftedTrans_16;
	Parms.CallFunc_RightShift_ShiftedLoc_12 = CallFunc_RightShift_ShiftedLoc_12;
	Parms.CallFunc_LeftShift_ShiftedTrans_17 = CallFunc_LeftShift_ShiftedTrans_17;
	Parms.CallFunc_ForwardShift_ShiftedLoc_12 = CallFunc_ForwardShift_ShiftedLoc_12;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_19 = CallFunc_BackwardsShift_ShiftedLoc_19;
	Parms.CallFunc_RightShift_ShiftedLoc_13 = CallFunc_RightShift_ShiftedLoc_13;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_ComposeRotators_ReturnValue_13 = CallFunc_ComposeRotators_ReturnValue_13;
	Parms.CallFunc_MakeTransform_ReturnValue_15 = CallFunc_MakeTransform_ReturnValue_15;
	Parms.CallFunc_ForwardShift_ShiftedLoc_13 = CallFunc_ForwardShift_ShiftedLoc_13;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_20 = CallFunc_BackwardsShift_ShiftedLoc_20;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_8 = CallFunc_ClassIsChildOf_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_9 = CallFunc_ClassIsChildOf_ReturnValue_9;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Reverse_OutTrans = CallFunc_Reverse_OutTrans;
	Parms.K2Node_SwitchEnum_CmpSuccess_12 = K2Node_SwitchEnum_CmpSuccess_12;
	Parms.CallFunc_UpShift_ShiftedLoc_10 = CallFunc_UpShift_ShiftedLoc_10;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_ComposeRotators_ReturnValue_14 = CallFunc_ComposeRotators_ReturnValue_14;
	Parms.CallFunc_ForwardShift_ShiftedLoc_14 = CallFunc_ForwardShift_ShiftedLoc_14;
	Parms.CallFunc_MakeTransform_ReturnValue_16 = CallFunc_MakeTransform_ReturnValue_16;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_21 = CallFunc_BackwardsShift_ShiftedLoc_21;
	Parms.CallFunc_ForwardShift_ShiftedLoc_15 = CallFunc_ForwardShift_ShiftedLoc_15;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_22 = CallFunc_BackwardsShift_ShiftedLoc_22;
	Parms.CallFunc_RightShift_ShiftedLoc_14 = CallFunc_RightShift_ShiftedLoc_14;
	Parms.CallFunc_LeftShift_ShiftedTrans_18 = CallFunc_LeftShift_ShiftedTrans_18;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_ComposeRotators_ReturnValue_15 = CallFunc_ComposeRotators_ReturnValue_15;
	Parms.CallFunc_MakeTransform_ReturnValue_17 = CallFunc_MakeTransform_ReturnValue_17;
	Parms.CallFunc_ForwardShift_ShiftedLoc_16 = CallFunc_ForwardShift_ShiftedLoc_16;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_23 = CallFunc_BackwardsShift_ShiftedLoc_23;
	Parms.CallFunc_MakeRotFromX_ReturnValue_4 = CallFunc_MakeRotFromX_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetTransform_ReturnValue_4 = CallFunc_GetTransform_ReturnValue_4;
	Parms.CallFunc_NegateRotator_ReturnValue_4 = CallFunc_NegateRotator_ReturnValue_4;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_4 = CallFunc_InverseTransformRotation_ReturnValue_4;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_4 = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_4;
	Parms.CallFunc_ComposeRotators_ReturnValue_16 = CallFunc_ComposeRotators_ReturnValue_16;
	Parms.CallFunc_ComposeRotators_ReturnValue_17 = CallFunc_ComposeRotators_ReturnValue_17;
	Parms.CallFunc_MakeTransform_ReturnValue_18 = CallFunc_MakeTransform_ReturnValue_18;
	Parms.CallFunc_Reverse_OutTrans_1 = CallFunc_Reverse_OutTrans_1;
	Parms.CallFunc_LeftShift_ShiftedTrans_19 = CallFunc_LeftShift_ShiftedTrans_19;
	Parms.K2Node_SwitchEnum_CmpSuccess_13 = K2Node_SwitchEnum_CmpSuccess_13;
	Parms.CallFunc_LeftShift_ShiftedTrans_20 = CallFunc_LeftShift_ShiftedTrans_20;
	Parms.CallFunc_BreakTransform_Location_10 = CallFunc_BreakTransform_Location_10;
	Parms.CallFunc_BreakTransform_Rotation_10 = CallFunc_BreakTransform_Rotation_10;
	Parms.CallFunc_BreakTransform_Scale_10 = CallFunc_BreakTransform_Scale_10;
	Parms.CallFunc_MakeTransform_ReturnValue_19 = CallFunc_MakeTransform_ReturnValue_19;
	Parms.CallFunc_Reverse_OutTrans_2 = CallFunc_Reverse_OutTrans_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_10 = CallFunc_ClassIsChildOf_ReturnValue_10;
	Parms.K2Node_SwitchEnum_CmpSuccess_14 = K2Node_SwitchEnum_CmpSuccess_14;
	Parms.K2Node_SwitchEnum_CmpSuccess_15 = K2Node_SwitchEnum_CmpSuccess_15;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.CallFunc_RightShift_ShiftedLoc_15 = CallFunc_RightShift_ShiftedLoc_15;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_24 = CallFunc_BackwardsShift_ShiftedLoc_24;
	Parms.CallFunc_LeftShift_ShiftedTrans_21 = CallFunc_LeftShift_ShiftedTrans_21;
	Parms.CallFunc_ForwardShift_ShiftedLoc_17 = CallFunc_ForwardShift_ShiftedLoc_17;
	Parms.K2Node_SwitchEnum_CmpSuccess_16 = K2Node_SwitchEnum_CmpSuccess_16;
	Parms.CallFunc_ForwardShift_ShiftedLoc_18 = CallFunc_ForwardShift_ShiftedLoc_18;
	Parms.CallFunc_UpShift_ShiftedLoc_11 = CallFunc_UpShift_ShiftedLoc_11;
	Parms.CallFunc_UpShift_ShiftedLoc_12 = CallFunc_UpShift_ShiftedLoc_12;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_25 = CallFunc_BackwardsShift_ShiftedLoc_25;
	Parms.CallFunc_LeftShift_ShiftedTrans_22 = CallFunc_LeftShift_ShiftedTrans_22;
	Parms.CallFunc_LeftShift_ShiftedTrans_23 = CallFunc_LeftShift_ShiftedTrans_23;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_11 = CallFunc_ClassIsChildOf_ReturnValue_11;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_12 = CallFunc_ClassIsChildOf_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_LeftShift_ShiftedTrans_24 = CallFunc_LeftShift_ShiftedTrans_24;
	Parms.CallFunc_LeftShift_ShiftedTrans_25 = CallFunc_LeftShift_ShiftedTrans_25;
	Parms.CallFunc_LeftShift_ShiftedTrans_26 = CallFunc_LeftShift_ShiftedTrans_26;
	Parms.CallFunc_LeftShift_ShiftedTrans_27 = CallFunc_LeftShift_ShiftedTrans_27;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_26 = CallFunc_BackwardsShift_ShiftedLoc_26;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_27 = CallFunc_BackwardsShift_ShiftedLoc_27;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_28 = CallFunc_BackwardsShift_ShiftedLoc_28;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_29 = CallFunc_BackwardsShift_ShiftedLoc_29;
	Parms.K2Node_SwitchEnum_CmpSuccess_17 = K2Node_SwitchEnum_CmpSuccess_17;
	Parms.CallFunc_UpShift_ShiftedLoc_13 = CallFunc_UpShift_ShiftedLoc_13;
	Parms.CallFunc_RightShift_ShiftedLoc_16 = CallFunc_RightShift_ShiftedLoc_16;
	Parms.CallFunc_UpShift_ShiftedLoc_14 = CallFunc_UpShift_ShiftedLoc_14;
	Parms.CallFunc_LeftShift_ShiftedTrans_28 = CallFunc_LeftShift_ShiftedTrans_28;
	Parms.CallFunc_ForwardShift_ShiftedLoc_19 = CallFunc_ForwardShift_ShiftedLoc_19;
	Parms.CallFunc_UpShift_ShiftedLoc_15 = CallFunc_UpShift_ShiftedLoc_15;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_30 = CallFunc_BackwardsShift_ShiftedLoc_30;
	Parms.CallFunc_LeftShift_ShiftedTrans_29 = CallFunc_LeftShift_ShiftedTrans_29;
	Parms.CallFunc_UpShift_ShiftedLoc_16 = CallFunc_UpShift_ShiftedLoc_16;
	Parms.CallFunc_ForwardShift_ShiftedLoc_20 = CallFunc_ForwardShift_ShiftedLoc_20;
	Parms.CallFunc_LeftShift_ShiftedTrans_30 = CallFunc_LeftShift_ShiftedTrans_30;
	Parms.CallFunc_UpShift_ShiftedLoc_17 = CallFunc_UpShift_ShiftedLoc_17;
	Parms.CallFunc_UpShift_ShiftedLoc_18 = CallFunc_UpShift_ShiftedLoc_18;
	Parms.CallFunc_BackwardsShift_ShiftedLoc_31 = CallFunc_BackwardsShift_ShiftedLoc_31;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}

}


