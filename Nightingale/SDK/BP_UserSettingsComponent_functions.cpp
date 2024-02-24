#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UserSettingsComponent.BP_UserSettingsComponent_C
// (None)

class UClass* UBP_UserSettingsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UserSettingsComponent_C");

	return Clss;
}


// BP_UserSettingsComponent_C BP_UserSettingsComponent.Default__BP_UserSettingsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UserSettingsComponent_C* UBP_UserSettingsComponent_C::GetDefaultObj()
{
	static class UBP_UserSettingsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UserSettingsComponent_C*>(UBP_UserSettingsComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.UpdateArachnophobiaMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArachnophobiaModeEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::UpdateArachnophobiaMode(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "UpdateArachnophobiaMode");

	Params::UBP_UserSettingsComponent_C_UpdateArachnophobiaMode_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetArachnophobiaModeEnabled_ReturnValue = CallFunc_GetArachnophobiaModeEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.OnPlayerControllerReady
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::OnPlayerControllerReady(bool Success, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "OnPlayerControllerReady");

	Params::UBP_UserSettingsComponent_C_OnPlayerControllerReady_Params Parms{};

	Parms.Success = Success;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.InitializeDefaultVideoSettings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   LResolution                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::InitializeDefaultVideoSettings(const struct FIntPoint& LResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "InitializeDefaultVideoSettings");

	Params::UBP_UserSettingsComponent_C_InitializeDefaultVideoSettings_Params Parms{};

	Parms.LResolution = LResolution;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.InitializeVideo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetSettingsInitialized_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDevEnvironment_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::InitializeVideo(bool CallFunc_GetSettingsInitialized_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDevEnvironment_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "InitializeVideo");

	Params::UBP_UserSettingsComponent_C_InitializeVideo_Params Parms{};

	Parms.CallFunc_GetSettingsInitialized_ReturnValue = CallFunc_GetSettingsInitialized_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDevEnvironment_ReturnValue = CallFunc_IsDevEnvironment_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.OnGameStateReady
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::OnGameStateReady(bool Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "OnGameStateReady");

	Params::UBP_UserSettingsComponent_C_OnGameStateReady_Params Parms{};

	Parms.Success = Success;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.OnInputDeviceChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESwitcherooInputDevice  ActiveInputDevice                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::OnInputDeviceChanged(enum class ESwitcherooInputDevice ActiveInputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "OnInputDeviceChanged");

	Params::UBP_UserSettingsComponent_C_OnInputDeviceChanged_Params Parms{};

	Parms.ActiveInputDevice = ActiveInputDevice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.OnPawnPossessed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::OnPawnPossessed(class APawn* OldPawn, class APawn* NewPawn, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "OnPawnPossessed");

	Params::UBP_UserSettingsComponent_C_OnPawnPossessed_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.InitializeBrightness
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LDefaultPIEBrightness                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSettingsInitialized_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBrightness_NewBrightness_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::InitializeBrightness(double LDefaultPIEBrightness, bool CallFunc_GetSettingsInitialized_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SetBrightness_NewBrightness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "InitializeBrightness");

	Params::UBP_UserSettingsComponent_C_InitializeBrightness_Params Parms{};

	Parms.LDefaultPIEBrightness = LDefaultPIEBrightness;
	Parms.CallFunc_GetSettingsInitialized_ReturnValue = CallFunc_GetSettingsInitialized_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SetBrightness_NewBrightness_ImplicitCast = CallFunc_SetBrightness_NewBrightness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             L_LocalCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraProviderInterface>CallFunc_GetCamera_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraProviderInterface>CallFunc_GetCamera_self_CastInput_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraProviderInterface>CallFunc_GetCamera_self_CastInput_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue_2                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTPFieldOfView_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::UpdateFOV(class ABP_Character_C* L_LocalCharacter, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput_1, class UCameraComponent* CallFunc_GetCamera_ReturnValue_1, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput_2, class UCameraComponent* CallFunc_GetCamera_ReturnValue_2, float CallFunc_GetTPFieldOfView_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "UpdateFOV");

	Params::UBP_UserSettingsComponent_C_UpdateFOV_Params Parms{};

	Parms.L_LocalCharacter = L_LocalCharacter;
	Parms.CallFunc_GetCamera_self_CastInput = CallFunc_GetCamera_self_CastInput;
	Parms.CallFunc_GetCamera_ReturnValue = CallFunc_GetCamera_ReturnValue;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;
	Parms.CallFunc_GetCamera_self_CastInput_1 = CallFunc_GetCamera_self_CastInput_1;
	Parms.CallFunc_GetCamera_ReturnValue_1 = CallFunc_GetCamera_ReturnValue_1;
	Parms.CallFunc_GetCamera_self_CastInput_2 = CallFunc_GetCamera_self_CastInput_2;
	Parms.CallFunc_GetCamera_ReturnValue_2 = CallFunc_GetCamera_ReturnValue_2;
	Parms.CallFunc_GetTPFieldOfView_ReturnValue = CallFunc_GetTPFieldOfView_ReturnValue;
	Parms.CallFunc_GetFieldOfView_ReturnValue_1 = CallFunc_GetFieldOfView_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.UpdateGamma
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LLocalCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRescaledBrightness_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_X_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_Y_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_Z_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::UpdateGamma(class ABP_Character_C* LLocalCharacter, float CallFunc_GetRescaledBrightness_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, double CallFunc_MakeVector4_X_ImplicitCast, double CallFunc_MakeVector4_Y_ImplicitCast, double CallFunc_MakeVector4_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "UpdateGamma");

	Params::UBP_UserSettingsComponent_C_UpdateGamma_Params Parms{};

	Parms.LLocalCharacter = LLocalCharacter;
	Parms.CallFunc_GetRescaledBrightness_ReturnValue = CallFunc_GetRescaledBrightness_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_MakeVector4_X_ImplicitCast = CallFunc_MakeVector4_X_ImplicitCast;
	Parms.CallFunc_MakeVector4_Y_ImplicitCast = CallFunc_MakeVector4_Y_ImplicitCast;
	Parms.CallFunc_MakeVector4_Z_ImplicitCast = CallFunc_MakeVector4_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.UpdateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UserSettingsComponent_C::UpdateAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "UpdateAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.UpdateInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LGamepadSensitivityInverted                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LGamepadSensitivity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMouseSensitivityInverted                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMouseSensitivity                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertX_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadSensitivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertY_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInvertY_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInvertX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwitcherooInputDevice  CallFunc_GetDetectedInputDevice_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LGamepadSensitivity_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LMouseSensitivity_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::UpdateInput(double LGamepadSensitivityInverted, double LGamepadSensitivity, double LMouseSensitivityInverted, double LMouseSensitivity, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_GetGamepadInvertX_ReturnValue, float CallFunc_GetGamepadSensitivity_ReturnValue, float CallFunc_GetMouseSensitivity_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetGamepadInvertY_ReturnValue, bool CallFunc_GetMouseInvertY_ReturnValue, bool CallFunc_GetMouseInvertX_ReturnValue, enum class ESwitcherooInputDevice CallFunc_GetDetectedInputDevice_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_IntFloat_ReturnValue_1, double K2Node_VariableSet_LGamepadSensitivity_ImplicitCast, double K2Node_VariableSet_LMouseSensitivity_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_2, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_2, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_3, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "UpdateInput");

	Params::UBP_UserSettingsComponent_C_UpdateInput_Params Parms{};

	Parms.LGamepadSensitivityInverted = LGamepadSensitivityInverted;
	Parms.LGamepadSensitivity = LGamepadSensitivity;
	Parms.LMouseSensitivityInverted = LMouseSensitivityInverted;
	Parms.LMouseSensitivity = LMouseSensitivity;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetGamepadInvertX_ReturnValue = CallFunc_GetGamepadInvertX_ReturnValue;
	Parms.CallFunc_GetGamepadSensitivity_ReturnValue = CallFunc_GetGamepadSensitivity_ReturnValue;
	Parms.CallFunc_GetMouseSensitivity_ReturnValue = CallFunc_GetMouseSensitivity_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGamepadInvertY_ReturnValue = CallFunc_GetGamepadInvertY_ReturnValue;
	Parms.CallFunc_GetMouseInvertY_ReturnValue = CallFunc_GetMouseInvertY_ReturnValue;
	Parms.CallFunc_GetMouseInvertX_ReturnValue = CallFunc_GetMouseInvertX_ReturnValue;
	Parms.CallFunc_GetDetectedInputDevice_ReturnValue = CallFunc_GetDetectedInputDevice_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.K2Node_VariableSet_LGamepadSensitivity_ImplicitCast = K2Node_VariableSet_LGamepadSensitivity_ImplicitCast;
	Parms.K2Node_VariableSet_LMouseSensitivity_ImplicitCast = K2Node_VariableSet_LMouseSensitivity_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1 = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1 = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_2 = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_2 = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_3 = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_3 = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UserSettingsComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "ReceiveEndPlay");

	Params::UBP_UserSettingsComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserSettingsComponent.BP_UserSettingsComponent_C.ExecuteUbergraph_BP_UserSettingsComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserSettingsComponent_C::ExecuteUbergraph_BP_UserSettingsComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UserSettingsComponent_C", "ExecuteUbergraph_BP_UserSettingsComponent");

	Params::UBP_UserSettingsComponent_C_ExecuteUbergraph_BP_UserSettingsComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput_1 = CallFunc_AwaitBP_Awaitable_CastInput_1;
	Parms.CallFunc_AwaitBP_Handle_1 = CallFunc_AwaitBP_Handle_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}

}


