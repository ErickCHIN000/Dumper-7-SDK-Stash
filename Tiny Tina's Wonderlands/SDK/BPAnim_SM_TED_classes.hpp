#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x990 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SM_TED.BPAnim_SM_TED_C
class UBPAnim_SM_TED_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1E269D40484A263C74B2D584401B33B9; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1BC91C774C988B9D1C607480B63D80DC; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1B150CB348131850F4F621849A24D4C9; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5008A3B2469902A8EE12ED9117B925EF; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_377E8DC84651CB4702C23E8D29BAE715; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_A43AD6D84396064FBC54F3AB71B1984F; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D; // 0x910(0x80)(None)

	static class UClass* StaticClass();
	static class UBPAnim_SM_TED_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087();
	void ExecuteUbergraph_BPAnim_SM_TED(int32 EntryPoint);
};

}


