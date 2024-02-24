#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x3B0 - 0x268)
// AnimBlueprintGeneratedClass DarkFormParryAnimBP.DarkFormParryAnimBP_C
class UDarkFormParryAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_D42[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F0(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x368(0x48)(None)

	static class UClass* StaticClass();
	static class UDarkFormParryAnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_DarkFormParryAnimBP(int32 EntryPoint);
};

}


