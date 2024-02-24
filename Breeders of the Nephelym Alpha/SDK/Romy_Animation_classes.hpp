#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass Romy_Animation.Romy_Animation_C
class URomy_Animation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x638(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x710(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x790(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x830(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x8B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x8E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x960(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x990(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xA40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xB48(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xC50(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xD58(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xE60(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF68(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1070(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1090(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x10B0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1208(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1230(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1388(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1408(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x14C8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1568(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1608(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1688(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x16B0(0x28)(None)

	static class UClass* StaticClass();
	static class URomy_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_72AD905942B723257BFA1A92CAE67E01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_8116480C4883BB4E61C1D198932B1660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_1909E2C04C1283C5EDF63C8B5948ACB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_8E0D7C90417624F01F4146A9B5D70E49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_14E9164F419FD3ABACEB5E8B79BADE8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_93871D634989E174B12CC2B36808D101();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_C92C46A347469857A25FE9AAED74970F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_CE99346B4AB87A666DE31D877B05FDB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_ModifyBone_E8841402412DD43B27FB2082303B7345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_LookAt_2305DB1346434BBA0F1544B8584E02C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_829D8584407C9321C30939874546C62F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_B028EA70430B368DE26AF7A05AE6D864();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_BlendListByBool_C1B5564C45F8C9A87F38B9A812CEC38F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_SequencePlayer_119C66CF442936AD837C4FA7053C44B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_CC9308C4472BB9B096A2E7A2F5A70CEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_ADD73CFD4A1162DB89C80CA4F37B9708();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_AE327FD6466FA31CF755F881D4CF874E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Romy_Animation_AnimGraphNode_TransitionResult_A185C6F548EF75E3061D29B00643B531();
	void ExecuteUbergraph_Romy_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


