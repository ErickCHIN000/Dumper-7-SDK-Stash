#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x898 (0xB50 - 0x2B8)
// AnimBlueprintGeneratedClass SK_ITM_Lantern_AnimBP.SK_ITM_Lantern_AnimBP_C
class USK_ITM_Lantern_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2547[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2C8(0x20)(None)
	uint8                                        Pad_2552[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x2F0(0x830)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB20(0x30)(None)

	static class UClass* StaticClass();
	static class USK_ITM_Lantern_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_ITM_Lantern_AnimBP(int32 EntryPoint);
};

}


