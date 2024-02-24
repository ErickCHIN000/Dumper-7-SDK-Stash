#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x651 (0xAE1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SR_HYP.BPAnim_SR_HYP_C
class UBPAnim_SR_HYP_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CE577EA2475716C904ADB7ABAD0A189F; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6EF900B247F70C6905EFE89516DCE364; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3B6F0C9C406900C9D6B5E9B4DFE93DEB; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_FE35ADED478165390EC7BA96B369B737; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A8CF2E41415DC10050117EB01EEC8406; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_B04FA9B3452C5CDC3AEEC8912E66BA8D; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906; // 0x910(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D5D34EF1428215F60057F7B7D547FC80; // 0x990(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14EDDD1E433697255DF0ACA035D07B31; // 0xA10(0xD0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SR_HYP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_BlendListByBool_14EDDD1E433697255DF0ACA035D07B31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SR_HYP(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


