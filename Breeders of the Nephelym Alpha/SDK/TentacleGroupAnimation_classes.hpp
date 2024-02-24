#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E8 (0x9B8 - 0x2D0)
// AnimBlueprintGeneratedClass TentacleGroupAnimation.TentacleGroupAnimation_C
class UTentacleGroupAnimation_C : public USexyTentacleAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x308(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x330(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x358(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x380(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x420(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x448(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x470(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x498(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4C0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4E8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x568(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x598(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x618(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x648(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x6C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6F8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x778(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x7A8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x828(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x858(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x8D8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x908(0xB0)(None)

	static class UClass* StaticClass();
	static class UTentacleGroupAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_493B987542EC72C8788A12985F242601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_SequencePlayer_F2C10204459BE8B681F4AF97735F627E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_44CAD0CF4EE2DA065C99E4AAE52D3361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_59B8C1DB4722583438BC86BD764FAB31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_C446FEFC48BD65DE48F00BBD3E64FB8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A62043C14EB71A0C1FC7D0956B016B60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_31F0EEB34A2D9405B3A69DBEF22A2D21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_6526B43D4C01FBD84CEC5B996B026A80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E0B779E742CF87B18BD86384537926E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_9B472A4140BBCB5A4C54E7BD06389AAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_E6619E6E4F9C852B359695BAEEAC155C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_053D280F4B469762387A3C926021229D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_3BFDF81C4041F49D8D27809B9BEFCFF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TentacleGroupAnimation_AnimGraphNode_TransitionResult_A0E91C004F1B8D52D47B47ABC017C59E();
	void AnimNotify_EmergeComplete();
	void AnimNotify_SubmergeComplete();
	void ExecuteUbergraph_TentacleGroupAnimation(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool Temp_bool_IsClosed_Variable_1);
};

}


