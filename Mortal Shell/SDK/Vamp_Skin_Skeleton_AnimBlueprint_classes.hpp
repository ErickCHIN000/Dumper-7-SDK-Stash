#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A8 (0xC10 - 0x268)
// AnimBlueprintGeneratedClass Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C
class UVamp_Skin_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_B62[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x2F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x318(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x340(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x368(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x390(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x408(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x430(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x458(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x538(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x568(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x5E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x610(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x688(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6B8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x730(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x760(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x840(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x870(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x910(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x988(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xA00(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xA30(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xB10(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xB40(0xB0)(None)
	float                                        WalkForward;                                       // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0xBF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead_;                                           // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DeathPose;                                         // 0xBF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Running;                                           // 0xBFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FwdJumpStart;                                      // 0xBFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FwdJumpLand;                                       // 0xBFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStrafing;                                        // 0xBFD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StrafeMovementTarget;                              // 0xC00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IdleStartPos;                                      // 0xC0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVamp_Skin_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateStrafeWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7C5BD07F42B6E5A430526C9849EFAE67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6E0A467E4431CD13577246B919706411();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void DeathAnim();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
};

}


