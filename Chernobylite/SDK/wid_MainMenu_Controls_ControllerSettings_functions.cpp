#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C
// (None)

class UClass* UWid_MainMenu_Controls_ControllerSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Controls_ControllerSettings_C");

	return Clss;
}


// wid_MainMenu_Controls_ControllerSettings_C wid_MainMenu_Controls_ControllerSettings.Default__wid_MainMenu_Controls_ControllerSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Controls_ControllerSettings_C* UWid_MainMenu_Controls_ControllerSettings_C::GetDefaultObj()
{
	static class UWid_MainMenu_Controls_ControllerSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Controls_ControllerSettings_C*>(UWid_MainMenu_Controls_ControllerSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.BackPressed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::BackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "BackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Save Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Save_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Save Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Close Control Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Close_Control_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Close Control Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.DefaultPressed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAimAssitDefaultValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_ControllerSettings_C::DefaultPressed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetAimAssitDefaultValue_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "DefaultPressed");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_DefaultPressed_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAimAssitDefaultValue_ReturnValue = CallFunc_GetAimAssitDefaultValue_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Capitalize Label
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_MainMenu_Controls_ControllerSettings_C::Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Capitalize Label");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Capitalize_Label_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Load Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsAimAssistEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAimAssistStrength_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_ControllerSettings_C::Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsAimAssistEnabled_ReturnValue, float CallFunc_GetAimAssistStrength_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Load Settings");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Load_Settings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetIsAimAssistEnabled_ReturnValue = CallFunc_GetIsAimAssistEnabled_ReturnValue;
	Parms.CallFunc_GetAimAssistStrength_ReturnValue = CallFunc_GetAimAssistStrength_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_Controls_ControllerSettings_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Setup Events");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.On AimAssist Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_ControllerSettings_C::On_AimAssist_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "On AimAssist Changed");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_On_AimAssist_Changed_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.On AimAssist Strength Changed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWid_MainMenu_Controls_ControllerSettings_C::On_AimAssist_Strength_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "On AimAssist Strength Changed");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_On_AimAssist_Strength_Changed_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_Controls_ControllerSettings_C::Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Setup_Selectable_Manager_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_ControllerSettings_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Set Background Visibility");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_ControllerSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "PreConstruct");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_ControllerSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Tick");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.InputEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::InputEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "InputEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.InputDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::InputDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "InputDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.ShowControllerLayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::ShowControllerLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "ShowControllerLayout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.InputBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.RightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::RightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "RightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.LeftRelesed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_ControllerSettings_C::LeftRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "LeftRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C.ExecuteUbergraph_wid_MainMenu_Controls_ControllerSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Controls_Controller_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedEntryIndex_CurrentlySelected                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetEntryIndex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_ControllerSettings_C::ExecuteUbergraph_wid_MainMenu_Controls_ControllerSettings(int32 EntryPoint, class UWid_MainMenu_Controls_Controller_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetMainMenuZOrder_ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_ControllerSettings_C", "ExecuteUbergraph_wid_MainMenu_Controls_ControllerSettings");

	Params::UWid_MainMenu_Controls_ControllerSettings_C_ExecuteUbergraph_wid_MainMenu_Controls_ControllerSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetSelectedEntryIndex_CurrentlySelected = CallFunc_GetSelectedEntryIndex_CurrentlySelected;
	Parms.CallFunc_GetEntryIndex_self_CastInput = CallFunc_GetEntryIndex_self_CastInput;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder = CallFunc_GetMainMenuZOrder_ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}

}


