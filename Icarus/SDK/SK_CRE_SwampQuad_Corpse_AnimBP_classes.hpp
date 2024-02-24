#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3E8 - 0x320)
// AnimBlueprintGeneratedClass SK_CRE_SwampQuad_Corpse_AnimBP.SK_CRE_SwampQuad_Corpse_AnimBP_C
class USK_CRE_SwampQuad_Corpse_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x328(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x358(0x90)(None)

	static class UClass* StaticClass();
	static class USK_CRE_SwampQuad_Corpse_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_CRE_SwampQuad_Corpse_AnimBP(int32 EntryPoint);
};

}


