#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFAC (0x1214 - 0x268)
// AnimBlueprintGeneratedClass Darkdweller_AnimationBlueprint.Darkdweller_AnimationBlueprint_C
class UDarkdweller_AnimationBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_E2A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x2D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x320(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x348(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x3C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x3F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x468(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x498(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x4C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x4E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x510(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x538(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x560(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x588(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x5B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x5D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x600(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x628(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x650(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x678(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x6A0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x6C8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x740(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x770(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x7E8(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_1;                      // 0x818(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x890(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x938(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x968(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x9E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xA10(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xA88(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xAB8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xB30(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0xB60(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xBD8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0xC08(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xCB8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xCE8(0xB0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xD98(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xDC0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xE08(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xEC8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xEF0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xF38(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xFF0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1010(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x1030(0x1B0)(None)
	class ADarkdweller_Character_C*              Character;                                         // 0x11E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x11E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x11EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkRatio_150;                                     // 0x11F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunRatio_450;                                      // 0x11F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastState;                                         // 0x11F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInFight;                                         // 0x11F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsWorried;                                         // 0x11FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInAlert;                                         // 0x11FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDemoniac;                                        // 0x11FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStuned;                                          // 0x11FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EDarkweller_PatrolTypes           LastPatrolType;                                    // 0x11FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastIdleCheckState;                                // 0x11FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDarkweller_PatrolTypes           LastIdleState;                                     // 0x1200(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IdleStateEat;                                      // 0x1201(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFearOfLight;                                     // 0x1202(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E69[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtAlpha;                                       // 0x1204(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x1208(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDarkdweller_AnimationBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AB_SyncIdleType(enum class EAIStates State, enum class EDarkweller_PatrolTypes IdleType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AB_SyncState(enum class EAIStates State, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_7FA9D0B84B4C45FB7EC23A8007DA3F6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_B7D2B7CE41E5F12102D3BF8F7E525A23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8EDAE0914F1EF0EA3B318A9A51AD6A3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_8784A6934FF693DA7FBC6197981A6B92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_D86D3543468A22DE1885A4B354DE952A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Darkdweller_AnimationBlueprint_AnimGraphNode_TransitionResult_3BF578774099AFB93427ACA4C044511D();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Footstep();
	void AnimNotify_ThrowStone();
	void AnimNotify_StopDaze();
	void ExecuteUbergraph_Darkdweller_AnimationBlueprint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ADarkdweller_Character_C* K2Node_DynamicCast_AsDarkdweller_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1);
};

}


