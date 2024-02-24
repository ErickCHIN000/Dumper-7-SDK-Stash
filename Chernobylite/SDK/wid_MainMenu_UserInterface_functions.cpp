#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C
// (None)

class UClass* UWid_MainMenu_UserInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_UserInterface_C");

	return Clss;
}


// wid_MainMenu_UserInterface_C wid_MainMenu_UserInterface.Default__wid_MainMenu_UserInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_UserInterface_C* UWid_MainMenu_UserInterface_C::GetDefaultObj()
{
	static class UWid_MainMenu_UserInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_UserInterface_C*>(UWid_MainMenu_UserInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.IsAllUISetToTrue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_MainMenu_UserInterface_C::IsAllUISetToTrue(int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "IsAllUISetToTrue");

	Params::UWid_MainMenu_UserInterface_C_IsAllUISetToTrue_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.OnCharacterPortraitsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesMode          CallFunc_CharacterPortraitsToEnum_SubtitleMode                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::OnCharacterPortraitsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class ESubtitlesMode CallFunc_CharacterPortraitsToEnum_SubtitleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "OnCharacterPortraitsChanged");

	Params::UWid_MainMenu_UserInterface_C_OnCharacterPortraitsChanged_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_CharacterPortraitsToEnum_SubtitleMode = CallFunc_CharacterPortraitsToEnum_SubtitleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.CharacterPortraitsToEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESubtitlesMode          SubtitleMode                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_UserInterface_C::CharacterPortraitsToEnum(enum class ESubtitlesMode* SubtitleMode, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "CharacterPortraitsToEnum");

	Params::UWid_MainMenu_UserInterface_C_CharacterPortraitsToEnum_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SubtitleMode != nullptr)
		*SubtitleMode = Parms.SubtitleMode;

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.EnumToCharacterPortraitsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESubtitlesMode          Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_UserInterface_C::EnumToCharacterPortraitsValue(enum class ESubtitlesMode Selection, int32* Value, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "EnumToCharacterPortraitsValue");

	Params::UWid_MainMenu_UserInterface_C_EnumToCharacterPortraitsValue_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.IsUserInterfaceDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_MainMenu_graphics_Option_C*Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_MainMenu_UserInterface_C::IsUserInterfaceDisabled(class UWid_MainMenu_graphics_Option_C* Option, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "IsUserInterfaceDisabled");

	Params::UWid_MainMenu_UserInterface_C_IsUserInterfaceDisabled_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.SaveUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllUISetToTrue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserInterfaceDisabled_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_UserInterface_C::SaveUIVisibility(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_IsUserInterfaceDisabled_ReturnValue, bool CallFunc_IsAllUISetToTrue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_2, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_3, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_4, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_5, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "SaveUIVisibility");

	Params::UWid_MainMenu_UserInterface_C_SaveUIVisibility_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue = CallFunc_IsUserInterfaceDisabled_ReturnValue;
	Parms.CallFunc_IsAllUISetToTrue_ReturnValue = CallFunc_IsAllUISetToTrue_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_1 = CallFunc_IsUserInterfaceDisabled_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2 = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_2 = CallFunc_IsUserInterfaceDisabled_ReturnValue_2;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_3 = CallFunc_IsUserInterfaceDisabled_ReturnValue_3;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_4 = CallFunc_IsUserInterfaceDisabled_ReturnValue_4;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_5 = CallFunc_IsUserInterfaceDisabled_ReturnValue_5;
	Parms.CallFunc_IsUserInterfaceDisabled_ReturnValue_6 = CallFunc_IsUserInterfaceDisabled_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.On All UI Value Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_MainMenu_graphics_Option_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_graphics_Option_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_UserInterface_C::On_All_UI_Value_Changed(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_MainMenu_graphics_Option_C*>& K2Node_MakeArray_Array, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class UWid_MainMenu_graphics_Option_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "On All UI Value Changed");

	Params::UWid_MainMenu_UserInterface_C_On_All_UI_Value_Changed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Capitalize Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_MainMenu_UserInterface_C::Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Capitalize Label");

	Params::UWid_MainMenu_UserInterface_C_Capitalize_Label_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Set Background Visibility");

	Params::UWid_MainMenu_UserInterface_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_UserInterface_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Setup Events");

	Params::UWid_MainMenu_UserInterface_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Load Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesMode          CallFunc_GetSubtitleMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_EnumToCharacterPortraitsValue_Value                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class ESubtitlesMode CallFunc_GetSubtitleMode_ReturnValue, int32 CallFunc_EnumToCharacterPortraitsValue_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Load Settings");

	Params::UWid_MainMenu_UserInterface_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetSubtitleMode_ReturnValue = CallFunc_GetSubtitleMode_ReturnValue;
	Parms.CallFunc_EnumToCharacterPortraitsValue_Value = CallFunc_EnumToCharacterPortraitsValue_Value;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_8 = CallFunc_Conv_BoolToInt_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_UserInterface_C::Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_UserInterface_C_Setup_Selectable_Manager_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Close Game Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Close_Game_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Close Game Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Set Default Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_EnumToCharacterPortraitsValue_Value                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::Set_Default_Values(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_EnumToCharacterPortraitsValue_Value, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Set Default Values");

	Params::UWid_MainMenu_UserInterface_C_Set_Default_Values_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_EnumToCharacterPortraitsValue_Value = CallFunc_EnumToCharacterPortraitsValue_Value;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_UserInterface_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "PreConstruct");

	Params::UWid_MainMenu_UserInterface_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.BackPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::BackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "BackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "Tick");

	Params::UWid_MainMenu_UserInterface_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_UserInterface_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C.ExecuteUbergraph_wid_MainMenu_UserInterface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_UserInterface_C::ExecuteUbergraph_wid_MainMenu_UserInterface(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_UserInterface_C", "ExecuteUbergraph_wid_MainMenu_UserInterface");

	Params::UWid_MainMenu_UserInterface_C_ExecuteUbergraph_wid_MainMenu_UserInterface_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


