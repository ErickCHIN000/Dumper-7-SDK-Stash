#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass ClamAnimation.ClamAnimation_C
class UClamAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x638(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x710(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x790(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x840(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x870(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x920(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xA28(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xB30(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xC38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xD40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xE48(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF50(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF70(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xF90(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x10E8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1110(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1268(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x12E8(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x13A8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1448(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x14E8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1510(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1538(0x80)(None)

	static class UClass* StaticClass();
	static class UClamAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_9DCD0D3E446769FC0BEDF2AE82084D48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_5EE290ED489B29F256E7578FF3E44C66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_F6AF9F9B467DBBF47E46A9B953716FD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_3EAB12DC4ACFB12FB56D25BCEFDD8EA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_A3497C7C4ADEC8BB58B2B58A4EB89EFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_516A358C4CB03168B219B59E7049029E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_7C555ADE462FC7C0181FEC8553567BBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0D10DBB64B3CDD4FAC81039C88CFB332();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0A287935489AEA0EC91CC8B74CF1DD7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_LookAt_442BA6314526D7A126485F8DE29FAE67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_2759848E49FA51D4F1D1628AA64AE3E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_6C6B716F4BB790A8D3F35DB92C6FF7BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_A4580A1040EE18C6A0C48E99A91FAD58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_BA2D942F4D997A1CE5660E947FC2576D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_DABD94D04127A3EF24ACF69EE335CB79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_67BF7EAC42B57508C4371BBD3AE0D0CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_6AF7B15A484F4F70BF361FB9DB1C67D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_152DFD4E4ABFD93455C358B51BF289CD();
	void ExecuteUbergraph_ClamAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


