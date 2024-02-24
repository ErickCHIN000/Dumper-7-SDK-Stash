#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1A (0xD8A - 0x370)
// AnimBlueprintGeneratedClass OuterWeapon_AnimBP.OuterWeapon_AnimBP_C
class UOuterWeapon_AnimBP_C : public UTTLOuterWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F86E20874D0A973401B2158B176D0389; // 0x378(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_AF9BAE644AF86EA38A7B23A2CBF404E8; // 0x3C0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A2EBDA894209EAA31E49538C1D7981FA; // 0x408(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BADA7F46453F65EF5C679C97A481C143; // 0x450(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E14BE7164E44C8B11F193A9AE08FD706; // 0x498(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_877F36274E90C30921CDC6AE6B39A0F0; // 0x4E0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_742B24F7409FC6CB9C155A83B09E7733; // 0x528(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6DDE94BE4B4266A6986279BC63DDA921; // 0x570(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35CABD204FFDBB203E23EBA5B2CF9EF7; // 0x5B8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F33074C445C2DA4019ABACA1070FAFFE; // 0x668(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0858BBF64C4354D73AC1029B2D097FA1; // 0x6B0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_D57754764733FCEE2786488FA643E7A9; // 0x760(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_290F4E684C67D1A570FC1EBA35A03B03; // 0x7A8(0xB0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_78F1D71E4012C61EBDF891BC70EAD50B; // 0x858(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C64C505941CD3513F6077589E1E632E2; // 0x938(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_EAAFF30548EB5D395FCA20AB327B6A00; // 0x9E8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4EBA42284E580964555AA8854F1741B5; // 0xA30(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_02835CE94275CA7462332782B95E0060; // 0xB00(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_88E21F5D4A1A4B7E72EE00B87CBF3391; // 0xBB0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_88F0F4284AC2605C4A637089F8F687EC; // 0xC60(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_08681DA24555547EB33A4EAB78582061; // 0xCA8(0xE0)(None)
	bool                                         IsShifting;                                        // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStandBy;                                         // 0xD89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UOuterWeapon_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_BADA7F46453F65EF5C679C97A481C143();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_E14BE7164E44C8B11F193A9AE08FD706();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_877F36274E90C30921CDC6AE6B39A0F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_A2EBDA894209EAA31E49538C1D7981FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_742B24F7409FC6CB9C155A83B09E7733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_6DDE94BE4B4266A6986279BC63DDA921();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_BlendListByEnum_78F1D71E4012C61EBDF891BC70EAD50B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_BlendListByBool_4EBA42284E580964555AA8854F1741B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OuterWeapon_AnimBP_AnimGraphNode_TransitionResult_AF9BAE644AF86EA38A7B23A2CBF404E8();
	void AnimNotify_FunnelOpened();
	void AnimNotify_FunnelClosed();
	void AnimNotify_FunnelChargeShot();
	void AnimNotify_PlayChargeVFX();
	void AnimNotify_ChargeShotEnd();
	void ExecuteUbergraph_OuterWeapon_AnimBP(int32 EntryPoint, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun, bool K2Node_DynamicCast_bSuccess, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun1, bool K2Node_DynamicCast_bSuccess1, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun2, bool K2Node_DynamicCast_bSuccess2, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun3, bool K2Node_DynamicCast_bSuccess3, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool CallFunc_EqualEqual_ByteByte_ReturnValue7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue9);
};

}


