#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x599 (0x801 - 0x268)
// AnimBlueprintGeneratedClass ThirdPerson_AnimBP.ThirdPerson_AnimBP_C
class UThirdPerson_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_271[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x370(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x398(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x410(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x440(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4E8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x560(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x590(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x608(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x638(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x718(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x748(0xB0)(None)
	bool                                         IsInAir_;                                          // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_287[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMeleeAtk_;                                       // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UThirdPerson_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_A95B9118482B787DE4D11787597B31B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E();
	void AnimNotify_LeftAttack();
	void ExecuteUbergraph_ThirdPerson_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, class AThirdPersonCharacter_C* K2Node_DynamicCast_AsThird_Person_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class AThirdPersonCharacter_C* K2Node_DynamicCast_AsThird_Person_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


