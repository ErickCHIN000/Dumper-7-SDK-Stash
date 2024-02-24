#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x701 (0xB91 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C
class UBPAnim_PS_Jakobs_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1AE2714C4978349F824753ACAE58D1C1; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_34475B6D47701ECD7FD3FA858AE8EB5C; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4380062C48C733C6E38512BCFCDCD694; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_D3411DD5419680D9A83F82A49314DCCE; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_50DA920748F4A3C435CA258B26FE5672; // 0x760(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_151BC18947E58E4E58BB4CBBC70BBCB9; // 0x810(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958; // 0x8C0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574; // 0x940(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DD12834C4F68DAED4D90BAB6FDE1EA84; // 0x9C0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5F6FA0ED4BDC4E25811C6086CB176E24; // 0xA40(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F2DD3C8C4D0C9AFD107A7BA2601882F4; // 0xB10(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_PS_Jakobs_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_BlendListByBool_5F6FA0ED4BDC4E25811C6086CB176E24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_PS_Jakobs(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


