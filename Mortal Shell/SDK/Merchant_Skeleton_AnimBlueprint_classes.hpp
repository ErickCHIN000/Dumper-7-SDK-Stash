#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass Merchant_Skeleton_AnimBlueprint.Merchant_Skeleton_AnimBlueprint_C
class UMerchant_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_CFD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2A8(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x320(0x48)(None)

	static class UClass* StaticClass();
	static class UMerchant_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Merchant_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


