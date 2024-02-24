#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x990 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C
class UBPAnim_SM_Hyperion_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5754B83B40788B433D763CA8AD34740E; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_0B518AD64C1A78ABB2E29A9B1C8E0681; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5C0DC1FE4C8F398C96F83BBEB5F689A2; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_97EA4D454A904344B5C31C8C5C00CE4F; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E825E7234BDD66C8D489FA82E111F2F5; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F74361BE4FC0F4ADEDEC53B64E5942C1; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4; // 0x910(0x80)(None)

	static class UClass* StaticClass();
	static class UBPAnim_SM_Hyperion_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993();
	void ExecuteUbergraph_BPAnim_SM_Hyperion(int32 EntryPoint);
};

}


