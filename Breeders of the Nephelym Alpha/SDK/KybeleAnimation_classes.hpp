#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass KybeleAnimation.KybeleAnimation_C
class UKybeleAnimation_C : public USexyManualCharacterAnimation
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
	static class UKybeleAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_00B9A7CB41DB18DDADAE6CBC3B6BA5ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_95AA81C24763F57C82FAB9AA7EC9C006();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_7357170C4E0DBC688E414D8DE6394B1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_13578D7D4B77CD9933F74DA3AA48DD94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F1FB1B34415157DC828BEAB9A5C22157();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_F41449FA49314C56C316B5979A79F17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_75B81E5F4C148A53AD1799A6AC87716C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_262D9DF54AF1E7E74585EDBD4C1086B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_ModifyBone_B40DCB534B367660694009BFDEBCD0DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_LookAt_F981A81747B3F8270680A39A1364E32A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_BlendListByBool_BEA26E11454C3943F6A26F859A7DB24A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_69AFF85B41E7E949DCCB3BBBB03B6293();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_SequencePlayer_B414872F4BA4979BFE6A3B9702FC7F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_4A25333044683DD295BF56BDD46AE1F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_5084BA6740BDD61C75EA3EB12F5128AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_DE7FDAE142A694A7799BD8B40F6E217A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_KybeleAnimation_AnimGraphNode_TransitionResult_6DC1557A4EED7A3FCA15DE9C30C6E171();
	void ExecuteUbergraph_KybeleAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


