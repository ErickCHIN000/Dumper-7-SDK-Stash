#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C
// (Actor)

class UClass* ABP_Building_Beam_Diagnal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Beam_Diagnal_C");

	return Clss;
}


// BP_Building_Beam_Diagnal_C BP_Building_Beam_Diagnal.Default__BP_Building_Beam_Diagnal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Beam_Diagnal_C* ABP_Building_Beam_Diagnal_C::GetDefaultObj()
{
	static class ABP_Building_Beam_Diagnal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Beam_Diagnal_C*>(ABP_Building_Beam_Diagnal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.GetBlockingBypass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BuildingClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVectorPair>         BlockingPreRotate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  GridSpaceTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         BypassBlocking                                                   (Parm, OutParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         CallFunc_GetBlockingBypass_BypassBlocking                        (ReferenceParm)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair                                     (NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         CallFunc_GetBlockingBypass_BypassBlocking_1                      (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Beam_Diagnal_C::GetBlockingBypass(class UClass* BuildingClass, TArray<struct FVectorPair>& BlockingPreRotate, const struct FTransform& GridSpaceTransform, TArray<struct FVectorPair>* BypassBlocking, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_NotEqual_RotatorRotator_ReturnValue_1, TArray<struct FVectorPair>& K2Node_MakeArray_Array, const struct FVectorPair& K2Node_MakeStruct_VectorPair, bool CallFunc_ClassIsChildOf_ReturnValue, TArray<struct FVectorPair>& K2Node_MakeArray_Array_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Diagnal_C", "GetBlockingBypass");

	Params::ABP_Building_Beam_Diagnal_C_GetBlockingBypass_Params Parms{};

	Parms.BuildingClass = BuildingClass;
	Parms.BlockingPreRotate = BlockingPreRotate;
	Parms.GridSpaceTransform = GridSpaceTransform;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetBlockingBypass_BypassBlocking = CallFunc_GetBlockingBypass_BypassBlocking;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue = CallFunc_NotEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue_1 = CallFunc_NotEqual_RotatorRotator_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_VectorPair = K2Node_MakeStruct_VectorPair;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_GetBlockingBypass_BypassBlocking_1 = CallFunc_GetBlockingBypass_BypassBlocking_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (BypassBlocking != nullptr)
		*BypassBlocking = std::move(Parms.BypassBlocking);

}


// Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.DecideShifting
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
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_Building_Beam_Diagnal_C::DecideShifting(const struct FRotator& RotationToTest_world_, const struct FRotator& RotationTestingAgainst_gridspace_, const struct FTransform& GridSpaceLOCHitPlaneRot, class UClass* Building_Class, float DistanceBetweenHitAndCenter, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections* RelativeRotationEnum, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtraDelta, const struct FTransform& CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections CallFunc_DecideShifting_RelativeRotationEnum, bool CallFunc_DecideShifting_WantsBlockLikePlacement, const struct FTransform& CallFunc_DecideShifting_BlockLikePlacementExtraDelta, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Diagnal_C", "DecideShifting");

	Params::ABP_Building_Beam_Diagnal_C_DecideShifting_Params Parms{};

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
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

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


// Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ShouldRotate
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
// struct FTransform                  ExtraGridSpaceRotation                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// enum class ERotationalDirections   WorkingDirection                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  WorkingTrans                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ShouldRotate_Shifted                                    (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldRotate_WantsBlockLikePlacement                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ShouldRotate_BlockLikePlacementExtra                    (IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot(ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Beam_Diagnal_C::ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceRotation, enum class ERotationalDirections WorkingDirection, const struct FTransform& WorkingTrans, bool Temp_bool_Variable, const struct FTransform& CallFunc_ShouldRotate_Shifted, bool CallFunc_ShouldRotate_WantsBlockLikePlacement, const struct FTransform& CallFunc_ShouldRotate_BlockLikePlacementExtra, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, const struct FRotator& CallFunc_NegateRotator_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ClassIsChildOf_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Diagnal_C", "ShouldRotate");

	Params::ABP_Building_Beam_Diagnal_C_ShouldRotate_Params Parms{};

	Parms.Direction = Direction;
	Parms.GridSpaceTrans = GridSpaceTrans;
	Parms.NewBuilding = NewBuilding;
	Parms.HitDistanceFromCenter = HitDistanceFromCenter;
	Parms.Dots = Dots;
	Parms.WorldRotToTest = WorldRotToTest;
	Parms.GridspaceRotTestAgainst = GridspaceRotTestAgainst;
	Parms.RawHitNormal = RawHitNormal;
	Parms.Player = Player;
	Parms.ExtraGridSpaceRotation = ExtraGridSpaceRotation;
	Parms.WorkingDirection = WorkingDirection;
	Parms.WorkingTrans = WorkingTrans;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ShouldRotate_Shifted = CallFunc_ShouldRotate_Shifted;
	Parms.CallFunc_ShouldRotate_WantsBlockLikePlacement = CallFunc_ShouldRotate_WantsBlockLikePlacement;
	Parms.CallFunc_ShouldRotate_BlockLikePlacementExtra = CallFunc_ShouldRotate_BlockLikePlacementExtra;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_InverseTransformRotation_ReturnValue = CallFunc_InverseTransformRotation_ReturnValue;
	Parms.CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot = CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_5 = CallFunc_ClassIsChildOf_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_6 = CallFunc_ClassIsChildOf_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Shifted != nullptr)
		*Shifted = std::move(Parms.Shifted);

	if (WantsBlockLikePlacement != nullptr)
		*WantsBlockLikePlacement = Parms.WantsBlockLikePlacement;

	if (BlockLikePlacementExtra != nullptr)
		*BlockLikePlacementExtra = std::move(Parms.BlockLikePlacementExtra);

}


// Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Building_Beam_Diagnal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Diagnal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ExecuteUbergraph_BP_Building_Beam_Diagnal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Building_Beam_Diagnal_C::ExecuteUbergraph_BP_Building_Beam_Diagnal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_Diagnal_C", "ExecuteUbergraph_BP_Building_Beam_Diagnal");

	Params::ABP_Building_Beam_Diagnal_C_ExecuteUbergraph_BP_Building_Beam_Diagnal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


