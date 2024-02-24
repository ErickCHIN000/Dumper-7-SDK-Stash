#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x350 - 0x2D0)
// AnimBlueprintGeneratedClass 1ST_GUN_Shotgun_Rig_AnimBP.1ST_GUN_Shotgun_Rig_AnimBP_C
class UOneST_GUN_Shotgun_Rig_AnimBP_C : public UIcarusAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x308(0x48)(None)

	static class UClass* StaticClass();
	static class UOneST_GUN_Shotgun_Rig_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_1ST_GUN_Shotgun_Rig_AnimBP(int32 EntryPoint);
};

}


