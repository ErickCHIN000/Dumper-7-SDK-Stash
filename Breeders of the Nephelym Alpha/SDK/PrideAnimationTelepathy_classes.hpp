#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12F0 (0x15C0 - 0x2D0)
// AnimBlueprintGeneratedClass PrideAnimationTelepathy.PrideAnimationTelepathy_C
class UPrideAnimationTelepathy_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_E3C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2E0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x490(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x4B0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x548(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x570(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x620(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x6A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6D0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x750(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x780(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x830(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x938(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xA40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xB48(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xC50(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xD58(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE60(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xE80(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xEA0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0xFF8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1020(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1048(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x10E8(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1168(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1198(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x12F0(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1370(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1430(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x14D0(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1570(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1598(0x28)(None)

	static class UClass* StaticClass();
	static class UPrideAnimationTelepathy_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_91E205884436F734797D6E9BEB05AF86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_6A23430F440679A3E29246A2E59DB3CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_FFBEB45C46875FD836811FBAD0897D81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_18F533B0484FDD3D778C01B69123D94E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_2843B6C542BE673F27F54AADD927DF59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DE327F8249D7970F2A21028D0384474D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_72F4CA2B4E46B666FEA63292B1A0A635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_DF3823E04B35FA85181155BD9701D0A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_ModifyBone_02C5B0194C8B705A708C2CB62DACCC83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_LookAt_8A6F28D7417617FAA4900DB80EBB30C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_BlendListByBool_9BC8A9DB4CB761E6EF230C829603F08A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_B6CD4C1A4AF3F44C937F5CAB1C177151();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_SequencePlayer_7C0D6E3141CD3220BC588C9F8F7AA813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_41D90C5B4E624F4193DAA99856FBE58D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_6DA9DD8C47567F17D03DBBB0B61B4C31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_7CDA01DC49AE275C915FE48A47F69F8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimationTelepathy_AnimGraphNode_TransitionResult_5B6E10534285BF824A923AA91187709C();
	void ExecuteUbergraph_PrideAnimationTelepathy(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


