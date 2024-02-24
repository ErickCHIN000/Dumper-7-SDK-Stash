#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass FernP3_Animation.FernP3_Animation_C
class UFernP3_Animation_C : public USexyManualCharacterAnimation
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
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x14E8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1568(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1590(0x28)(None)

	static class UClass* StaticClass();
	static class UFernP3_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_3F2BB35F48061EAE6E1F0E8CFE6ECA4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_9C3F95BA44E85B03CD90AA82305176AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_9229D2F049EF1EA273E534950B77F4A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_EE33CCDC4FECCCC1E91D69A2F492B6CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_7FDC46DE42AD3F14C4A59E9BF46564B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_DBAFCA614F813A9CE16BCB8FEDDA30E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_C21264A646D0B0BED34853A5F4F9BD93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_767D780B4DA42027B988B8AC3E85C143();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_ModifyBone_B3EC516148A9A7E0FC5ED1BB24413E3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_LookAt_6FB622214DDC950833608F9A9BBD43CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_BlendListByBool_149D53204A9ADA754A896F82049B4DD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7BC00779408CA4F2FE6E0E8DE88F9007();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_SequencePlayer_7D07C6784F7E4AC98DD6A6A83EA9ABBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5388638149296BE220A1D7BAC5FFA219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_CB0ED4B44449DD0192AE00BC1F25BC21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_5B9161A44B4D8163E51B0D88C593DE79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FernP3_Animation_AnimGraphNode_TransitionResult_086C1D734BED289757CFDE90787DA522();
	void ExecuteUbergraph_FernP3_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


