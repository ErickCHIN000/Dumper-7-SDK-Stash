#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18C8 (0x1B98 - 0x2D0)
// AnimBlueprintGeneratedClass MegaSlime_Animation.MegaSlime_Animation_C
class UMegaSlime_Animation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2D8(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x378(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3A0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x550(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x570(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x590(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x5E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x608(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x630(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x650(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x670(0x108)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x778(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x7F8(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x828(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x848(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x868(0x108)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x970(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x9F0(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xA20(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xA40(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xA60(0x108)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xB68(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xBE8(0xA0)(None)
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel;                  // 0xC88(0x68)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xCF0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xD70(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xDF0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xE20(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xED0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xFD8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x10E0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x11E8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x12F0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x13F8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1500(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1520(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1540(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1698(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x16C0(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1818(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1898(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1958(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x19F8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1A98(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1B18(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1B40(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1B68(0x30)(None)

	static class UClass* StaticClass();
	static class UMegaSlime_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_9ED302F647C72BD3723D7786BA1E8FCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_FFA5F1A343244629D10F0BB0C6A469A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_1FF997944BC767C4C0E71696DC970B24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_C756DBC741B8346942CC749FBBD81C1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_679FB56D4FD2C3EC82B61EB633CDF1D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D992DA744A0BB320F3D27DA127156001();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_D473C6AD40A48A2B064329ABE257EED6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_6355EF204A1E5D5BC5A84AB122C0BD2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_ModifyBone_B8C3DF7E44C2B0D3E56704AE174A8CE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_LookAt_D69B076749B3786FB720E59A940A9D8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_560380B9440691CB3A543BA91D712CA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_CD50A681452AAA6D2920CB8B4E47F376();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_BlendListByBool_F555497F4D74EA2CB89D4FB9FAF655EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_E331E5804C9AE891368B74A1605FB9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_ADFC057F49AD546FDB8FDF90EBB82D93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_SequencePlayer_6818459F4DF06134A8435885433B0020();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_867002B843A16904829086ADAC6B700E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_934F9549468B14469782DB89BDD83096();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_00F0972C4730F6187CBFC092678AEE39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MegaSlime_Animation_AnimGraphNode_TransitionResult_C01612654D629CA38CA10FA2D9FB147D();
	void ExecuteUbergraph_MegaSlime_Animation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
};

}


