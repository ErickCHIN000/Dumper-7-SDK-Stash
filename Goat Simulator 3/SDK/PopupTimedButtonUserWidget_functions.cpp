#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C
// (None)

class UClass* UPopupTimedButtonUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupTimedButtonUserWidget_C");

	return Clss;
}


// PopupTimedButtonUserWidget_C PopupTimedButtonUserWidget.Default__PopupTimedButtonUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupTimedButtonUserWidget_C* UPopupTimedButtonUserWidget_C::GetDefaultObj()
{
	static class UPopupTimedButtonUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupTimedButtonUserWidget_C*>(UPopupTimedButtonUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.Visiblity_CountdownNotReachedZero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPopupTimedButtonUserWidget_C::Visiblity_CountdownNotReachedZero(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "Visiblity_CountdownNotReachedZero");

	Params::UPopupTimedButtonUserWidget_C_Visiblity_CountdownNotReachedZero_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.Visiblity_CountdownReachedZero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPopupTimedButtonUserWidget_C::Visiblity_CountdownReachedZero(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "Visiblity_CountdownReachedZero");

	Params::UPopupTimedButtonUserWidget_C_Visiblity_CountdownReachedZero_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.CountdownReachedZero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPopupTimedButtonUserWidget_C::CountdownReachedZero(bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "CountdownReachedZero");

	Params::UPopupTimedButtonUserWidget_C_CountdownReachedZero_Params Parms{};

	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UPopupTimedButtonUserWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "OnFocusReceived");

	Params::UPopupTimedButtonUserWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.HasStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPopupTimedButtonUserWidget_C::HasStyle(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "HasStyle");

	Params::UPopupTimedButtonUserWidget_C_HasStyle_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupTimedButtonUserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "PreConstruct");

	Params::UPopupTimedButtonUserWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupTimedButtonUserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopupTimedButtonUserWidget_C::BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopupTimedButtonUserWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.TogglePopupButtonEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupTimedButtonUserWidget_C::TogglePopupButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "TogglePopupButtonEnabled");

	Params::UPopupTimedButtonUserWidget_C_TogglePopupButtonEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.OnFocusMarkerEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPrevious                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupTimedButtonUserWidget_C::OnFocusMarkerEnabled(bool bEnabled, bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "OnFocusMarkerEnabled");

	Params::UPopupTimedButtonUserWidget_C_OnFocusMarkerEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.ShowFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focused                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopupTimedButtonUserWidget_C::ShowFocused(bool Focused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "ShowFocused");

	Params::UPopupTimedButtonUserWidget_C_ShowFocused_Params Parms{};

	Parms.Focused = Focused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupTimedButtonUserWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "Tick");

	Params::UPopupTimedButtonUserWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C.ExecuteUbergraph_PopupTimedButtonUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_HasStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPrevious                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Focused                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CountdownReachedZero_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UPopupTimedButtonUserWidget_C::ExecuteUbergraph_PopupTimedButtonUserWidget(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasStyle_ReturnValue, bool K2Node_CustomEvent_Enabled, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_Focused, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_CountdownReachedZero_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, int32 CallFunc_FCeil_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupTimedButtonUserWidget_C", "ExecuteUbergraph_PopupTimedButtonUserWidget");

	Params::UPopupTimedButtonUserWidget_C_ExecuteUbergraph_PopupTimedButtonUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_HasStyle_ReturnValue = CallFunc_HasStyle_ReturnValue;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_bPrevious = K2Node_Event_bPrevious;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_CustomEvent_Focused = K2Node_CustomEvent_Focused;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_CountdownReachedZero_ReturnValue = CallFunc_CountdownReachedZero_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


