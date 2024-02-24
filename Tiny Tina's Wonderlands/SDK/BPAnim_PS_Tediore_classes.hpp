#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x651 (0xAE1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_PS_Tediore.BPAnim_PS_Tediore_C
class UBPAnim_PS_Tediore_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9D3BA0C2412670F88A54CAA6A8528130; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_941C36444DD9587486C997B902450F45; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4E11B48C4050AB9979B96191F730D172; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2AC01F9A4AE4A6EE6A7A8EBB4CFF73FA; // 0x640(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_151F5E5046DACFBFD43723A342BE0189; // 0x760(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BA6732F345C9C5954436C6B458D46C0E; // 0x7E0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D; // 0x910(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_BF6DB7404B3B1CA77EF88DAA53125536; // 0x990(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_756DEC1B4EFAA8CD1066019BB3AB95AA; // 0xA60(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_PS_Tediore_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_BlendListByBool_BF6DB7404B3B1CA77EF88DAA53125536();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_PS_Tediore(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


