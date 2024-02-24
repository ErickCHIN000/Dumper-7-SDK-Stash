#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5DA (0x842 - 0x268)
// AnimBlueprintGeneratedClass UnderDog_AnimBlueprint.UnderDog_AnimBlueprint_C
class UUnderDog_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_1EF0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2A8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x2D0(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x300(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3E0(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x480(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x560(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x590(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x640(0x48)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance;                         // 0x688(0xA0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x728(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7F0(0x48)(None)
	float                                        WalkForward;                                       // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0x83C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMelee_;                                          // 0x840(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDead_;                                           // 0x841(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUnderDog_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_UnderDog_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1);
};

}


