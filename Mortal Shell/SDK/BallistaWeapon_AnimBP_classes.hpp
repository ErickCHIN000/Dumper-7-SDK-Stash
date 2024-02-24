#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2F0 - 0x268)
// AnimBlueprintGeneratedClass BallistaWeapon_AnimBP.BallistaWeapon_AnimBP_C
class UBallistaWeapon_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_F2E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)(None)

	static class UClass* StaticClass();
	static class UBallistaWeapon_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BallistaWeapon_AnimBP(int32 EntryPoint);
};

}


