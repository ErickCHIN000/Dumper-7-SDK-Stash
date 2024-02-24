#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C
// (None)

class UClass* UUMG_KeyRebindPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_KeyRebindPopUp_C");

	return Clss;
}


// UMG_KeyRebindPopUp_C UMG_KeyRebindPopUp.Default__UMG_KeyRebindPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_KeyRebindPopUp_C* UUMG_KeyRebindPopUp_C::GetDefaultObj()
{
	static class UUMG_KeyRebindPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_KeyRebindPopUp_C*>(UUMG_KeyRebindPopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.CreateButtonUserWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupButton                Button                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGGButtonUserWidget*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupButtonUserWidget_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UGGButtonUserWidget* UUMG_KeyRebindPopUp_C::CreateButtonUserWidget(struct FPopupButton& Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPopupButtonUserWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "CreateButtonUserWidget");

	Params::UUMG_KeyRebindPopUp_C_CreateButtonUserWidget_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue_1                              (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_KeyRebindPopUp_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "OnFocusReceived");

	Params::UUMG_KeyRebindPopUp_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_SetUserFocus_ReturnValue_1 = CallFunc_SetUserFocus_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnSetLabels
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_KeyRebindPopUp_C::OnSetLabels(class FText& Title, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "OnSetLabels");

	Params::UUMG_KeyRebindPopUp_C_OnSetLabels_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_KeyRebindPopUp_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "OnRemovedFromFocusPath");

	Params::UUMG_KeyRebindPopUp_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_KeyRebindPopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnButtonInteracted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGUserWidget*               InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               InPointerEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_KeyRebindPopUp_C::OnButtonInteracted(class UGGUserWidget* InWidget, const struct FPointerEvent& InPointerEvent, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "OnButtonInteracted");

	Params::UUMG_KeyRebindPopUp_C_OnButtonInteracted_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.InPointerEvent = InPointerEvent;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.ExecuteUbergraph_UMG_KeyRebindPopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_Event_InWidget                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_InPointerEvent                                      (None)
// struct FKeyEvent                   K2Node_Event_InKeyEvent                                          (None)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_KeyRebindPopUp_C::ExecuteUbergraph_UMG_KeyRebindPopUp(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UGGUserWidget* K2Node_Event_InWidget, const struct FPointerEvent& K2Node_Event_InPointerEvent, const struct FKeyEvent& K2Node_Event_InKeyEvent, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeyRebindPopUp_C", "ExecuteUbergraph_UMG_KeyRebindPopUp");

	Params::UUMG_KeyRebindPopUp_C_ExecuteUbergraph_UMG_KeyRebindPopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_InWidget = K2Node_Event_InWidget;
	Parms.K2Node_Event_InPointerEvent = K2Node_Event_InPointerEvent;
	Parms.K2Node_Event_InKeyEvent = K2Node_Event_InKeyEvent;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget = K2Node_DynamicCast_AsPopup_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


