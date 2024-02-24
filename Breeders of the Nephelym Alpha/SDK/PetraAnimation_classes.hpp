#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass PetraAnimation.PetraAnimation_C
class UPetraAnimation_C : public USexyManualCharacterAnimation
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
	static class UPetraAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_4891A832401D61B1566284901E73A7DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_0696BBA541E2C6F1352C11972D0475C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_16634B294DE4043E1C11D2BB4C18471A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_491456FA4F2C4FDBB505C3A29C909E4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_657B07FE4642581CF9930989D821706B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D0BFF344456945AF64FC279FB8C5137F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_D735921B48ECB751392CA99D93B54361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_E3E3F07D4F5949D42B27B5BB7F925809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_ModifyBone_5659DA884CA31D0317792D99D116C6B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_LookAt_15BB7AE1499E87B77D7C2AAC185C2D6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_C236562A47531A2E36DDB88E7B2C6B1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_7F03BB8A4C164E1C269577A04751DF19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_BlendListByBool_245D6A7F420A0B4F85FE7D9469EC6F58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_95E04FB84D3D63C1626466B4F5975AB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_SequencePlayer_2F1C261C49B1B2BDC122E8B9A5F81270();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_48AC891742C8626F0AAA31AF26C9EC4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_CEBDCA854D74F1918864BDA91D7F53F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_963E7E4F42D4A25E78AFFF8EA42671FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PetraAnimation_AnimGraphNode_TransitionResult_203936884357D65143E205A08EA47ED5();
	void ExecuteUbergraph_PetraAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


