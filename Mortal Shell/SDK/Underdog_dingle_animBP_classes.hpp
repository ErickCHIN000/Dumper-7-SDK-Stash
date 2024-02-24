#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x978 (0xBE0 - 0x268)
// AnimBlueprintGeneratedClass Underdog_dingle_animBP.Underdog_dingle_animBP_C
class UUnderdog_dingle_animBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1E02[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x278(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x298(0x78)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x310(0x440)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x750(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x770(0x30)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x7A0(0x440)(None)

	static class UClass* StaticClass();
	static class UUnderdog_dingle_animBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Underdog_dingle_animBP(int32 EntryPoint);
};

}


