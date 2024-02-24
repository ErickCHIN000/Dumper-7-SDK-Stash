#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x524 - 0x4B8)
// BlueprintGeneratedClass BP_PhotoCamera.BP_PhotoCamera_C
class ABP_PhotoCamera_C : public ACharacter
{
public:
	uint8                                        Pad_52DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FocalCube;                                         // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   OwnerCharacter;                                    // 0x4E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         KeepRelativeControllerRotation;                    // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MaintainHeight;                                    // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LookAtPlayer;                                      // 0x4F2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5309[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtPlayerOffset;                                // 0x4F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_PhotoUI_C*                        PhotoCameraUI;                                     // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolutionMultiplier;                              // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDistanceToPlayer;                               // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerticalInputAxis;                                 // 0x510(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintSpeedMultiplier;                             // 0x514(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseCameraSpeed;                                   // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaxPlayerDistance;                              // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WereControlsVisibleBeforeHidingUI;                 // 0x51D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5351[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PendingScrollInput;                                // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PhotoCamera_C* GetDefaultObj();

	void AddPendingScrollInput(float Input, float CallFunc_Add_FloatFloat_ReturnValue);
	void ApplyPendingScrollInput(float DeltaSeconds, float Delta, float Temp_wildcard_Variable, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetSliderValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GetCheckboxState_ReturnValue, bool CallFunc_GetCheckboxState_ReturnValue_1);
	void CanMoveInDirection(const struct FVector& InputDirection, float InputScale, bool* CanMove, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void ResolutionMultiplierChanged(float Multiplier);
	void LookAtPlayerChanged(bool bIsChecked);
	void MaintainHeightChanged(bool bIsChecked);
	void CameraLagChanged(float Value, bool CallFunc_Less_FloatFloat_ReturnValue);
	void CameraSpeedChanged(float Value);
	void FOVChanged(float Value);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_HideUI_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void BindToUIEvents();
	void SettingsUpdated(const struct FPostProcessSettings& Settings);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void ClientPossessed();
	void ClientUnpossessed();
	void SetFlySpeed(float FlySpeed);
	void ManuallyToggleControls();
	void ServerSetFlySpeed(float FlySpeed);
	void ExecuteUbergraph_BP_PhotoCamera(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float K2Node_InputAxisEvent_AxisValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, class AController* CallFunc_GetController_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_3, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4, const struct FPostProcessSettings& K2Node_CustomEvent_Settings, class AController* CallFunc_GetController_ReturnValue_4, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UUMG_PhotoUI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class AController* K2Node_Event_NewController, class AController* K2Node_Event_OldController, const struct FDateTime& CallFunc_Now_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, int32 CallFunc_Percent_IntInt_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float K2Node_CustomEvent_FlySpeed_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_5, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_6, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue_5, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_4, const struct FKey& K2Node_InputActionEvent_Key_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_CanMoveInDirection_CanMove, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_CanMoveInDirection_CanMove_1, bool CallFunc_CanMoveInDirection_CanMove_2, const struct FKey& Temp_struct_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_8, float K2Node_CustomEvent_FlySpeed, bool CallFunc_HasKeyboardFocus_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid, bool CallFunc_Not_PreBool_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue_1, bool CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid_1, bool CallFunc_K2_AttachToComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}


