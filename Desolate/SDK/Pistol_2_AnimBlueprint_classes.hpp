#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A8 - 0x268)
// AnimBlueprintGeneratedClass Pistol_2_AnimBlueprint.Pistol_2_AnimBlueprint_C
class UPistol_2_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_110D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)

	static class UClass* StaticClass();
	static class UPistol_2_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Pistol_2_AnimBlueprint(int32 EntryPoint);
};

}


