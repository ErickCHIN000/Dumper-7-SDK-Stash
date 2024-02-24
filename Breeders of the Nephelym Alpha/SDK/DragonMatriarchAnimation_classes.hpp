#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass DragonMatriarchAnimation.DragonMatriarchAnimation_C
class UDragonMatriarchAnimation_C : public USexyManualCharacterAnimation
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
	static class UDragonMatriarchAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_6CD6A25D4622CDFD5076748BBF47B282();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_C112842A44D606C5421B94BB3FA2B322();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_181D4FBA4D440B525AF7A7B44D988814();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_7CA78EAB4F3DDE64C8897F9263FC41FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_E04762F44D0364C0921BD48987F2F344();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_51DB73544EC8126033A749BF5EDC8BD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_67E512CD402ADC73BCB4F785C1268AEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_31F6F6D842A6249B47739899C43F756B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_ModifyBone_D1E71B4F479EE29F250A3FA42DD558BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_LookAt_11D11534417F09DE49C386B2D803A997();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_BlendListByBool_A68F888B42B41599F2529C8CCA36120D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_6F62E97A4D8C906B5EDF66B4DCC88F6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_0052BA174E71C664D4E371A69833CDDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_SequencePlayer_9175AA2A46C215437FBABBA59F00281C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_37291D1544A364A686E731A267811472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_A952FC9047DFB4ECB06578B24FCA5DCE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_AB13193443D213CA47AAA7B618ACA10D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DragonMatriarchAnimation_AnimGraphNode_TransitionResult_8960F5C9406B8A325CC0B9BB7D20C584();
	void ExecuteUbergraph_DragonMatriarchAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


