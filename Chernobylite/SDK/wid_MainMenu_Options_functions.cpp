#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Options.wid_MainMenu_Options_C
// (None)

class UClass* UWid_MainMenu_Options_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Options_C");

	return Clss;
}


// wid_MainMenu_Options_C wid_MainMenu_Options.Default__wid_MainMenu_Options_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Options_C* UWid_MainMenu_Options_C::GetDefaultObj()
{
	static class UWid_MainMenu_Options_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Options_C*>(UWid_MainMenu_Options_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.CloseOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::CloseOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "CloseOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.PlayUIMoveSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::PlayUIMoveSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "PlayUIMoveSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.UpdateList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "UpdateList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.AcceptOpt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::AcceptOpt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "AcceptOpt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.SetAudioSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::SetAudioSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "SetAudioSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Options_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "Tick");

	Params::UWid_MainMenu_Options_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Options_C::CustomEvent_0(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "CustomEvent_0");

	Params::UWid_MainMenu_Options_C_CustomEvent_0_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Options_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "PreConstruct");

	Params::UWid_MainMenu_Options_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.click anim finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::Click_anim_finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "click anim finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.ExecuteUbergraph_wid_MainMenu_Options
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Video_Options_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Controls_Options_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Audio_C*       CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWid_MainMenu_UserInterface_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_ControlSettings_C*CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_VideoSettingsConsole_C*CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MasterVolumeVal                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_MusicVolumeVal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_DialoguesVolumeVal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSettings_EffectsVolumeVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioSettings_AudioDeviceIdVal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedEntryIndex_CurrentlySelected                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Is_Console_Platform_IsConsole                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_GameOptions_C* CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Is_Console_Platform_IsConsole_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Options_C::ExecuteUbergraph_wid_MainMenu_Options(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UWid_MainMenu_Video_Options_C* CallFunc_Create_ReturnValue, class UWid_MainMenu_Controls_Options_C* CallFunc_Create_ReturnValue_1, class UWid_MainMenu_Audio_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWid_MainMenu_UserInterface_C* CallFunc_Create_ReturnValue_3, class UWid_MainMenu_ControlSettings_C* CallFunc_Create_ReturnValue_4, class UWid_MainMenu_VideoSettingsConsole_C* CallFunc_Create_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, bool Temp_bool_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, int32 K2Node_CustomEvent_NewParam, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, int32 CallFunc_GetMainMenuZOrder_ZOrder, int32 CallFunc_GetMainMenuZOrder_ZOrder_1, int32 CallFunc_GetMainMenuZOrder_ZOrder_2, int32 CallFunc_GetMainMenuZOrder_ZOrder_3, int32 CallFunc_GetMainMenuZOrder_ZOrder_4, bool CallFunc_Get_Is_Console_Platform_IsConsole, class UWid_MainMenu_GameOptions_C* CallFunc_Create_ReturnValue_6, int32 CallFunc_GetMainMenuZOrder_ZOrder_5, bool CallFunc_Get_Is_Console_Platform_IsConsole_1, int32 CallFunc_GetMainMenuZOrder_ZOrder_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "ExecuteUbergraph_wid_MainMenu_Options");

	Params::UWid_MainMenu_Options_C_ExecuteUbergraph_wid_MainMenu_Options_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioSettings_MasterVolumeVal = CallFunc_GetAudioSettings_MasterVolumeVal;
	Parms.CallFunc_GetAudioSettings_MusicVolumeVal = CallFunc_GetAudioSettings_MusicVolumeVal;
	Parms.CallFunc_GetAudioSettings_DialoguesVolumeVal = CallFunc_GetAudioSettings_DialoguesVolumeVal;
	Parms.CallFunc_GetAudioSettings_EffectsVolumeVal = CallFunc_GetAudioSettings_EffectsVolumeVal;
	Parms.CallFunc_GetAudioSettings_AudioDeviceIdVal = CallFunc_GetAudioSettings_AudioDeviceIdVal;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetSelectedEntryIndex_CurrentlySelected = CallFunc_GetSelectedEntryIndex_CurrentlySelected;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder = CallFunc_GetMainMenuZOrder_ZOrder;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_1 = CallFunc_GetMainMenuZOrder_ZOrder_1;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_2 = CallFunc_GetMainMenuZOrder_ZOrder_2;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_3 = CallFunc_GetMainMenuZOrder_ZOrder_3;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_4 = CallFunc_GetMainMenuZOrder_ZOrder_4;
	Parms.CallFunc_Get_Is_Console_Platform_IsConsole = CallFunc_Get_Is_Console_Platform_IsConsole;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_5 = CallFunc_GetMainMenuZOrder_ZOrder_5;
	Parms.CallFunc_Get_Is_Console_Platform_IsConsole_1 = CallFunc_Get_Is_Console_Platform_IsConsole_1;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_6 = CallFunc_GetMainMenuZOrder_ZOrder_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Options.wid_MainMenu_Options_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Options_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Options_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


