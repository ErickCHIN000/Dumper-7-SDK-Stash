#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupButtonUserWidget.PopupButtonUserWidget_C
// (None)

class UClass* UPopupButtonUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupButtonUserWidget_C");

	return Clss;
}


// PopupButtonUserWidget_C PopupButtonUserWidget.Default__PopupButtonUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupButtonUserWidget_C* UPopupButtonUserWidget_C::GetDefaultObj()
{
	static class UPopupButtonUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupButtonUserWidget_C*>(UPopupButtonUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UPopupButtonUserWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "OnFocusReceived");

	Params::UPopupButtonUserWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.HasStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPopupButtonUserWidget_C::HasStyle(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "HasStyle");

	Params::UPopupButtonUserWidget_C_HasStyle_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupButtonUserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "PreConstruct");

	Params::UPopupButtonUserWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupButtonUserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopupButtonUserWidget_C::BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopupButtonUserWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.TogglePopupButtonEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupButtonUserWidget_C::TogglePopupButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "TogglePopupButtonEnabled");

	Params::UPopupButtonUserWidget_C_TogglePopupButtonEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.OnFocusMarkerEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPrevious                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupButtonUserWidget_C::OnFocusMarkerEnabled(bool bEnabled, bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "OnFocusMarkerEnabled");

	Params::UPopupButtonUserWidget_C_OnFocusMarkerEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.ShowFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focused                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupButtonUserWidget_C::ShowFocused(bool Focused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "ShowFocused");

	Params::UPopupButtonUserWidget_C_ShowFocused_Params Parms{};

	Parms.Focused = Focused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButtonUserWidget.PopupButtonUserWidget_C.ExecuteUbergraph_PopupButtonUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_HasStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPrevious                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Focused                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupButtonUserWidget_C::ExecuteUbergraph_PopupButtonUserWidget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_HasStyle_ReturnValue, bool K2Node_CustomEvent_Enabled, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_Focused, const struct FLinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButtonUserWidget_C", "ExecuteUbergraph_PopupButtonUserWidget");

	Params::UPopupButtonUserWidget_C_ExecuteUbergraph_PopupButtonUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasStyle_ReturnValue = CallFunc_HasStyle_ReturnValue;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_bPrevious = K2Node_Event_bPrevious;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_CustomEvent_Focused = K2Node_CustomEvent_Focused;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


