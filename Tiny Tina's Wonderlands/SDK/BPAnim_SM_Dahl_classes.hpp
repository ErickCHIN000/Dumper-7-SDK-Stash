#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB21 (0xFB1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SM_Dahl.BPAnim_SM_Dahl_C
class UBPAnim_SM_Dahl_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3FB4731B40B990C58C7063B173A9ED0F; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6B29C3C0489CC355C3FE909C2961C74E; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2D871C2B4DB5494F600EB38E3A513FF2; // 0x590(0xB0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6A048A9749BC2AA8E5D5519504D28137; // 0x640(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96; // 0x758(0xD0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_35465ABC44CB94A6F2C6229154346344; // 0x828(0x118)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9C916E514E0C77BE368A6AAF6C80BA39; // 0x940(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_4B0F591F4C5FBB94763931B5F8D5AEBE; // 0xA60(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_439C427F4A13B463C15261BC38BAA54E; // 0xAE0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_BB3A0DBD48837C2D66C98D8056D32455; // 0xB60(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_E03041D342ED4AA5D1C8C6AABD50592E; // 0xBE0(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A29182854D075974C10DE1B4618D39A5; // 0xC60(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67; // 0xD10(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308; // 0xD90(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_16EE34C049965FB49821F0A6628B0378; // 0xE10(0x118)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47; // 0xF28(0x80)(None)
	class UAnimSequence*                         ScopeIdleAnim;                                     // 0xFA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAddScopeIdleAnim;                                 // 0xFB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SM_Dahl_C* GetDefaultObj();

	void UpdateScopeAnim(uint8 Temp_byte_Variable, class UAnimSequence* Temp_object_Variable, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimSequence* K2Node_Select_Default);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void ExecuteUbergraph_BPAnim_SM_Dahl(int32 EntryPoint, int32 K2Node_Event_NewMode);
};

}


