#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x3B8 - 0x268)
// AnimBlueprintGeneratedClass Death_Statue_AnimBP.Death_Statue_AnimBP_C
class UDeath_Statue_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1464[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x278(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C0(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x2F0(0x90)(None)
	struct FPoseSnapshot                         PoseSnapshot;                                      // 0x380(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDeath_Statue_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Death_Statue_AnimBP(int32 EntryPoint);
};

}


