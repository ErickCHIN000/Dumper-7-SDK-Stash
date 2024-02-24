#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C
// (None)

class UClass* UWid_MainMenu_AdvancedVideoSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_AdvancedVideoSettings_C");

	return Clss;
}


// wid_MainMenu_AdvancedVideoSettings_C wid_MainMenu_AdvancedVideoSettings.Default__wid_MainMenu_AdvancedVideoSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_AdvancedVideoSettings_C* UWid_MainMenu_AdvancedVideoSettings_C::GetDefaultObj()
{
	static class UWid_MainMenu_AdvancedVideoSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_AdvancedVideoSettings_C*>(UWid_MainMenu_AdvancedVideoSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnFSR2SharpnessChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_AdvancedVideoSettings_C::OnFSR2SharpnessChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnFSR2SharpnessChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnFSR2SharpnessChanged_Params Parms{};

	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnFSR2ValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::OnFSR2ValueChanged(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_4, int32 CallFunc_GetEntryIndex_EntryIndex_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnFSR2ValueChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnFSR2ValueChanged_Params Parms{};

	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_3 = CallFunc_GetEntryIndex_self_CastInput_3;
	Parms.CallFunc_GetEntryIndex_EntryIndex_3 = CallFunc_GetEntryIndex_EntryIndex_3;
	Parms.CallFunc_GetEntryIndex_self_CastInput_4 = CallFunc_GetEntryIndex_self_CastInput_4;
	Parms.CallFunc_GetEntryIndex_EntryIndex_4 = CallFunc_GetEntryIndex_EntryIndex_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Get_FSR2_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UWid_MainMenu_AdvancedVideoSettings_C::Get_FSR2_Visibility_0(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Get_FSR2_Visibility_0");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Get_FSR2_Visibility_0_Params Parms{};

	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue = CallFunc_GetIsDX12GraphicsRHI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Get_FSR_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UWid_MainMenu_AdvancedVideoSettings_C::Get_FSR_Visibility_0(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Get_FSR_Visibility_0");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Get_FSR_Visibility_0_Params Parms{};

	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue = CallFunc_GetIsDX12GraphicsRHI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.DisableRTXInterfaceOnNonDX12
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWid_MainMenu_graphics_Option_C*>EntriesToDisable                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_MainMenu_graphics_Option_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWid_MainMenu_graphics_Option_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::DisableRTXInterfaceOnNonDX12(const TArray<class UWid_MainMenu_graphics_Option_C*>& EntriesToDisable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_MainMenu_graphics_Option_C*>& K2Node_MakeArray_Array, class UWid_MainMenu_graphics_Option_C* CallFunc_Array_Get_Item, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "DisableRTXInterfaceOnNonDX12");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_DisableRTXInterfaceOnNonDX12_Params Parms{};

	Parms.EntriesToDisable = EntriesToDisable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue = CallFunc_GetIsDX12GraphicsRHI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnFSRValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::OnFSRValueChanged(uint8 CallFunc_GetValidValue_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnFSRValueChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnFSRValueChanged_Params Parms{};

	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.CacheSettingsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      CallFunc_Get_Settings_Array_Array                                (ReferenceParm)

void UWid_MainMenu_AdvancedVideoSettings_C::CacheSettingsArray(TArray<float>& CallFunc_Get_Settings_Array_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "CacheSettingsArray");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_CacheSettingsArray_Params Parms{};

	Parms.CallFunc_Get_Settings_Array_Array = CallFunc_Get_Settings_Array_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.SetupEventForApplyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::SetupEventForApplyButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "SetupEventForApplyButton");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_SetupEventForApplyButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnResolutionValueChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_AdvancedVideoSettings_C::OnResolutionValueChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnResolutionValueChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnResolutionValueChanged_Params Parms{};

	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.SetupClamping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Global_Clamp_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScalabilityClamp_Advanced_Clamp_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::SetupClamping(const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_1, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_1, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_2, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_2, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_3, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_3, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_4, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_4, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_5, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "SetupClamping");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_SetupClamping_Params Parms{};

	Parms.CallFunc_GetScalabilityClamp_Global_Clamp = CallFunc_GetScalabilityClamp_Global_Clamp;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp = CallFunc_GetScalabilityClamp_Advanced_Clamp;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp_1 = CallFunc_GetScalabilityClamp_Global_Clamp_1;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp_1 = CallFunc_GetScalabilityClamp_Advanced_Clamp_1;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp_2 = CallFunc_GetScalabilityClamp_Global_Clamp_2;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp_2 = CallFunc_GetScalabilityClamp_Advanced_Clamp_2;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp_3 = CallFunc_GetScalabilityClamp_Global_Clamp_3;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp_3 = CallFunc_GetScalabilityClamp_Advanced_Clamp_3;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp_4 = CallFunc_GetScalabilityClamp_Global_Clamp_4;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp_4 = CallFunc_GetScalabilityClamp_Advanced_Clamp_4;
	Parms.CallFunc_GetScalabilityClamp_Global_Clamp_5 = CallFunc_GetScalabilityClamp_Global_Clamp_5;
	Parms.CallFunc_GetScalabilityClamp_Advanced_Clamp_5 = CallFunc_GetScalabilityClamp_Advanced_Clamp_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.UpdateSupportedDLSS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUDLSSMode              Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDLSSMode              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EUDLSSMode>      CallFunc_GetSupportedDLSSModes_ReturnValue                       (ReferenceParm)

void UWid_MainMenu_AdvancedVideoSettings_C::UpdateSupportedDLSS(enum class EUDLSSMode Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EUDLSSMode CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_BooleanOR_ReturnValue, TArray<enum class EUDLSSMode>& CallFunc_GetSupportedDLSSModes_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "UpdateSupportedDLSS");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_UpdateSupportedDLSS_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetSupportedDLSSModes_ReturnValue = CallFunc_GetSupportedDLSSModes_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnAntialiasingTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAntiAliasingType       NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::OnAntialiasingTypeChanged(enum class EAntiAliasingType NewLocalVar_0, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnAntialiasingTypeChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnAntialiasingTypeChanged_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.GetViewDistanceBasedOnQualityLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DrawDistance                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CachedCustomDrawDistanceEnabled                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DrawDistanceForValue                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CachedViewDistanceQuality                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCustomDrawDistanceEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDrawDistanceValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::GetViewDistanceBasedOnQualityLevel(int32 NewParam, float* DrawDistance, bool CachedCustomDrawDistanceEnabled, float DrawDistanceForValue, int32 CachedViewDistanceQuality, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_GetCustomDrawDistanceEnabled_ReturnValue, float CallFunc_GetDrawDistanceValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "GetViewDistanceBasedOnQualityLevel");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_GetViewDistanceBasedOnQualityLevel_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CachedCustomDrawDistanceEnabled = CachedCustomDrawDistanceEnabled;
	Parms.DrawDistanceForValue = DrawDistanceForValue;
	Parms.CachedViewDistanceQuality = CachedViewDistanceQuality;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetCustomDrawDistanceEnabled_ReturnValue = CallFunc_GetCustomDrawDistanceEnabled_ReturnValue;
	Parms.CallFunc_GetDrawDistanceValue_ReturnValue = CallFunc_GetDrawDistanceValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DrawDistance != nullptr)
		*DrawDistance = Parms.DrawDistance;

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnPopupConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::OnPopupConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnPopupConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.ShowResetPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::ShowResetPopup(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "ShowResetPopup");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_ShowResetPopup_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnDrawDistanceChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_MainMenu_AdvancedVideoSettings_C::OnDrawDistanceChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnDrawDistanceChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnDrawDistanceChanged_Params Parms{};

	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.ShowLoadingScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::ShowLoadingScreen(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_LoadingScreen_C* CallFunc_Create_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "ShowLoadingScreen");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_ShowLoadingScreen_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.DisableInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::DisableInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "DisableInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Get Settings Array
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      Array                                                            (Parm, OutParm)
// TArray<float>                      SettingsArray                                                    (Edit, BlueprintVisible)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::Get_Settings_Array(TArray<float>* Array, const TArray<float>& SettingsArray, float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_Conv_IntToFloat_ReturnValue_8, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10, float CallFunc_Conv_IntToFloat_ReturnValue_9, float CallFunc_Conv_IntToFloat_ReturnValue_10, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12, float CallFunc_Conv_IntToFloat_ReturnValue_11, float CallFunc_Conv_IntToFloat_ReturnValue_12, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14, float CallFunc_Conv_IntToFloat_ReturnValue_13, float CallFunc_Conv_IntToFloat_ReturnValue_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16, float CallFunc_Conv_IntToFloat_ReturnValue_15, float CallFunc_Conv_IntToFloat_ReturnValue_16, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18, float CallFunc_Conv_IntToFloat_ReturnValue_18, bool CallFunc_IsDLSSSupported_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_20, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19, float CallFunc_Conv_IntToFloat_ReturnValue_19, float CallFunc_GetValueWithinMinMax_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_21, int32 CallFunc_Array_Add_ReturnValue_22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Get Settings Array");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Get_Settings_Array_Params Parms{};

	Parms.SettingsArray = SettingsArray;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_1 = CallFunc_GetValueWithinMinMax_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_10 = CallFunc_Conv_IntToFloat_ReturnValue_10;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_11 = CallFunc_Conv_IntToFloat_ReturnValue_11;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_12 = CallFunc_Conv_IntToFloat_ReturnValue_12;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_13 = CallFunc_Conv_IntToFloat_ReturnValue_13;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_14 = CallFunc_Conv_IntToFloat_ReturnValue_14;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_15 = CallFunc_Conv_IntToFloat_ReturnValue_15;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_16 = CallFunc_Conv_IntToFloat_ReturnValue_16;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_17 = CallFunc_Conv_IntToFloat_ReturnValue_17;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.CallFunc_Array_Add_ReturnValue_18 = CallFunc_Array_Add_ReturnValue_18;
	Parms.CallFunc_Array_Add_ReturnValue_19 = CallFunc_Array_Add_ReturnValue_19;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_18 = CallFunc_Conv_IntToFloat_ReturnValue_18;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_20 = CallFunc_Array_Add_ReturnValue_20;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_19 = CallFunc_Conv_IntToFloat_ReturnValue_19;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_2 = CallFunc_GetValueWithinMinMax_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_21 = CallFunc_Array_Add_ReturnValue_21;
	Parms.CallFunc_Array_Add_ReturnValue_22 = CallFunc_Array_Add_ReturnValue_22;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.On CAS Scaling Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::On_CAS_Scaling_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "On CAS Scaling Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.OnDLSSValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::OnDLSSValueChanged(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_4, int32 CallFunc_GetEntryIndex_EntryIndex_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "OnDLSSValueChanged");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_OnDLSSValueChanged_Params Parms{};

	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_GetEntryIndex_self_CastInput_3 = CallFunc_GetEntryIndex_self_CastInput_3;
	Parms.CallFunc_GetEntryIndex_EntryIndex_3 = CallFunc_GetEntryIndex_EntryIndex_3;
	Parms.CallFunc_GetEntryIndex_self_CastInput_4 = CallFunc_GetEntryIndex_self_CastInput_4;
	Parms.CallFunc_GetEntryIndex_EntryIndex_4 = CallFunc_GetEntryIndex_EntryIndex_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Close Advanced Video Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Close_Advanced_Video_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Close Advanced Video Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Hide Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Hide_Popup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Hide Popup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Show Benchmark Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::Show_Benchmark_Popup(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Show Benchmark Popup");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Show_Benchmark_Popup_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Is Popup Visible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Visible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::Is_Popup_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Is Popup Visible");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Is_Popup_Visible_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Visible != nullptr)
		*Is_Visible = Parms.Is_Visible;

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Set Background Visibility");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
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
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Setup Events");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Capitalize Options Label
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_MainMenu_AdvancedVideoSettings_C::Capitalize_Options_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Capitalize Options Label");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Capitalize_Options_Label_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Save And Apply Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCustomDrawDistanceEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_20          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_21          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::Save_And_Apply_Settings(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_Not_PreBool_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8, bool CallFunc_Conv_IntToBool_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10, uint8 CallFunc_GetValidValue_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11, bool CallFunc_GetCustomDrawDistanceEnabled_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_12, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_13, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15, bool CallFunc_Conv_IntToBool_ReturnValue_4, bool CallFunc_Conv_IntToBool_ReturnValue_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16, float CallFunc_GetValueWithinMinMax_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_20, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_16, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_18, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_21, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_20)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Save And Apply Settings");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Save_And_Apply_Settings_Params Parms{};

	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_1 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5;
	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue = CallFunc_GetIsDX12GraphicsRHI_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_9 = CallFunc_GetGameUserSettings_ReturnValue_9;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11;
	Parms.CallFunc_GetCustomDrawDistanceEnabled_ReturnValue = CallFunc_GetCustomDrawDistanceEnabled_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_4 = CallFunc_NotEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_1 = CallFunc_GetValueWithinMinMax_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_10 = CallFunc_GetGameUserSettings_ReturnValue_10;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_11 = CallFunc_GetGameUserSettings_ReturnValue_11;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_12 = CallFunc_GetGameUserSettings_ReturnValue_12;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_13 = CallFunc_GetGameUserSettings_ReturnValue_13;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_14 = CallFunc_GetGameUserSettings_ReturnValue_14;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_3 = CallFunc_Conv_IntToBool_ReturnValue_3;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_4 = CallFunc_Conv_IntToBool_ReturnValue_4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_5 = CallFunc_Conv_IntToBool_ReturnValue_5;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_2 = CallFunc_GetValueWithinMinMax_ReturnValue_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_6 = CallFunc_Conv_IntToBool_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_15 = CallFunc_GetGameUserSettings_ReturnValue_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_20 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_20;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_16 = CallFunc_GetGameUserSettings_ReturnValue_16;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_17 = CallFunc_GetGameUserSettings_ReturnValue_17;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_18 = CallFunc_GetGameUserSettings_ReturnValue_18;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_19 = CallFunc_GetGameUserSettings_ReturnValue_19;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_21 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_21;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_20 = CallFunc_GetGameUserSettings_ReturnValue_20;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Load Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDX12GraphicsRHI_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRTSetting_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUDLSSMode              CallFunc_GetDLSSMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDLSSSupported_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScreenPercentage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContactShadowsEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFsr2Sharpness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDisplacementEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDisplacementEnabled_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAntiAliasingType       CallFunc_GetAntiAliasingType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDrawDistanceValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBloomEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetChromaticAberationEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLensFlareEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetGeometryQuality_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::Load_Settings(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetRTSetting_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsDLSSSupported_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, float CallFunc_GetScreenPercentage_ReturnValue, bool CallFunc_GetContactShadowsEnabled_ReturnValue, float CallFunc_GetFsr2Sharpness_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_GetIsDisplacementEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_GetIsDisplacementEnabled_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, enum class EAntiAliasingType CallFunc_GetAntiAliasingType_ReturnValue, float CallFunc_GetDrawDistanceValue_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, bool CallFunc_GetDepthOfFieldEnabled_ReturnValue, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, bool CallFunc_GetBloomEnabled_ReturnValue, bool CallFunc_GetChromaticAberationEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_GetLensFlareEnabled_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Load Settings");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue = CallFunc_GetIsDX12GraphicsRHI_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue_1 = CallFunc_GetIsDX12GraphicsRHI_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_3 = CallFunc_GetEntryIndex_self_CastInput_3;
	Parms.CallFunc_GetEntryIndex_EntryIndex_3 = CallFunc_GetEntryIndex_EntryIndex_3;
	Parms.CallFunc_GetIsDX12GraphicsRHI_ReturnValue_2 = CallFunc_GetIsDX12GraphicsRHI_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetRTSetting_ReturnValue = CallFunc_GetRTSetting_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDLSSMode_ReturnValue = CallFunc_GetDLSSMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsDLSSSupported_ReturnValue_1 = CallFunc_IsDLSSSupported_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetScreenPercentage_ReturnValue = CallFunc_GetScreenPercentage_ReturnValue;
	Parms.CallFunc_GetContactShadowsEnabled_ReturnValue = CallFunc_GetContactShadowsEnabled_ReturnValue;
	Parms.CallFunc_GetFsr2Sharpness_ReturnValue = CallFunc_GetFsr2Sharpness_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetIsDisplacementEnabled_ReturnValue = CallFunc_GetIsDisplacementEnabled_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetIsDisplacementEnabled_ReturnValue_1 = CallFunc_GetIsDisplacementEnabled_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetAntiAliasingType_ReturnValue = CallFunc_GetAntiAliasingType_ReturnValue;
	Parms.CallFunc_GetDrawDistanceValue_ReturnValue = CallFunc_GetDrawDistanceValue_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_GetDepthOfFieldEnabled_ReturnValue = CallFunc_GetDepthOfFieldEnabled_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_GetBloomEnabled_ReturnValue = CallFunc_GetBloomEnabled_ReturnValue;
	Parms.CallFunc_GetChromaticAberationEnabled_ReturnValue = CallFunc_GetChromaticAberationEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_GetLensFlareEnabled_ReturnValue = CallFunc_GetLensFlareEnabled_ReturnValue;
	Parms.CallFunc_GetGeometryQuality_ReturnValue = CallFunc_GetGeometryQuality_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFSREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUDLSSMode              CallFunc_GetDLSSMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_AdvancedVideoSettings_C::Setup_Selectable_Manager(bool CallFunc_IsDLSSSupported_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsFSREnabled_ReturnValue, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Setup_Selectable_Manager_Params Parms{};

	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_IsFSREnabled_ReturnValue = CallFunc_IsFSREnabled_ReturnValue;
	Parms.CallFunc_GetDLSSMode_ReturnValue = CallFunc_GetDLSSMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput_1 = CallFunc_GetEntryIndex_self_CastInput_1;
	Parms.CallFunc_GetEntryIndex_EntryIndex_1 = CallFunc_GetEntryIndex_EntryIndex_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput_2 = CallFunc_GetEntryIndex_self_CastInput_2;
	Parms.CallFunc_GetEntryIndex_EntryIndex_2 = CallFunc_GetEntryIndex_EntryIndex_2;
	Parms.CallFunc_GetEntryIndex_self_CastInput_3 = CallFunc_GetEntryIndex_self_CastInput_3;
	Parms.CallFunc_GetEntryIndex_EntryIndex_3 = CallFunc_GetEntryIndex_EntryIndex_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Reset To Defaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DefaultGraphicsValue                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewDistanceBasedOnQualityLevel_DrawDistance         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::Reset_To_Defaults(int32 DefaultGraphicsValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_GetViewDistanceBasedOnQualityLevel_DrawDistance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_Is_Popup_Visible_Is_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Reset To Defaults");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Reset_To_Defaults_Params Parms{};

	Parms.DefaultGraphicsValue = DefaultGraphicsValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetViewDistanceBasedOnQualityLevel_DrawDistance = CallFunc_GetViewDistanceBasedOnQualityLevel_DrawDistance;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible = CallFunc_Is_Popup_Visible_Is_Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.PlayUIMoveSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::PlayUIMoveSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "PlayUIMoveSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "PreConstruct");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.BackBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::BackBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "BackBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Benchmark
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Benchmark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Benchmark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Bench
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::Bench()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Bench");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_AdvancedVideoSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "Tick");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.RightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::RightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "RightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.LeftRelesed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::LeftRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "LeftRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.UpdateApplyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::UpdateApplyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "UpdateApplyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.ExecuteUbergraph_wid_MainMenu_AdvancedVideoSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetSelectedEntryIndex_CurrentlySelected                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Popup_Visible_Is_Visible_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Get_Settings_Array_Array                                (ReferenceParm)
// bool                               CallFunc_CompareFloatArray_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectedEntry_Entry                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_AdvancedVideoSettings_C::ExecuteUbergraph_wid_MainMenu_AdvancedVideoSettings(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_Is_Popup_Visible_Is_Visible, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Is_Popup_Visible_Is_Visible_1, bool CallFunc_Is_Popup_Visible_Is_Visible_2, bool CallFunc_Is_Popup_Visible_Is_Visible_3, bool CallFunc_Is_Popup_Visible_Is_Visible_4, bool CallFunc_Is_Popup_Visible_Is_Visible_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_Is_Popup_Visible_Is_Visible_6, FDelegateProperty_ Temp_delegate_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEvent_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<float>& CallFunc_Get_Settings_Array_Array, bool CallFunc_CompareFloatArray_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "ExecuteUbergraph_wid_MainMenu_AdvancedVideoSettings");

	Params::UWid_MainMenu_AdvancedVideoSettings_C_ExecuteUbergraph_wid_MainMenu_AdvancedVideoSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSelectedEntryIndex_CurrentlySelected = CallFunc_GetSelectedEntryIndex_CurrentlySelected;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible = CallFunc_Is_Popup_Visible_Is_Visible;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_1 = CallFunc_Is_Popup_Visible_Is_Visible_1;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_2 = CallFunc_Is_Popup_Visible_Is_Visible_2;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_3 = CallFunc_Is_Popup_Visible_Is_Visible_3;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_4 = CallFunc_Is_Popup_Visible_Is_Visible_4;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_5 = CallFunc_Is_Popup_Visible_Is_Visible_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Is_Popup_Visible_Is_Visible_6 = CallFunc_Is_Popup_Visible_Is_Visible_6;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Get_Settings_Array_Array = CallFunc_Get_Settings_Array_Array;
	Parms.CallFunc_CompareFloatArray_ReturnValue = CallFunc_CompareFloatArray_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSelectedEntry_Entry = CallFunc_GetSelectedEntry_Entry;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_AdvancedVideoSettings_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_AdvancedVideoSettings_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


