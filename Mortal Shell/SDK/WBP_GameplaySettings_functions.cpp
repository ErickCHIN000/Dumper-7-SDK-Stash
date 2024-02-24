#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameplaySettings.WBP_GameplaySettings_C
// (None)

class UClass* UWBP_GameplaySettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameplaySettings_C");

	return Clss;
}


// WBP_GameplaySettings_C WBP_GameplaySettings.Default__WBP_GameplaySettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameplaySettings_C* UWBP_GameplaySettings_C::GetDefaultObj()
{
	static class UWBP_GameplaySettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameplaySettings_C*>(UWBP_GameplaySettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HapticIntensity_Adjust
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHapticFeedback_Intensity_Intensity                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::HapticIntensity_Adjust(float Delta, bool CustomValue, float Value, float Local_Value, bool Local_CustomValue, float Local_Delta, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetHapticFeedback_Intensity_Intensity, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HapticIntensity_Adjust");

	Params::UWBP_GameplaySettings_C_HapticIntensity_Adjust_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.Local_CustomValue = Local_CustomValue;
	Parms.Local_Delta = Local_Delta;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHapticFeedback_Intensity_Intensity = CallFunc_GetHapticFeedback_Intensity_Intensity;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HapticIntensity_GetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHapticFeedback_Intensity_Intensity                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::HapticIntensity_GetText(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHapticFeedback_Intensity_Intensity, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HapticIntensity_GetText");

	Params::UWBP_GameplaySettings_C_HapticIntensity_GetText_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHapticFeedback_Intensity_Intensity = CallFunc_GetHapticFeedback_Intensity_Intensity;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.DualSenseAudio_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDualSenseAudio_Enabled_Enabled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::DualSenseAudio_Set(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetDualSenseAudio_Enabled_Enabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "DualSenseAudio_Set");

	Params::UWBP_GameplaySettings_C_DualSenseAudio_Set_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDualSenseAudio_Enabled_Enabled = CallFunc_GetDualSenseAudio_Enabled_Enabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.DualSenseAudio_GetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDualSenseAudio_Enabled_Enabled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::DualSenseAudio_GetText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDualSenseAudio_Enabled_Enabled, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "DualSenseAudio_GetText");

	Params::UWBP_GameplaySettings_C_DualSenseAudio_GetText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDualSenseAudio_Enabled_Enabled = CallFunc_GetDualSenseAudio_Enabled_Enabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.TriggerEffect_SetRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AdaptiveTriggers_EnabledCallFunc_GetAdaptiveTriggersEnabled_EnableType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::TriggerEffect_SetRight(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_AdaptiveTriggers_Enabled CallFunc_GetAdaptiveTriggersEnabled_EnableType, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "TriggerEffect_SetRight");

	Params::UWBP_GameplaySettings_C_TriggerEffect_SetRight_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAdaptiveTriggersEnabled_EnableType = CallFunc_GetAdaptiveTriggersEnabled_EnableType;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_5 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.TriggerEffect_GetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AdaptiveTriggers_EnabledCallFunc_GetAdaptiveTriggersEnabled_EnableType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::TriggerEffect_GetText(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_AdaptiveTriggers_Enabled CallFunc_GetAdaptiveTriggersEnabled_EnableType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "TriggerEffect_GetText");

	Params::UWBP_GameplaySettings_C_TriggerEffect_GetText_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAdaptiveTriggersEnabled_EnableType = CallFunc_GetAdaptiveTriggersEnabled_EnableType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HandlePS5DualSenseOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::HandlePS5DualSenseOptions(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HandlePS5DualSenseOptions");

	Params::UWBP_GameplaySettings_C_HandlePS5DualSenseOptions_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.TriggerEffect_SetLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AdaptiveTriggers_EnabledCallFunc_GetAdaptiveTriggersEnabled_EnableType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::TriggerEffect_SetLeft(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_AdaptiveTriggers_Enabled CallFunc_GetAdaptiveTriggersEnabled_EnableType, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "TriggerEffect_SetLeft");

	Params::UWBP_GameplaySettings_C_TriggerEffect_SetLeft_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAdaptiveTriggersEnabled_EnableType = CallFunc_GetAdaptiveTriggersEnabled_EnableType;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_5 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_ForceFeedbackScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_ForceFeedbackScale(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_ForceFeedbackScale");

	Params::UWBP_GameplaySettings_C_Get_Text_ForceFeedbackScale_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Reset_HideSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Reset_HideSacredGlands(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Reset_HideSacredGlands");

	Params::UWBP_GameplaySettings_C_Reset_HideSacredGlands_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHideSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetHideSacredGlands_Hidden_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetHideSacredGlands(bool CallFunc_GetHideSacredGlands_Hidden_, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHideSacredGlands");

	Params::UWBP_GameplaySettings_C_SetHideSacredGlands_Params Parms{};

	Parms.CallFunc_GetHideSacredGlands_Hidden_ = CallFunc_GetHideSacredGlands_Hidden_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHideSacredGlands_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::SetHideSacredGlands_Text(bool Hidden, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHideSacredGlands_Text");

	Params::UWBP_GameplaySettings_C_SetHideSacredGlands_Text_Params Parms{};

	Parms.Hidden = Hidden;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetHideSacredGlands
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideSacredGland_Hidden_                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::GetHideSacredGlands(bool* Hidden_, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHideSacredGland_Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetHideSacredGlands");

	Params::UWBP_GameplaySettings_C_GetHideSacredGlands_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHideSacredGland_Hidden_ = CallFunc_GetHideSacredGland_Hidden_;

	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Reset_HideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Reset_HideTarnishedSeal(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Reset_HideTarnishedSeal");

	Params::UWBP_GameplaySettings_C_Reset_HideTarnishedSeal_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetHideTarnishedSeal_Hidden_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetHideTarnishedSeal(bool CallFunc_GetHideTarnishedSeal_Hidden_, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHideTarnishedSeal");

	Params::UWBP_GameplaySettings_C_SetHideTarnishedSeal_Params Parms{};

	Parms.CallFunc_GetHideTarnishedSeal_Hidden_ = CallFunc_GetHideTarnishedSeal_Hidden_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHideTarnishedSeal_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::SetHideTarnishedSeal_Text(bool Hidden, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHideTarnishedSeal_Text");

	Params::UWBP_GameplaySettings_C_SetHideTarnishedSeal_Text_Params Parms{};

	Parms.Hidden = Hidden;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetHideTarnishedSeal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideTarnishedSeal_Hidden_                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::GetHideTarnishedSeal(bool* Hidden_, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHideTarnishedSeal_Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetHideTarnishedSeal");

	Params::UWBP_GameplaySettings_C_GetHideTarnishedSeal_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHideTarnishedSeal_Hidden_ = CallFunc_GetHideTarnishedSeal_Hidden_;

	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.UIScale_SetRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::UIScale_SetRight(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "UIScale_SetRight");

	Params::UWBP_GameplaySettings_C_UIScale_SetRight_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.UIScale_SetLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::UIScale_SetLeft(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "UIScale_SetLeft");

	Params::UWBP_GameplaySettings_C_UIScale_SetLeft_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.UIScale_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::UIScale_SetText(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "UIScale_SetText");

	Params::UWBP_GameplaySettings_C_UIScale_SetText_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SeasonalContent_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSeasonalContent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SeasonalContent_Set(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetSeasonalContent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SeasonalContent_Set");

	Params::UWBP_GameplaySettings_C_SeasonalContent_Set_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSeasonalContent_ReturnValue = CallFunc_GetSeasonalContent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SeasonalContent_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSeasonalContent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::SeasonalContent_SetText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSeasonalContent_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SeasonalContent_SetText");

	Params::UWBP_GameplaySettings_C_SeasonalContent_SetText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSeasonalContent_ReturnValue = CallFunc_GetSeasonalContent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SeasonalContent_Availability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSeasonalContentButton_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SeasonalContent_Availability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSeasonalContentButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SeasonalContent_Availability");

	Params::UWBP_GameplaySettings_C_SeasonalContent_Availability_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSeasonalContentButton_ReturnValue = CallFunc_GetSeasonalContentButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetBallistazookaOpacity_Opacity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideTarnishedSeal_Hidden_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideSacredGlands_Hidden_                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::OnOpen(float CallFunc_GetBallistazookaOpacity_Opacity, bool CallFunc_GetHideTarnishedSeal_Hidden_, bool CallFunc_GetHoldToDismiss_Hold, bool CallFunc_GetDamageNumbers_Show, bool CallFunc_GetHideSacredGlands_Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnOpen");

	Params::UWBP_GameplaySettings_C_OnOpen_Params Parms{};

	Parms.CallFunc_GetBallistazookaOpacity_Opacity = CallFunc_GetBallistazookaOpacity_Opacity;
	Parms.CallFunc_GetHideTarnishedSeal_Hidden_ = CallFunc_GetHideTarnishedSeal_Hidden_;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;
	Parms.CallFunc_GetHideSacredGlands_Hidden_ = CallFunc_GetHideSacredGlands_Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ResetBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ResetBallistazookaOpacity(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ResetBallistazookaOpacity");

	Params::UWBP_GameplaySettings_C_ResetBallistazookaOpacity_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBallistazookaOpacity_Opacity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetBallistazookaOpacity(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_GetBallistazookaOpacity_Opacity, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetBallistazookaOpacity");

	Params::UWBP_GameplaySettings_C_SetBallistazookaOpacity_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetBallistazookaOpacity_Opacity = CallFunc_GetBallistazookaOpacity_Opacity;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetBallistazookaOpacity_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::SetBallistazookaOpacity_Text(float Opacity, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetBallistazookaOpacity_Text");

	Params::UWBP_GameplaySettings_C_SetBallistazookaOpacity_Text_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetBallistazookaOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBallistazookaOpacity_Opacity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::GetBallistazookaOpacity(float* Opacity, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBallistazookaOpacity_Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetBallistazookaOpacity");

	Params::UWBP_GameplaySettings_C_GetBallistazookaOpacity_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBallistazookaOpacity_Opacity = CallFunc_GetBallistazookaOpacity_Opacity;

	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ResetNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ResetNotify(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ResetNotify");

	Params::UWBP_GameplaySettings_C_ResetNotify_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_5 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetVisibility_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_WeaponNotify_GetVisibility_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::WeaponNotify_SetVisibility_Right(enum class Enum_NotifyVisibility CallFunc_WeaponNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetVisibility_Right");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetVisibility_Right_Params Parms{};

	Parms.CallFunc_WeaponNotify_GetVisibility_Visibility = CallFunc_WeaponNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetVisibility_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_WeaponNotify_GetVisibility_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::WeaponNotify_SetVisibility_Left(enum class Enum_NotifyVisibility CallFunc_WeaponNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetVisibility_Left");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetVisibility_Left_Params Parms{};

	Parms.CallFunc_WeaponNotify_GetVisibility_Visibility = CallFunc_WeaponNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetDuration_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     CallFunc_WeaponNotify_GetDuration_Duration                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::WeaponNotify_SetDuration_Right(enum class Enum_NotifyDuration CallFunc_WeaponNotify_GetDuration_Duration, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetDuration_Right");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetDuration_Right_Params Parms{};

	Parms.CallFunc_WeaponNotify_GetDuration_Duration = CallFunc_WeaponNotify_GetDuration_Duration;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetDuration_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     CallFunc_WeaponNotify_GetDuration_Duration                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::WeaponNotify_SetDuration_Left(enum class Enum_NotifyDuration CallFunc_WeaponNotify_GetDuration_Duration, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetDuration_Left");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetDuration_Left_Params Parms{};

	Parms.CallFunc_WeaponNotify_GetDuration_Duration = CallFunc_WeaponNotify_GetDuration_Duration;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetVisibility_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_ShellNotify_GetVisibility_Visibility                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ShellNotify_SetVisibility_Right(enum class Enum_NotifyVisibility CallFunc_ShellNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetVisibility_Right");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetVisibility_Right_Params Parms{};

	Parms.CallFunc_ShellNotify_GetVisibility_Visibility = CallFunc_ShellNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetVisibility_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_ShellNotify_GetVisibility_Visibility                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ShellNotify_SetVisibility_Left(enum class Enum_NotifyVisibility CallFunc_ShellNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetVisibility_Left");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetVisibility_Left_Params Parms{};

	Parms.CallFunc_ShellNotify_GetVisibility_Visibility = CallFunc_ShellNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetDuration_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     CallFunc_ShellNotify_GetDuration_Duration                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ShellNotify_SetDuration_Right(enum class Enum_NotifyDuration CallFunc_ShellNotify_GetDuration_Duration, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetDuration_Right");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetDuration_Right_Params Parms{};

	Parms.CallFunc_ShellNotify_GetDuration_Duration = CallFunc_ShellNotify_GetDuration_Duration;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetDuration_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     CallFunc_ShellNotify_GetDuration_Duration                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ShellNotify_SetDuration_Left(enum class Enum_NotifyDuration CallFunc_ShellNotify_GetDuration_Duration, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetDuration_Left");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetDuration_Left_Params Parms{};

	Parms.CallFunc_ShellNotify_GetDuration_Duration = CallFunc_ShellNotify_GetDuration_Duration;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetVisibilityText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::WeaponNotify_SetVisibilityText(enum class Enum_NotifyVisibility Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetVisibilityText");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetVisibilityText_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyVisibility   CallFunc_GetWeaponNotify_Visibility_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::WeaponNotify_GetVisibility(enum class Enum_NotifyVisibility* Visibility, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyVisibility CallFunc_GetWeaponNotify_Visibility_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_GetVisibility");

	Params::UWBP_GameplaySettings_C_WeaponNotify_GetVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponNotify_Visibility_Visibility = CallFunc_GetWeaponNotify_Visibility_Visibility;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_SetDurationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::WeaponNotify_SetDurationText(enum class Enum_NotifyDuration Duration, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_SetDurationText");

	Params::UWBP_GameplaySettings_C_WeaponNotify_SetDurationText_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.WeaponNotify_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyDuration     CallFunc_GetWeaponNotify_Duration_Duration                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::WeaponNotify_GetDuration(enum class Enum_NotifyDuration* Duration, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyDuration CallFunc_GetWeaponNotify_Duration_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "WeaponNotify_GetDuration");

	Params::UWBP_GameplaySettings_C_WeaponNotify_GetDuration_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponNotify_Duration_Duration = CallFunc_GetWeaponNotify_Duration_Duration;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetVisibilityText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::ShellNotify_SetVisibilityText(enum class Enum_NotifyVisibility Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetVisibilityText");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetVisibilityText_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyVisibility   CallFunc_GetShellNotify_Visibility_Visibility                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ShellNotify_GetVisibility(enum class Enum_NotifyVisibility* Visibility, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyVisibility CallFunc_GetShellNotify_Visibility_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_GetVisibility");

	Params::UWBP_GameplaySettings_C_ShellNotify_GetVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShellNotify_Visibility_Visibility = CallFunc_GetShellNotify_Visibility_Visibility;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_SetDurationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::ShellNotify_SetDurationText(enum class Enum_NotifyDuration Duration, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_SetDurationText");

	Params::UWBP_GameplaySettings_C_ShellNotify_SetDurationText_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ShellNotify_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyDuration     CallFunc_GetShellNotify_Duration_Duration                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ShellNotify_GetDuration(enum class Enum_NotifyDuration* Duration, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyDuration CallFunc_GetShellNotify_Duration_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ShellNotify_GetDuration");

	Params::UWBP_GameplaySettings_C_ShellNotify_GetDuration_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShellNotify_Duration_Duration = CallFunc_GetShellNotify_Duration_Duration;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetNotificationSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_WeaponNotify_GetVisibility_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_WeaponNotify_GetDuration_Duration                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   CallFunc_ShellNotify_GetVisibility_Visibility                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_ShellNotify_GetDuration_Duration                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   CallFunc_ItemNotify_GetVisibility_Visibility                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_ItemNotify_GetDuration_Duration                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::GetNotificationSettings(enum class Enum_NotifyVisibility CallFunc_WeaponNotify_GetVisibility_Visibility, enum class Enum_NotifyDuration CallFunc_WeaponNotify_GetDuration_Duration, enum class Enum_NotifyVisibility CallFunc_ShellNotify_GetVisibility_Visibility, enum class Enum_NotifyDuration CallFunc_ShellNotify_GetDuration_Duration, enum class Enum_NotifyVisibility CallFunc_ItemNotify_GetVisibility_Visibility, enum class Enum_NotifyDuration CallFunc_ItemNotify_GetDuration_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetNotificationSettings");

	Params::UWBP_GameplaySettings_C_GetNotificationSettings_Params Parms{};

	Parms.CallFunc_WeaponNotify_GetVisibility_Visibility = CallFunc_WeaponNotify_GetVisibility_Visibility;
	Parms.CallFunc_WeaponNotify_GetDuration_Duration = CallFunc_WeaponNotify_GetDuration_Duration;
	Parms.CallFunc_ShellNotify_GetVisibility_Visibility = CallFunc_ShellNotify_GetVisibility_Visibility;
	Parms.CallFunc_ShellNotify_GetDuration_Duration = CallFunc_ShellNotify_GetDuration_Duration;
	Parms.CallFunc_ItemNotify_GetVisibility_Visibility = CallFunc_ItemNotify_GetVisibility_Visibility;
	Parms.CallFunc_ItemNotify_GetDuration_Duration = CallFunc_ItemNotify_GetDuration_Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetVisibility_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_ItemNotify_GetVisibility_Visibility                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ItemNotify_SetVisibility_Right(enum class Enum_NotifyVisibility CallFunc_ItemNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetVisibility_Right");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetVisibility_Right_Params Parms{};

	Parms.CallFunc_ItemNotify_GetVisibility_Visibility = CallFunc_ItemNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetVisibility_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   CallFunc_ItemNotify_GetVisibility_Visibility                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ItemNotify_SetVisibility_Left(enum class Enum_NotifyVisibility CallFunc_ItemNotify_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetVisibility_Left");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetVisibility_Left_Params Parms{};

	Parms.CallFunc_ItemNotify_GetVisibility_Visibility = CallFunc_ItemNotify_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetDuration_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_ItemNotify_GetDuration_Duration                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ItemNotify_SetDuration_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class Enum_NotifyDuration CallFunc_ItemNotify_GetDuration_Duration, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetDuration_Right");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetDuration_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_ItemNotify_GetDuration_Duration = CallFunc_ItemNotify_GetDuration_Duration;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetDuration_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_ItemNotify_GetDuration_Duration                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ItemNotify_SetDuration_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class Enum_NotifyDuration CallFunc_ItemNotify_GetDuration_Duration, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetDuration_Left");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetDuration_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_ItemNotify_GetDuration_Duration = CallFunc_ItemNotify_GetDuration_Duration;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetVisibilityText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::ItemNotify_SetVisibilityText(enum class Enum_NotifyVisibility Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetVisibilityText");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetVisibilityText_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyVisibility   CallFunc_GetItemNotify_Visibility_Visibility                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ItemNotify_GetVisibility(enum class Enum_NotifyVisibility* Visibility, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyVisibility CallFunc_GetItemNotify_Visibility_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_GetVisibility");

	Params::UWBP_GameplaySettings_C_ItemNotify_GetVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemNotify_Visibility_Visibility = CallFunc_GetItemNotify_Visibility_Visibility;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_SetDurationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::ItemNotify_SetDurationText(enum class Enum_NotifyDuration Duration, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_SetDurationText");

	Params::UWBP_GameplaySettings_C_ItemNotify_SetDurationText_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ItemNotify_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyDuration     CallFunc_GetItemNotify_Duration_Duration                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ItemNotify_GetDuration(enum class Enum_NotifyDuration* Duration, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyDuration CallFunc_GetItemNotify_Duration_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ItemNotify_GetDuration");

	Params::UWBP_GameplaySettings_C_ItemNotify_GetDuration_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemNotify_Duration_Duration = CallFunc_GetItemNotify_Duration_Duration;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_InvertControllerX
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_InvertControllerX(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_InvertControllerX");

	Params::UWBP_GameplaySettings_C_Get_Text_InvertControllerX_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.InvertControllerX_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::InvertControllerX_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "InvertControllerX_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.InvertMouseX_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::InvertMouseX_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "InvertMouseX_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Set_InvertMouseX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Set_InvertMouseX(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Set_InvertMouseX");

	Params::UWBP_GameplaySettings_C_Set_InvertMouseX_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetInvertMouseX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::Text_SetInvertMouseX(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetInvertMouseX");

	Params::UWBP_GameplaySettings_C_Text_SetInvertMouseX_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Set_InvertControllerX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Set_InvertControllerX(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Set_InvertControllerX");

	Params::UWBP_GameplaySettings_C_Set_InvertControllerX_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetInvertControllerX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::Text_SetInvertControllerX(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetInvertControllerX");

	Params::UWBP_GameplaySettings_C_Text_SetInvertControllerX_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.MouseSensitivityBZooka_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::MouseSensitivityBZooka_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "MouseSensitivityBZooka_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.MouseSensitivity_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::MouseSensitivity_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "MouseSensitivity_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.InvertMouseY_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::InvertMouseY_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "InvertMouseY_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ControllerSensitivityBZooka_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::ControllerSensitivityBZooka_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ControllerSensitivityBZooka_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ControllerSensitivity_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ControllerSensitivity_Reset(enum class EPlatform Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ControllerSensitivity_Reset");

	Params::UWBP_GameplaySettings_C_ControllerSensitivity_Reset_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.InvertControllerY_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::InvertControllerY_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "InvertControllerY_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HoldToDismiss_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::HoldToDismiss_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HoldToDismiss_Reset");

	Params::UWBP_GameplaySettings_C_HoldToDismiss_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.DisplayDamageNumber_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::DisplayDamageNumber_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "DisplayDamageNumber_Reset");

	Params::UWBP_GameplaySettings_C_DisplayDamageNumber_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.EnemyHPOpacity_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::EnemyHPOpacity_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "EnemyHPOpacity_Reset");

	Params::UWBP_GameplaySettings_C_EnemyHPOpacity_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.EnemyHPVisibility_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::EnemyHPVisibility_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "EnemyHPVisibility_Reset");

	Params::UWBP_GameplaySettings_C_EnemyHPVisibility_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ForceFeedbackScale_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ForceFeedbackScale_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ForceFeedbackScale_Reset");

	Params::UWBP_GameplaySettings_C_ForceFeedbackScale_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.CameraShakeScale_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::CameraShakeScale_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "CameraShakeScale_Reset");

	Params::UWBP_GameplaySettings_C_CameraShakeScale_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SubtitlesScale_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::SubtitlesScale_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SubtitlesScale_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.UIScale_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::UIScale_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "UIScale_Reset");

	Params::UWBP_GameplaySettings_C_UIScale_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HUDScale_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::HUDScale_Reset(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HUDScale_Reset");

	Params::UWBP_GameplaySettings_C_HUDScale_Reset_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AutoLockOn_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::AutoLockOn_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AutoLockOn_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ControllerIcons_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::ControllerIcons_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ControllerIcons_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Language_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::Language_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Language_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.StopListen_ResetToDefault_Gameplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::StopListen_ResetToDefault_Gameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "StopListen_ResetToDefault_Gameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetAutoLockOnText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTextBlock* UWBP_GameplaySettings_C::GetAutoLockOnText(bool Temp_bool_Variable, class UTextBlock* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetAutoLockOnText");

	Params::UWBP_GameplaySettings_C_GetAutoLockOnText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_AutoLockOn_Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Text_AutoLockOn_Update(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_AutoLockOn_Update");

	Params::UWBP_GameplaySettings_C_Text_AutoLockOn_Update_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetForceFeedbackScaleDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetForceFeedbackScale_Scale                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::SetForceFeedbackScaleDetails(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetForceFeedbackScale_Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetForceFeedbackScaleDetails");

	Params::UWBP_GameplaySettings_C_SetForceFeedbackScaleDetails_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetForceFeedbackScale_Scale = CallFunc_GetForceFeedbackScale_Scale;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ForceFeedback_AdjustScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetForceFeedbackScale_Scale                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ForceFeedback_AdjustScale(float Delta, bool CustomValue, float Value, float Local_Value, bool Local_CustomValue, float Local_Delta, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetForceFeedbackScale_Scale, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ForceFeedback_AdjustScale");

	Params::UWBP_GameplaySettings_C_ForceFeedback_AdjustScale_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.Local_CustomValue = Local_CustomValue;
	Parms.Local_Delta = Local_Delta;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetForceFeedbackScale_Scale = CallFunc_GetForceFeedbackScale_Scale;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetCameraShakeScaleDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCameraShakeScale_Scale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::SetCameraShakeScaleDetails(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCameraShakeScale_Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetCameraShakeScaleDetails");

	Params::UWBP_GameplaySettings_C_SetCameraShakeScaleDetails_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCameraShakeScale_Scale = CallFunc_GetCameraShakeScale_Scale;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.CameraShake_AdjustScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCameraShakeScale_Scale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::CameraShake_AdjustScale(float Delta, bool CustomValue, float Value, float Local_Value, bool Local_CustomValue, float Local_Delta, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCameraShakeScale_Scale, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "CameraShake_AdjustScale");

	Params::UWBP_GameplaySettings_C_CameraShake_AdjustScale_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.Local_CustomValue = Local_CustomValue;
	Parms.Local_Delta = Local_Delta;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCameraShakeScale_Scale = CallFunc_GetCameraShakeScale_Scale;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetHoldToDismiss(bool CallFunc_GetHoldToDismiss_Hold, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHoldToDismiss");

	Params::UWBP_GameplaySettings_C_SetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.TextSetHoldToDismiss
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::TextSetHoldToDismiss(bool Hold, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "TextSetHoldToDismiss");

	Params::UWBP_GameplaySettings_C_TextSetHoldToDismiss_Params Parms{};

	Parms.Hold = Hold;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetHoldToDismiss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::GetHoldToDismiss(bool* Hold, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetHoldToDismiss");

	Params::UWBP_GameplaySettings_C_GetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;

	UObject::ProcessEvent(Func, &Parms);

	if (Hold != nullptr)
		*Hold = Parms.Hold;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetDamageNumbers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetDamageNumbers(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_GetDamageNumbers_Show, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetDamageNumbers");

	Params::UWBP_GameplaySettings_C_SetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::GetDamageNumbers(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetDamageNumbers");

	Params::UWBP_GameplaySettings_C_GetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetDamageNumbers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::Text_SetDamageNumbers(bool Show, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetDamageNumbers");

	Params::UWBP_GameplaySettings_C_Text_SetDamageNumbers_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::GetPressPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetPressPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HUDScale_SetRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetHUDScale_Size                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::HUDScale_SetRight(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_HUD_Size CallFunc_GetHUDScale_Size, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HUDScale_SetRight");

	Params::UWBP_GameplaySettings_C_HUDScale_SetRight_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetHUDScale_Size = CallFunc_GetHUDScale_Size;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HUDScale_SetLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetHUDScale_Size                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::HUDScale_SetLeft(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_HUD_Size CallFunc_GetHUDScale_Size, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HUDScale_SetLeft");

	Params::UWBP_GameplaySettings_C_HUDScale_SetLeft_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetHUDScale_Size = CallFunc_GetHUDScale_Size;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HUDScale_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetHUDScale_Size                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::HUDScale_SetText(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetHUDScale_Size, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HUDScale_SetText");

	Params::UWBP_GameplaySettings_C_HUDScale_SetText_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUDScale_Size = CallFunc_GetHUDScale_Size;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetEnemyHPOpacity_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetEnemyHPOpacity_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetEnemyHPOpacity_Right");

	Params::UWBP_GameplaySettings_C_SetEnemyHPOpacity_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetEnemyHPOpacity_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetEnemyHPOpacity_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetEnemyHPOpacity_Left");

	Params::UWBP_GameplaySettings_C_SetEnemyHPOpacity_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetEnemyHPVisibility_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetEnemyHPVisibility_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetEnemyHPVisibility_Right");

	Params::UWBP_GameplaySettings_C_SetEnemyHPVisibility_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetEnemyHPVisibility_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetEnemyHPVisibility_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetEnemyHPVisibility_Left");

	Params::UWBP_GameplaySettings_C_SetEnemyHPVisibility_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetHPOpacityAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetHPOpacityAvailability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetHPOpacityAvailability");

	Params::UWBP_GameplaySettings_C_SetHPOpacityAvailability_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_EnemyHPOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::Text_EnemyHPOpacity(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_EnemyHPOpacity");

	Params::UWBP_GameplaySettings_C_Text_EnemyHPOpacity_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_EnemyHPVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::Text_EnemyHPVisibility(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_EnemyHPVisibility");

	Params::UWBP_GameplaySettings_C_Text_EnemyHPVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.CheckIfEnemyHPEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BuildType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BuildType          CallFunc_GetBuildVersion_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::CheckIfEnemyHPEnabled(int32 Index, int32 Delta, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class Enum_BuildType Temp_byte_Variable, enum class Enum_BuildType CallFunc_GetBuildVersion_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "CheckIfEnemyHPEnabled");

	Params::UWBP_GameplaySettings_C_CheckIfEnemyHPEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetBuildVersion_ReturnValue = CallFunc_GetBuildVersion_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetBuildVersion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_BuildType          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BuildType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BuildType          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BuildType          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BuildType          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BuildType          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_BuildType UWBP_GameplaySettings_C::GetBuildVersion(bool Temp_bool_Variable, enum class Enum_BuildType Temp_byte_Variable, bool Temp_bool_Variable_1, enum class Enum_BuildType Temp_byte_Variable_1, enum class Enum_BuildType Temp_byte_Variable_2, enum class Enum_BuildType K2Node_Select_Default, enum class Enum_BuildType K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetBuildVersion");

	Params::UWBP_GameplaySettings_C_GetBuildVersion_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.DisableLanguageOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::DisableLanguageOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "DisableLanguageOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_ControllerSensitivity_Bzooka
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_ControllerSensitivity_Bzooka(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_ControllerSensitivity_Bzooka");

	Params::UWBP_GameplaySettings_C_Get_Text_ControllerSensitivity_Bzooka_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_ControllerSensitivity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_ControllerSensitivity(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_ControllerSensitivity");

	Params::UWBP_GameplaySettings_C_Get_Text_ControllerSensitivity_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_InvertControllerY
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_InvertControllerY(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_InvertControllerY");

	Params::UWBP_GameplaySettings_C_Get_Text_InvertControllerY_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_ControllerCalibration
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_GameplaySettings_C::Get_Text_ControllerCalibration(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_ControllerCalibration");

	Params::UWBP_GameplaySettings_C_Get_Text_ControllerCalibration_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HideMouseCalibrationOnConsoles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::HideMouseCalibrationOnConsoles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HideMouseCalibrationOnConsoles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.HideIconsOptionOnConsoles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::HideIconsOptionOnConsoles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "HideIconsOptionOnConsoles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get Platform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Get_Platform(bool K2Node_SwitchEnum_CmpSuccess, enum class EPlatform CallFunc_GetPlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get Platform");

	Params::UWBP_GameplaySettings_C_Get_Platform_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ResetSpinBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ResetSpinBoxes");

	Params::UWBP_GameplaySettings_C_ResetSpinBoxes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetSpinBoxes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USpinBox*>            Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_Select_Default_1                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::GetSpinBoxes(TArray<class USpinBox*>* Array, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TArray<class USpinBox*>& K2Node_MakeArray_Array, TArray<class USpinBox*>& K2Node_MakeArray_Array_1, TArray<class USpinBox*>& K2Node_MakeArray_Array_2, TArray<class USpinBox*>& K2Node_Select_Default, TArray<class USpinBox*>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetSpinBoxes");

	Params::UWBP_GameplaySettings_C_GetSpinBoxes_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Language_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Language_Right(int32 Local_Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Language_Right");

	Params::UWBP_GameplaySettings_C_Language_Right_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetLanguage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Text_SetLanguage(class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetLanguage");

	Params::UWBP_GameplaySettings_C_Text_SetLanguage_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Language_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Language_Left(int32 Local_Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Language_Left");

	Params::UWBP_GameplaySettings_C_Language_Left_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetMouseSensitivityBzookaDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_GameplaySettings_C::SetMouseSensitivityBzookaDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetMouseSensitivityBzookaDetails");

	Params::UWBP_GameplaySettings_C_SetMouseSensitivityBzookaDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetMouseSensitivityDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_GameplaySettings_C::SetMouseSensitivityDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetMouseSensitivityDetails");

	Params::UWBP_GameplaySettings_C_SetMouseSensitivityDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetControllerSensitivityBzookaDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_GameplaySettings_C::SetControllerSensitivityBzookaDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetControllerSensitivityBzookaDetails");

	Params::UWBP_GameplaySettings_C_SetControllerSensitivityBzookaDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetControllerSensitivityDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_GameplaySettings_C::SetControllerSensitivityDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetControllerSensitivityDetails");

	Params::UWBP_GameplaySettings_C_SetControllerSensitivityDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AdjustMouseSensitivity_Bzooka
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::AdjustMouseSensitivity_Bzooka(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AdjustMouseSensitivity_Bzooka");

	Params::UWBP_GameplaySettings_C_AdjustMouseSensitivity_Bzooka_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AdjustControllerSensitivity_Bzooka
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::AdjustControllerSensitivity_Bzooka(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AdjustControllerSensitivity_Bzooka");

	Params::UWBP_GameplaySettings_C_AdjustControllerSensitivity_Bzooka_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AdjustControllerSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::AdjustControllerSensitivity(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AdjustControllerSensitivity");

	Params::UWBP_GameplaySettings_C_AdjustControllerSensitivity_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AdjustMouseSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::AdjustMouseSensitivity(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AdjustMouseSensitivity");

	Params::UWBP_GameplaySettings_C_AdjustMouseSensitivity_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Set_InvertMouseY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Set_InvertMouseY(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Set_InvertMouseY");

	Params::UWBP_GameplaySettings_C_Set_InvertMouseY_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetInvertMouseY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::Text_SetInvertMouseY(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetInvertMouseY");

	Params::UWBP_GameplaySettings_C_Text_SetInvertMouseY_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Set_InvertControllerY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Set_InvertControllerY(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Set_InvertControllerY");

	Params::UWBP_GameplaySettings_C_Set_InvertControllerY_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Text_SetInvertControllerY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::Text_SetInvertControllerY(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Text_SetInvertControllerY");

	Params::UWBP_GameplaySettings_C_Text_SetInvertControllerY_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetSubtitlesScaleDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GameplaySettings_C::SetSubtitlesScaleDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetSubtitlesScaleDetails");

	Params::UWBP_GameplaySettings_C_SetSubtitlesScaleDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SubtitlesAdjustScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::SubtitlesAdjustScale(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SubtitlesAdjustScale");

	Params::UWBP_GameplaySettings_C_SubtitlesAdjustScale_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Nav_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Nav_Left(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Nav_Left");

	Params::UWBP_GameplaySettings_C_Nav_Left_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Nav_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Nav_Right(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Nav_Right");

	Params::UWBP_GameplaySettings_C_Nav_Right_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.UI_Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::UI_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "UI_Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AutoLockOn_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::AutoLockOn_Set(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AutoLockOn_Set");

	Params::UWBP_GameplaySettings_C_AutoLockOn_Set_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.AutoLockOn_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::AutoLockOn_SetText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "AutoLockOn_SetText");

	Params::UWBP_GameplaySettings_C_AutoLockOn_SetText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ControllerIcons_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::ControllerIcons_Set(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ControllerIcons_Set");

	Params::UWBP_GameplaySettings_C_ControllerIcons_Set_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Texts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  CallFunc_GetAutoLockOnText_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_GetAutoLockOnText_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_GetAutoLockOnText_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_Select_Default_1                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Get_Texts(TArray<class UTextBlock*>* Array, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UTextBlock* CallFunc_GetAutoLockOnText_ReturnValue, class UTextBlock* CallFunc_GetAutoLockOnText_ReturnValue_1, class UTextBlock* CallFunc_GetAutoLockOnText_ReturnValue_2, TArray<class UTextBlock*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2, TArray<class UTextBlock*>& K2Node_Select_Default, TArray<class UTextBlock*>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Texts");

	Params::UWBP_GameplaySettings_C_Get_Texts_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetAutoLockOnText_ReturnValue = CallFunc_GetAutoLockOnText_ReturnValue;
	Parms.CallFunc_GetAutoLockOnText_ReturnValue_1 = CallFunc_GetAutoLockOnText_ReturnValue_1;
	Parms.CallFunc_GetAutoLockOnText_ReturnValue_2 = CallFunc_GetAutoLockOnText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Texts_Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_Select_Default_1                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Get_Texts_Value(TArray<class UTextBlock*>* Array, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TArray<class UTextBlock*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2, TArray<class UTextBlock*>& K2Node_Select_Default, TArray<class UTextBlock*>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Texts_Value");

	Params::UWBP_GameplaySettings_C_Get_Texts_Value_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Buttons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_Select_Default_1                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Get_Buttons(TArray<class UButton*>* Array, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_MakeArray_Array_1, TArray<class UButton*>& K2Node_MakeArray_Array_2, TArray<class UButton*>& K2Node_Select_Default, TArray<class UButton*>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Buttons");

	Params::UWBP_GameplaySettings_C_Get_Buttons_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Buttons_Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_Get_Texts_Array                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_Get_Texts_Value_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::Buttons_Reset(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class UTextBlock*>& CallFunc_Get_Texts_Array, TArray<class UTextBlock*>& CallFunc_Get_Texts_Value_Array, class UTextBlock* CallFunc_Array_Get_Item, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UButton*>& CallFunc_Get_Buttons_Array, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Buttons_Reset");

	Params::UWBP_GameplaySettings_C_Buttons_Reset_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Get_Texts_Array = CallFunc_Get_Texts_Array;
	Parms.CallFunc_Get_Texts_Value_Array = CallFunc_Get_Texts_Value_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Get_Buttons_Array = CallFunc_Get_Buttons_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetGameInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_GameplaySettings_C::SetGameInstance(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetGameInstance");

	Params::UWBP_GameplaySettings_C_SetGameInstance_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ControllerIcons_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GameplaySettings_C::ControllerIcons_SetText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ControllerIcons_SetText");

	Params::UWBP_GameplaySettings_C_ControllerIcons_SetText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Get_Text_Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UWBP_GameplaySettings_C::Get_Text_Color(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Get_Text_Color");

	Params::UWBP_GameplaySettings_C_Get_Text_Color_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.SetNavigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index_Selected                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_1                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_2                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_3                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array_1                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_4                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          CallFunc_Get_Texts_Array                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_Get_Texts_Value_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_5                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_Text_Color_ReturnValue                              (None)
// struct FSlateColor                 CallFunc_Get_Text_Color_ReturnValue_1                            (None)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array_6                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::SetNavigation(bool UseWidget, bool Hovering, bool CustomIndex, int32 Index, int32 Delta, class UButton* Button, bool Local_UseWidget, bool Local_Hovering, int32 Local_Index_Selected, int32 Local_Delta, bool Local_CustomIndex, int32 Local_Index, class UButton* Local_Button, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_Get_Buttons_Array, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_GetIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, TArray<class UButton*>& CallFunc_Get_Buttons_Array_1, int32 CallFunc_Array_Find_ReturnValue, TArray<class UButton*>& CallFunc_Get_Buttons_Array_2, TArray<class UButton*>& CallFunc_Get_Buttons_Array_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array_1, class USpinBox* CallFunc_Array_Get_Item_2, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_IsValid_ReturnValue_1, TArray<class UButton*>& CallFunc_Get_Buttons_Array_4, class UButton* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class UTextBlock*>& CallFunc_Get_Texts_Array, TArray<class UTextBlock*>& CallFunc_Get_Texts_Value_Array, TArray<class UButton*>& CallFunc_Get_Buttons_Array_5, class UButton* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class UTextBlock* CallFunc_Array_Get_Item_5, class UTextBlock* CallFunc_Array_Get_Item_6, const struct FSlateColor& CallFunc_Get_Text_Color_ReturnValue, const struct FSlateColor& CallFunc_Get_Text_Color_ReturnValue_1, TArray<class UButton*>& CallFunc_Get_Buttons_Array_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, class UButton* CallFunc_Array_Get_Item_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "SetNavigation");

	Params::UWBP_GameplaySettings_C_SetNavigation_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Index_Selected = Local_Index_Selected;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Index = Local_Index;
	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Buttons_Array = CallFunc_Get_Buttons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIndex_ReturnValue_1 = CallFunc_GetIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Get_Buttons_Array_1 = CallFunc_Get_Buttons_Array_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Get_Buttons_Array_2 = CallFunc_Get_Buttons_Array_2;
	Parms.CallFunc_Get_Buttons_Array_3 = CallFunc_Get_Buttons_Array_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array_1 = CallFunc_GetSpinBoxes_Array_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Buttons_Array_4 = CallFunc_Get_Buttons_Array_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Get_Texts_Array = CallFunc_Get_Texts_Array;
	Parms.CallFunc_Get_Texts_Value_Array = CallFunc_Get_Texts_Value_Array;
	Parms.CallFunc_Get_Buttons_Array_5 = CallFunc_Get_Buttons_Array_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Get_Text_Color_ReturnValue = CallFunc_Get_Text_Color_ReturnValue;
	Parms.CallFunc_Get_Text_Color_ReturnValue_1 = CallFunc_Get_Text_Color_ReturnValue_1;
	Parms.CallFunc_Get_Buttons_Array_6 = CallFunc_Get_Buttons_Array_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.GetIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_Get_Buttons_Array                                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_GameplaySettings_C::GetIndex(int32 SelectedIndex, int32 Delta, TArray<class UButton*>& CallFunc_Get_Buttons_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "GetIndex");

	Params::UWBP_GameplaySettings_C_GetIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.CallFunc_Get_Buttons_Array = CallFunc_Get_Buttons_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_InvertControllerY_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_InvertControllerY_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_InvertControllerY_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_InvertControllerY_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_InvertControllerY_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_InvertControllerY_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertControllerY_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_SubtitlesScale_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ControllerSensitivity_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ControllerSensitivity_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ControllerSensitivity_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ControllerSensitivity_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ControllerSensitivity_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ControllerSensitivity_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ControllerSensitivity_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertMouseY_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_InvertMouseY_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_InvertMouseY_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_InvertMouseY_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_InvertMouseY_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_InvertMouseY_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_InvertMouseY_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_MouseSensitvity_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_MouseSensitivity_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_MouseSensitivity_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_MouseSensitivity_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_MouseSensitivity_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_MouseSensitivity_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_MouseSensitivity_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_MouseSensitvity_Bzooka_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_47_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_47_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_47_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_47_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_48_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_48_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_48_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_ControllerSensitivity_K2Node_ComponentBoundEvent_48_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_50_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_50_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_50_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_50_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_51_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_51_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_51_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_ControllerSensitivity_Bzooka_K2Node_ComponentBoundEvent_51_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_53_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_53_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_53_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_MouseSensitivity_K2Node_ComponentBoundEvent_53_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_54_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_54_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_54_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_54_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_55_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_55_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_55_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_GameplaySettings_C_BndEvt__SpinBox_MouseSensitivity_Bzooka_K2Node_ComponentBoundEvent_55_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_Language_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_Language_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_Language_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_Language_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_Language_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_Language_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Language_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Language_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Language_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Language_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Language_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Language_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HUDScale_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_HUDScale_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_HUDScale_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_HUDScale_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_HUDScale_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_HUDScale_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_HUDScale_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_69_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_69_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_69_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_CameraShakeScale_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_CameraShakeScale_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_CameraShakeScale_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_CameraShakeScale_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_CameraShakeScale_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_CameraShakeScale_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_CameraShakeScale_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ForceFeedbackScale_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ForceFeedbackScale_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ForceFeedbackScale_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ForceFeedbackScale_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ForceFeedbackScale_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ForceFeedbackScale_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ForceFeedbackScale_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnOpen_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::OnOpen_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnOpen_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnLanguageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::OnLanguageChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnLanguageChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnResetToDefault_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::OnResetToDefault_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnResetToDefault_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.OnResetToDefault_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::OnResetToDefault_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "OnResetToDefault_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertControllerX_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_InvertControllerX_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_InvertControllerX_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_InvertControllerX_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_InvertControllerX_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_InvertControllerX_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_InvertControllerX_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_InvertMouseX_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_InvertMouseX_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_InvertMouseX_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_InvertMouseX_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_InvertMouseX_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_InvertMouseX_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_InvertMouseX_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ItemNotify_Duration_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ItemNotify_Duration_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ItemNotify_Duration_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ItemNotify_Duration_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ItemNotify_Duration_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ItemNotify_Duration_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ItemNotify_Duration_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_91_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_91_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ItemNotify_Visibility_K2Node_ComponentBoundEvent_91_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ItemNotify_Visibility_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ItemNotify_Visibility_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ItemNotify_Visibility_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ItemNotify_Visibility_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ItemNotify_Visibility_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ItemNotify_Visibility_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ShellsNotify_Duration_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ShellsNotify_Duration_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ShellsNotify_Duration_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ShellsNotify_Duration_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ShellsNotify_Duration_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ShellsNotify_Duration_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ShellsNotify_Duration_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_98_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_98_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_98_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_ShellsNotify_Visibility_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_WeaponNotify_Duration_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_WeaponNotify_Duration_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_WeaponNotify_Duration_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_WeaponNotify_Duration_K2Node_ComponentBoundEvent_104_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_WeaponNotify_Duration_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_WeaponNotify_Duration_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_WeaponNotify_Duration_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_106_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_106_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_106_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_WeaponNotify_Visibility_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS4Prompts_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_110_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_111_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_111_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideBallistazooka_K2Node_ComponentBoundEvent_111_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_HideBallistazooka_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_HideBallistazooka_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_HideBallistazooka_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_HideBallistazooka_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_HideBallistazooka_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_HideBallistazooka_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_SeasonalContent_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_SeasonalContent_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_SeasonalContent_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_SeasonalContent_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_SeasonalContent_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_SeasonalContent_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_SeasonalContent_K2Node_ComponentBoundEvent_117_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_119_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_119_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_UIScale_K2Node_ComponentBoundEvent_119_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_UIScale_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_UIScale_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_UIScale_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_UIScale_K2Node_ComponentBoundEvent_121_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_UIScale_K2Node_ComponentBoundEvent_121_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_UIScale_K2Node_ComponentBoundEvent_121_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ChangeValueRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::ChangeValueRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ChangeValueRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_HideTarnishedSeal_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_HideTarnishedSeal_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_HideTarnishedSeal_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_HideTarnishedSeal_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_HideTarnishedSeal_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_HideTarnishedSeal_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideTarnishedSeal_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ChangeValueLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::ChangeValueLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ChangeValueLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_126_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_126_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_126_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_HideSacredGlands_K2Node_ComponentBoundEvent_127_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_HideSacredGlands_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_HideSacredGlands_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_HideSacredGlands_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_HideSacredGlands_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_HideSacredGlands_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_HideSacredGlands_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.Navigate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::Navigate(bool CustomIndex, int32 Index, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "Navigate");

	Params::UWBP_GameplaySettings_C_Navigate_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_131_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_131_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_TriggerEffect_K2Node_ComponentBoundEvent_131_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_PS5_TriggerEffect_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_PS5_TriggerEffect_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_PS5_TriggerEffect_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_PS5_TriggerEffect_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_PS5_TriggerEffect_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_PS5_TriggerEffect_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__HandleRight_ps4_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__HandleRight_ps4_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__HandleRight_ps4_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_134_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_134_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_134_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_SpeakerMode_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_PS5_SpeakerMode_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_PS5_SpeakerMode_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_PS5_SpeakerMode_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_PS5_SpeakerMode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_PS5_SpeakerMode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_PS5_SpeakerMode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__HandleLeft_ps4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__HandleLeft_ps4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__HandleLeft_ps4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_139_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_139_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_PS5_VibrationScale_K2Node_ComponentBoundEvent_139_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Left_PS5_VibrationScale_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Left_PS5_VibrationScale_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Left_PS5_VibrationScale_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.BndEvt__Button_Right_PS5_VibrationScale_K2Node_ComponentBoundEvent_141_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplaySettings_C::BndEvt__Button_Right_PS5_VibrationScale_K2Node_ComponentBoundEvent_141_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "BndEvt__Button_Right_PS5_VibrationScale_K2Node_ComponentBoundEvent_141_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplaySettings.WBP_GameplaySettings_C.ExecuteUbergraph_WBP_GameplaySettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CustomIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplaySettings_C::ExecuteUbergraph_WBP_GameplaySettings(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_ComponentBoundEvent_InValue_9, float K2Node_ComponentBoundEvent_InValue_8, float K2Node_ComponentBoundEvent_InValue_7, float K2Node_ComponentBoundEvent_InValue_6, float K2Node_ComponentBoundEvent_InValue_5, float K2Node_ComponentBoundEvent_InValue_4, float K2Node_ComponentBoundEvent_InValue_3, float K2Node_ComponentBoundEvent_InValue_2, float K2Node_ComponentBoundEvent_InValue_1, float K2Node_ComponentBoundEvent_InValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplaySettings_C", "ExecuteUbergraph_WBP_GameplaySettings");

	Params::UWBP_GameplaySettings_C_ExecuteUbergraph_WBP_GameplaySettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_InValue_9 = K2Node_ComponentBoundEvent_InValue_9;
	Parms.K2Node_ComponentBoundEvent_InValue_8 = K2Node_ComponentBoundEvent_InValue_8;
	Parms.K2Node_ComponentBoundEvent_InValue_7 = K2Node_ComponentBoundEvent_InValue_7;
	Parms.K2Node_ComponentBoundEvent_InValue_6 = K2Node_ComponentBoundEvent_InValue_6;
	Parms.K2Node_ComponentBoundEvent_InValue_5 = K2Node_ComponentBoundEvent_InValue_5;
	Parms.K2Node_ComponentBoundEvent_InValue_4 = K2Node_ComponentBoundEvent_InValue_4;
	Parms.K2Node_ComponentBoundEvent_InValue_3 = K2Node_ComponentBoundEvent_InValue_3;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_CustomIndex = K2Node_CustomEvent_CustomIndex;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;

	UObject::ProcessEvent(Func, &Parms);

}

}


