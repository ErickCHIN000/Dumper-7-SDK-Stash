#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA08 (0xCC0 - 0x2B8)
// AnimBlueprintGeneratedClass subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C
class USubAnim_npc_dialogue_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_14D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x2F8(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4B0(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x4D8(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x5A8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x628(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x6A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x6D8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x758(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x788(0x90)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x818(0x30)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x848(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x918(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x998(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xA18(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA48(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xAC8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xAF8(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xBA8(0xA0)(None)
	class ACGAICharacter*                        Owner;                                             // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldUseDialogueAnimBP;                          // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         DialogueIdleAdditive;                              // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         DialogueIdlePose;                                  // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         DialogueTransition;                                // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseSnapshot                         DialoguePrePose;                                   // 0xC70(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bSideCounter;                                      // 0xCA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1540[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         DialogueIdleAdditiveSide;                          // 0xCB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         DialogueIdlePoseSide;                              // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USubAnim_npc_dialogue_00_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_47B7D4804A80BD9DF985F3B57E22C3BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_E8F5FCD543ADC5869D881B9524855F1E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_6364D7FB45EDF810C73B0FB6EBC3CF9C();
	void AnimNotify_TransitionFinished();
	void AnimNotify_Reset();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_A5961A0440E03A2776DD409FBE60DBD3();
	void BlueprintInitializeAnimation();
	void UpdateAnims(class UAnimSequence* InPose, class UAnimSequence* InAdditive, class UAnimSequence* InTransition);
	void ExecuteUbergraph_subAnim_npc_dialogue_00(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class UAnimSequence* K2Node_CustomEvent_InPose, class UAnimSequence* K2Node_CustomEvent_InAdditive, class UAnimSequence* K2Node_CustomEvent_InTransition, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, bool Temp_bool_Variable_3, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1);
};

}


