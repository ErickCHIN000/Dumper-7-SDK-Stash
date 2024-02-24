#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x990 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_HW_TOR.BPAnim_HW_TOR_C
class UBPAnim_HW_TOR_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_10C6FB7B497B277CACAAE38CB328DBF8; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_BF061179421BD737FA5105AE9355AE98; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F90A2BD6416BAB270DC5C7B818022889; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_801F025F4DC06C67637C32A50932F445; // 0x6B0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_309A5115458C62638FFE8F8EC2B039FE; // 0x760(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BB1EC844446DD18E629DAD8A1BB068CB; // 0x7E0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6; // 0x910(0x80)(None)

	static class UClass* StaticClass();
	static class UBPAnim_HW_TOR_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3();
	void ExecuteUbergraph_BPAnim_HW_TOR(int32 EntryPoint);
};

}


