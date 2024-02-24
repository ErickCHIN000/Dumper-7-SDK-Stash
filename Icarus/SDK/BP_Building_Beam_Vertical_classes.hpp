#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC70 - 0xC68)
// BlueprintGeneratedClass BP_Building_Beam_Vertical.BP_Building_Beam_Vertical_C
class ABP_Building_Beam_Vertical_C : public ABP_Building_Beam_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Building_Beam_Vertical_C* GetDefaultObj();

	void DecideShifting(const struct FRotator& RotationToTest_world_, const struct FRotator& RotationTestingAgainst_gridspace_, const struct FTransform& GridSpaceLOCHitPlaneRot, class UClass* Building_Class, float DistanceBetweenHitAndCenter, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections* RelativeRotationEnum, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtraDelta, const struct FTransform& CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections CallFunc_DecideShifting_RelativeRotationEnum, bool CallFunc_DecideShifting_WantsBlockLikePlacement, const struct FTransform& CallFunc_DecideShifting_BlockLikePlacementExtraDelta, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceRotation, const struct FTransform& WorkingTrans, enum class ERotationalDirections WorkingDirection, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, const struct FRotator& CallFunc_NegateRotator_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_BackwardsShift_ShiftedLoc, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool CallFunc_ClassIsChildOf_ReturnValue_5);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Building_Beam_Vertical(int32 EntryPoint);
};

}


