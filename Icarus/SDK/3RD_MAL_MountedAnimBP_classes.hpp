#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xECC (0x1184 - 0x2B8)
// AnimBlueprintGeneratedClass 3RD_MAL_MountedAnimBP.3RD_MAL_MountedAnimBP_C
class UThreeRD_MAL_MountedAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_3870[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2C8(0x118)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3E0(0x158)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x538(0x30)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x568(0x368)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x8D0(0x80)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x950(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xA68(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA98(0x80)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0xB18(0x368)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xE80(0x30)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0xEB0(0xB0)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xF60(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1010(0xC0)(None)
	struct FVector                               __CustomProperty_RelativeFeetOffset_F17B49B14661E62C569CBAA56F4B29C5; // 0x10D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_VerletStrength_6654F16B430AA80A67797180F44F704C; // 0x10DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_LookAtDirection_6654F16B430AA80A67797180F44F704C; // 0x10E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_DoLookAt_6654F16B430AA80A67797180F44F704C; // 0x10EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_HandSpaceTargetLocation_6654F16B430AA80A67797180F44F704C; // 0x10F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_RelativeHandsOffset_6654F16B430AA80A67797180F44F704C; // 0x10FC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_SpineCurlAmount_6654F16B430AA80A67797180F44F704C; // 0x1108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MountSpeed;                                        // 0x110C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimDelta;                                         // 0x1110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookRot;                                           // 0x1114(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        AimPitch;                                          // 0x1120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimYaw;                                            // 0x1124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            MountCharacterRef;                                 // 0x1128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               LookAtLocation;                                    // 0x1130(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmoothDirection;                                   // 0x113C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LastRotation;                                      // 0x1140(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        TurnRate;                                          // 0x114C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RelativeFeetOffset;                                // 0x1150(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RelativeHandsOffset;                               // 0x115C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HandsTargetLocation;                               // 0x1168(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtDirection;                                   // 0x1174(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerletStrength;                                    // 0x1180(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UThreeRD_MAL_MountedAnimBP_C* GetDefaultObj();

	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateTurnRate(float TurnRateReferenceValue, float CallFunc_Divide_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_MountedAnimBP_AnimGraphNode_ControlRig_6654F16B430AA80A67797180F44F704C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_3RD_MAL_MountedAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_MapRangeClamped_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_FMin_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_FInterpTo_ReturnValue, const struct FIcarusMount& CallFunc_GetMountsStruct_Mounts, enum class EValid CallFunc_GetMountsStruct_Paths, const struct FVector& CallFunc_GetHandsTargetLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


