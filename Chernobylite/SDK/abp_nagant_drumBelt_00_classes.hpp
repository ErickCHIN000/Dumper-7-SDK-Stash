#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4520 (0x47D8 - 0x2B8)
// AnimBlueprintGeneratedClass abp_nagant_drumBelt_00.abp_nagant_drumBelt_00_C
class UAbp_nagant_drumBelt_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_1642[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x318(0x20)(None)
	uint8                                        Pad_164E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_15;                     // 0x340(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_14;                     // 0x780(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_13;                     // 0xBC0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_12;                     // 0x1000(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_11;                     // 0x1440(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_10;                     // 0x1880(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_9;                      // 0x1CC0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8;                      // 0x2100(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x2540(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x2980(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x2DC0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x3200(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x3640(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x3A80(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x3EC0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x4300(0x440)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4740(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x4788(0x50)(None)

	static class UClass* StaticClass();
	static class UAbp_nagant_drumBelt_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_abp_nagant_drumBelt_00(int32 EntryPoint);
};

}


