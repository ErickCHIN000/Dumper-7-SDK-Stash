#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x651 (0xAE1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SR_JAK.BPAnim_SR_JAK_C
class UBPAnim_SR_JAK_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_280BD84D48EEFC7A694C9FBD2FFAD397; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4DC963A34814BAA42745BEBAC4A90447; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_46349F2F40412F46D18390BFFA354BA8; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_A4FB113845085DF45D273DB2E5377D3C; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C17FD5B64A2BDB0492F392837FD3E817; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D; // 0x890(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D2DD4BA7489F4A264CBE798CB17B4188; // 0x910(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5727DD124D4D8113D2494C92E427F099; // 0x9E0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_E877DF914DA2892698F829B3C1849980; // 0xA60(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SR_JAK_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_BlendListByBool_D2DD4BA7489F4A264CBE798CB17B4188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SR_JAK(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


