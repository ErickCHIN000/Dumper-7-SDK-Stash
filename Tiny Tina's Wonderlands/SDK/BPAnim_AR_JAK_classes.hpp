#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA92 (0xF22 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_AR_JAK.BPAnim_AR_JAK_C
class UBPAnim_AR_JAK_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_65D61765405514CFD4DE61A728DA65B5; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_AFDAA879489D75587CCA90B9D095A6EC; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1FFC08D54788B5207EA3AAB4D511C509; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_D774ABD644B43591C11A7597402BFBD8; // 0x640(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_0CB23B1B4A1E02A2FB4E059EF87A23C5; // 0x760(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A3315CEB48B079F1D04B42A22A6E05B3; // 0x7E0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4; // 0x890(0x80)(None)
	struct FAnimNode_BlendSpaceEvaluator         AnimGraphNode_BlendSpaceEvaluator_ECA38BFD43AF093E08D8BBA91F9454CF; // 0x910(0x168)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25; // 0xA78(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E; // 0xAF8(0xD0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_86551BF64175C7499DE100A18AED4CF7; // 0xBC8(0x48)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_92BBC3264C1309D8B50075830DCDE378; // 0xC10(0x178)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_27DCB5D5456854616C410CB4A45E7B9B; // 0xD88(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_F145DE1F44F4CBFF5D8BC6BE2B27E27A; // 0xDD0(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_AC5072B44A3739DE32305193310E9084; // 0xEA0(0x80)(None)
	bool                                         bIsCrankGrip;                                      // 0xF20(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Daf_AltBarrel;                                     // 0xF21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_AR_JAK_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_F145DE1F44F4CBFF5D8BC6BE2B27E27A();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_AR_JAK(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


