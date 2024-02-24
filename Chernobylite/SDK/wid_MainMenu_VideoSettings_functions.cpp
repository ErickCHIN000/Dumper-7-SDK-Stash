#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C
// (None)

class UClass* UWid_MainMenu_VideoSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_VideoSettings_C");

	return Clss;
}


// wid_MainMenu_VideoSettings_C wid_MainMenu_VideoSettings.Default__wid_MainMenu_VideoSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_VideoSettings_C* UWid_MainMenu_VideoSettings_C::GetDefaultObj()
{
	static class UWid_MainMenu_VideoSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_VideoSettings_C*>(UWid_MainMenu_VideoSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.SetupEventForApplyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_MainMenu_VideoSettings_C::SetupEventForApplyButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "SetupEventForApplyButton");

	Params::UWid_MainMenu_VideoSettings_C_SetupEventForApplyButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.CacheSettingsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      CallFunc_GetSettingsArray_Array                                  (ReferenceParm)

void UWid_MainMenu_VideoSettings_C::CacheSettingsArray(TArray<float>& CallFunc_GetSettingsArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "CacheSettingsArray");

	Params::UWid_MainMenu_VideoSettings_C_CacheSettingsArray_Params Parms{};

	Parms.CallFunc_GetSettingsArray_Array = CallFunc_GetSettingsArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.GetSettingsArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      Array                                                            (Parm, OutParm)
// TArray<float>                      SettingsArray                                                    (Edit, BlueprintVisible)
// int32                              CurrentGraphicsQuality                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_Get_Selected_Window_Mode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Get_Selected_Resolution_Output                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::GetSettingsArray(TArray<float>* Array, const TArray<float>& SettingsArray, int32 CurrentGraphicsQuality, enum class EWindowMode CallFunc_Get_Selected_Window_Mode_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FIntPoint& CallFunc_Get_Selected_Resolution_Output, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, int32 CallFunc_Array_Add_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, float CallFunc_GetValueWithinMinMax_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_8, float Temp_float_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_ClampGraphicsValue_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Conv_IntToFloat_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_ClampGraphicsValue_ReturnValue_3, int32 CallFunc_ClampGraphicsValue_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_10, float CallFunc_Conv_IntToFloat_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_ClampGraphicsValue_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_12, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_16, int32 CallFunc_ClampGraphicsValue_ReturnValue_6, int32 CallFunc_ClampGraphicsValue_ReturnValue_7, float CallFunc_Conv_IntToFloat_ReturnValue_13, float CallFunc_Conv_IntToFloat_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "GetSettingsArray");

	Params::UWid_MainMenu_VideoSettings_C_GetSettingsArray_Params Parms{};

	Parms.SettingsArray = SettingsArray;
	Parms.CurrentGraphicsQuality = CurrentGraphicsQuality;
	Parms.CallFunc_Get_Selected_Window_Mode_ReturnValue = CallFunc_Get_Selected_Window_Mode_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Get_Selected_Resolution_Output = CallFunc_Get_Selected_Resolution_Output;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_1 = CallFunc_GetValueWithinMinMax_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue = CallFunc_ClampGraphicsValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_1 = CallFunc_ClampGraphicsValue_ReturnValue_1;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_2 = CallFunc_ClampGraphicsValue_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_3 = CallFunc_ClampGraphicsValue_ReturnValue_3;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_4 = CallFunc_ClampGraphicsValue_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_10 = CallFunc_Conv_IntToFloat_ReturnValue_10;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_11 = CallFunc_Conv_IntToFloat_ReturnValue_11;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_5 = CallFunc_ClampGraphicsValue_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_12 = CallFunc_Conv_IntToFloat_ReturnValue_12;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_6 = CallFunc_ClampGraphicsValue_ReturnValue_6;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_7 = CallFunc_ClampGraphicsValue_ReturnValue_7;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_13 = CallFunc_Conv_IntToFloat_ReturnValue_13;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_14 = CallFunc_Conv_IntToFloat_ReturnValue_14;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.CallFunc_Array_Add_ReturnValue_18 = CallFunc_Array_Add_ReturnValue_18;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Graphics Quality Settings Console
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

void UWid_MainMenu_VideoSettings_C::Get_Graphics_Quality_Settings_Console(int32* Graphics_Quality, bool Temp_bool_Variable, int32 Temp_int_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Get Graphics Quality Settings Console");

	Params::UWid_MainMenu_VideoSettings_C_Get_Graphics_Quality_Settings_Console_Params Parms{};

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


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ClampGraphicsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EScalabilityType        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_MainMenu_VideoSettings_C::ClampGraphicsValue(enum class EScalabilityType Type, int32 Value, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ClampGraphicsValue");

	Params::UWid_MainMenu_VideoSettings_C_ClampGraphicsValue_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp = CallFunc_GetScalabilityClamp_Global_Clamp;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp = CallFunc_GetScalabilityClamp_Advanced_Clamp;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ShowRestartPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::ShowRestartPopup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ShowRestartPopup");

	Params::UWid_MainMenu_VideoSettings_C_ShowRestartPopup_Params Parms{};

	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.OnResolutionValueChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_VideoSettings_C::OnResolutionValueChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "OnResolutionValueChanged");

	Params::UWid_MainMenu_VideoSettings_C_OnResolutionValueChanged_Params Parms{};

	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ShowLoadingScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::ShowLoadingScreen(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UWid_LoadingScreen_C* CallFunc_Create_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ Temp_delegate_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ShowLoadingScreen");

	Params::UWid_MainMenu_VideoSettings_C_ShowLoadingScreen_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.OnPopupConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::OnPopupConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "OnPopupConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ApplyButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::ApplyButtonPressed(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ApplyButtonPressed");

	Params::UWid_MainMenu_VideoSettings_C_ApplyButtonPressed_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Show Benchmark Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Show_Benchmark_Popup(TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Show Benchmark Popup");

	Params::UWid_MainMenu_VideoSettings_C_Show_Benchmark_Popup_Params Parms{};

	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Set Background Visibility");

	Params::UWid_MainMenu_VideoSettings_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Hide Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Hide_Popup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Hide Popup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Capitalize Labels
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWid_MainMenu_VideoSettings_C::Capitalize_Labels(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Capitalize Labels");

	Params::UWid_MainMenu_VideoSettings_C_Capitalize_Labels_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Is Any Popup Visible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Visible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Is_Any_Popup_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Is Any Popup Visible");

	Params::UWid_MainMenu_VideoSettings_C_Is_Any_Popup_Visible_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Visible != nullptr)
		*Is_Visible = Parms.Is_Visible;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Show Ultra Quality Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Show_Ultra_Quality_Popup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Show Ultra Quality Popup");

	Params::UWid_MainMenu_VideoSettings_C_Show_Ultra_Quality_Popup_Params Parms{};

	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Update Available Resolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             CallFunc_Get_Selected_Window_Mode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWindowMode             CallFunc_Get_Selected_Window_Mode_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Custom_Resolution_Valid_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetConvenientWindowedResolutions_Resolutions            (ReferenceParm)
// bool                               CallFunc_GetConvenientWindowedResolutions_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Update_Available_Resolutions(enum class EWindowMode CallFunc_Get_Selected_Window_Mode_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EWindowMode CallFunc_Get_Selected_Window_Mode_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Is_Custom_Resolution_Valid_IsValid, bool CallFunc_BooleanAND_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, TArray<struct FIntPoint>& CallFunc_GetConvenientWindowedResolutions_Resolutions, bool CallFunc_GetConvenientWindowedResolutions_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue_1, TArray<struct FIntPoint>& K2Node_MakeArray_Array, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Update Available Resolutions");

	Params::UWid_MainMenu_VideoSettings_C_Update_Available_Resolutions_Params Parms{};

	Parms.CallFunc_Get_Selected_Window_Mode_ReturnValue = CallFunc_Get_Selected_Window_Mode_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Get_Selected_Window_Mode_ReturnValue_1 = CallFunc_Get_Selected_Window_Mode_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Is_Custom_Resolution_Valid_IsValid = CallFunc_Is_Custom_Resolution_Valid_IsValid;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetConvenientWindowedResolutions_Resolutions = CallFunc_GetConvenientWindowedResolutions_Resolutions;
	Parms.CallFunc_GetConvenientWindowedResolutions_ReturnValue = CallFunc_GetConvenientWindowedResolutions_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue_1 = CallFunc_GetDesktopResolution_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Close Video Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Close_Video_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Close Video Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Add Custom Framerate Limit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutputPin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Add_Custom_Framerate_Limit(float Value, int32* OutputPin, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Add Custom Framerate Limit");

	Params::UWid_MainMenu_VideoSettings_C_Add_Custom_Framerate_Limit_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Available Resolution Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   Resolution                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AvailableResolutionsIndex                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Get_Available_Resolution_Index(const struct FIntPoint& Resolution, int32* AvailableResolutionsIndex, bool* Found, bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Get Available Resolution Index");

	Params::UWid_MainMenu_VideoSettings_C_Get_Available_Resolution_Index_Params Parms{};

	Parms.Resolution = Resolution;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableResolutionsIndex != nullptr)
		*AvailableResolutionsIndex = Parms.AvailableResolutionsIndex;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Is Custom Resolution Valid
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Is_Custom_Resolution_Valid(bool* IsValid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Is Custom Resolution Valid");

	Params::UWid_MainMenu_VideoSettings_C_Is_Custom_Resolution_Valid_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Resolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   CallFunc_Get_Selected_Resolution_Output                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Save_Resolution(const struct FIntPoint& CallFunc_Get_Selected_Resolution_Output, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save Resolution");

	Params::UWid_MainMenu_VideoSettings_C_Save_Resolution_Params Parms{};

	Parms.CallFunc_Get_Selected_Resolution_Output = CallFunc_Get_Selected_Resolution_Output;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Selected Resolution
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                   Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Get_Selected_Resolution(struct FIntPoint* Output, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, const struct FIntPoint& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Get Selected Resolution");

	Params::UWid_MainMenu_VideoSettings_C_Get_Selected_Resolution_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Resolution Values
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateAvailableResolutions                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                Resolution_Values                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Setup_Resolution_Values(bool UpdateAvailableResolutions, const TArray<class FText>& Resolution_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Setup Resolution Values");

	Params::UWid_MainMenu_VideoSettings_C_Setup_Resolution_Values_Params Parms{};

	Parms.UpdateAvailableResolutions = UpdateAvailableResolutions;
	Parms.Resolution_Values = Resolution_Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.On Window Mode Value Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   Cached_Resolution                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Get_Selected_Resolution_Output                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::On_Window_Mode_Value_Changed(const struct FIntPoint& Cached_Resolution, const struct FIntPoint& CallFunc_Get_Selected_Resolution_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "On Window Mode Value Changed");

	Params::UWid_MainMenu_VideoSettings_C_On_Window_Mode_Value_Changed_Params Parms{};

	Parms.Cached_Resolution = Cached_Resolution;
	Parms.CallFunc_Get_Selected_Resolution_Output = CallFunc_Get_Selected_Resolution_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Graphics Quality
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentGraphicsQuality                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ClampGraphicsValue_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Save_Graphics_Quality(int32 CurrentGraphicsQuality, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_2, int32 CallFunc_ClampGraphicsValue_ReturnValue_3, int32 CallFunc_ClampGraphicsValue_ReturnValue_4, int32 CallFunc_ClampGraphicsValue_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_6, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save Graphics Quality");

	Params::UWid_MainMenu_VideoSettings_C_Save_Graphics_Quality_Params Parms{};

	Parms.CurrentGraphicsQuality = CurrentGraphicsQuality;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue = CallFunc_ClampGraphicsValue_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_1 = CallFunc_ClampGraphicsValue_ReturnValue_1;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_2 = CallFunc_ClampGraphicsValue_ReturnValue_2;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_3 = CallFunc_ClampGraphicsValue_ReturnValue_3;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_4 = CallFunc_ClampGraphicsValue_ReturnValue_4;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_5 = CallFunc_ClampGraphicsValue_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_6 = CallFunc_ClampGraphicsValue_ReturnValue_6;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_ClampGraphicsValue_ReturnValue_7 = CallFunc_ClampGraphicsValue_ReturnValue_7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Graphics Quality Settings PC
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Graphics_Quality                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContactShadowsEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCustomDrawDistanceEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Get_Graphics_Quality_Settings_PC(int32* Graphics_Quality, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetContactShadowsEnabled_ReturnValue, bool CallFunc_GetCustomDrawDistanceEnabled_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Get Graphics Quality Settings PC");

	Params::UWid_MainMenu_VideoSettings_C_Get_Graphics_Quality_Settings_PC_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetContactShadowsEnabled_ReturnValue = CallFunc_GetContactShadowsEnabled_ReturnValue;
	Parms.CallFunc_GetCustomDrawDistanceEnabled_ReturnValue = CallFunc_GetCustomDrawDistanceEnabled_ReturnValue;
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
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Graphics_Quality != nullptr)
		*Graphics_Quality = Parms.Graphics_Quality;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Setup Events");

	Params::UWid_MainMenu_VideoSettings_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.On Graphics Quality Value Changed PC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::On_Graphics_Quality_Value_Changed_PC(float CallFunc_GetValueWithinMinMax_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, float CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "On Graphics Quality Value Changed PC");

	Params::UWid_MainMenu_VideoSettings_C_On_Graphics_Quality_Value_Changed_PC_Params Parms{};

	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Load Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScreenPercentage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Available_Resolution_Index_Found                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_Custom_Framerate_Limit_OutputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Graphics_Quality_Settings_PC_Graphics_Quality       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_GetScreenPercentage_ReturnValue, float CallFunc_GetFovValue_ReturnValue, int32 CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex, bool CallFunc_Get_Available_Resolution_Index_Found, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_GetFrameRateLimit_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, int32 CallFunc_Round_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Add_Custom_Framerate_Limit_OutputPin, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Get_Graphics_Quality_Settings_PC_Graphics_Quality, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Load Settings");

	Params::UWid_MainMenu_VideoSettings_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetScreenPercentage_ReturnValue = CallFunc_GetScreenPercentage_ReturnValue;
	Parms.CallFunc_GetFovValue_ReturnValue = CallFunc_GetFovValue_ReturnValue;
	Parms.CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex = CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex;
	Parms.CallFunc_Get_Available_Resolution_Index_Found = CallFunc_Get_Available_Resolution_Index_Found;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Add_Custom_Framerate_Limit_OutputPin = CallFunc_Add_Custom_Framerate_Limit_OutputPin;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Get_Graphics_Quality_Settings_PC_Graphics_Quality = CallFunc_Get_Graphics_Quality_Settings_PC_Graphics_Quality;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Window Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             CallFunc_Get_Selected_Window_Mode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Save_Window_Mode(enum class EWindowMode CallFunc_Get_Selected_Window_Mode_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save Window Mode");

	Params::UWid_MainMenu_VideoSettings_C_Save_Window_Mode_Params Parms{};

	Parms.CallFunc_Get_Selected_Window_Mode_ReturnValue = CallFunc_Get_Selected_Window_Mode_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Get Selected Window Mode
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWindowMode             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWindowMode UWid_MainMenu_VideoSettings_C::Get_Selected_Window_Mode(int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Get Selected Window Mode");

	Params::UWid_MainMenu_VideoSettings_C_Get_Selected_Window_Mode_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Window Mode Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                WindowModeValues                                                 (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Setup_Window_Mode_Values(const TArray<class FText>& WindowModeValues, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EWindowMode Temp_byte_Variable, class FText K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Setup Window Mode Values");

	Params::UWid_MainMenu_VideoSettings_C_Setup_Window_Mode_Values_Params Parms{};

	Parms.WindowModeValues = WindowModeValues;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Framerate Lock
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Save_Framerate_Lock(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, float CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save Framerate Lock");

	Params::UWid_MainMenu_VideoSettings_C_Save_Framerate_Lock_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Framerate Lock Values
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Framerate_Values                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Setup_Framerate_Lock_Values(const TArray<class FText>& Framerate_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Setup Framerate Lock Values");

	Params::UWid_MainMenu_VideoSettings_C_Setup_Framerate_Lock_Values_Params Parms{};

	Parms.Framerate_Values = Framerate_Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save VSync
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Save_VSync(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save VSync");

	Params::UWid_MainMenu_VideoSettings_C_Save_VSync_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Save Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Save_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, float CallFunc_GetValueWithinMinMax_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Save Settings");

	Params::UWid_MainMenu_VideoSettings_C_Save_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_1 = CallFunc_GetValueWithinMinMax_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Setup Selectable Manger
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_VideoSettings_C::Setup_Selectable_Manger(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Setup Selectable Manger");

	Params::UWid_MainMenu_VideoSettings_C_Setup_Selectable_Manger_Params Parms{};

	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Reselect Resolution
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   CurrentResolution                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Available_Resolution_Index_Found                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Reselect_Resolution(const struct FIntPoint& CurrentResolution, int32 CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex, bool CallFunc_Get_Available_Resolution_Index_Found, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FIntPoint>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Reselect Resolution");

	Params::UWid_MainMenu_VideoSettings_C_Reselect_Resolution_Params Parms{};

	Parms.CurrentResolution = CurrentResolution;
	Parms.CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex = CallFunc_Get_Available_Resolution_Index_AvailableResolutionsIndex;
	Parms.CallFunc_Get_Available_Resolution_Index_Found = CallFunc_Get_Available_Resolution_Index_Found;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Reset To Defaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetDefaultWindowMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::Reset_To_Defaults(float Temp_float_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, float Temp_float_Variable_1, bool CallFunc_Is_Any_Popup_Visible_Is_Visible, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_1, enum class EWindowMode CallFunc_GetDefaultWindowMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Reset To Defaults");

	Params::UWid_MainMenu_VideoSettings_C_Reset_To_Defaults_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible = CallFunc_Is_Any_Popup_Visible_Is_Visible;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_GetDefaultWindowMode_ReturnValue = CallFunc_GetDefaultWindowMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "PreConstruct");

	Params::UWid_MainMenu_VideoSettings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.BackBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::BackBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "BackBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.CanRunBenchmark
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::CanRunBenchmark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "CanRunBenchmark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_VideoSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Tick");

	Params::UWid_MainMenu_VideoSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.InputBackspace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::InputBackspace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "InputBackspace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.Bench
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::Bench()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "Bench");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.RightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::RightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "RightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.LeftRelesed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::LeftRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "LeftRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.UpdateApplyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::UpdateApplyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "UpdateApplyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ExecuteUbergraph_wid_MainMenu_VideoSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
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
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Any_Popup_Visible_Is_Visible_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetSettingsArray_Array                                  (ReferenceParm)
// bool                               CallFunc_CompareFloatArray_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_VideoSettings_C::ExecuteUbergraph_wid_MainMenu_VideoSettings(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Is_Any_Popup_Visible_Is_Visible, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_menu_Benchmark_button_C* K2Node_DynamicCast_AsWid_Menu_Benchmark_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_1, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_2, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_3, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_4, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ Temp_delegate_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostEvent_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<float>& CallFunc_GetSettingsArray_Array, bool CallFunc_CompareFloatArray_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ExecuteUbergraph_wid_MainMenu_VideoSettings");

	Params::UWid_MainMenu_VideoSettings_C_ExecuteUbergraph_wid_MainMenu_VideoSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
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
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Is_Any_Popup_Visible_Is_Visible_6 = CallFunc_Is_Any_Popup_Visible_Is_Visible_6;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetSettingsArray_Array = CallFunc_GetSettingsArray_Array;
	Parms.CallFunc_CompareFloatArray_ReturnValue = CallFunc_CompareFloatArray_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_VideoSettings.wid_MainMenu_VideoSettings_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_VideoSettings_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_VideoSettings_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


