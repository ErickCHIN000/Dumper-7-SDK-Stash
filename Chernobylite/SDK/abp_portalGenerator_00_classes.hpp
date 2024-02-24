#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x699 (0x951 - 0x2B8)
// AnimBlueprintGeneratedClass abp_portalGenerator_00.abp_portalGenerator_00_C
class UAbp_portalGenerator_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_1301[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	uint8                                        Pad_130D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x300(0x440)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x740(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x760(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x780(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x800(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x848(0x108)(None)
	bool                                         bCrystalOn;                                        // 0x950(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_portalGenerator_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_portalGenerator_00_AnimGraphNode_ModifyBone_AA117E144C77DB998020E384A1CCDCD9();
	void ExecuteUbergraph_abp_portalGenerator_00(int32 EntryPoint, const struct FVector& CallFunc_SelectVector_ReturnValue);
};

}


