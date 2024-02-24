#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x934 (0xC54 - 0x320)
// AnimBlueprintGeneratedClass SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C
class USKMinusDeer_Dead_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x328(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x358(0x90)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3E8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x488(0x80)(None)
	uint8                                        Pad_2F65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x510(0x260)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x770(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x790(0x20)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_1;                        // 0x7B0(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone;                          // 0x8D8(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xA00(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xB58(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xB80(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xC20(0x28)(None)
	struct FVector                               FakeVelocity;                                      // 0xC48(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USKMinusDeer_Dead_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SKMinusDeer_Dead_AnimBP(int32 EntryPoint);
};

}


