#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Equipment.WB_Equipment_C
// (None)

class UClass* UWB_Equipment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Equipment_C");

	return Clss;
}


// WB_Equipment_C WB_Equipment.Default__WB_Equipment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Equipment_C* UWB_Equipment_C::GetDefaultObj()
{
	static class UWB_Equipment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Equipment_C*>(UWB_Equipment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Equipment.WB_Equipment_C.Set Focus to Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ItemSlot              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemSlot              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_4                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_5                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_6                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_7                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_8                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_9                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_10                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_11                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_12                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_13                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_14                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_15                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_16                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_17                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_18                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_19                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetType            CallFunc_Get_Focused_Widget_WidgetType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Equipment_C::Set_Focus_to_Slot(enum class E_ItemSlot Slot, enum class E_ItemSlot Temp_byte_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable_1, class UWB_EquipmentSlot_C* Temp_object_Variable_2, class UWB_EquipmentSlot_C* Temp_object_Variable_3, class UWB_EquipmentSlot_C* Temp_object_Variable_4, class UWB_EquipmentSlot_C* Temp_object_Variable_5, class UWB_EquipmentSlot_C* Temp_object_Variable_6, class UWB_EquipmentSlot_C* Temp_object_Variable_7, class UWB_EquipmentSlot_C* Temp_object_Variable_8, class UWB_EquipmentSlot_C* Temp_object_Variable_9, class UWB_EquipmentSlot_C* Temp_object_Variable_10, class UWB_EquipmentSlot_C* Temp_object_Variable_11, class UWB_EquipmentSlot_C* Temp_object_Variable_12, class UWB_EquipmentSlot_C* Temp_object_Variable_13, class UWB_EquipmentSlot_C* Temp_object_Variable_14, class UWB_EquipmentSlot_C* Temp_object_Variable_15, class UWB_EquipmentSlot_C* Temp_object_Variable_16, class UWB_EquipmentSlot_C* Temp_object_Variable_17, class UWB_EquipmentSlot_C* Temp_object_Variable_18, class UWB_EquipmentSlot_C* Temp_object_Variable_19, class UWB_EquipmentSlot_C* K2Node_Select_Default, enum class E_WidgetType CallFunc_Get_Focused_Widget_WidgetType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "Set Focus to Slot");

	Params::UWB_Equipment_C_Set_Focus_to_Slot_Params Parms{};

	Parms.Slot = Slot;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Focused_Widget_WidgetType = CallFunc_Get_Focused_Widget_WidgetType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Equipment.WB_Equipment_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWB_Equipment_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "OnFocusReceived");

	Params::UWB_Equipment_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Equipment.WB_Equipment_C.Get UI Border Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UWB_Equipment_C::Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "Get UI Border Color");

	Params::UWB_Equipment_C_Get_UI_Border_Color_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Equipment.WB_Equipment_C.Set Equipment Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_EquipmentSlot_C*         Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UWB_Equipment_C::Set_Equipment_Slot(class UWB_EquipmentSlot_C* Slot, const struct FS_ItemData& Item_Data, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "Set Equipment Slot");

	Params::UWB_Equipment_C_Set_Equipment_Slot_Params Parms{};

	Parms.Slot = Slot;
	Parms.Item_Data = Item_Data;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Equipment.WB_Equipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Equipment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Equipment.WB_Equipment_C.Create Equipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Equipment_C::Create_Equipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "Create Equipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Equipment.WB_Equipment_C.BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Equipment_C::BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Equipment.WB_Equipment_C.BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Equipment_C::BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Equipment.WB_Equipment_C.BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Equipment_C::BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Equipment.WB_Equipment_C.ExecuteUbergraph_WB_Equipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemSlot              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Equipment_C::ExecuteUbergraph_WB_Equipment(int32 EntryPoint, class UWB_EquipmentSlot_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class E_ItemSlot Temp_byte_Variable, class UWB_EquipmentSlot_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Equipment_C", "ExecuteUbergraph_WB_Equipment");

	Params::UWB_Equipment_C_ExecuteUbergraph_WB_Equipment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


