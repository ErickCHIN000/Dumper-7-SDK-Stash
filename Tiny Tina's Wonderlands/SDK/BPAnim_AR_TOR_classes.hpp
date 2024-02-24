#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x741 (0xBD1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_AR_TOR.BPAnim_AR_TOR_C
class UBPAnim_AR_TOR_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CAFAC3FC40DA13C3BDF30CB0439E9703; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_49B8462F40941AF12B60CD9A7A244AE5; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_299D0E87445C3163F6A3C9BA31B266C7; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F513FFE140D2C0A12A96D8A134C60F6D; // 0x6B0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_46EF68C64D95A41104E203AB4EAC91B1; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F; // 0x890(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_502C797A4CC649639D04B0BEE2CF0042; // 0x910(0xF0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_00BAFCE04C9704271B0003BC9553B839; // 0xA00(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1AE0AB25437224F76641F5B312790ECF; // 0xA80(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_9211FDDB46F0CD0F95D37982C3A9C9B6; // 0xB50(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xBD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_AR_TOR_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_BlendListByBool_1AE0AB25437224F76641F5B312790ECF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_AR_TOR(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


