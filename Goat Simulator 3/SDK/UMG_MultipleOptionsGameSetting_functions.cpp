#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C
// (None)

class UClass* UUMG_MultipleOptionsGameSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MultipleOptionsGameSetting_C");

	return Clss;
}


// UMG_MultipleOptionsGameSetting_C UMG_MultipleOptionsGameSetting.Default__UMG_MultipleOptionsGameSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MultipleOptionsGameSetting_C* UUMG_MultipleOptionsGameSetting_C::GetDefaultObj()
{
	static class UUMG_MultipleOptionsGameSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MultipleOptionsGameSetting_C*>(UUMG_MultipleOptionsGameSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_MultipleOptionsGameSetting_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "OnFocusReceived");

	Params::UUMG_MultipleOptionsGameSetting_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.Get Current Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleOptionsGameSetting_C::Get_Current_Index(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "Get Current Index");

	Params::UUMG_MultipleOptionsGameSetting_C_Get_Current_Index_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_MultipleOptionsGameSetting_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "GetInitialWidgetFocus");

	Params::UUMG_MultipleOptionsGameSetting_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MultipleOptionsGameSetting_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "OnRemovedFromFocusPath");

	Params::UUMG_MultipleOptionsGameSetting_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.On Option Index Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleOptionsGameSetting_C::On_Option_Index_Changed(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "On Option Index Changed");

	Params::UUMG_MultipleOptionsGameSetting_C_On_Option_Index_Changed_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MultipleOptionsGameSetting_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "OnAddedToFocusPath");

	Params::UUMG_MultipleOptionsGameSetting_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.RefreshOption
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MultipleOptionsGameSetting_C::RefreshOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "RefreshOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MultipleOptionsGameSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnSetIsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MultipleOptionsGameSetting_C::OnSetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "OnSetIsEnabled");

	Params::UUMG_MultipleOptionsGameSetting_C_OnSetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.ExecuteUbergraph_UMG_MultipleOptionsGameSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// int32                              CallFunc_GetOptionIndexForCurrentValue_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue                         (ReferenceParm)
// int32                              K2Node_CustomEvent_NewIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue_1                       (ReferenceParm)
// bool                               K2Node_Event_bInIsEnabled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MultipleOptionsGameSetting_C::ExecuteUbergraph_UMG_MultipleOptionsGameSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, int32 K2Node_CustomEvent_NewIndex, const struct FFocusEvent& K2Node_Event_InFocusEvent, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue_1, bool K2Node_Event_bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsGameSetting_C", "ExecuteUbergraph_UMG_MultipleOptionsGameSetting");

	Params::UUMG_MultipleOptionsGameSetting_C_ExecuteUbergraph_UMG_MultipleOptionsGameSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_GetOptionIndexForCurrentValue_ReturnValue = CallFunc_GetOptionIndexForCurrentValue_ReturnValue;
	Parms.CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1 = CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1;
	Parms.CallFunc_GetAvailableOptions_ReturnValue = CallFunc_GetAvailableOptions_ReturnValue;
	Parms.K2Node_CustomEvent_NewIndex = K2Node_CustomEvent_NewIndex;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetAvailableOptions_ReturnValue_1 = CallFunc_GetAvailableOptions_ReturnValue_1;
	Parms.K2Node_Event_bInIsEnabled = K2Node_Event_bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


