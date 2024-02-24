#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x294 (0x4FC - 0x268)
// AnimBlueprintGeneratedClass ShadowKnightAnimBP_New.ShadowKnightAnimBP_New_C
class UShadowKnightAnimBP_New_C : public UAnimInstance
{
public:
	uint8                                        Pad_1BE2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2A8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F0(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x338(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x418(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x448(0xB0)(None)
	float                                        Speed;                                             // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShadowKnightAnimBP_New_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ShadowKnightAnimBP_New(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_VSize_ReturnValue);
};

}


