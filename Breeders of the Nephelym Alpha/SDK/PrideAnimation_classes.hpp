#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12F0 (0x15C0 - 0x2D0)
// AnimBlueprintGeneratedClass PrideAnimation.PrideAnimation_C
class UPrideAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_102E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	static class UPrideAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_FF3E3B5E49B18E7BD4175F905A13365B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_EC99B13D4F4338C1548BAF87AC64376E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_778955614F4AAD24BCE92FACA73EE4F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0B606E04F20275B630EF995F664F0FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C2EBA64D4C6D7AD28706C18DCFC7C234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_93C05B1C43C02FA024A68B8730847171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_9201C38E42F6EE9FDD64728DF5A5FC47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0FCBA32432EC49FEF8D92A89C968769();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_73A3059246BE710F69D17A91D244E316();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_LookAt_D4A989974C6711856BAB8FBFE3153AA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_8F90031A4BE8A7217129C39788F20D2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_918BAF1447E4F40E2AC158AB2B10DD2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_E536F2D34625A6F5D27595BB7238621D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_31D8DF0A44C791E696C254B048E5B900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_7A7D73534E03E4341B1C8A912DDD32B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_78243E4049CA3F64846E0FA935DEFCEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_14091D4C4F6F9D05E680EBBFC701A198();
	void ExecuteUbergraph_PrideAnimation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


