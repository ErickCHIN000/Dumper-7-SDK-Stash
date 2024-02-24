#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3D0 - 0x2D0)
// AnimBlueprintGeneratedClass SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint.SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint_C
class USK_BOW_Crossbow_T4_Skeleton_AnimBlueprint_C : public UIcarusAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x308(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x350(0x80)(None)

	static class UClass* StaticClass();
	static class USK_BOW_Crossbow_T4_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_BOW_Crossbow_T4_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


