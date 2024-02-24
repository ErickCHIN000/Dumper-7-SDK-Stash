#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Audio.wid_MainMenu_Audio_C
// (None)

class UClass* UWid_MainMenu_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Audio_C");

	return Clss;
}


// wid_MainMenu_Audio_C wid_MainMenu_Audio.Default__wid_MainMenu_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Audio_C* UWid_MainMenu_Audio_C::GetDefaultObj()
{
	static class UWid_MainMenu_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Audio_C*>(UWid_MainMenu_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Get Selected Audio Device
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAudioDeviceInfo            AudioDevice                                                      (Parm, OutParm)
// class FName                        DatatableName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Audio_C::Get_Selected_Audio_Device(struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Get Selected Audio Device");

	Params::UWid_MainMenu_Audio_C_Get_Selected_Audio_Device_Params Parms{};

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


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Get Audio Device With Id
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

void UWid_MainMenu_Audio_C::Get_Audio_Device_With_Id(int32 AudioDeviceId, struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, bool* Success, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Get Audio Device With Id");

	Params::UWid_MainMenu_Audio_C_Get_Audio_Device_With_Id_Params Parms{};

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


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Audio Devices
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

void UWid_MainMenu_Audio_C::Setup_Audio_Devices(const TArray<class FText>& AudioDeviceValues, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Setup Audio Devices");

	Params::UWid_MainMenu_Audio_C_Setup_Audio_Devices_Params Parms{};

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


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Close Audio Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Close_Audio_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Close Audio Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Capitalize Label
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_MainMenu_Audio_C::Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Capitalize Label");

	Params::UWid_MainMenu_Audio_C_Capitalize_Label_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.On Audio Device Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::On_Audio_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "On Audio Device Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.On Any Audio Value Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::On_Any_Audio_Value_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "On Any Audio Value Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_Audio_C::Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_Audio_C_Setup_Selectable_Manager_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_Audio_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Setup Events");

	Params::UWid_MainMenu_Audio_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Load Settings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MasterVolumeVal                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MusicVolumeVal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_DialoguesVolumeVal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_EffectsVolumeVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioSettings_AudioDeviceIdVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioDeviceInfo            CallFunc_Get_Audio_Device_With_Id_AudioDevice                    (None)
// class FName                        CallFunc_Get_Audio_Device_With_Id_DatatableName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Audio_Device_With_Id_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, const struct FAudioDeviceInfo& CallFunc_Get_Audio_Device_With_Id_AudioDevice, class FName CallFunc_Get_Audio_Device_With_Id_DatatableName, bool CallFunc_Get_Audio_Device_With_Id_Success, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Load Settings");

	Params::UWid_MainMenu_Audio_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioSettings_MasterVolumeVal = CallFunc_GetAudioSettings_MasterVolumeVal;
	Parms.CallFunc_GetAudioSettings_MusicVolumeVal = CallFunc_GetAudioSettings_MusicVolumeVal;
	Parms.CallFunc_GetAudioSettings_DialoguesVolumeVal = CallFunc_GetAudioSettings_DialoguesVolumeVal;
	Parms.CallFunc_GetAudioSettings_EffectsVolumeVal = CallFunc_GetAudioSettings_EffectsVolumeVal;
	Parms.CallFunc_GetAudioSettings_AudioDeviceIdVal = CallFunc_GetAudioSettings_AudioDeviceIdVal;
	Parms.CallFunc_Get_Audio_Device_With_Id_AudioDevice = CallFunc_Get_Audio_Device_With_Id_AudioDevice;
	Parms.CallFunc_Get_Audio_Device_With_Id_DatatableName = CallFunc_Get_Audio_Device_With_Id_DatatableName;
	Parms.CallFunc_Get_Audio_Device_With_Id_Success = CallFunc_Get_Audio_Device_With_Id_Success;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Set Background Visibility");

	Params::UWid_MainMenu_Audio_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Set And Save Audio Settings
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
// float                              CallFunc_GetValueWithinMinMax_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueWithinMinMax_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::Set_And_Save_Audio_Settings(int32 SelectedAudioDevice, float EffectVolume, float DialogueVolume, float MusicVolume, float MasterVolume, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue_1, float CallFunc_GetValueWithinMinMax_ReturnValue_2, float CallFunc_GetValueWithinMinMax_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Set And Save Audio Settings");

	Params::UWid_MainMenu_Audio_C_Set_And_Save_Audio_Settings_Params Parms{};

	Parms.SelectedAudioDevice = SelectedAudioDevice;
	Parms.EffectVolume = EffectVolume;
	Parms.DialogueVolume = DialogueVolume;
	Parms.MusicVolume = MusicVolume;
	Parms.MasterVolume = MasterVolume;
	Parms.CallFunc_Get_Selected_Audio_Device_AudioDevice = CallFunc_Get_Selected_Audio_Device_AudioDevice;
	Parms.CallFunc_Get_Selected_Audio_Device_DatatableName = CallFunc_Get_Selected_Audio_Device_DatatableName;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue = CallFunc_GetValueWithinMinMax_ReturnValue;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_1 = CallFunc_GetValueWithinMinMax_ReturnValue_1;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_2 = CallFunc_GetValueWithinMinMax_ReturnValue_2;
	Parms.CallFunc_GetValueWithinMinMax_ReturnValue_3 = CallFunc_GetValueWithinMinMax_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Reset To Defaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Reset_To_Defaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Reset To Defaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Select Audio Device
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      AudioDevicesModifier                                             (Edit, BlueprintVisible)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FAudioDeviceInfo            CallFunc_Get_Selected_Audio_Device_AudioDevice                   (None)
// class FName                        CallFunc_Get_Selected_Audio_Device_DatatableName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::Select_Audio_Device(const TArray<float>& AudioDevicesModifier, TArray<float>& K2Node_MakeArray_Array, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Select Audio Device");

	Params::UWid_MainMenu_Audio_C_Select_Audio_Device_Params Parms{};

	Parms.AudioDevicesModifier = AudioDevicesModifier;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Selected_Audio_Device_AudioDevice = CallFunc_Get_Selected_Audio_Device_AudioDevice;
	Parms.CallFunc_Get_Selected_Audio_Device_DatatableName = CallFunc_Get_Selected_Audio_Device_DatatableName;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.PlayUIMoveSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::PlayUIMoveSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "PlayUIMoveSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Back Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Back_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Back Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Audio_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "PreConstruct");

	Params::UWid_MainMenu_Audio_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.SelectNewEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Audio_C::SelectNewEntry(int32 EntryIndex, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "SelectNewEntry");

	Params::UWid_MainMenu_Audio_C_SelectNewEntry_Params Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "Tick");

	Params::UWid_MainMenu_Audio_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.LeftRelesed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::LeftRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "LeftRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.RightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::RightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "RightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.ExecuteUbergraph_wid_MainMenu_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Audio_C::ExecuteUbergraph_wid_MainMenu_Audio(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_EntryIndex, bool K2Node_Event_PostSoundEvent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "ExecuteUbergraph_wid_MainMenu_Audio");

	Params::UWid_MainMenu_Audio_C_ExecuteUbergraph_wid_MainMenu_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Audio_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Audio_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


