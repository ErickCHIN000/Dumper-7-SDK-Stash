#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x28C - 0x220)
// BlueprintGeneratedClass BP_CharacterAreaLight.BP_CharacterAreaLight_C
class ABP_CharacterAreaLight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USpotLightComponent*>           LightList;                                         // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        Intensity;                                         // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x24C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        FocalAngleOuter;                                   // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        FocalAngleInner;                                   // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        AttenuationDistance;                               // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        LightWidth;                                        // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        LightLength;                                       // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         CastShadows;                                       // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_5402[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightSamplesSquared;                               // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SourceRadiusMult;                                  // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        CenterOfInterestLength;                            // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLightingChannels                     Channels;                                          // 0x281(0x1)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_542A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SoftRadius;                                        // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShadowBias;                                        // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharacterAreaLight_C* GetDefaultObj();

	void LightArraySetup(int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class USpotLightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_DegAtan_ReturnValue, float CallFunc_DegAtan_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_2, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_4, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_6, class USpotLightComponent* CallFunc_AddComponent_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7);
	void UpdateLightValues(int32 Temp_int_Array_Index_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class USpotLightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_4);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CharacterAreaLight(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class USpotLightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


