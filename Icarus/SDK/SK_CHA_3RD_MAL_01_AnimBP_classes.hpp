#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x378 - 0x2B8)
// AnimBlueprintGeneratedClass SK_CHA_3RD_MAL_01_AnimBP.SK_CHA_3RD_MAL_01_AnimBP_C
class USK_CHA_3RD_MAL_01_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_222C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F8(0x80)(None)

	static class UClass* StaticClass();
	static class USK_CHA_3RD_MAL_01_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_CHA_3RD_MAL_01_AnimBP(int32 EntryPoint);
};

}


