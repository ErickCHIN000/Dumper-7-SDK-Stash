#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3E8 - 0x320)
// AnimBlueprintGeneratedClass MuleDeer_Y_Dead_AnimBP.MuleDeer_Y_Dead_AnimBP_C
class UMuleDeer_Y_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x328(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x358(0x90)(None)

	static class UClass* StaticClass();
	static class UMuleDeer_Y_Dead_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MuleDeer_Y_Dead_AnimBP(int32 EntryPoint);
};

}


