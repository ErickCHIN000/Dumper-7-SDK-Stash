#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x851 (0xCE1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_AR_VLA.BPAnim_AR_VLA_C
class UBPAnim_AR_VLA_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	uint8                                        Pad_FA0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4404B80B4EBC5794F62FCC8E30BEFA93; // 0x4A0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_56EE15FF44005EB38C97E0AD4C4A8C9D; // 0x550(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_BDFD24ED4C995256F0056FB5140615E2; // 0x600(0x120)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E83140AA4D42D08350AE8DA1AEE5160E; // 0x720(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_136E08DB4608096D09E3028BB6C8AC5D; // 0x840(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_0D09AD044C86E387EB5D43A870303732; // 0x8C0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1; // 0x970(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794; // 0x9F0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F; // 0xA70(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_44CC04C34F62013B6499E29AA0B146ED; // 0xAF0(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_0639A6F246DB1438B73810804DB7947F; // 0xB38(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_61A470F64FDDCBA1467609833C8883B7; // 0xBB8(0x120)(None)
	class UAnimSequence*                         BarrelPoseIdle;                                    // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Daf_AltBarrel;                                     // 0xCE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_AR_VLA_C* GetDefaultObj();

	void UpdateBarrelPose(uint8 ModeType, int32 CurrentUseMode, uint8 Temp_byte_Variable, class UAnimSequence* Temp_object_Variable, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void UpdateForegripPose(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_LayeredBoneBlend_61A470F64FDDCBA1467609833C8883B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_2AFD3CDB48561E12A5B134AD40E0ED2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_196B83E448EF1A14456FB98276E2B794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_VLA_AnimGraphNode_SequenceEvaluator_8A91256A457E6BCDAD8D809F098BDAF1();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void ExecuteUbergraph_BPAnim_AR_VLA(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Event_NewMode);
};

}


