#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x731 (0xBC1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_PS_TOR.BPAnim_PS_TOR_C
class UBPAnim_PS_TOR_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_EE7C9BB1457A371E29A47392CB5D9124; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6B3E578A4CCE63C8AB2E35BC929C3662; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_72D6E89141845C0F400060BA11C180D8; // 0x590(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_91049C4A4E0F95015826E7BB77DDF254; // 0x640(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E; // 0x6F0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8; // 0x770(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6B654A7648640A8280B49999A25BFFBC; // 0x7F0(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FA6486F7493E73E5A424E49743C997BF; // 0x910(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_434CF9174CB4D5F2BC67758D05B7B07C; // 0xA00(0xF0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6889D92C4AE733A3490B6F9362F46C93; // 0xAF0(0xD0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_PS_TOR_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_BlendListByBool_6889D92C4AE733A3490B6F9362F46C93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_PS_TOR(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


