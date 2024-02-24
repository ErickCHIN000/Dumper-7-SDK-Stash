#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x161 (0x419 - 0x2B8)
// AnimBlueprintGeneratedClass AnimBP_FireExtinguisher.AnimBP_FireExtinguisher_C
class UAnimBP_FireExtinguisher_C : public UAnimInstance
{
public:
	uint8                                        Pad_5D0C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F8(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x378(0xA0)(None)
	bool                                         Firing;                                            // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimBP_FireExtinguisher_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_FireExtinguisher(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_SkeletalItem_FireExtinguisher_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fire_Extinguisher, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, class UBP_Actionable_FireExtinguisher_C* K2Node_DynamicCast_AsBP_Actionable_Fire_Extinguisher, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFiring_Firing);
};

}


