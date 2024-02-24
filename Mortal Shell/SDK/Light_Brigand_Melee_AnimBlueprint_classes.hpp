#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x500 - 0x268)
// AnimBlueprintGeneratedClass Light_Brigand_Melee_AnimBlueprint.Light_Brigand_Melee_AnimBlueprint_C
class ULight_Brigand_Melee_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_1507[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x278(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2C0(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x308(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3E8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x418(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4C8(0x30)(None)
	float                                        WalkForward;                                       // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULight_Brigand_Melee_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Light_Brigand_Melee_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


