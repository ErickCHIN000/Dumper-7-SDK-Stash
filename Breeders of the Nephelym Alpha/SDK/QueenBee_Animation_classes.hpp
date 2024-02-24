#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13A0 (0x1670 - 0x2D0)
// AnimBlueprintGeneratedClass QueenBee_Animation.QueenBee_Animation_C
class UQueenBee_Animation_C : public USexyManualCharacterAnimation
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
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x710(0x18)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x728(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x7C8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x848(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x878(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x8F8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x928(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x9D8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xAE0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xBE8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xCF0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xDF8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF00(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1008(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1028(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1048(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x11A0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x11C8(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1320(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x13A0(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1460(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1500(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x15A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x15C8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x15F0(0x80)(None)

	static class UClass* StaticClass();
	static class UQueenBee_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_76D9106C4A65B8FF3919E9AC626A822C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_B4142EC344BF4B49FB0122AA2F870EB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_CA2D658442E60974C83246BC75F93994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_14411E224F4479261D820EAC33428691();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_F3AD0592425C98C1F909D885BD3B3C3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_828C2AA145A5FA7E63B943AF78F27953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AB184F99451F04690D92CAAC042A244E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_39F487F04B5E9FF80C60398C84E6A44F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_ModifyBone_AFAA88284AECC4B01F9461AF852561D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_LookAt_00F9F13D46DB8D13CB82A587C8E5FCC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_689A34604DBF5D89FC44A8A90C9CAA74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_6FCAE49D4914481A54E1A0AA3168D9C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_BlendListByBool_1D48488C470FFB7D192F6AB6DB931928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_BD6E5DD24B7BC518B802FD82C3FE7C45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_SequencePlayer_4CF73A8C425DF8AC48A279908DD3C2F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_368D64BC432F23B2899D9E9E4954D095();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_FB0BAF3E48F6DBA2DEDF6AADE3EEB8C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_4D7A0E01421A5ADFF58A47AC3D312E80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_QueenBee_Animation_AnimGraphNode_TransitionResult_819E9CE242FF6A9CFE396E972AE8FE6F();
	void ExecuteUbergraph_QueenBee_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


