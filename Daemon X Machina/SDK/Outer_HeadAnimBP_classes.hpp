#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14F9 (0x19F9 - 0x500)
// AnimBlueprintGeneratedClass Outer_HeadAnimBP.Outer_HeadAnimBP_C
class UOuter_HeadAnimBP_C : public UTTLOuterHeadAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3C133F1B465821AF11FA659448330561; // 0x508(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D333059E43F79D4863C373A95D68EC36; // 0x550(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_ED0089A541182F47B9E140A5A1170CA4; // 0x598(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D9286CF54B2CF7092DFDC0B03EA74908; // 0x5E0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1C96FFEE4F6F53C1552FA39DBF8507CE; // 0x628(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D18331234D5A6782A8C29E8FDCC6A22D; // 0x670(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_ADF9FC264AA275ED55ACED995FCF2B21; // 0x6B8(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6ECA10214836C924FA12618392FF90A5; // 0x788(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48AAA4AC4C5DE11FCE4823AAD03289FF; // 0x838(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_874F8CAE40B01F00D0E960B7779C23C9; // 0x8E8(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_F9E42E23406781D4A64D0CA1D5445EED; // 0x930(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F3D1B448499DB85592B38A9F2CCF948F; // 0xA50(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AFD88862455BA76EA0B45C87202B2074; // 0xB00(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_3053F5EB436293E3C2D932AB19E5074E; // 0xBB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2DAA06714977A1AD404A9399390BCE71; // 0xBF8(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5DB4323F46E6F47B9B2AEDA05BC00FC4; // 0xCA8(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65F307C34496AE13C7AAF8BBA9C7340E; // 0xD78(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_4AE9BB834F1329992B1C41AE8BC8D1F1; // 0xE28(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_91C4514041FB3871BDFA6BB501EC6399; // 0xE70(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_CF73A0EA414844DA2FCCED84D3578431; // 0xF20(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4BC8724149AD79C3DB9B76AAC8A11155; // 0xFF0(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6C0B0DD448E5ED293954458F7716D13D; // 0x10A0(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1339BEAC4B29387A777F9CA54A2C06A8; // 0x1170(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4ADAC84F4A4A406ABB852197B7BD1A0C; // 0x1220(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_452DF21945DA34EF42512A9FE9E0057C; // 0x12F0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_FF63312B485C8CF31EA3AC84758C5F35; // 0x13A0(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_57CFC3EC4DCA961C68CF83859130DF81; // 0x13E8(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_E1839A054636736E268C1594D06EF45C; // 0x14C8(0xE0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_761AB4574C18B3A32A60168A948A6E78; // 0x15A8(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2C0F9C2A483D56E3059D888A78FE1506; // 0x1618(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_FA464FD4481C157EE2C561867AC19CFA; // 0x1668(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_215274CF475207401FEBF685A3BFFF05; // 0x16D8(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E91FA139408FAE50B335D18C89227762; // 0x1728(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2B3D9606437B2E8A04B49DBC3B6FB7EF; // 0x1798(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9C2848E54D5A2ABDE5FCEC88A350E807; // 0x17E8(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_317CF80842C09A50015815AD15A31318; // 0x18C8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_80AC7C924EF1AA7420D2FA95878B26A2; // 0x19A8(0x50)(None)
	bool                                         IsCharaEdit;                                       // 0x19F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UOuter_HeadAnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_BlendListByBool_ADF9FC264AA275ED55ACED995FCF2B21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TwoWayBlend_F9E42E23406781D4A64D0CA1D5445EED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_SequencePlayer_F3D1B448499DB85592B38A9F2CCF948F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_SequencePlayer_AFD88862455BA76EA0B45C87202B2074();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TransitionResult_D18331234D5A6782A8C29E8FDCC6A22D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_BlendListByBool_5DB4323F46E6F47B9B2AEDA05BC00FC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TransitionResult_1C96FFEE4F6F53C1552FA39DBF8507CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_BlendListByBool_CF73A0EA414844DA2FCCED84D3578431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_BlendListByBool_6C0B0DD448E5ED293954458F7716D13D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_BlendListByBool_4ADAC84F4A4A406ABB852197B7BD1A0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TransitionResult_D9286CF54B2CF7092DFDC0B03EA74908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TransitionResult_ED0089A541182F47B9E140A5A1170CA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Outer_HeadAnimBP_AnimGraphNode_TransitionResult_D333059E43F79D4863C373A95D68EC36();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Outer_HeadAnimBP(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess);
};

}


