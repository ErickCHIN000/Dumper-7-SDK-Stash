#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E40 (0x2188 - 0x348)
// AnimBlueprintGeneratedClass ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C
class UABP_GNM_SunGiant_Overrides_C : public UAnimInstance
{
public:
	uint8                                        Pad_74E0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x440(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x460(0x20)(None)
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x480(0x1F0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x670(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x690(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x748(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x768(0x20)(None)
	struct FAnimNode_PowerIK_Ground              AnimGraphNode_PowerIK_Ground;                      // 0x788(0x3A0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0xB28(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xB48(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xC00(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xC20(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xCD8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xCF8(0xB8)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xDB0(0x960)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1710(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1730(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1750(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1770(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1828(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1848(0x20)(None)
	uint8                                        Pad_7559[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x1870(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x1AC0(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x1D10(0x250)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1F60(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1F80(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2038(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2058(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2110(0x20)(None)
	double                                       Hand_l_Alpha;                                      // 0x2130(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hand_l;                                            // 0x2138(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EyeAlpha;                                          // 0x2150(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAtAlpha;                                       // 0x2158(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtPosition;                                    // 0x2160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    OwnerAsCreatureBase;                               // 0x2178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PowerIKAlpha;                                      // 0x2180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_GNM_SunGiant_Overrides_C* GetDefaultObj();

	void Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK);
	void GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk);
	void ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig);
	void OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK);
	void Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics);
	void LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget);
	void Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk);
	void BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_AnimGraphNode_Fabrik_6070A0414811648B5B814A870930A190();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_GNM_SunGiant_Overrides(int32 EntryPoint, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsAnyMontagePlaying_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}


