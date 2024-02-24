#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x338 - 0x268)
// AnimBlueprintGeneratedClass Gun_2_AnimBlueprint.Gun_2_AnimBlueprint_C
class UGun_2_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_4D1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2A8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F0(0x48)(None)

	static class UClass* StaticClass();
	static class UGun_2_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Gun_2_AnimBlueprint(int32 EntryPoint);
};

}


