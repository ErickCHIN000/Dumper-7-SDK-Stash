#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass Monarch_Animation.Monarch_Animation_C
class UMonarch_Animation_C : public USexyManualCharacterAnimation
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
	static class UMonarch_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_2EC2F57B4899835016BFBB917438BBE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_611C41514322DC99CB3E31B0C58BECED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_321304704504685E560A1A99DE57C3F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_05EAE11E4FA9AFAA1C2B1BACC6A43692();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2ACCF3ED4456F00F1EC1E8A434312049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_068914E1435577A2AA03F1A91166E6C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_A5324F654D71F8BFDA30308E35AB570B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_2D85273E4899ECD1675255A82295CF48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_ModifyBone_62F3EB2B4D9C4662CF5C7AB55A265637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_LookAt_5FD52EA44D678C120AA10CB02C981474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_96A0DAE6465CAE110DAA78ABCDB9744F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_1D87425042C5916E1A6073BAF9185073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_BlendListByBool_AA41262E446723CFCCA49D91C9E3CA64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_SequencePlayer_C45B759846E10E1622F7BA863A762044();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_2852BC3142D2F562C41F7C8A61D1A670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_6B246B894EFE8B96A9986680E49250A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_9DC631574EA003584086C6AD2BD4DF9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Monarch_Animation_AnimGraphNode_TransitionResult_E489691C49B9182E2017B3989EF397E5();
	void ExecuteUbergraph_Monarch_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


