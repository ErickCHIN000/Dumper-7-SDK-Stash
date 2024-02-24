#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C
// (None)

class UClass* UWid_MainMenu_Video_Options_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Video_Options_C");

	return Clss;
}


// wid_MainMenu_Video_Options_C wid_MainMenu_Video_Options.Default__wid_MainMenu_Video_Options_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Video_Options_C* UWid_MainMenu_Video_Options_C::GetDefaultObj()
{
	static class UWid_MainMenu_Video_Options_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Video_Options_C*>(UWid_MainMenu_Video_Options_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.CloseVideoOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::CloseVideoOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "CloseVideoOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.PlayUIMoveSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::PlayUIMoveSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "PlayUIMoveSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.UpdateList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "UpdateList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.BackButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::BackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "BackButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.AcceptOpt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::AcceptOpt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "AcceptOpt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Video_Options_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "PreConstruct");

	Params::UWid_MainMenu_Video_Options_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Video_Options_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "Tick");

	Params::UWid_MainMenu_Video_Options_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Video_Options_C::CustomEvent_0(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "CustomEvent_0");

	Params::UWid_MainMenu_Video_Options_C_CustomEvent_0_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.AnimFin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::AnimFin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "AnimFin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.ExecuteUbergraph_wid_MainMenu_Video_Options
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Gamma_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_VideoSettings_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_AdvancedVideoSettings_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedEntryIndex_CurrentlySelected                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>CallFunc_SelectNewEntry_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainMenuZOrder_ZOrder_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Video_Options_C::ExecuteUbergraph_wid_MainMenu_Video_Options(int32 EntryPoint, int32 CallFunc_GetMainMenuZOrder_ZOrder, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UWid_MainMenu_Gamma_C* CallFunc_Create_ReturnValue, class UWid_MainMenu_VideoSettings_C* CallFunc_Create_ReturnValue_1, class UWid_MainMenu_AdvancedVideoSettings_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FMargin& K2Node_MakeStruct_Margin, int32 K2Node_CustomEvent_NewParam, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, int32 CallFunc_GetMainMenuZOrder_ZOrder_1, int32 CallFunc_GetMainMenuZOrder_ZOrder_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "ExecuteUbergraph_wid_MainMenu_Video_Options");

	Params::UWid_MainMenu_Video_Options_C_ExecuteUbergraph_wid_MainMenu_Video_Options_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder = CallFunc_GetMainMenuZOrder_ZOrder;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetSelectedEntryIndex_CurrentlySelected = CallFunc_GetSelectedEntryIndex_CurrentlySelected;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SelectNewEntry_self_CastInput = CallFunc_SelectNewEntry_self_CastInput;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_1 = CallFunc_GetMainMenuZOrder_ZOrder_1;
	Parms.CallFunc_GetMainMenuZOrder_ZOrder_2 = CallFunc_GetMainMenuZOrder_ZOrder_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Video_Options.wid_MainMenu_Video_Options_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Video_Options_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Video_Options_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


