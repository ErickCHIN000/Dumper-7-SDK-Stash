#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass ANS_Update_Warp_Transform.ANS_Update_Warp_Transform_C
class UANS_Update_Warp_Transform_C : public UAnimNotifyState
{
public:
	bool                                         TrackLocation;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OffsetTowardsSource;                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_Update_Warp_Transform_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, const struct FVector& LTargetLocation, class ABP_CreatureBase_C* LCreature, class AActor* LTarget, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_TryGetBlackboardVector_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardVector_Branches, bool CallFunc_IsTargetReachableOnNavMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetImmediateMoveDestination_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


