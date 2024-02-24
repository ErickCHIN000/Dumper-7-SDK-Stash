#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_sw_SwitchTabs.wid_sw_SwitchTabs_C
// (None)

class UClass* UWid_sw_SwitchTabs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_sw_SwitchTabs_C");

	return Clss;
}


// wid_sw_SwitchTabs_C wid_sw_SwitchTabs.Default__wid_sw_SwitchTabs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_sw_SwitchTabs_C* UWid_sw_SwitchTabs_C::GetDefaultObj()
{
	static class UWid_sw_SwitchTabs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_sw_SwitchTabs_C*>(UWid_sw_SwitchTabs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.GetX_PositionInCanvas
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue_Left                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_SwitchTabs_C::GetX_PositionInCanvas(class UWidget* Widget, float* ReturnValue_Left, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "GetX_PositionInCanvas");

	Params::UWid_sw_SwitchTabs_C_GetX_PositionInCanvas_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue_Left != nullptr)
		*ReturnValue_Left = Parms.ReturnValue_Left;

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.GetOtherSizebox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USizeBox*                    NewCurrent                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    K2Node_DynamicCast_AsSize_Box                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_SwitchTabs_C::GetOtherSizebox(class USizeBox** NewCurrent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "GetOtherSizebox");

	Params::UWid_sw_SwitchTabs_C_GetOtherSizebox_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSize_Box = K2Node_DynamicCast_AsSize_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCurrent != nullptr)
		*NewCurrent = Parms.NewCurrent;

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.SetX_PositionInCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              In_Offset_Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_SwitchTabs_C::SetX_PositionInCanvas(class UWidget* Widget, float In_Offset_Left, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "SetX_PositionInCanvas");

	Params::UWid_sw_SwitchTabs_C_SetX_PositionInCanvas_Params Parms{};

	Parms.Widget = Widget;
	Parms.In_Offset_Left = In_Offset_Left;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.GetContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContentWidget*              K2Node_DynamicCast_AsContent_Widget                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_SwitchTabs_C::GetContent(class UWidget** Content, class UWidget* CallFunc_GetContent_ReturnValue, class UContentWidget* K2Node_DynamicCast_AsContent_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetContent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "GetContent");

	Params::UWid_sw_SwitchTabs_C_GetContent_Params Parms{};

	Parms.CallFunc_GetContent_ReturnValue = CallFunc_GetContent_ReturnValue;
	Parms.K2Node_DynamicCast_AsContent_Widget = K2Node_DynamicCast_AsContent_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContent_ReturnValue_1 = CallFunc_GetContent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_SwitchTabs_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "PreConstruct");

	Params::UWid_sw_SwitchTabs_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bToTheRight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     ScrollToWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_SwitchTabs_C::Scroll(bool bToTheRight, class UWidget* ScrollToWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "Scroll");

	Params::UWid_sw_SwitchTabs_C_Scroll_Params Parms{};

	Parms.bToTheRight = bToTheRight;
	Parms.ScrollToWidget = ScrollToWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_SwitchTabs_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "Tick");

	Params::UWid_sw_SwitchTabs_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.SetCurrentWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_SwitchTabs_C::SetCurrentWidget(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "SetCurrentWidget");

	Params::UWid_sw_SwitchTabs_C_SetCurrentWidget_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_SwitchTabs_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.ExecuteUbergraph_wid_sw_SwitchTabs
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bToTheRight                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_ScrollToWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContentWidget*              K2Node_DynamicCast_AsContent_Widget                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_PositionInCanvas_ReturnValue_Left                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_PositionInCanvas_ReturnValue_Left_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_PositionInCanvas_ReturnValue_Left_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_4                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Content                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContentWidget*              K2Node_DynamicCast_AsContent_Widget_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_5                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedSlot*                  K2Node_DynamicCast_AsNamed_Slot                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetContent_ReturnValue_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedSlot*                  K2Node_DynamicCast_AsNamed_Slot_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetContent_ReturnValue_5                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_GetOtherSizebox_NewCurrent_6                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_SwitchTabs_C::ExecuteUbergraph_wid_sw_SwitchTabs(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bToTheRight, class UWidget* K2Node_CustomEvent_ScrollToWidget, TArray<class USizeBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent, class UWidget* CallFunc_GetContent_ReturnValue, class UContentWidget* K2Node_DynamicCast_AsContent_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_2, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, int32 Temp_int_Array_Index_Variable, float CallFunc_SelectFloat_ReturnValue_2, class USizeBox* CallFunc_Array_Get_Item, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_4, class UWidget* K2Node_CustomEvent_Content, class UWidget* CallFunc_GetContent_ReturnValue_1, class UContentWidget* K2Node_DynamicCast_AsContent_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_5, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue_2, class UNamedSlot* K2Node_DynamicCast_AsNamed_Slot, bool K2Node_DynamicCast_bSuccess_2, class UWidget* CallFunc_GetContent_ReturnValue_3, class UWidget* CallFunc_GetContent_ReturnValue_4, class UNamedSlot* K2Node_DynamicCast_AsNamed_Slot_1, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetContent_ReturnValue_5, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "ExecuteUbergraph_wid_sw_SwitchTabs");

	Params::UWid_sw_SwitchTabs_C_ExecuteUbergraph_wid_sw_SwitchTabs_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bToTheRight = K2Node_CustomEvent_bToTheRight;
	Parms.K2Node_CustomEvent_ScrollToWidget = K2Node_CustomEvent_ScrollToWidget;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOtherSizebox_NewCurrent = CallFunc_GetOtherSizebox_NewCurrent;
	Parms.CallFunc_GetContent_ReturnValue = CallFunc_GetContent_ReturnValue;
	Parms.K2Node_DynamicCast_AsContent_Widget = K2Node_DynamicCast_AsContent_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_1 = CallFunc_GetOtherSizebox_NewCurrent_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetX_PositionInCanvas_ReturnValue_Left = CallFunc_GetX_PositionInCanvas_ReturnValue_Left;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_2 = CallFunc_GetOtherSizebox_NewCurrent_2;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_GetX_PositionInCanvas_ReturnValue_Left_1 = CallFunc_GetX_PositionInCanvas_ReturnValue_Left_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_GetX_PositionInCanvas_ReturnValue_Left_2 = CallFunc_GetX_PositionInCanvas_ReturnValue_Left_2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_3 = CallFunc_GetOtherSizebox_NewCurrent_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_4 = CallFunc_GetOtherSizebox_NewCurrent_4;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.CallFunc_GetContent_ReturnValue_1 = CallFunc_GetContent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsContent_Widget_1 = K2Node_DynamicCast_AsContent_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_5 = CallFunc_GetOtherSizebox_NewCurrent_5;
	Parms.CallFunc_SetContent_ReturnValue_1 = CallFunc_SetContent_ReturnValue_1;
	Parms.CallFunc_GetContent_ReturnValue_2 = CallFunc_GetContent_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNamed_Slot = K2Node_DynamicCast_AsNamed_Slot;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetContent_ReturnValue_3 = CallFunc_GetContent_ReturnValue_3;
	Parms.CallFunc_GetContent_ReturnValue_4 = CallFunc_GetContent_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsNamed_Slot_1 = K2Node_DynamicCast_AsNamed_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetContent_ReturnValue_5 = CallFunc_GetContent_ReturnValue_5;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetOtherSizebox_NewCurrent_6 = CallFunc_GetOtherSizebox_NewCurrent_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_SwitchTabs.wid_sw_SwitchTabs_C.FinishedScrolling__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     PreviousWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Right_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_SwitchTabs_C::FinishedScrolling__DelegateSignature(class UWidget* PreviousWidget, class UWidget* CurrentWidget, bool Right_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_SwitchTabs_C", "FinishedScrolling__DelegateSignature");

	Params::UWid_sw_SwitchTabs_C_FinishedScrolling__DelegateSignature_Params Parms{};

	Parms.PreviousWidget = PreviousWidget;
	Parms.CurrentWidget = CurrentWidget;
	Parms.Right_ = Right_;

	UObject::ProcessEvent(Func, &Parms);

}

}


