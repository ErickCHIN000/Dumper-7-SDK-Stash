#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x651 (0xAE1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SR_DAL.BPAnim_SR_DAL_C
class UBPAnim_SR_DAL_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3F797ABF4DA6DD09DF8BFAB93A1D9609; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C7D5E05248A156D69B6B23B1E83F38F2; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A053F8854D135E746D86FB8E29B77B78; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2BD6180145EF25FABDEDE3BAD71D8636; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_45C54889408FE472B243D9BEDF96F0D9; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_98595DEE45B90DACAC98F88B00B5DD87; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C; // 0x910(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1C4D0BD14BC310B82A6133A342FEC32A; // 0x990(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_C63BBB414785DBC3F1CBD981FF831CBC; // 0xA60(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SR_DAL_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_BlendListByBool_1C4D0BD14BC310B82A6133A342FEC32A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SR_DAL(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


