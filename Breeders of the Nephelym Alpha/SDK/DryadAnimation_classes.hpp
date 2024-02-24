#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass DryadAnimation.DryadAnimation_C
class UDryadAnimation_C : public USexyManualCharacterAnimation
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
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1608(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1630(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1658(0x80)(None)

	static class UClass* StaticClass();
	static class UDryadAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_5F4AEDBE4495769984395C8CFB2763B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_C47660BC45ECE7765EF21BB2C528C0C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_0B4CB4814F7023782A1859BB18BD325A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_91A9BD28444FB563077F7593A11CA428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B2AE6FDB4CF3111A4ED9F3B198F88B47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_AF09E6044A49C914A7B175B23D3DF78A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_41541D1A4B740F51FA5078B06883E706();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_B5A0D27A49ED933390D69FB740812A7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_ModifyBone_38A46A2D4110117F3246E8BCD24D1171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_LookAt_9C49DD51432C4D9D251D4C8831862EBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_8D07E90B4E04BDF3A31A0D90A5679424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_FD7CA4BC484A0FE10EF554B9135CDA9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_BlendListByBool_B380752C46AE47486E3C92908F1FBC40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_SequencePlayer_07E0EBB14EB06E1E7CDFCE8DCCE56943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_BBB8FDEB4683C395DAED4C8E9F1BF20C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_6A36C4A349FC0A700294D59912C86526();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_1C3B5EF9400EF44B1A8AE1A0C78B3993();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DryadAnimation_AnimGraphNode_TransitionResult_63B9F1664DD33CBBE68C50B36B6334EC();
	void ExecuteUbergraph_DryadAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


