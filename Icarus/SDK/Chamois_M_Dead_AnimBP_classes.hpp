#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x374 (0x694 - 0x320)
// AnimBlueprintGeneratedClass Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C
class UChamois_M_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x328(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x480(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x500(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x5A0(0x28)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x5C8(0x90)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x658(0x30)(None)
	struct FVector                               FakeVelocity;                                      // 0x688(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChamois_M_Dead_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Chamois_M_Dead_AnimBP(int32 EntryPoint);
};

}


