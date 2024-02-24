#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x898 (0xC08 - 0x370)
// AnimBlueprintGeneratedClass WitcherOuterWeaponAnimBP.WitcherOuterWeaponAnimBP_C
class UWitcherOuterWeaponAnimBP_C : public UTTLOuterWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4BDDF71C48E93FA9A1E69EAB8685A3E5; // 0x378(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E891F9D64A9FF660D56A0EA304D27B17; // 0x3C0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BAC32F21483C8E6348A0D3B751BB90F8; // 0x408(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BC9903B5403D715F32BF2182DEB90942; // 0x450(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_898C2A584CB8CD9DD3D15AA17BFA9448; // 0x498(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50D6899947B9A56A3140ADA92B79AEF9; // 0x4E0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4A81A0D0430ABD11BC50E288A23BBD4A; // 0x528(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B5135D3146E46E99946953B8BFD441F3; // 0x570(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8376B09F4442BEFDF3CB2EB822FE06CE; // 0x5B8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_10E0445A4A60206793EDB4AFD335A356; // 0x668(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3E0D0D4B4D66BE3F37D349926910DF3C; // 0x6B0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_8C05032F47EA29061DF79FAF7DBEA065; // 0x760(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BB2C23E04FE6DE9C502E4B84E404990C; // 0x7A8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E51F4B1E45D978A964E36091ED92FACB; // 0x858(0xB0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_95806BB74F95B6EBF78C939B601DE312; // 0x908(0xE0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_B5A23DFE46D6233EA4FBAABF07D29387; // 0x9E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_910114D84813CCB5AF1790838FB5136E; // 0xA30(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_2E5A0C9F413BD9C8FF04B4BC2C8FABB3; // 0xAE0(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_FCE6C66E4516E259F17061B7D1D521C1; // 0xB28(0xE0)(None)

	static class UClass* StaticClass();
	static class UWitcherOuterWeaponAnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_BC9903B5403D715F32BF2182DEB90942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_898C2A584CB8CD9DD3D15AA17BFA9448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_BAC32F21483C8E6348A0D3B751BB90F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_50D6899947B9A56A3140ADA92B79AEF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_4A81A0D0430ABD11BC50E288A23BBD4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_B5135D3146E46E99946953B8BFD441F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_BlendListByEnum_95806BB74F95B6EBF78C939B601DE312();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WitcherOuterWeaponAnimBP_AnimGraphNode_TransitionResult_E891F9D64A9FF660D56A0EA304D27B17();
	void AnimNotify_FunnelOpened();
	void AnimNotify_FunnelClosed();
	void AnimNotify_FunnelChargeShot();
	void AnimNotify_PlayChargeVFX();
	void AnimNotify_ChargeShotEnd();
	void ExecuteUbergraph_WitcherOuterWeaponAnimBP(int32 EntryPoint, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun, bool K2Node_DynamicCast_bSuccess, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun1, bool K2Node_DynamicCast_bSuccess1, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun2, bool K2Node_DynamicCast_bSuccess2, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun3, bool K2Node_DynamicCast_bSuccess3, class AOuterHandGun_C* K2Node_DynamicCast_AsOuter_Hand_Gun4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue9);
};

}


