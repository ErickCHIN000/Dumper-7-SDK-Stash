#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass Leylanna_Animation.Leylanna_Animation_C
class ULeylanna_Animation_C : public USexyManualCharacterAnimation
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
	static class ULeylanna_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_A90C8F8F4C138C694916908C1D3C3C02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_57E20DFD429D3CAC85E9B79E409C2CED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_F9BD4A1248920FCF9E7918AAC8C5819F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_C4C7BDE947F03F910AC5CFB9DEF82557();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_AFBF2B08435336CC444B438B966F8A3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_A423EAB2446C9230956C9E8FF748A06D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_20E617614989F195C3C16386E45A72BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_D243C64F421F43997AC5B7A9DDE9A23A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_ModifyBone_92B9EC544146B3AD69AD34A92FA744F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_LookAt_113BDFFA416479535D3C5CBC0532A5D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_5450B2CB48876052432E0FBA53C48B31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_FCD8BF8E4285BE785C7FD3A365EDFEC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_BlendListByBool_E0EE521A4433E41D66F0F68B80598E80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_SequencePlayer_BAD671F34844B0A54BD5F4BE7C377DFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_A7F5943C4B8CE1555FB948A8AA5FAAAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_D6082C054EDFC3B5D227FD8C0DD08BE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_F5BFAB3145AEB041D79599B36B74D3E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leylanna_Animation_AnimGraphNode_TransitionResult_230F478746CCC1B6B6556FA38F19A977();
	void ExecuteUbergraph_Leylanna_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


