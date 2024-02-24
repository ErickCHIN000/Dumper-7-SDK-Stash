#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4EA (0x752 - 0x268)
// AnimBlueprintGeneratedClass Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C
class UHeavy_Brigand_Melee_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_FB7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2A8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2D0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x348(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x378(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x418(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x4F8(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5D8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x608(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x6B8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x700(0x48)(None)
	float                                        WalkForward;                                       // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CombatStance_;                                     // 0x750(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDead_;                                           // 0x751(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHeavy_Brigand_Melee_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetCombatStance(bool CombatStance_);
	void ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint(int32 EntryPoint, bool K2Node_CustomEvent_CombatStance_, float K2Node_Event_DeltaTimeX);
};

}


