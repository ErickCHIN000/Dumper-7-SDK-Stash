#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass FaleneAnimation.FaleneAnimation_C
class UFaleneAnimation_C : public USexyManualCharacterAnimation
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
	static class UFaleneAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_0969A25045FB696B26F370B8BD17DDC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_2304297B40FBD647690F8F9AAE35EC6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_B037F9A947741F2C63CB638932139D70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_B40B879F4AB3A45D223B9AB5C88F8A4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_098D97CA44B56076A80B499E422100B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_AB7A64FD4DDFD7C3A7FC70ABB001DB3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_559CCC034760328A286ADBAA6F13E983();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_DA0ED36F40C16B2ADB7D9AB7D364BF4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_ModifyBone_360768004BA9B2846049628D37733AF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_LookAt_F01A067743E5872446EB65B7230F4112();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_D274434F4DF2BBC0E73E68B4153C7552();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_83412A0E42FF76D60A24A8AF733E1DB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_BlendListByBool_83AA146F4FE9E8204089038DA7FBD4EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_SequencePlayer_A2C9D7764A087C107D7A20BA95C2B02F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_B28A3C684D5D613D0611F8B585E51EAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_2E0767744F91F32E8C30F98F6CAC32D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_513075B9464D697B1CC2A494C4AB62DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FaleneAnimation_AnimGraphNode_TransitionResult_C0C593F34980F239CC98C69630E9A186();
	void ExecuteUbergraph_FaleneAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


