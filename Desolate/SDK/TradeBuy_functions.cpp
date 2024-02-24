#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TradeBuy.TradeBuy_C
// (None)

class UClass* UTradeBuy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TradeBuy_C");

	return Clss;
}


// TradeBuy_C TradeBuy.Default__TradeBuy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTradeBuy_C* UTradeBuy_C::GetDefaultObj()
{
	static class UTradeBuy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTradeBuy_C*>(UTradeBuy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TradeBuy.TradeBuy_C.FocusDefaultSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTradeBuy_C::FocusDefaultSlot(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "FocusDefaultSlot");

	Params::UTradeBuy_C_FocusDefaultSlot_Params Parms{};

	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.FilterNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWidgetsCount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTradeBuy_C::FilterNext(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetWidgetsCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "FilterNext");

	Params::UTradeBuy_C_FilterNext_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWidgetsCount_ReturnValue = CallFunc_GetWidgetsCount_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.FilterPrev
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetWidgetsCount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTradeBuy_C::FilterPrev(int32 CallFunc_GetWidgetsCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "FilterPrev");

	Params::UTradeBuy_C_FilterPrev_Params Parms{};

	Parms.CallFunc_GetWidgetsCount_ReturnValue = CallFunc_GetWidgetsCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.SortNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetWidgetsCount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTradeBuy_C::SortNext(int32 CallFunc_GetWidgetsCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "SortNext");

	Params::UTradeBuy_C_SortNext_Params Parms{};

	Parms.CallFunc_GetWidgetsCount_ReturnValue = CallFunc_GetWidgetsCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UTradeBuy_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnFocusReceived");

	Params::UTradeBuy_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TradeBuy.TradeBuy_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FInputEvent                 CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_InputEvent_IsRepeat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UTradeBuy_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnKeyDown");

	Params::UTradeBuy_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_InputEvent_IsRepeat_ReturnValue = CallFunc_InputEvent_IsRepeat_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TradeBuy.TradeBuy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTradeBuy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.OnWidgetSelectedEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTradeBuy_C::OnWidgetSelectedEvent_Event_0(int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnWidgetSelectedEvent_Event_0");

	Params::UTradeBuy_C_OnWidgetSelectedEvent_Event_0_Params Parms{};

	Parms.GroupIndex = GroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.OnWidgetSelectedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTradeBuy_C::OnWidgetSelectedEvent_Event_1(int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnWidgetSelectedEvent_Event_1");

	Params::UTradeBuy_C_OnWidgetSelectedEvent_Event_1_Params Parms{};

	Parms.GroupIndex = GroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTradeBuy_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.OnWidgetSelectedEvent_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTradeBuy_C::OnWidgetSelectedEvent_Event_2(int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnWidgetSelectedEvent_Event_2");

	Params::UTradeBuy_C_OnWidgetSelectedEvent_Event_2_Params Parms{};

	Parms.GroupIndex = GroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTradeBuy_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "Tick");

	Params::UTradeBuy_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.OnTooltipButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETooltipButtonType      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTradeBuy_C::OnTooltipButtonClicked(enum class ETooltipButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "OnTooltipButtonClicked");

	Params::UTradeBuy_C_OnTooltipButtonClicked_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TradeBuy.TradeBuy_C.UpdateTooltips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTradeBuy_C::UpdateTooltips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "UpdateTooltips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTradeBuy_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTradeBuy_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.HideInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTradeBuy_C::HideInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "HideInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TradeBuy.TradeBuy_C.ExecuteUbergraph_TradeBuy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_GroupIndex_2                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryFilterButton_C*    K2Node_DynamicCast_AsInventory_Filter_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_GroupIndex_1                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySortButton_C*      K2Node_DynamicCast_AsInventory_Sort_Button                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CharInventory_C>K2Node_DynamicCast_AsBPI_Char_Inventory                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHTradeComponent*           CallFunc_BPI_Get_External_Trade_Component_TradeComponent         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_GroupIndex                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlot_v2_C*         K2Node_DynamicCast_AsInventory_Slot_V_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETooltipButtonType      K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo                              (None)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_1                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FTooltipButtonInfo          K2Node_Select_Default                                            (None)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_2                            (None)
// TArray<struct FTooltipButtonInfo>  K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_3                            (None)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTooltipButtonInfo          K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_4                            (None)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_5                            (None)
// class UInventorySlot_v2_C*         K2Node_DynamicCast_AsInventory_Slot_V_2_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHInventorySlot*            CallFunc_GetContextSlot_Output                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTooltipButtonInfo          K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_IsNotEmpty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTooltipButtonInfo>  K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// class USHUserWidget*               CallFunc_GetSelectedWidget_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlot_v2_C*         K2Node_DynamicCast_AsInventory_Slot_V_2_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTradeBuy_C::ExecuteUbergraph_TradeBuy(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_GroupIndex_2, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UInventoryFilterButton_C* K2Node_DynamicCast_AsInventory_Filter_Button, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_GroupIndex_1, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_1, class UInventorySortButton_C* K2Node_DynamicCast_AsInventory_Sort_Button, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess_2, class USHTradeComponent* CallFunc_BPI_Get_External_Trade_Component_TradeComponent, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_GroupIndex, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_2, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ETooltipButtonType K2Node_Event_Type, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FTooltipButtonInfo& K2Node_Select_Default, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_2, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array_1, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_3, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue_1, const struct FTooltipButtonInfo& K2Node_Select_Default_1, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_4, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_3, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_5, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2_1, bool K2Node_DynamicCast_bSuccess_4, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue_2, class USHInventorySlot* CallFunc_GetContextSlot_Output, bool CallFunc_IsValid_ReturnValue_1, const struct FTooltipButtonInfo& K2Node_Select_Default_2, bool CallFunc_IsNotEmpty_ReturnValue, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array_2, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_4, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2_2, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TradeBuy_C", "ExecuteUbergraph_TradeBuy");

	Params::UTradeBuy_C_ExecuteUbergraph_TradeBuy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_GroupIndex_2 = K2Node_CustomEvent_GroupIndex_2;
	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_Filter_Button = K2Node_DynamicCast_AsInventory_Filter_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_GroupIndex_1 = K2Node_CustomEvent_GroupIndex_1;
	Parms.CallFunc_GetSelectedWidget_ReturnValue_1 = CallFunc_GetSelectedWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInventory_Sort_Button = K2Node_DynamicCast_AsInventory_Sort_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Char_Inventory = K2Node_DynamicCast_AsBPI_Char_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BPI_Get_External_Trade_Component_TradeComponent = CallFunc_BPI_Get_External_Trade_Component_TradeComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_GroupIndex = K2Node_CustomEvent_GroupIndex;
	Parms.CallFunc_GetSelectedWidget_ReturnValue_2 = CallFunc_GetSelectedWidget_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsInventory_Slot_V_2 = K2Node_DynamicCast_AsInventory_Slot_V_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.K2Node_MakeStruct_TooltipButtonInfo = K2Node_MakeStruct_TooltipButtonInfo;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_1 = K2Node_MakeStruct_TooltipButtonInfo_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_2 = K2Node_MakeStruct_TooltipButtonInfo_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_3 = K2Node_MakeStruct_TooltipButtonInfo_3;
	Parms.CallFunc_GetSHGlobals_ReturnValue_1 = CallFunc_GetSHGlobals_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_4 = K2Node_MakeStruct_TooltipButtonInfo_4;
	Parms.CallFunc_GetSelectedWidget_ReturnValue_3 = CallFunc_GetSelectedWidget_ReturnValue_3;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_5 = K2Node_MakeStruct_TooltipButtonInfo_5;
	Parms.K2Node_DynamicCast_AsInventory_Slot_V_2_1 = K2Node_DynamicCast_AsInventory_Slot_V_2_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetSHGlobals_ReturnValue_2 = CallFunc_GetSHGlobals_ReturnValue_2;
	Parms.CallFunc_GetContextSlot_Output = CallFunc_GetContextSlot_Output;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsNotEmpty_ReturnValue = CallFunc_IsNotEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetSelectedWidget_ReturnValue_4 = CallFunc_GetSelectedWidget_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsInventory_Slot_V_2_2 = K2Node_DynamicCast_AsInventory_Slot_V_2_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


