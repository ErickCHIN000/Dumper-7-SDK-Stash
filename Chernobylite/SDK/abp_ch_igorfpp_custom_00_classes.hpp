#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B8 (0x670 - 0x2B8)
// AnimBlueprintGeneratedClass abp_ch_igorfpp_custom_00.abp_ch_igorfpp_custom_00_C
class UAbp_ch_igorfpp_custom_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_25AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x378(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3C0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x518(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x540(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x600(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x628(0x48)(None)

	static class UClass* StaticClass();
	static class UAbp_ch_igorfpp_custom_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_abp_ch_igorfpp_custom_00(int32 EntryPoint);
};

}


