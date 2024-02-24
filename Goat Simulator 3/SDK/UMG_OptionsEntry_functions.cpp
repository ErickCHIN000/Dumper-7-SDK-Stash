#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OptionsEntry.UMG_OptionsEntry_C
// (None)

class UClass* UUMG_OptionsEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OptionsEntry_C");

	return Clss;
}


// UMG_OptionsEntry_C UMG_OptionsEntry.Default__UMG_OptionsEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OptionsEntry_C* UUMG_OptionsEntry_C::GetDefaultObj()
{
	static class UUMG_OptionsEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OptionsEntry_C*>(UUMG_OptionsEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_OptionsEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "OnFocusReceived");

	Params::UUMG_OptionsEntry_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UUMG_OptionsEntry_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "OnAnalogValueChanged");

	Params::UUMG_OptionsEntry_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.GetCurrentOptionSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGGGameSettingOptionUserWidget*NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGameSettingOptionUserWidget*K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::GetCurrentOptionSlot(class UGGGameSettingOptionUserWidget** NewParam, class UWidget* CallFunc_GetChildAt_ReturnValue, class UGGGameSettingOptionUserWidget* K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "GetCurrentOptionSlot");

	Params::UUMG_OptionsEntry_C_GetCurrentOptionSlot_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget = K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_OptionsEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_OptionsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "PreConstruct");

	Params::UUMG_OptionsEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OptionsEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "OnListItemObjectSet");

	Params::UUMG_OptionsEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "BP_OnItemSelectionChanged");

	Params::UUMG_OptionsEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "BP_OnItemExpansionChanged");

	Params::UUMG_OptionsEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.OnFocusMarkerEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPrevious                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::OnFocusMarkerEnabled(bool bEnabled, bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "OnFocusMarkerEnabled");

	Params::UUMG_OptionsEntry_C_OnFocusMarkerEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OptionsEntry.UMG_OptionsEntry_C.ExecuteUbergraph_UMG_OptionsEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPrevious                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGameSettingOptionUserWidget*K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OptionsEntry_C::ExecuteUbergraph_UMG_OptionsEntry(int32 EntryPoint, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UGGGameSettingOptionUserWidget* K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OptionsEntry_C", "ExecuteUbergraph_UMG_OptionsEntry");

	Params::UUMG_OptionsEntry_C_ExecuteUbergraph_UMG_OptionsEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_bPrevious = K2Node_Event_bPrevious;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget = K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


