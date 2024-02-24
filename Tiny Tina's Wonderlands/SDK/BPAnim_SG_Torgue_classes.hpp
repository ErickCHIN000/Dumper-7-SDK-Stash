#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x731 (0xBC1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SG_Torgue.BPAnim_SG_Torgue_C
class UBPAnim_SG_Torgue_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0187AC594203BCC036C443B8B214CDD1; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_B0174F3A4B0D900F4558B5A9C626D2F7; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9D30480C42D9CF6985B3638AFC93681B; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_BA06B1CF46E8ACE6C2B5B281D64D0024; // 0x640(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E54518AC4C328B25237A44B0E7E44840; // 0x760(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_CEFA8F134B660D8CBFEA81881438DEFD; // 0x850(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D; // 0x900(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C; // 0x980(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_95D159304401C6DD37D1B0AB87E5FB2E; // 0xA00(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D48625994CC74477159B6790DEB37DEF; // 0xAD0(0xF0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SG_Torgue_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_BlendListByBool_95D159304401C6DD37D1B0AB87E5FB2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SG_Torgue(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


