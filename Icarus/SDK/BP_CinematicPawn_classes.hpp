#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x338 - 0x2E0)
// BlueprintGeneratedClass BP_CinematicPawn.BP_CinematicPawn_C
class ABP_CinematicPawn_C : public AIcarusSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       CameraLocation;                                    // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedMultiplier;                                   // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DepthOfFieldSpeed;                                 // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FastMoving;                                        // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentFOV;                                        // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultFOVSpeed;                                   // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IncreaseFOV;                                       // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DecreaseFOV;                                       // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LocalSpectator;                                    // 0x316(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToggleHelpScreen;                                  // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        MoveUpAxis;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jumping;                                           // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Crouching;                                         // 0x32D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveSpeedPressed;                                  // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggerMoveSpeedRate;                              // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CinematicPawn_C* GetDefaultObj();

	void UpdateCamera(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV, bool ForceUpdate, struct FVector* OutLocation, struct FRotator* OutRotation, float* OutFOV, bool* Return, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& K2Node_Select_Default);
	void ChangePreset(int32 Index, class ABP_CinematicChair_C* K2Node_DynamicCast_AsBP_Cinematic_Chair, bool K2Node_DynamicCast_bSuccess);
	void ResetFOV(class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue);
	void TickVisuals(bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void UpdateFlySpeed(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void DecreaseSpeed(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void IncreaseSpeed(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void InpActEvt_Hotbar1_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Hotbar2_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Hotbar3_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Hotbar4_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Hotbar5_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Hotbar6_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Hotbar7_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Hotbar0_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_FreeLook_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SERVER_MovePawn(const struct FVector_NetQuantize& Location);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_CinematicPawn(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_2, const struct FKey& Temp_struct_Variable_3, bool Temp_bool_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& Temp_struct_Variable_5, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FKey& Temp_struct_Variable_6, float K2Node_Event_DeltaSeconds, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, const struct FVector_NetQuantize& K2Node_CustomEvent_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize& K2Node_MakeStruct_Vector_NetQuantize, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& K2Node_InputActionEvent_Key_7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_12, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_8, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FKey& K2Node_InputActionEvent_Key_13, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& K2Node_InputActionEvent_Key_15, float K2Node_Select_Default_2, const struct FKey& K2Node_InputActionEvent_Key_16, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_9, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void ToggleHelpScreen__DelegateSignature();
};

}


