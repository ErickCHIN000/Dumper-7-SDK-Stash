#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x388 - 0x2A8)
// BlueprintGeneratedClass BP_PhotoModePawn.BP_PhotoModePawn_C
class ABP_PhotoModePawn_C : public ADefaultPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                  CineCamera;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TakePicture__Direction_6C95DCC844522BC7D7E0EA8C6A2CD876; // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TakePicture;                              // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_NavRight__Direction_50C76A5743661A4B02353581B80B9577; // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F85[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_NavRight;                                 // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_NavLeft__Direction_F1BE79E944E102D6568C549F1A89E80B; // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_NavLeft;                                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_NavDown__Direction_07B31AB3420F9A8DF3D576951BD80441; // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_NavDown;                                  // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_NavUp__Direction_DD4449994E17D5D13EBD5FA3F8673A4C; // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_NavUp;                                    // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredZoom;                                       // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomRate;                                          // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentZoom;                                       // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinFocalLength;                                    // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxFocalLength;                                    // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeHUD_C*                       PhotoModeHUDWidget;                                // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxFocusDistance;                                  // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FB0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTranform;                                   // 0x330(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              InitialControlRotation;                            // 0x360(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bRMBPressed;                                       // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrozenMouseX;                                      // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FrozenMouseY;                                      // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        GameState;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PhotoModePawn_C* GetDefaultObj();

	void SetInitialTrasform_Normal(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void SetInitialTransform_Cutscene(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UCameraComponent* CallFunc_GetActiveCameraComponent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void EnterPhotoMode(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPhotoModeHUD_C* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
	void LeavePhotoMode(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InterpZoom(float DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void Timeline_NavUp__FinishedFunc();
	void Timeline_NavUp__UpdateFunc();
	void Timeline_NavUp__Hold__EventFunc();
	void Timeline_NavDown__FinishedFunc();
	void Timeline_NavDown__UpdateFunc();
	void Timeline_NavDown__Hold__EventFunc();
	void Timeline_NavLeft__FinishedFunc();
	void Timeline_NavLeft__UpdateFunc();
	void Timeline_NavLeft__Hold__EventFunc();
	void Timeline_NavRight__FinishedFunc();
	void Timeline_NavRight__UpdateFunc();
	void Timeline_NavRight__Hold__EventFunc();
	void Timeline_TakePicture__FinishedFunc();
	void Timeline_TakePicture__UpdateFunc();
	void Timeline_TakePicture__ShowHUD__EventFunc();
	void Timeline_TakePicture__TakePicture__EventFunc();
	void Timeline_TakePicture__HideHUD__EventFunc();
	void InpActEvt_LMB_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_LMB_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_PhotoModeAscend_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_LookUpRateMouse_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_TurnRateMouse_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
	void OnRMBPressed();
	void OnRMBReleased(bool SkipMousePosition);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void Reset();
	void NavUp_Play();
	void NavUp_Stop();
	void NavDown_Play();
	void NavDown_Stop();
	void ReceiveBeginPlay();
	void NavLeft_Play();
	void NavLeft_Stop();
	void NavRight_Play();
	void NavRight_Stop();
	void TakePicture_Play();
	void InpAxisEvt_PhotoModeZoom_K2Node_InputAxisEvent_0(float AxisValue);
	void ResetToCharLocation();
	void ExecuteUbergraph_BP_PhotoModePawn(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, float K2Node_InputAxisEvent_AxisValue_7, float K2Node_InputAxisEvent_AxisValue_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, bool K2Node_CustomEvent_SkipMousePosition, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_Event_DeltaSeconds, class AController* K2Node_Event_NewController, class AController* K2Node_Event_OldController, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float K2Node_InputAxisEvent_AxisValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


