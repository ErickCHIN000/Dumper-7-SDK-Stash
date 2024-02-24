#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1410 (0x16E0 - 0x2D0)
// AnimBlueprintGeneratedClass Camilla_Animation.Camilla_Animation_C
class UCamilla_Animation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x308(0xA0)(None)
	uint8                                        Pad_DED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3B0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x560(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x5F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x618(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x640(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x6F0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x770(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x810(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x890(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x8C0(0x80)(None)
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
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x11E8(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1340(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x13C0(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1480(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1520(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x15C0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1640(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1668(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1690(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x16B8(0x28)(None)

	static class UClass* StaticClass();
	static class UCamilla_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_857C80F94A3E9528AE2F67BA93B757D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_4DFBE04C44DE6F3AC5F997AA206C7159();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_356364F144A312CFAC7142B9478E70D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_3ADD61E640CB8C6DD9A4DD8A4D841E88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_06A32C234C507B1FDA718DBC5ECCD0C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_EBDA026C443FEB2484FC6591080048E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_0C9D0C6145A71D65ABC6A3A1117EBAB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_48EDB1954755CB526D0F14B701EEC3E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_ModifyBone_750AF5594AD623309D531EA68AEA67B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_LookAt_98EF67674044716C0DCF9CB500D7FC6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_B2FBAB8E493FDE27272F33A2D3426A98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_DEF5702F48212A50D9873E9B257D5539();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_BlendListByBool_05197EBD4F7E6BDF38832882B7FDBBF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_SequencePlayer_45921F2646E3783DB16C65BA40F0D80F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_34DCBA754CBB73F865ADD895FFE3F6F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_87E845F947B631DA4E7D32BB2570E9B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_77FACE2840A48A6AEC5860A7C8CAB014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Camilla_Animation_AnimGraphNode_TransitionResult_F7FB18A94EDC01C7D5CD43BAC759238D();
	void ExecuteUbergraph_Camilla_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


