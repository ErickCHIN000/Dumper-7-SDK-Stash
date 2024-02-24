#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAF9 (0xF89 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_PS_VLA.BPAnim_PS_VLA_C
class UBPAnim_PS_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_211C2640476D00732655E598561942D7; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5599A68646A093252E2C88A5D31BAAC6; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3662D8F64D1BED0E996257ACADC3C689; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3A71AA2B4971C95DC531B097494A14AC; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3757A8B8485639D398DD2797BBB1AAE7; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3; // 0x890(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_694E37CC444E93954DAF59BDD24CB7BE; // 0x910(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89; // 0xA30(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2E57BACD46B723BC987C5CAC7BCD1585; // 0xAB0(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E8D15BF34B5ED634B204D7AAD7644C13; // 0xB30(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5775BCCE4BBC278F6ADA658BC08914B8; // 0xC50(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B8A39DCC42A84397EF2D04A3F7AF2FD3; // 0xCD0(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C5DC081D4E7517FEF0E65E9625AB25D3; // 0xDF0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_61DD7C404FE789C354B45DA3C7B0041D; // 0xED0(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8EF4F84D4D0237DB97098FA7FFBE0841; // 0xF20(0x50)(None)
	class ABPWeap_VLA_BaseWeapon_C*              BaseWeapon;                                        // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         IdleAnim;                                          // 0xF78(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         MagPose;                                           // 0xF80(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Daf_AltBarrel;                                     // 0xF88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_PS_VLA_C* GetDefaultObj();

	void UpdateMagIdle(float BaseWeapon, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void UpdateIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_5775BCCE4BBC278F6ADA658BC08914B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_LayeredBoneBlend_E8D15BF34B5ED634B204D7AAD7644C13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_F3B7A5A847CA3B86C31549A4B00B2D89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_725558354C219365B9D739801201BCA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_VLA_AnimGraphNode_SequenceEvaluator_36DA10BA418E27BC8989DBB463E09580();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void CheckClipIndex();
	void ExecuteUbergraph_BPAnim_PS_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_NewMode, float CallFunc_GetValueOfAttribute_ReturnValue, class UWeaponClipReloadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


