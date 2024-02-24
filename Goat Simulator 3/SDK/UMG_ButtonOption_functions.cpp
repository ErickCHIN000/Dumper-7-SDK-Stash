#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ButtonOption.UMG_ButtonOption_C
// (None)

class UClass* UUMG_ButtonOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ButtonOption_C");

	return Clss;
}


// UMG_ButtonOption_C UMG_ButtonOption.Default__UMG_ButtonOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ButtonOption_C* UUMG_ButtonOption_C::GetDefaultObj()
{
	static class UUMG_ButtonOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ButtonOption_C*>(UUMG_ButtonOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ButtonOption.UMG_ButtonOption_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_ButtonOption_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "OnFocusReceived");

	Params::UUMG_ButtonOption_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ButtonOption.UMG_ButtonOption_C.BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ButtonOption_C::BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature");

	Params::UUMG_ButtonOption_C_BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonOption.UMG_ButtonOption_C.RefreshOption
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ButtonOption_C::RefreshOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "RefreshOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonOption.UMG_ButtonOption_C.Setup
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGGGameSettingHandle        InSettingHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UGGSettingsTabMenuUserWidget*InParentSettingTab                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ButtonOption_C::Setup(const struct FGGGameSettingHandle& InSettingHandle, class UGGSettingsTabMenuUserWidget* InParentSettingTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "Setup");

	Params::UUMG_ButtonOption_C_Setup_Params Parms{};

	Parms.InSettingHandle = InSettingHandle;
	Parms.InParentSettingTab = InParentSettingTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ButtonOption.UMG_ButtonOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ButtonOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ButtonOption.UMG_ButtonOption_C.ExecuteUbergraph_UMG_ButtonOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent                          (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent                              (None)
// struct FGGGameSettingHandle        K2Node_Event_InSettingHandle                                     (NoDestructor, HasGetValueTypeHash)
// class UGGSettingsTabMenuUserWidget*K2Node_Event_InParentSettingTab                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ButtonOption_C::ExecuteUbergraph_UMG_ButtonOption(int32 EntryPoint, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent, const struct FGGGameSettingHandle& K2Node_Event_InSettingHandle, class UGGSettingsTabMenuUserWidget* K2Node_Event_InParentSettingTab, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ButtonOption_C", "ExecuteUbergraph_UMG_ButtonOption");

	Params::UUMG_ButtonOption_C_ExecuteUbergraph_UMG_ButtonOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_ComponentBoundEvent_PointerEvent = K2Node_ComponentBoundEvent_PointerEvent;
	Parms.K2Node_ComponentBoundEvent_KeyEvent = K2Node_ComponentBoundEvent_KeyEvent;
	Parms.K2Node_Event_InSettingHandle = K2Node_Event_InSettingHandle;
	Parms.K2Node_Event_InParentSettingTab = K2Node_Event_InParentSettingTab;
	Parms.CallFunc_GetAvailableOptions_ReturnValue = CallFunc_GetAvailableOptions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


