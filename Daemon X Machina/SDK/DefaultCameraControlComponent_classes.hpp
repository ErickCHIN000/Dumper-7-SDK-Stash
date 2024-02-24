#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x2E4 - 0x280)
// BlueprintGeneratedClass DefaultCameraControlComponent.DefaultCameraControlComponent_C
class UDefaultCameraControlComponent_C : public UTTLDefaultCameraControlComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class ABaseCharacter_C*                      SelfArsenalCharacter;                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightMoveCameraRoll;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULockonComponent_C*                    SelfLockonComponent;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenalMovement_C*                    SelfArsenalMovement;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LagSpeed;                                          // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LagSpeedTarget;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultArmLength;                                  // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetArmLength;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRestoreCameraRotation;                           // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ArmTargetOffsetFrom;                               // 0x2C4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ArmTargetOffsetTo;                                 // 0x2D0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmTargetOffsetTimer;                              // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmTargetOffsetTime;                               // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDefaultCameraControlComponent_C* GetDefaultObj();

	void CheckInitialize(bool CallFunc_IsValid_ReturnValue);
	void SetCameraArmOffset(const struct FVector& Offset, float Time, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ProcessRestoreCameraRotation(float DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void ProcessCameraArm(float DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_MultiplyByPi_ReturnValue, float CallFunc_Cos_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue3);
	void Finalize();
	void ProcessCameraLag(float Delta_Seconds, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float K2Node_Select_Default, float Temp_float_Variable2, float Temp_float_Variable3, float K2Node_Select1_Default, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue2, float CallFunc_FMin_ReturnValue);
	void ProcessLockonAssist(float DeltaSeconds, const struct FRotator& InterpolationRotation, const struct FRotator& DeltaRotation, class AActor* TargetPawn, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_Abs_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_VSize_ReturnValue, float CallFunc_Abs_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue3, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool K2Node_SwitchEnum1_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue1, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_DegCos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Multiply_FloatFloat_ReturnValue10, bool CallFunc_Greater_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue11, float CallFunc_Multiply_FloatFloat_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetActorLocationOfvfxCenter00_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Array_Get_Item1, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue1, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue2, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue4);
	void ProcessCameraRoll(float DeltaSeconds, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult);
	void Initialize(class ABaseCharacter_C* NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSystemSettingFloatValue_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
	void OnTriggerQuickMove______0(bool Enabled, const struct FVector& InputDirection);
	void TTLBeginPlay();
	void TTLTickBP(float DeltaTime);
	void InitializeBP();
	void ExecuteUbergraph_DefaultCameraControlComponent(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool K2Node_CustomEvent_Enabled, const struct FVector& K2Node_CustomEvent_InputDirection, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegCos_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Select_Default, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue1);
};

}


