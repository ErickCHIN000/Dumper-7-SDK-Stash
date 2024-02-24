#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68C (0x8F4 - 0x268)
// AnimBlueprintGeneratedClass MainCharacter_Rigging_AnimBP.MainCharacter_Rigging_AnimBP_C
class UMainCharacter_Rigging_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_11B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x278(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x298(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x2B8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x330(0x30)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x360(0x590)(None)
	float                                        Velocity;                                          // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainCharacter_Rigging_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_MainCharacter_Rigging_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize_ReturnValue);
};

}


