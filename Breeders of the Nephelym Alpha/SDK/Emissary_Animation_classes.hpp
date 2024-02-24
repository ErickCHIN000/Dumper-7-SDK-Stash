#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC80 (0xF50 - 0x2D0)
// AnimBlueprintGeneratedClass Emissary_Animation.Emissary_Animation_C
class UEmissary_Animation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x3D0(0x28)(None)
	uint8                                        Pad_10B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x400(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5B0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5D0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x618(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x640(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x668(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x690(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x710(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x740(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x7C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7F0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x870(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x8A0(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x950(0x158)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAA8(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC00(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xC80(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xD40(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xDE0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE80(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xF00(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xF28(0x28)(None)

	static class UClass* StaticClass();
	static class UEmissary_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_8984F2C54BF40E57EBA3038C821886AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_F10B47204FECFF9D12CBA5B79D429777();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_518830B44EA96861B54B65BE1FA1EAE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_LookAt_2B6DA5F149FA3EB3CE5C4190863739FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_BlendListByBool_C3ACDF0340E0B0247200619787500FEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_30C71A6A4CEEE20025C882B74FD9C276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_SequencePlayer_E401A119492290F301D63DA7AA36FDB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_CE20943B4044B08B581D2389E92BCB2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_9B53BF7940CC89DC003AD2BB1AF8E4F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_BED88CD14BD0D72048651AB919BE6170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Emissary_Animation_AnimGraphNode_TransitionResult_F8879C5F4C2F4BBB032194B45D970AF0();
	void ExecuteUbergraph_Emissary_Animation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


