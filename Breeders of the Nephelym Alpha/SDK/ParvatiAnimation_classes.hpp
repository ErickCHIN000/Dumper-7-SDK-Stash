#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1528 (0x17F8 - 0x2D0)
// AnimBlueprintGeneratedClass ParvatiAnimation.ParvatiAnimation_C
class UParvatiAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x638(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x660(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x688(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x6B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x730(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x760(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x7E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x810(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x890(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x940(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x970(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xA20(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xB28(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xC30(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xD38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xE40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF48(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1050(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1070(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1090(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x11E8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1210(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1368(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x13E8(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x14A8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1548(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x15E8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1668(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1690(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x16B8(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1778(0x80)(None)

	static class UClass* StaticClass();
	static class UParvatiAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_FCB0C17144EB82E3F00AA88F96B720ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_B9F7E6FA41AFD750F1223480BF275526();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_600120374C8F90F47B2AA78DCC7C7770();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_5791162847B95E23E66228BBD9E7BF7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_EBBBA1AA4E20E0DAEA2ED699BEB06544();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_CEBE3A66499A3F6200377A8512220F36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_BB9C0EEB4C985FECCCD9358DE66EBC6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_4ADB297E475F571DDC83C0A81F6197D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_ModifyBone_489480A04712916A580028907E978EED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_LookAt_170D259A421C30F0FF4A92B1D7B85354();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_BlendListByBool_40F1942348A9928895C0D58CED9C2DE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_63810C7F4DA6A09768BB81920D025B21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_SequencePlayer_5D9EF76A4C911766CA53D3AA988B5735();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_B20CD9EE4BBE72539AD0978528562146();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_C29B2A864EE9524FC65FC5A0224267A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_2E0B56C5425594DB421C58BAD06A8478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_7325D4B2480CA7420B09B0BD19309A97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_5A59CE7A47D4836C8CF2A08222F0409D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ParvatiAnimation_AnimGraphNode_TransitionResult_BB017D274CBA0241CF140F9D6F591588();
	void ExecuteUbergraph_ParvatiAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


