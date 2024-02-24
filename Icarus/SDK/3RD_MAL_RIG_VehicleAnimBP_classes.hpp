#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBA8 (0xE60 - 0x2B8)
// AnimBlueprintGeneratedClass 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C
class UThreeRD_MAL_RIG_VehicleAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_3FCA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2C8(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x348(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x378(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x490(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x530(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x550(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x570(0x50)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x5C0(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x688(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x748(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x8A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x8C8(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x8F0(0x118)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0xA08(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA58(0x80)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xAD8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xBA0(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xBD0(0x30)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0xC00(0xB0)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xCB0(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xD60(0xC0)(None)
	float                                        VehicleSpeed;                                      // 0xE20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimDelta;                                         // 0xE24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               VehicleRef;                                        // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDriver;                                          // 0xE30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4062[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LHandSocketLocation;                               // 0xE34(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RHandSocketLocation;                               // 0xE40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookRot;                                           // 0xE4C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        AimPitch;                                          // 0xE58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimYaw;                                            // 0xE5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UThreeRD_MAL_RIG_VehicleAnimBP_C* GetDefaultObj();

	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue_1, float CallFunc_FMin_ReturnValue_2, float CallFunc_Ease_ReturnValue, float CallFunc_Ease_ReturnValue_1);
};

}


