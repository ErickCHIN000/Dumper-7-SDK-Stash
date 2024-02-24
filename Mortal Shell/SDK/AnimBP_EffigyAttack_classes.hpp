#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A0 (0x608 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_EffigyAttack.AnimBP_EffigyAttack_C
class UAnimBP_EffigyAttack_C : public UAnimInstance
{
public:
	uint8                                        Pad_F43[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2A8(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x320(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x368(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x428(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x470(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4B8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x570(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x598(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5C0(0x48)(None)

	static class UClass* StaticClass();
	static class UAnimBP_EffigyAttack_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_EffigyAttack(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


