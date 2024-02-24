#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass MirruAnimation.MirruAnimation_C
class UMirruAnimation_C : public USexyManualCharacterAnimation
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
	static class UMirruAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_6102AEBC462872DC0EDE339E60AD2071();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_3DCC40724F712F28C98B6280C1624300();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_615FAF1B488A1D6D82786FA9D557E1B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E64A546A4D9CB182A7FF83B5705A65F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_9B1412A84A524FD79D5A03B9DB04CA5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_3EE40C424E76D83C4882CB8663A7067A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_E36C82B043EC83F27AC8BA892D93D756();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_BDEE899348F0F4854B5C3F9EBBC8AAE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_ModifyBone_F5C8BCD74EDB4EF8DF1BFCB3AD36D266();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_LookAt_3053339A4D55160AA48997B8413DBAC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_BlendListByBool_FF1AE27D4C40BB221358D68A74F39FE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_CC45BE5C4AB8393268C50C8A74ADF8DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_SequencePlayer_4852E9204D69FD1233C726BFC9BB8F53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_9373317D4A81D46BBDD8F98281CAE497();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_989754764F664842159AC897195D5622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_57CB9ED9487809B0AA3B9FBFEC8E49DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MirruAnimation_AnimGraphNode_TransitionResult_029C1EF14426BEF8DB8DC9B964DFF6C3();
	void ExecuteUbergraph_MirruAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


