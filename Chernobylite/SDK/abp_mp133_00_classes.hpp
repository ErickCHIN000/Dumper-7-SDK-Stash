#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x390 - 0x2B8)
// AnimBlueprintGeneratedClass abp_mp133_00.abp_mp133_00_C
class UAbp_mp133_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_42E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x2F8(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x348(0x48)(None)

	static class UClass* StaticClass();
	static class UAbp_mp133_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_abp_mp133_00(int32 EntryPoint);
};

}


