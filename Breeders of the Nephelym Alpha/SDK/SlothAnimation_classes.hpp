#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC80 (0xF50 - 0x2D0)
// AnimBlueprintGeneratedClass SlothAnimation.SlothAnimation_C
class USlothAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x300(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x328(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x350(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x378(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x428(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x4A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4D8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x558(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x588(0xB0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x638(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x658(0x20)(None)
	uint8                                        Pad_10B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x680(0x1B0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x830(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x858(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x880(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x920(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x950(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xAA8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAD0(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC28(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xCA8(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xD68(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xE08(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xEA8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xF28(0x28)(None)

	static class UClass* StaticClass();
	static class USlothAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_2E23465449B296D4D27CCE9EBBBCF6FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_755C625D4123201527497A8CA60E11CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_B0A78881480A78B010DFC28038209C35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_LookAt_735566C343F3AA5DF52AA3A321C7AB91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_BlendListByBool_D7F9601D4587628F3DD2BFB88F04E844();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_6479A24741BE831CDCABA29DDDDF583C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_SequencePlayer_ABE726CA4673DEA917586496C1476DF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CF179CF745790CB65A3A159F0B999F4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_988389454A2917C5A6599587E0F3624B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_CD3D830A4AE444114A0C88A6F8ABA5DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlothAnimation_AnimGraphNode_TransitionResult_66C73AE44BC90136375E53834935AE24();
	void ExecuteUbergraph_SlothAnimation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


