#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x569 (0x821 - 0x2B8)
// AnimBlueprintGeneratedClass SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C
class USK_CRE_PAS_Fish01_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_620C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x2F8(0x368)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x660(0xA0)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x700(0x90)(None)
	float                                        __CustomProperty_RotationRate_59A6B454476A46BE947F70B5CEC02806; // 0x790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_NewSpeed_59A6B454476A46BE947F70B5CEC02806; // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_AnimateFins_59A6B454476A46BE947F70B5CEC02806; // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_622A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFishActor*                            FishOwner;                                         // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsDead;                                            // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_622E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed_Alpha;                                       // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPositionHistory                      History;                                           // 0x7B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPositionHistory                      RotationHistory;                                   // 0x7E0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              LastRotation;                                      // 0x810(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        RotationRate;                                      // 0x81C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAnimateFins;                                 // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_CRE_PAS_Fish01_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP_AnimGraphNode_ControlRig_59A6B454476A46BE947F70B5CEC02806();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_FMin_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Lerp_ReturnValue, float CallFunc_FMin_ReturnValue_1, float CallFunc_FMin_ReturnValue_2, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFishActor* K2Node_DynamicCast_AsFish_Actor, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FInterpTo_Constant_ReturnValue, bool Temp_bool_IsClosed_Variable, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_K2_CalculateVelocityFromPositionHistory_ReturnValue_1, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_FInterpTo_ReturnValue);
};

}


