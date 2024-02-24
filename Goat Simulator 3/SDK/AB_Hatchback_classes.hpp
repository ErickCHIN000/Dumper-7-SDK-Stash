#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x570 (0xFC8 - 0xA58)
// AnimBlueprintGeneratedClass AB_Hatchback.AB_Hatchback_C
class UAB_Hatchback_C : public UVehicleAnimInstance
{
public:
	uint8                                        Pad_A16[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xA68(0x30)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0xA98(0x10)(None)
	struct FAnimNode_WheelHandler                AnimGraphNode_WheelHandler;                        // 0xAA8(0xE0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xB88(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xBA8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xCB0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xDB8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xEC0(0x108)(None)

	static class UClass* StaticClass();
	static class UAB_Hatchback_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_Hatchback(int32 EntryPoint);
};

}


