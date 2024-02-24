#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C
// (None)

class UClass* UWid_MainMenu_StartingOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_StartingOptions_C");

	return Clss;
}


// wid_MainMenu_StartingOptions_C wid_MainMenu_StartingOptions.Default__wid_MainMenu_StartingOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_StartingOptions_C* UWid_MainMenu_StartingOptions_C::GetDefaultObj()
{
	static class UWid_MainMenu_StartingOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_StartingOptions_C*>(UWid_MainMenu_StartingOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.GetCultureIDS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_Select_Default                                            (ReferenceParm)

TArray<class FString> UWid_MainMenu_StartingOptions_C::GetCultureIDS(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, TArray<class FString>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "GetCultureIDS");

	Params::UWid_MainMenu_StartingOptions_C_GetCultureIDS_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue = CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Audio Device With Id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AudioDeviceId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            AudioDevice                                                      (Parm, OutParm)
// class FName                        DatatableName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAudioDeviceInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::Get_Audio_Device_With_Id(int32 AudioDeviceId, struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, bool* Success, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Audio Device With Id");

	Params::UWid_MainMenu_StartingOptions_C_Get_Audio_Device_With_Id_Params Parms{};

	Parms.AudioDeviceId = AudioDeviceId;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioDevice != nullptr)
		*AudioDevice = std::move(Parms.AudioDevice);

	if (DatatableName != nullptr)
		*DatatableName = Parms.DatatableName;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.On Audio Device Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::On_Audio_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "On Audio Device Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Set And Save Audio Settings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedAudioDevice                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EffectVolume                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DialogueVolume                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MusicVolume                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MasterVolume                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            CallFunc_Get_Selected_Audio_Device_AudioDevice                   (None)
// class FName                        CallFunc_Get_Selected_Audio_Device_DatatableName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Set_And_Save_Audio_Settings(int32 SelectedAudioDevice, float EffectVolume, float DialogueVolume, float MusicVolume, float MasterVolume, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Set And Save Audio Settings");

	Params::UWid_MainMenu_StartingOptions_C_Set_And_Save_Audio_Settings_Params Parms{};

	Parms.SelectedAudioDevice = SelectedAudioDevice;
	Parms.EffectVolume = EffectVolume;
	Parms.DialogueVolume = DialogueVolume;
	Parms.MusicVolume = MusicVolume;
	Parms.MasterVolume = MasterVolume;
	Parms.CallFunc_Get_Selected_Audio_Device_AudioDevice = CallFunc_Get_Selected_Audio_Device_AudioDevice;
	Parms.CallFunc_Get_Selected_Audio_Device_DatatableName = CallFunc_Get_Selected_Audio_Device_DatatableName;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Select Audio Device
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      AudioDevicesModifier                                             (Edit, BlueprintVisible)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FAudioDeviceInfo            CallFunc_Get_Selected_Audio_Device_AudioDevice                   (None)
// class FName                        CallFunc_Get_Selected_Audio_Device_DatatableName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Select_Audio_Device(const TArray<float>& AudioDevicesModifier, TArray<float>& K2Node_MakeArray_Array, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Select Audio Device");

	Params::UWid_MainMenu_StartingOptions_C_Select_Audio_Device_Params Parms{};

	Parms.AudioDevicesModifier = AudioDevicesModifier;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Selected_Audio_Device_AudioDevice = CallFunc_Get_Selected_Audio_Device_AudioDevice;
	Parms.CallFunc_Get_Selected_Audio_Device_DatatableName = CallFunc_Get_Selected_Audio_Device_DatatableName;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Setup Audio Devices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                AudioDeviceValues                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAudioDeviceInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Setup_Audio_Devices(const TArray<class FText>& AudioDeviceValues, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Setup Audio Devices");

	Params::UWid_MainMenu_StartingOptions_C_Setup_Audio_Devices_Params Parms{};

	Parms.AudioDeviceValues = AudioDeviceValues;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Selected Audio Device
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAudioDeviceInfo            AudioDevice                                                      (Parm, OutParm)
// class FName                        DatatableName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::Get_Selected_Audio_Device(struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Selected Audio Device");

	Params::UWid_MainMenu_StartingOptions_C_Get_Selected_Audio_Device_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioDevice != nullptr)
		*AudioDevice = std::move(Parms.AudioDevice);

	if (DatatableName != nullptr)
		*DatatableName = Parms.DatatableName;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.OnPopupConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::OnPopupConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "OnPopupConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.ShowCulturePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::ShowCulturePopup(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "ShowCulturePopup");

	Params::UWid_MainMenu_StartingOptions_C_ShowCulturePopup_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.PlayButtonSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_Buttons_Entry_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::PlayButtonSound(class UWid_MainMenu_Buttons_Entry_C* Button, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "PlayButtonSound");

	Params::UWid_MainMenu_StartingOptions_C_PlayButtonSound_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Show Restart Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Show_Restart_Popup(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Show Restart Popup");

	Params::UWid_MainMenu_StartingOptions_C_Show_Restart_Popup_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Capitalize Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_MainMenu_StartingOptions_C::Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Capitalize Label");

	Params::UWid_MainMenu_StartingOptions_C_Capitalize_Label_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Saved Audio Language Index
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EWWiseLanguage>  CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_GetCurrentLanguage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_MainMenu_StartingOptions_C::Get_Saved_Audio_Language_Index(int32 Temp_int_Variable, bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<enum class EWWiseLanguage>& CallFunc_Map_Keys_Keys, int32 CallFunc_GetCurrentLanguage_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Saved Audio Language Index");

	Params::UWid_MainMenu_StartingOptions_C_Get_Saved_Audio_Language_Index_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetCurrentLanguage_ReturnValue = CallFunc_GetCurrentLanguage_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Set Background Visibility");

	Params::UWid_MainMenu_StartingOptions_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Saved Locale Index
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCultureIDS_ReturnValue                               (ReferenceParm)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_MainMenu_StartingOptions_C::Get_Saved_Locale_Index(bool Temp_bool_Variable, int32 Temp_int_Variable, TArray<class FString>& CallFunc_GetCultureIDS_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Saved Locale Index");

	Params::UWid_MainMenu_StartingOptions_C_Get_Saved_Locale_Index_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCultureIDS_ReturnValue = CallFunc_GetCultureIDS_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Setup Locale Values
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>   K2Node_Select_Default                                            (None)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)

void UWid_MainMenu_StartingOptions_C::Setup_Locale_Values(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, TMap<class FString, class FText> K2Node_Select_Default, TArray<class FText>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Setup Locale Values");

	Params::UWid_MainMenu_StartingOptions_C_Setup_Locale_Values_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue = CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Selected Locale
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Selected_Locale                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCultureIDS_ReturnValue                               (ReferenceParm)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Get_Selected_Locale(class FString* Selected_Locale, TArray<class FString>& CallFunc_GetCultureIDS_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Selected Locale");

	Params::UWid_MainMenu_StartingOptions_C_Get_Selected_Locale_Params Parms{};

	Parms.CallFunc_GetCultureIDS_ReturnValue = CallFunc_GetCultureIDS_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Selected_Locale != nullptr)
		*Selected_Locale = std::move(Parms.Selected_Locale);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Get Selected Audio Language
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWWiseLanguage          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EWWiseLanguage>  CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWWiseLanguage          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWWiseLanguage UWid_MainMenu_StartingOptions_C::Get_Selected_Audio_Language(TArray<enum class EWWiseLanguage>& CallFunc_Map_Keys_Keys, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, enum class EWWiseLanguage CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Get Selected Audio Language");

	Params::UWid_MainMenu_StartingOptions_C_Get_Selected_Audio_Language_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Setup Audio Language Values
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EWWiseLanguage, class FText>K2Node_Select_Default                                            (None)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)

void UWid_MainMenu_StartingOptions_C::Setup_Audio_Language_Values(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue, TMap<enum class EWWiseLanguage, class FText> K2Node_Select_Default, TArray<class FText>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Setup Audio Language Values");

	Params::UWid_MainMenu_StartingOptions_C_Setup_Audio_Language_Values_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue = CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.On Subtitles Value Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::On_Subtitles_Value_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "On Subtitles Value Changed");

	Params::UWid_MainMenu_StartingOptions_C_On_Subtitles_Value_Changed_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_StartingOptions_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Setup Events");

	Params::UWid_MainMenu_StartingOptions_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Load Settings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MasterVolumeVal                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MusicVolumeVal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_DialoguesVolumeVal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_EffectsVolumeVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioSettings_AudioDeviceIdVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            CallFunc_Get_Audio_Device_With_Id_AudioDevice                    (None)
// class FName                        CallFunc_Get_Audio_Device_With_Id_DatatableName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Audio_Device_With_Id_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Saved_Audio_Language_Index_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Saved_Locale_Index_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSubtitlesOn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, const struct FAudioDeviceInfo& CallFunc_Get_Audio_Device_With_Id_AudioDevice, class FName CallFunc_Get_Audio_Device_With_Id_DatatableName, bool CallFunc_Get_Audio_Device_With_Id_Success, bool CallFunc_IsHDREnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_Get_Saved_Audio_Language_Index_ReturnValue, int32 CallFunc_Get_Saved_Locale_Index_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_GetSubtitlesOn_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Load Settings");

	Params::UWid_MainMenu_StartingOptions_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioSettings_MasterVolumeVal = CallFunc_GetAudioSettings_MasterVolumeVal;
	Parms.CallFunc_GetAudioSettings_MusicVolumeVal = CallFunc_GetAudioSettings_MusicVolumeVal;
	Parms.CallFunc_GetAudioSettings_DialoguesVolumeVal = CallFunc_GetAudioSettings_DialoguesVolumeVal;
	Parms.CallFunc_GetAudioSettings_EffectsVolumeVal = CallFunc_GetAudioSettings_EffectsVolumeVal;
	Parms.CallFunc_GetAudioSettings_AudioDeviceIdVal = CallFunc_GetAudioSettings_AudioDeviceIdVal;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Get_Audio_Device_With_Id_AudioDevice = CallFunc_Get_Audio_Device_With_Id_AudioDevice;
	Parms.CallFunc_Get_Audio_Device_With_Id_DatatableName = CallFunc_Get_Audio_Device_With_Id_DatatableName;
	Parms.CallFunc_Get_Audio_Device_With_Id_Success = CallFunc_Get_Audio_Device_With_Id_Success;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_Get_Saved_Audio_Language_Index_ReturnValue = CallFunc_Get_Saved_Audio_Language_Index_ReturnValue;
	Parms.CallFunc_Get_Saved_Locale_Index_ReturnValue = CallFunc_Get_Saved_Locale_Index_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetSubtitlesOn_ReturnValue = CallFunc_GetSubtitlesOn_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_StartingOptions_C::Setup_Selectable_Manager(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_StartingOptions_C_Setup_Selectable_Manager_Params Parms{};

	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.CloseOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::CloseOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "CloseOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Set Default Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWWiseLanguage          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Set_Default_Values(enum class EWWiseLanguage Temp_byte_Variable, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Set Default Values");

	Params::UWid_MainMenu_StartingOptions_C_Set_Default_Values_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_StartingOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Tick");

	Params::UWid_MainMenu_StartingOptions_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.SetupPreviewMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::SetupPreviewMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "SetupPreviewMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "PreConstruct");

	Params::UWid_MainMenu_StartingOptions_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.BackPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::BackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "BackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.ExecuteUbergraph_wid_MainMenu_StartingOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWWiseLanguage          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWWiseLanguage          CallFunc_Get_Selected_Audio_Language_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Selected_Locale_Selected_Locale                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Selected_Locale_Selected_Locale_1                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWWiseLanguage          CallFunc_Get_Selected_Audio_Language_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentAudioCulture_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_StartingOptions_C::ExecuteUbergraph_wid_MainMenu_StartingOptions(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool CallFunc_IsVisible_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, enum class EWWiseLanguage Temp_byte_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWWiseLanguage CallFunc_Get_Selected_Audio_Language_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Get_Selected_Locale_Selected_Locale, bool CallFunc_SetCurrentCulture_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, const class FString& CallFunc_Get_Selected_Locale_Selected_Locale_1, bool CallFunc_NotEqual_StriStri_ReturnValue, enum class EWWiseLanguage CallFunc_Get_Selected_Audio_Language_ReturnValue_1, const class FString& CallFunc_GetCurrentAudioCulture_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue_1, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "ExecuteUbergraph_wid_MainMenu_StartingOptions");

	Params::UWid_MainMenu_StartingOptions_C_ExecuteUbergraph_wid_MainMenu_StartingOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Get_Selected_Audio_Language_ReturnValue = CallFunc_Get_Selected_Audio_Language_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Get_Selected_Locale_Selected_Locale = CallFunc_Get_Selected_Locale_Selected_Locale;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Get_Selected_Locale_Selected_Locale_1 = CallFunc_Get_Selected_Locale_Selected_Locale_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.CallFunc_Get_Selected_Audio_Language_ReturnValue_1 = CallFunc_Get_Selected_Audio_Language_ReturnValue_1;
	Parms.CallFunc_GetCurrentAudioCulture_ReturnValue = CallFunc_GetCurrentAudioCulture_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue = CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue;
	Parms.CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue = CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue_1 = CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue_1;
	Parms.CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue_1 = CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_StartingOptions_C::Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_StartingOptions_C", "Finished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


