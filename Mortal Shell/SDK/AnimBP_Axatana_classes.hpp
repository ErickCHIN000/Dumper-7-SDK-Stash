#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_Axatana.AnimBP_Axatana_C
class UAnimBP_Axatana_C : public UAnimInstance
{
public:
	uint8                                        Pad_2EDE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UAnimBP_Axatana_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_Axatana(int32 EntryPoint);
};

}


