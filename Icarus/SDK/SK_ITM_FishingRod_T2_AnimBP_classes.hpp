#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x528 (0x7E0 - 0x2B8)
// AnimBlueprintGeneratedClass SK_ITM_FishingRod_T2_AnimBP.SK_ITM_FishingRod_T2_AnimBP_C
class USK_ITM_FishingRod_T2_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_49C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2E8(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x420(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4A0(0xA0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x540(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x560(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5B0(0xC0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x670(0xE8)(None)
	bool                                         ShouldSnapToHand;                                  // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HandTargetTransform;                               // 0x760(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsReeling;                                         // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BendAmount;                                        // 0x794(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPositionHistory                      LurePositionHistory;                               // 0x798(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFishDataRowHandle                    DefaultFish;                                       // 0x7C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_ITM_FishingRod_T2_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP_AnimGraphNode_ModifyBone_99CC83BD479B6388B303B6AA9641FEBC();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_ITM_FishingRod_T2_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, bool Temp_bool_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, class FName Temp_name_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class ABP_SkeletalItem_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldPlayReelingAnimation_ShouldPlay, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_BP_Skeletal_Item_Fishing_Rod, bool CallFunc_IsCasted_Casted, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_FMax_ReturnValue, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float Temp_wildcard_Variable, float CallFunc_FMin_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName Temp_name_Variable_1, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


