#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass OrcChief_Animation.OrcChief_Animation_C
class UOrcChief_Animation_C : public USexyManualCharacterAnimation
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
	static class UOrcChief_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_A878EF6A47250A2B785274BF97693783();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_0AB20B104B99F44F93C7878B5A981E21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_C5A30B8F44FA2EF144B5618FD83E392E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_BD58B45243CF7A6385F9639ADFFBEF4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_08F4058A414C58A3EC24C9BB11D46FC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_3044E0AC40388230B4A752AC66A11FA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_B87EC79D46F58FD7629536A2EBCA82A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_F54EA4ED40F09887AEE286BBC855DFE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_ModifyBone_9CE4621F42E702DCC4C966927A47390C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_LookAt_C2DDB549449609237C178CBE699C027F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_BlendListByBool_68166324470EF24589E1C590778F4F8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_415F2A8B4AC92633182AE9A653368E3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_5C5D843E4ACFCFABD4207FB771D8A776();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_SequencePlayer_4A35642E4BADACB0936902B5D2705F7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_7F8BD1FA431C48C2D199EAA8EFBAB6A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_635B70C24A8EEF1E35FAF8AC3A296CB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_C0A2E7E649D0CC977B9658B3854CAA43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_OrcChief_Animation_AnimGraphNode_TransitionResult_4928D6754FA0A1FD8A44609B9B3A938A();
	void ExecuteUbergraph_OrcChief_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


