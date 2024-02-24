#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A9 (0xB39 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SR_VLA.BPAnim_SR_VLA_C
class UBPAnim_SR_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ED92A80A4F01F0792A592EADEA8108E0; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_65F3D0F24E6E5CECE31727A539BDFFC3; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_893EDE564EDAF4CADBA2CB86F86BD93F; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_812C4F414AA058A051AE82B30A2DE193; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_311E7C3D4BB949FFA6BD75959663B5F4; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169; // 0x910(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4660B5874479757F1A7E57A8F99A793C; // 0x990(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_626A1BA14D43D982303D928840AC10B2; // 0xAB0(0x80)(None)
	class UAnimSequence*                         IdleAnim;                                          // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Daf_AltBarrel;                                     // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SR_VLA_C* GetDefaultObj();

	void SetIdleAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger1_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_LayeredBoneBlend_4660B5874479757F1A7E57A8F99A793C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6();
	void BlueprintSwitchedMode(int32 NewMode);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SR_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


