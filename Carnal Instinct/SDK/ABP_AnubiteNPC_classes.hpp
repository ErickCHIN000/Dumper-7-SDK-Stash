#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3B8 - 0x2B8)
// AnimBlueprintGeneratedClass ABP_AnubiteNPC.ABP_AnubiteNPC_C
class UABP_AnubiteNPC_C : public UAnimInstance
{
public:
	uint8                                        Pad_1C8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x340(0x78)(None)

	static class UClass* StaticClass();
	static class UABP_AnubiteNPC_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_AnubiteNPC(int32 EntryPoint);
};

}


