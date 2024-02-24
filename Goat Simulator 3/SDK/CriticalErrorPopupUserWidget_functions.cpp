#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C
// (None)

class UClass* UCriticalErrorPopupUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriticalErrorPopupUserWidget_C");

	return Clss;
}


// CriticalErrorPopupUserWidget_C CriticalErrorPopupUserWidget.Default__CriticalErrorPopupUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCriticalErrorPopupUserWidget_C* UCriticalErrorPopupUserWidget_C::GetDefaultObj()
{
	static class UCriticalErrorPopupUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriticalErrorPopupUserWidget_C*>(UCriticalErrorPopupUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UCriticalErrorPopupUserWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnKeyDown");

	Params::UCriticalErrorPopupUserWidget_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue_1                              (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue_2                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UCriticalErrorPopupUserWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 Temp_int_Array_Index_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnFocusReceived");

	Params::UCriticalErrorPopupUserWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget = K2Node_DynamicCast_AsPopup_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetUserFocus_ReturnValue_1 = CallFunc_SetUserFocus_ReturnValue_1;
	Parms.CallFunc_SetUserFocus_ReturnValue_2 = CallFunc_SetUserFocus_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupTimedButtonUserWidget_C*K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupTimedButtonUserWidget_C*K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCriticalErrorPopupUserWidget_C::GetInitialWidgetFocus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "GetInitialWidgetFocus");

	Params::UCriticalErrorPopupUserWidget_C_GetInitialWidgetFocus_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget = K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1 = K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_1 = CallFunc_GetInitialWidgetFocus_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_2 = CallFunc_GetInitialWidgetFocus_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnSetLabels
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCriticalErrorPopupUserWidget_C::OnSetLabels(class FText& Title, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnSetLabels");

	Params::UCriticalErrorPopupUserWidget_C_OnSetLabels_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnCreatedButton
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPopupButton                Button                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCriticalErrorPopupUserWidget_C::OnCreatedButton(struct FPopupButton& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnCreatedButton");

	Params::UCriticalErrorPopupUserWidget_C_OnCreatedButton_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnPopupButtonInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UCriticalErrorPopupUserWidget_C::OnPopupButtonInteracted(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnPopupButtonInteracted");

	Params::UCriticalErrorPopupUserWidget_C_OnPopupButtonInteracted_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCriticalErrorPopupUserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCriticalErrorPopupUserWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "OnRemovedFromFocusPath");

	Params::UCriticalErrorPopupUserWidget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCriticalErrorPopupUserWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "Tick");

	Params::UCriticalErrorPopupUserWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.ExecuteUbergraph_CriticalErrorPopupUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopupButton                K2Node_Event_Button                                              (ConstParm)
// class UGGUserWidget*               K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_CustomEvent_PointerEvent                                  (None)
// struct FKeyEvent                   K2Node_CustomEvent_KeyEvent                                      (None)
// class UPopupTimedButtonUserWidget_C*K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPopupTimedButtonUserWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTopMostPopup_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTopMostPopup_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCriticalErrorPopupUserWidget_C::ExecuteUbergraph_CriticalErrorPopupUserWidget(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, bool CallFunc_IsValid_ReturnValue, const struct FPopupButton& K2Node_Event_Button, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPopupTimedButtonUserWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsTopMostPopup_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTopMostPopup_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriticalErrorPopupUserWidget_C", "ExecuteUbergraph_CriticalErrorPopupUserWidget");

	Params::UCriticalErrorPopupUserWidget_C_ExecuteUbergraph_CriticalErrorPopupUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_PointerEvent = K2Node_CustomEvent_PointerEvent;
	Parms.K2Node_CustomEvent_KeyEvent = K2Node_CustomEvent_KeyEvent;
	Parms.K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget = K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_IsTopMostPopup_ReturnValue = CallFunc_IsTopMostPopup_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsTopMostPopup_ReturnValue_1 = CallFunc_IsTopMostPopup_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


