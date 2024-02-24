#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x470 - 0x268)
// AnimBlueprintGeneratedClass Blade_Slave_dingle_rig.Blade_Slave_dingle_rig_C
class UBlade_Slave_dingle_rig_C : public UAnimInstance
{
public:
	uint8                                        Pad_257[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x278(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x298(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2B8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x2E8(0x78)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x360(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x428(0x48)(None)

	static class UClass* StaticClass();
	static class UBlade_Slave_dingle_rig_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blade_Slave_dingle_rig(int32 EntryPoint);
};

}


