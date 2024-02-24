#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x731 (0xBC1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_PS_COV.BPAnim_PS_COV_C
class UBPAnim_PS_COV_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_03B6C67B47168729E1B7368669836631; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_50AB93734ED57DABE33477BB1B93C2B4; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F1EFA89A4A6CAA406172E0B0AEAC2E43; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_16EB0252474D80E71E4A498757193915; // 0x6B0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_17683190431222C97DAF5596CD5C9D89; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB; // 0x890(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E59EFD1648307BEE5A4878953B102BA6; // 0x910(0xF0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5439CC454655B1B6FD5DC28F81E0B94A; // 0xA00(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A3DCBBDC4D0B00614155FAA8C49A51AD; // 0xAD0(0xF0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_PS_COV_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_BlendListByBool_5439CC454655B1B6FD5DC28F81E0B94A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_PS_COV(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


