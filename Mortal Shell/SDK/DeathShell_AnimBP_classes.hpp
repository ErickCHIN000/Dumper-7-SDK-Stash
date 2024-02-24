#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x271 (0x4D9 - 0x268)
// AnimBlueprintGeneratedClass DeathShell_AnimBP.DeathShell_AnimBP_C
class UDeathShell_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_176C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot_1;                      // 0x2A8(0x90)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x338(0xA0)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x3D8(0x90)(None)
	struct FPoseSnapshot                         PoseSnapshot;                                      // 0x468(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPoseSnapshot                         PoseSnapshot2;                                     // 0x4A0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BlendIntoPose2_;                                   // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDeathShell_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_DeathShell_AnimBP(int32 EntryPoint);
};

}


