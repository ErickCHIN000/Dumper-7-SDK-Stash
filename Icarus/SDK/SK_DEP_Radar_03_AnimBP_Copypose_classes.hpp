#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x4D0 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DEP_Radar_03_AnimBP_Copypose.SK_DEP_Radar_03_AnimBP_Copypose_C
class USK_DEP_Radar_03_AnimBP_Copypose_C : public UAnimInstance
{
public:
	uint8                                        Pad_6804[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x2F8(0x1D8)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class USK_DEP_Radar_03_AnimBP_Copypose_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_DEP_Radar_03_AnimBP_Copypose(int32 EntryPoint);
};

}


