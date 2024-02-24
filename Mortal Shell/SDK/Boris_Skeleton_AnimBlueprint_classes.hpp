#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x519 (0x781 - 0x268)
// AnimBlueprintGeneratedClass Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C
class UBoris_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_404[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2A8(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x320(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x368(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x470(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x510(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x5C8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x5F0(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x618(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x638(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x658(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6D0(0xA0)(None)
	bool                                         IsInCombat_;                                       // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_420[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationToLookAtPlayer;                            // 0x774(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDiedInCombat;                                     // 0x780(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBoris_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_04450E3B4AE0E4D3A5FF8090FCACFC66();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Boris_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_BorisEnemy_C* K2Node_DynamicCast_AsBP_Boris_Enemy, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
};

}


