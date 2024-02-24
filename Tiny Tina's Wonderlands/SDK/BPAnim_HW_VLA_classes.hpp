#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x508 (0x998 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_HW_VLA.BPAnim_HW_VLA_C
class UBPAnim_HW_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_EE89BBA645CCAA0E06D4BE963920A0C1; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_678646C847DF528AC1787897DFA947C6; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_89B768DF48CCEB83CE1A6D9DC9E0D410; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C2FA373C4D34CA94FD383283DA415ECF; // 0x6B0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_56BBA7D044F3F52FCED1B5919D7D129B; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0; // 0x910(0x80)(None)
	class UAnimSequence*                         IdleAnim;                                          // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPAnim_HW_VLA_C* GetDefaultObj();

	void UpdateIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger1_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void ExecuteUbergraph_BPAnim_HW_VLA(int32 EntryPoint, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


