#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC70 - 0xC68)
// BlueprintGeneratedClass BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C
class ABP_Building_Beam_Diagnal_C : public ABP_Building_Beam_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Building_Beam_Diagnal_C* GetDefaultObj();

	void GetBlockingBypass(class UClass* BuildingClass, TArray<struct FVectorPair>& BlockingPreRotate, const struct FTransform& GridSpaceTransform, TArray<struct FVectorPair>* BypassBlocking, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_NotEqual_RotatorRotator_ReturnValue_1, TArray<struct FVectorPair>& K2Node_MakeArray_Array, const struct FVectorPair& K2Node_MakeStruct_VectorPair, bool CallFunc_ClassIsChildOf_ReturnValue, TArray<struct FVectorPair>& K2Node_MakeArray_Array_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1);
	void DecideShifting(const struct FRotator& RotationToTest_world_, const struct FRotator& RotationTestingAgainst_gridspace_, const struct FTransform& GridSpaceLOCHitPlaneRot, class UClass* Building_Class, float DistanceBetweenHitAndCenter, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections* RelativeRotationEnum, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtraDelta, const struct FTransform& CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot, enum class ERotationalDirections CallFunc_DecideShifting_RelativeRotationEnum, bool CallFunc_DecideShifting_WantsBlockLikePlacement, const struct FTransform& CallFunc_DecideShifting_BlockLikePlacementExtraDelta, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void ShouldRotate(enum class ERotationalDirections Direction, const struct FTransform& GridSpaceTrans, class UClass* NewBuilding, float HitDistanceFromCenter, const struct FVector& Dots, const struct FRotator& WorldRotToTest, const struct FRotator& GridspaceRotTestAgainst, const struct FVector& RawHitNormal, class ACharacter* Player, struct FTransform* Shifted, bool* WantsBlockLikePlacement, struct FTransform* BlockLikePlacementExtra, const struct FTransform& ExtraGridSpaceRotation, enum class ERotationalDirections WorkingDirection, const struct FTransform& WorkingTrans, bool Temp_bool_Variable, const struct FTransform& CallFunc_ShouldRotate_Shifted, bool CallFunc_ShouldRotate_WantsBlockLikePlacement, const struct FTransform& CallFunc_ShouldRotate_BlockLikePlacementExtra, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, const struct FRotator& CallFunc_NegateRotator_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FRotator& CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ClassIsChildOf_ReturnValue_6);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Building_Beam_Diagnal(int32 EntryPoint);
};

}


