#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x430 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C
class USK_DEP_WindTurbine_Metal_V2_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_3639[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2F8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x400(0x20)(None)
	bool                                         Powered;                                           // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationSpeed;                                     // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDegreesRotationPerSecond;                       // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_DEP_WindTurbine_Metal_V2_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_WindTurbine_C* K2Node_DynamicCast_AsBP_Wind_Turbine, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
};

}


