#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBB9 (0x1049 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_DAL_PS.BPAnim_DAL_PS_C
class UBPAnim_DAL_PS_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_E792443B4554FE6FC64510A3C4280BB7; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_BDBE5BAC44BF3F7DE42D8CBC29F77ECB; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2B52A8764DB96C8E0BC0E1B57C226F11; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A2619D4A497C3107BC95209699533DE0; // 0x6B0(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0; // 0x760(0xD0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_53B91A1A40F83E7D241E87BDAB0275E1; // 0x830(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3; // 0x8E0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C; // 0x960(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_01959E4947722FDC37E5E59B31524A81; // 0x9E0(0x118)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D; // 0xAF8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_028D775D4FDCE173BC8FBFB7FEA3973F; // 0xB78(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_A23C65D94FC1D8230C9CD4BAACA4966C; // 0xC58(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_55925CDA4C929B6EA75BBAAD314341DE; // 0xD28(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_C2B98A39464C7C635AA0A38C0C707523; // 0xDA8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_436F122D49CC00439CDC57A347D785E9; // 0xE28(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7CB0CC9842FE053D73E8B78C8E4BDADD; // 0xE78(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_C21B448F40475160E71153BB52371B18; // 0xEC8(0x120)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9140AA7C4E3ECCDD6405AEA51D25ADD4; // 0xFE8(0x50)(None)
	bool                                         bAddScopeAnim;                                     // 0x1038(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         ScopeAddIdleAnim;                                  // 0x1040(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Daf_AltBarrel;                                     // 0x1048(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_DAL_PS_C* GetDefaultObj();

	void UpdateScopeAnim(int32 UseMode, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_LayeredBoneBlend_C21B448F40475160E71153BB52371B18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_A23C65D94FC1D8230C9CD4BAACA4966C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void ExecuteUbergraph_BPAnim_DAL_PS(int32 EntryPoint, class UAnimSequence* Temp_object_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, class UAnimSequence* Temp_object_Variable3, uint8 Temp_byte_Variable, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


