#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_UserSettingsComponent.BP_UserSettingsComponent_C
class UBP_UserSettingsComponent_C : public UNWXUserSettingsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNWXGameUserSettings*                  GameUserSettings;                                  // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  LocalPlayerController;                             // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UserSettingsComponent_C* GetDefaultObj();

	void UpdateArachnophobiaMode(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue);
	void OnPlayerControllerReady(bool Success, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeDefaultVideoSettings(const struct FIntPoint& LResolution);
	void InitializeVideo(bool CallFunc_GetSettingsInitialized_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDevEnvironment_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue);
	void OnGameStateReady(bool Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnInputDeviceChanged(enum class ESwitcherooInputDevice ActiveInputDevice);
	void OnPawnPossessed(class APawn* OldPawn, class APawn* NewPawn, bool CallFunc_IsValid_ReturnValue);
	void InitializeBrightness(double LDefaultPIEBrightness, bool CallFunc_GetSettingsInitialized_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SetBrightness_NewBrightness_ImplicitCast);
	void UpdateFOV(class ABP_Character_C* L_LocalCharacter, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput_1, class UCameraComponent* CallFunc_GetCamera_ReturnValue_1, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput_2, class UCameraComponent* CallFunc_GetCamera_ReturnValue_2, float CallFunc_GetTPFieldOfView_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter);
	void UpdateGamma(class ABP_Character_C* LLocalCharacter, float CallFunc_GetRescaledBrightness_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, double CallFunc_MakeVector4_X_ImplicitCast, double CallFunc_MakeVector4_Y_ImplicitCast, double CallFunc_MakeVector4_Z_ImplicitCast);
	void UpdateAudio();
	void UpdateInput(double LGamepadSensitivityInverted, double LGamepadSensitivity, double LMouseSensitivityInverted, double LMouseSensitivity, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_GetGamepadInvertX_ReturnValue, float CallFunc_GetGamepadSensitivity_ReturnValue, float CallFunc_GetMouseSensitivity_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetGamepadInvertY_ReturnValue, bool CallFunc_GetMouseInvertY_ReturnValue, bool CallFunc_GetMouseInvertX_ReturnValue, enum class ESwitcherooInputDevice CallFunc_GetDetectedInputDevice_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_IntFloat_ReturnValue_1, double K2Node_VariableSet_LGamepadSensitivity_ImplicitCast, double K2Node_VariableSet_LMouseSensitivity_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_2, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_2, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_3, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_3);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_UserSettingsComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController);
};

}


