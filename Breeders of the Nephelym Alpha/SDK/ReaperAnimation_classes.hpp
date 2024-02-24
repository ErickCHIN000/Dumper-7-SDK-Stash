#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D0 (0xAA0 - 0x2D0)
// AnimBlueprintGeneratedClass ReaperAnimation.ReaperAnimation_C
class UReaperAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x308(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3A8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x500(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x528(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x550(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x700(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x720(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x740(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x768(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x790(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x7B8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x860(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x890(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x910(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x940(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x9C0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x9F0(0xB0)(None)

	static class UClass* StaticClass();
	static class UReaperAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_LookAt_DF478698463CA29A517125BAF66140B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_BlendListByBool_87FF5004491CB8419FE504A5053B1E1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_01DBE1A6465575643D8B3990ACE0F60C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_SequencePlayer_2913C62A4C1CA011F3E18DA56C6554C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_ED6CDAF449F56CEFD8EAA3AF6CF387E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_328EE08C4717096C83B8DB8A9961D04B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_218C5AA246A95DBC0E54F79E71FE1E9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ReaperAnimation_AnimGraphNode_TransitionResult_CC2E29C94BF80F4F0A59E9BCCDB63266();
	void ExecuteUbergraph_ReaperAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
};

}


