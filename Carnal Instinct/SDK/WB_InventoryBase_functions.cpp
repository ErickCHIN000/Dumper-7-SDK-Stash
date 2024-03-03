#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_InventoryBase.WB_InventoryBase_C
// (None)

class UClass* UWB_InventoryBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_InventoryBase_C");

	return Clss;
}


// WB_InventoryBase_C WB_InventoryBase.Default__WB_InventoryBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_InventoryBase_C* UWB_InventoryBase_C::GetDefaultObj()
{
	static class UWB_InventoryBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_InventoryBase_C*>(UWB_InventoryBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_InventoryBase.WB_InventoryBase_C.Get_TabName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Panel_Text                                                       (Edit, BlueprintVisible)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWB_InventoryBase_C::Get_TabName_Text_0(class FText Panel_Text, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Get_TabName_Text_0");

	Params::UWB_InventoryBase_C_Get_TabName_Text_0_Params Parms{};

	Parms.Panel_Text = Panel_Text;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InventoryBase.WB_InventoryBase_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        KeyInput                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UWB_InventoryBase_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& KeyInput, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "OnKeyDown");

	Params::UWB_InventoryBase_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.KeyInput = KeyInput;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Highlight Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           CallFunc_Get_UniformGrid_by_Panel_Grid                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_InventorySlot_C*         K2Node_DynamicCast_AsWB_Inventory_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::Highlight_Slot(int32 SlotIndex, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel, class UUniformGridPanel* CallFunc_Get_UniformGrid_by_Panel_Grid, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWB_InventorySlot_C* K2Node_DynamicCast_AsWB_Inventory_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Highlight Slot");

	Params::UWB_InventoryBase_C_Highlight_Slot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.CallFunc_Get_Active_Panel_Panel = CallFunc_Get_Active_Panel_Panel;
	Parms.CallFunc_Get_UniformGrid_by_Panel_Grid = CallFunc_Get_UniformGrid_by_Panel_Grid;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Inventory_Slot = K2Node_DynamicCast_AsWB_Inventory_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Using Gamepad?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Gamepad                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::Using_Gamepad_(bool* Gamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Using Gamepad?");

	Params::UWB_InventoryBase_C_Using_Gamepad__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gamepad != nullptr)
		*Gamepad = Parms.Gamepad;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Right                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::Switch_Panels(bool To_Right, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel_2, bool K2Node_SwitchEnum_CmpSuccess_2, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel_3, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panels");

	Params::UWB_InventoryBase_C_Switch_Panels_Params Parms{};

	Parms.To_Right = To_Right;
	Parms.CallFunc_Get_Active_Panel_Panel = CallFunc_Get_Active_Panel_Panel;
	Parms.CallFunc_Get_Active_Panel_Panel_1 = CallFunc_Get_Active_Panel_Panel_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Get_Active_Panel_Panel_2 = CallFunc_Get_Active_Panel_Panel_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Get_Active_Panel_Panel_3 = CallFunc_Get_Active_Panel_Panel_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Get UniformGrid by Panel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_InventoryPanels       Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           Grid                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InventoryPanels       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InventoryBase_C::Get_UniformGrid_by_Panel(enum class E_InventoryPanels Index, class UUniformGridPanel** Grid, enum class E_InventoryPanels Temp_byte_Variable, class UUniformGridPanel* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Get UniformGrid by Panel");

	Params::UWB_InventoryBase_C_Get_UniformGrid_by_Panel_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Grid != nullptr)
		*Grid = Parms.Grid;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Set Focus to Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetType            CallFunc_Get_Focused_Widget_WidgetType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_InventoryPanels       CallFunc_Get_Active_Panel_Panel                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           CallFunc_Get_UniformGrid_by_Panel_Grid                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::Set_Focus_to_Slot(int32 SlotIndex, enum class E_WidgetType CallFunc_Get_Focused_Widget_WidgetType, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class E_InventoryPanels CallFunc_Get_Active_Panel_Panel, class UUniformGridPanel* CallFunc_Get_UniformGrid_by_Panel_Grid, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Set Focus to Slot");

	Params::UWB_InventoryBase_C_Set_Focus_to_Slot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.CallFunc_Get_Focused_Widget_WidgetType = CallFunc_Get_Focused_Widget_WidgetType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Get_Active_Panel_Panel = CallFunc_Get_Active_Panel_Panel;
	Parms.CallFunc_Get_UniformGrid_by_Panel_Grid = CallFunc_Get_UniformGrid_by_Panel_Grid;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InventoryBase.WB_InventoryBase_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWB_InventoryBase_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "OnFocusReceived");

	Params::UWB_InventoryBase_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Get Active Panel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_InventoryPanels       Panel                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_7                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_8                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_9                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_10                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_11                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::Get_Active_Panel(enum class E_InventoryPanels* Panel, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, class UWidget* CallFunc_GetActiveWidget_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, class UWidget* CallFunc_GetActiveWidget_ReturnValue_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, class UWidget* CallFunc_GetActiveWidget_ReturnValue_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8, class UWidget* CallFunc_GetActiveWidget_ReturnValue_9, class UWidget* CallFunc_GetActiveWidget_ReturnValue_10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_10, class UWidget* CallFunc_GetActiveWidget_ReturnValue_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Get Active Panel");

	Params::UWB_InventoryBase_C_Get_Active_Panel_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_2 = CallFunc_GetActiveWidget_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetActiveWidget_ReturnValue_3 = CallFunc_GetActiveWidget_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_GetActiveWidget_ReturnValue_4 = CallFunc_GetActiveWidget_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetActiveWidget_ReturnValue_5 = CallFunc_GetActiveWidget_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
	Parms.CallFunc_GetActiveWidget_ReturnValue_6 = CallFunc_GetActiveWidget_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_6 = CallFunc_EqualEqual_ObjectObject_ReturnValue_6;
	Parms.CallFunc_GetActiveWidget_ReturnValue_7 = CallFunc_GetActiveWidget_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_7 = CallFunc_EqualEqual_ObjectObject_ReturnValue_7;
	Parms.CallFunc_GetActiveWidget_ReturnValue_8 = CallFunc_GetActiveWidget_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_8 = CallFunc_EqualEqual_ObjectObject_ReturnValue_8;
	Parms.CallFunc_GetActiveWidget_ReturnValue_9 = CallFunc_GetActiveWidget_ReturnValue_9;
	Parms.CallFunc_GetActiveWidget_ReturnValue_10 = CallFunc_GetActiveWidget_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_9 = CallFunc_EqualEqual_ObjectObject_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_10 = CallFunc_EqualEqual_ObjectObject_ReturnValue_10;
	Parms.CallFunc_GetActiveWidget_ReturnValue_11 = CallFunc_GetActiveWidget_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_11 = CallFunc_EqualEqual_ObjectObject_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Play Sound on Tab Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Play_Sound_on_Tab_Change()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Play Sound on Tab Change");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Get UI Border Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UWB_InventoryBase_C::Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Get UI Border Color");

	Params::UWB_InventoryBase_C_Get_UI_Border_Color_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InventoryBase.WB_InventoryBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.BndEvt__Button_P1_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::BndEvt__Button_P1_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "BndEvt__Button_P1_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Toggle Gamepad Inputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Toggle_Gamepad_Inputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Toggle Gamepad Inputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.On Gamepad Toggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Gamepad_Controls                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_InventoryBase_C::On_Gamepad_Toggled(bool Gamepad_Controls)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "On Gamepad Toggled");

	Params::UWB_InventoryBase_C_On_Gamepad_Toggled_Params Parms{};

	Parms.Gamepad_Controls = Gamepad_Controls;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InventoryBase.WB_InventoryBase_C.On End Sorting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::On_End_Sorting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "On End Sorting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Event Bind Sorting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Event_Bind_Sorting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Event Bind Sorting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.BndEvt__Button_P5_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::BndEvt__Button_P5_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "BndEvt__Button_P5_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Switch Panel 12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Switch_Panel_12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Switch Panel 12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.Create Inventory P12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::Create_Inventory_P12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "Create Inventory P12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.OpenInventoryBags
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::OpenInventoryBags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "OpenInventoryBags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.BndEvt__WB_InventoryBase_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_InventoryBase_C::BndEvt__WB_InventoryBase_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "BndEvt__WB_InventoryBase_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryBase.WB_InventoryBase_C.ExecuteUbergraph_WB_InventoryBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_9                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_10                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_23                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_1                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_24                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Gamepad_Controls                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Using_Gamepad__Gamepad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_25                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_26                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_2                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_27                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_3                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_28                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventorySlot_C*         CallFunc_Create_ReturnValue_11                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_29                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_30                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_4                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_4                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_5                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_6                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_5                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_5                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_31                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Array_Get_Item_6                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_6                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_7                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_8                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_32                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_7                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_7                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_8                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_8                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_9                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_33                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_9                                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_10                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_9                             (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_11                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_10                                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_10                            (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_34                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item_11                                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut_11                            (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_35                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InventoryBase_C::ExecuteUbergraph_WB_InventoryBase(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_2, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_3, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_4, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_7, int32 Temp_int_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_9, int32 Temp_int_Variable_16, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Variable_19, int32 Temp_int_Variable_20, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Variable_21, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_10, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_Array_Get_Item, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_22, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Variable_23, int32 CallFunc_Add_IntInt_ReturnValue_12, const struct FS_ItemData& CallFunc_Array_Get_Item_1, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 Temp_int_Variable_24, bool K2Node_CustomEvent_Gamepad_Controls, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Using_Gamepad__Gamepad, int32 Temp_int_Variable_25, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 Temp_int_Variable_26, int32 CallFunc_Add_IntInt_ReturnValue_15, const struct FS_ItemData& CallFunc_Array_Get_Item_2, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_16, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 Temp_int_Variable_27, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_17, const struct FS_ItemData& CallFunc_Array_Get_Item_3, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 Temp_int_Variable_28, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_19, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_4, class UWB_InventorySlot_C* CallFunc_Create_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_20, int32 Temp_int_Variable_29, int32 Temp_int_Variable_30, const struct FS_ItemData& CallFunc_Array_Get_Item_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_4, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_4, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_21, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_6, const struct FS_ItemData& CallFunc_Array_Get_Item_5, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_5, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_22, int32 CallFunc_Add_IntInt_ReturnValue_23, int32 Temp_int_Variable_31, bool CallFunc_GreaterEqual_IntInt_ReturnValue_6, const struct FS_ItemData& CallFunc_Array_Get_Item_6, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_6, int32 CallFunc_Subtract_IntInt_ReturnValue_7, bool CallFunc_LessEqual_IntInt_ReturnValue_6, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_24, int32 CallFunc_Add_IntInt_ReturnValue_25, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_8, int32 CallFunc_Subtract_IntInt_ReturnValue_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_26, int32 CallFunc_Add_IntInt_ReturnValue_27, int32 Temp_int_Variable_32, const struct FS_ItemData& CallFunc_Array_Get_Item_7, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_7, const struct FS_ItemData& CallFunc_Array_Get_Item_8, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_8, int32 CallFunc_Subtract_IntInt_ReturnValue_9, bool CallFunc_LessEqual_IntInt_ReturnValue_7, bool CallFunc_LessEqual_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_28, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_9, bool CallFunc_GreaterEqual_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_29, int32 CallFunc_Add_IntInt_ReturnValue_30, int32 Temp_int_Variable_33, const struct FS_ItemData& CallFunc_Array_Get_Item_9, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_10, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_9, int32 CallFunc_Subtract_IntInt_ReturnValue_10, bool CallFunc_LessEqual_IntInt_ReturnValue_9, bool CallFunc_GreaterEqual_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_31, int32 CallFunc_Add_IntInt_ReturnValue_32, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_11, const struct FS_ItemData& CallFunc_Array_Get_Item_10, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_10, int32 CallFunc_Subtract_IntInt_ReturnValue_11, bool CallFunc_LessEqual_IntInt_ReturnValue_10, bool CallFunc_GreaterEqual_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_33, int32 CallFunc_Add_IntInt_ReturnValue_34, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, int32 Temp_int_Variable_34, const struct FS_ItemData& CallFunc_Array_Get_Item_11, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_11, bool CallFunc_LessEqual_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_35, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, int32 Temp_int_Variable_35)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryBase_C", "ExecuteUbergraph_WB_InventoryBase");

	Params::UWB_InventoryBase_C_ExecuteUbergraph_WB_InventoryBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.CallFunc_Create_ReturnValue_9 = CallFunc_Create_ReturnValue_9;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.Temp_int_Variable_20 = Temp_int_Variable_20;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Variable_21 = Temp_int_Variable_21;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Create_ReturnValue_10 = CallFunc_Create_ReturnValue_10;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_22 = Temp_int_Variable_22;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.Temp_int_Variable_23 = Temp_int_Variable_23;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_1 = CallFunc_AddChildToUniformGrid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.Temp_int_Variable_24 = Temp_int_Variable_24;
	Parms.K2Node_CustomEvent_Gamepad_Controls = K2Node_CustomEvent_Gamepad_Controls;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Using_Gamepad__Gamepad = CallFunc_Using_Gamepad__Gamepad;
	Parms.Temp_int_Variable_25 = Temp_int_Variable_25;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.Temp_int_Variable_26 = Temp_int_Variable_26;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_2 = CallFunc_AddChildToUniformGrid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_27 = Temp_int_Variable_27;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_SetFieldsInStruct_StructOut_3 = K2Node_SetFieldsInStruct_StructOut_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.Temp_int_Variable_28 = Temp_int_Variable_28;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_3 = CallFunc_AddChildToUniformGrid_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_4 = CallFunc_AddChildToUniformGrid_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_11 = CallFunc_Create_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.Temp_int_Variable_29 = Temp_int_Variable_29;
	Parms.Temp_int_Variable_30 = Temp_int_Variable_30;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_4 = K2Node_SetFieldsInStruct_StructOut_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_5 = CallFunc_AddChildToUniformGrid_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_6 = CallFunc_AddChildToUniformGrid_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_SetFieldsInStruct_StructOut_5 = K2Node_SetFieldsInStruct_StructOut_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_5 = CallFunc_LessEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5 = CallFunc_GreaterEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_22 = CallFunc_Add_IntInt_ReturnValue_22;
	Parms.CallFunc_Add_IntInt_ReturnValue_23 = CallFunc_Add_IntInt_ReturnValue_23;
	Parms.Temp_int_Variable_31 = Temp_int_Variable_31;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6 = CallFunc_GreaterEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_SetFieldsInStruct_StructOut_6 = K2Node_SetFieldsInStruct_StructOut_6;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_7 = CallFunc_Subtract_IntInt_ReturnValue_7;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_6 = CallFunc_LessEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_7 = CallFunc_AddChildToUniformGrid_ReturnValue_7;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_7 = CallFunc_GreaterEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_24 = CallFunc_Add_IntInt_ReturnValue_24;
	Parms.CallFunc_Add_IntInt_ReturnValue_25 = CallFunc_Add_IntInt_ReturnValue_25;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_8 = CallFunc_AddChildToUniformGrid_ReturnValue_8;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_8 = CallFunc_Subtract_IntInt_ReturnValue_8;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_8 = CallFunc_GreaterEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_26 = CallFunc_Add_IntInt_ReturnValue_26;
	Parms.CallFunc_Add_IntInt_ReturnValue_27 = CallFunc_Add_IntInt_ReturnValue_27;
	Parms.Temp_int_Variable_32 = Temp_int_Variable_32;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_SetFieldsInStruct_StructOut_7 = K2Node_SetFieldsInStruct_StructOut_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_SetFieldsInStruct_StructOut_8 = K2Node_SetFieldsInStruct_StructOut_8;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_9 = CallFunc_Subtract_IntInt_ReturnValue_9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_7 = CallFunc_LessEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_8 = CallFunc_LessEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_28 = CallFunc_Add_IntInt_ReturnValue_28;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_9 = CallFunc_AddChildToUniformGrid_ReturnValue_9;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_9 = CallFunc_GreaterEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_29 = CallFunc_Add_IntInt_ReturnValue_29;
	Parms.CallFunc_Add_IntInt_ReturnValue_30 = CallFunc_Add_IntInt_ReturnValue_30;
	Parms.Temp_int_Variable_33 = Temp_int_Variable_33;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_10 = CallFunc_AddChildToUniformGrid_ReturnValue_10;
	Parms.K2Node_SetFieldsInStruct_StructOut_9 = K2Node_SetFieldsInStruct_StructOut_9;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_10 = CallFunc_Subtract_IntInt_ReturnValue_10;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_9 = CallFunc_LessEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_10 = CallFunc_GreaterEqual_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_31 = CallFunc_Add_IntInt_ReturnValue_31;
	Parms.CallFunc_Add_IntInt_ReturnValue_32 = CallFunc_Add_IntInt_ReturnValue_32;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_11 = CallFunc_AddChildToUniformGrid_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_SetFieldsInStruct_StructOut_10 = K2Node_SetFieldsInStruct_StructOut_10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_11 = CallFunc_Subtract_IntInt_ReturnValue_11;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_10 = CallFunc_LessEqual_IntInt_ReturnValue_10;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_11 = CallFunc_GreaterEqual_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_33 = CallFunc_Add_IntInt_ReturnValue_33;
	Parms.CallFunc_Add_IntInt_ReturnValue_34 = CallFunc_Add_IntInt_ReturnValue_34;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.Temp_int_Variable_34 = Temp_int_Variable_34;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.K2Node_SetFieldsInStruct_StructOut_11 = K2Node_SetFieldsInStruct_StructOut_11;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_11 = CallFunc_LessEqual_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_35 = CallFunc_Add_IntInt_ReturnValue_35;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.Temp_int_Variable_35 = Temp_int_Variable_35;

	UObject::ProcessEvent(Func, &Parms);

}

}


