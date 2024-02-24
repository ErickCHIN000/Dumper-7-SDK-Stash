#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C
// (None)

class UClass* UWid_MainMenu_VideoSettingsConsole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_VideoSettingsConsole_C");

	return Clss;
}


// wid_MainMenu_VideoSettingsConsole_C wid_MainMenu_VideoSettingsConsole.Default__wid_MainMenu_VideoSettingsConsole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_VideoSettingsConsole_C* UWid_MainMenu_VideoSettingsConsole_C::GetDefaultObj()
{
	static class UWid_MainMenu_VideoSettingsConsole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_VideoSettingsConsole_C*>(UWid_MainMenu_VideoSettingsConsole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Get Graphics Quality Settings Console
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Graphics_Quality                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGeometryQuality_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_MaxOfIntArray_IndexOfMaxValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MaxOfIntArray_MaxValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MinOfIntArray_IndexOfMinValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MinOfIntArray_MinValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Get_Graphics_Quality_Settings_Console(int32* Graphics_Quality, bool Temp_bool_Variable, int32 Temp_int_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Get Graphics Quality Settings Console");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Get_Graphics_Quality_Settings_Console_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGeometryQuality_ReturnValue = CallFunc_GetGeometryQuality_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MaxOfIntArray_IndexOfMaxValue = CallFunc_MaxOfIntArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfIntArray_MaxValue = CallFunc_MaxOfIntArray_MaxValue;
	Parms.CallFunc_MinOfIntArray_IndexOfMinValue = CallFunc_MinOfIntArray_IndexOfMinValue;
	Parms.CallFunc_MinOfIntArray_MinValue = CallFunc_MinOfIntArray_MinValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Graphics_Quality != nullptr)
		*Graphics_Quality = Parms.Graphics_Quality;

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.ClampGraphicsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EScalabilityType        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_MainMenu_VideoSettingsConsole_C::ClampGraphicsValue(enum class EScalabilityType Type, int32 Value, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "ClampGraphicsValue");

	Params::UWid_MainMenu_VideoSettingsConsole_C_ClampGraphicsValue_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp = CallFunc_GetScalabilityClamp_Global_Clamp;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp = CallFunc_GetScalabilityClamp_Advanced_Clamp;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.ShowRestartPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::ShowRestartPopup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "ShowRestartPopup");

	Params::UWid_MainMenu_VideoSettingsConsole_C_ShowRestartPopup_Params Parms{};

	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.OnPopupConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::OnPopupConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "OnPopupConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.ApplyButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::ApplyButtonPressed(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "ApplyButtonPressed");

	Params::UWid_MainMenu_VideoSettingsConsole_C_ApplyButtonPressed_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Set Background Visibility");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Hide Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Hide_Popup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Hide Popup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Capitalize Labels
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWid_MainMenu_VideoSettingsConsole_C::Capitalize_Labels(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Capitalize Labels");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Capitalize_Labels_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Is Any Popup Visible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Visible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettingsConsole_C::Is_Any_Popup_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Is Any Popup Visible");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Is_Any_Popup_Visible_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Visible != nullptr)
		*Is_Visible = Parms.Is_Visible;

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Show Ultra Quality Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Show_Ultra_Quality_Popup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Show Ultra Quality Popup");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Show_Ultra_Quality_Popup_Params Parms{};

	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Close Video Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Close_Video_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Close Video Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Save Graphics Quality
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentGraphicsQuality                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Save_Graphics_Quality(int32 CurrentGraphicsQuality, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_ClampGraphicsValue_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_2, int32 CallFunc_ClampGraphicsValue_ReturnValue_3, int32 CallFunc_ClampGraphicsValue_ReturnValue_4, int32 CallFunc_ClampGraphicsValue_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_6, int32 CallFunc_SelectInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Save Graphics Quality");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Save_Graphics_Quality_Params Parms{};

	Parms.CurrentGraphicsQuality = CurrentGraphicsQuality;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue = CallFunc_ClampGraphicsValue_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_1 = CallFunc_ClampGraphicsValue_ReturnValue_1;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_2 = CallFunc_ClampGraphicsValue_ReturnValue_2;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_3 = CallFunc_ClampGraphicsValue_ReturnValue_3;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_4 = CallFunc_ClampGraphicsValue_ReturnValue_4;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_5 = CallFunc_ClampGraphicsValue_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_6 = CallFunc_ClampGraphicsValue_ReturnValue_6;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_7 = CallFunc_ClampGraphicsValue_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Setup Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_VideoSettingsConsole_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Setup Events");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Load Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBloomEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetChromaticAberationEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLensFlareEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Graphics_Quality_Settings_Console_Graphics_Quality  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetDepthOfFieldEnabled_ReturnValue, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_GetBloomEnabled_ReturnValue, bool CallFunc_GetChromaticAberationEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool CallFunc_GetLensFlareEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Get_Graphics_Quality_Settings_Console_Graphics_Quality, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Load Settings");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldEnabled_ReturnValue = CallFunc_GetDepthOfFieldEnabled_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetBloomEnabled_ReturnValue = CallFunc_GetBloomEnabled_ReturnValue;
	Parms.CallFunc_GetChromaticAberationEnabled_ReturnValue = CallFunc_GetChromaticAberationEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_GetLensFlareEnabled_ReturnValue = CallFunc_GetLensFlareEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Get_Graphics_Quality_Settings_Console_Graphics_Quality = CallFunc_Get_Graphics_Quality_Settings_Console_Graphics_Quality;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Save Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettingsConsole_C::Save_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_Conv_IntToBool_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, bool CallFunc_Conv_IntToBool_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, bool CallFunc_Conv_IntToBool_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Save Settings");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Save_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_3 = CallFunc_Conv_IntToBool_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_4 = CallFunc_Conv_IntToBool_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_5 = CallFunc_Conv_IntToBool_ReturnValue_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Setup Selectable Manger
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_VideoSettingsConsole_C::Setup_Selectable_Manger(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Setup Selectable Manger");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Setup_Selectable_Manger_Params Parms{};

	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Reset To Defaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettingsConsole_C::Reset_To_Defaults(int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_Is_Any_Popup_Visible_Is_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Reset To Defaults");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Reset_To_Defaults_Params Parms{};

	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettingsConsole_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "PreConstruct");

	Params::UWid_MainMenu_VideoSettingsConsole_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.BackBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::BackBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "BackBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "Tick");

	Params::UWid_MainMenu_VideoSettingsConsole_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.InputBackspace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::InputBackspace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "InputBackspace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.ShowGammaSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettingsConsole_C::ShowGammaSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "ShowGammaSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C.ExecuteUbergraph_wid_MainMenu_VideoSettingsConsole
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_menu_Benchmark_button_C*K2Node_DynamicCast_AsWid_Menu_Benchmark_Button                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Gamma_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettingsConsole_C::ExecuteUbergraph_wid_MainMenu_VideoSettingsConsole(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Is_Any_Popup_Visible_Is_Visible, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_menu_Benchmark_button_C* K2Node_DynamicCast_AsWid_Menu_Benchmark_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_1, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_2, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_3, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_4, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_6, class UWid_MainMenu_Gamma_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetMainMenuZOrder_ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettingsConsole_C", "ExecuteUbergraph_wid_MainMenu_VideoSettingsConsole");

	Params::UWid_MainMenu_VideoSettingsConsole_C_ExecuteUbergraph_wid_MainMenu_VideoSettingsConsole_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsWid_Menu_Benchmark_Button = K2Node_DynamicCast_AsWid_Menu_Benchmark_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_1 = CallFunc_Is_Any_Popup_Visible_Is_Visible_1;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_2 = CallFunc_Is_Any_Popup_Visible_Is_Visible_2;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_3 = CallFunc_Is_Any_Popup_Visible_Is_Visible_3;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_4 = CallFunc_Is_Any_Popup_Visible_Is_Visible_4;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_5 = CallFunc_Is_Any_Popup_Visible_Is_Visible_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_6 = CallFunc_Is_Any_Popup_Visible_Is_Visible_6;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder = CallFunc_GetMainMenuZOrder_ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}

}


