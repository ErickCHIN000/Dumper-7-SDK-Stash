#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD70 (0x1200 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_COV_HW.BPAnim_COV_HW_C
class UBPAnim_COV_HW_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F531BCA64B22A291D6188BA4488A2E5E; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_57B2EBA5487786F2B3C8BDB796DFAD51; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_686272B04A9F7F2AAFFFA58A9E90F75D; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5C9717034A8445D491A98B9EA38DDC47; // 0x6B0(0xB0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_AE93225F462606DDDF56B2BA0F30FA52; // 0x760(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_91616AE847A3AFD9363981B2C8F50259; // 0x7B0(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5D4A8D37484CCB82CA1612960253D967; // 0x800(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9C3690F84475CA93657A6D829E41B6E7; // 0x850(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8F0E4CC544AF30B5CA4C64BDA581A733; // 0x8A0(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_73318EC34820DCFCAC1A7A8AC3DBB1D2; // 0x8F0(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_12E4D32E49AB4476CFFD06B42999CBF4; // 0x9E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1DBEFD5B4DCC2045CE9CBA91CBEF0CBE; // 0xA28(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_A76CA3964F81C13B90441587B81DFA9B; // 0xB18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_93258F4C4271902F6C77E696623C0CA5; // 0xB60(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_996C819541486800EEB52FBE62894E77; // 0xC50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51C2CA994374DAE8F18E0A881C5F6B47; // 0xC98(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_D5D8E76647B43EBE08FFF6ADDB53CDE9; // 0xD88(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_A7A247CE43AA056F2BFA45AC3021F954; // 0xDD0(0x188)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EF52F04F4977B9DFBADD4497432E1770; // 0xF58(0xF0)(None)
	uint8                                        Pad_317B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BC5F62C84E6C5C43B4E15DBB1A43CB16; // 0x1050(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_B96060E74C42C7EF71E1CBA0749B2B08; // 0x1100(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F1073EE64AAB125A577B92B77AD4CF4E; // 0x1180(0x80)(None)

	static class UClass* StaticClass();
	static class UBPAnim_COV_HW_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequencePlayer_73318EC34820DCFCAC1A7A8AC3DBB1D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequencePlayer_1DBEFD5B4DCC2045CE9CBA91CBEF0CBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_8F0E4CC544AF30B5CA4C64BDA581A733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequenceEvaluator_B96060E74C42C7EF71E1CBA0749B2B08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequenceEvaluator_F1073EE64AAB125A577B92B77AD4CF4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_9C3690F84475CA93657A6D829E41B6E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_91616AE847A3AFD9363981B2C8F50259();
	void ExecuteUbergraph_BPAnim_COV_HW(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


