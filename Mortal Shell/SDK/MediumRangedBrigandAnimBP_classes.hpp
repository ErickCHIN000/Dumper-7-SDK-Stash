#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x96C (0xBD4 - 0x268)
// AnimBlueprintGeneratedClass MediumRangedBrigandAnimBP.MediumRangedBrigandAnimBP_C
class UMediumRangedBrigandAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1A91[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x278(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x318(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3F8(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4D8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x508(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x5B8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x600(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x648(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x700(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x728(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x750(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x798(0xC0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x858(0x30)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x888(0x188)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xA10(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAB0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xB68(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xB90(0x28)(None)
	float                                        WalkForward;                                       // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimPitch;                                          // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimAlpha;                                          // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimPitchOffset;                                    // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMeleeMode_;                                      // 0xBCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimYaw;                                            // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMediumRangedBrigandAnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MediumRangedBrigandAnimBP_AnimGraphNode_RotationOffsetBlendSpace_B21DB1C544D07D590CE91A9CB5822D71();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SwitchToMeleeMode();
	void ExecuteUbergraph_MediumRangedBrigandAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


