#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Container_Slot.Container_Slot_C
// (None)

class UClass* UContainer_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Container_Slot_C");

	return Clss;
}


// Container_Slot_C Container_Slot.Default__Container_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContainer_Slot_C* UContainer_Slot_C::GetDefaultObj()
{
	static class UContainer_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainer_Slot_C*>(UContainer_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Container_Slot.Container_Slot_C.Get_Item_Damage_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_UI_GetContainerItem_InventoryItem                       (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UContainer_Slot_C::Get_Item_Damage_Text(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FInventoryItem& CallFunc_UI_GetContainerItem_InventoryItem, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Item_Damage_Text");

	Params::UContainer_Slot_C_Get_Item_Damage_Text_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UI_GetContainerItem_InventoryItem = CallFunc_UI_GetContainerItem_InventoryItem;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UContainer_Slot_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnMouseMove");

	Params::UContainer_Slot_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UContainer_Slot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnMouseButtonUp");

	Params::UContainer_Slot_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Get_Name_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UContainer_Slot_C::Get_Name_Text(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Name_Text");

	Params::UContainer_Slot_C_Get_Name_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Get_Name_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UContainer_Slot_C::Get_Name_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Name_Visibility");

	Params::UContainer_Slot_C_Get_Name_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Get_Border_Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQualityColors              LocalQualityColors                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LocalColor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UContainer_Slot_C::Get_Border_Color(const struct FQualityColors& LocalQualityColors, const struct FLinearColor& LocalColor, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Border_Color");

	Params::UContainer_Slot_C_Get_Border_Color_Params Parms{};

	Parms.LocalQualityColors = LocalQualityColors;
	Parms.LocalColor = LocalColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Get_Amount_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UContainer_Slot_C::Get_Amount_Text(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Amount_Text");

	Params::UContainer_Slot_C_Get_Amount_Text_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Get_Border_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UContainer_Slot_C::Get_Border_Visibility(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Get_Border_Visibility");

	Params::UContainer_Slot_C_Get_Border_Visibility_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              LocalDraggedSlotIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragItem_C*                 K2Node_DynamicCast_AsDrag_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UContainer_Slot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, int32 LocalDraggedSlotIndex, int32 CallFunc_MakeLiteralInt_ReturnValue, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnDrop");

	Params::UContainer_Slot_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.LocalDraggedSlotIndex = LocalDraggedSlotIndex;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsDrag_Item = K2Node_DynamicCast_AsDrag_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface = K2Node_DynamicCast_AsInventory_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_1 = K2Node_DynamicCast_AsInventory_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_2 = K2Node_DynamicCast_AsInventory_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_3 = K2Node_DynamicCast_AsInventory_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown = CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_4 = K2Node_DynamicCast_AsInventory_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown_1 = CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_5 = K2Node_DynamicCast_AsInventory_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_6 = K2Node_DynamicCast_AsInventory_HUDInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragItem_C*                 CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDraggedItem_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UContainer_Slot_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragItem_C* CallFunc_CreateDragDropOperation_ReturnValue, class UDraggedItem_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnDragDetected");

	Params::UContainer_Slot_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function Container_Slot.Container_Slot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UContainer_Slot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnMouseButtonDown");

	Params::UContainer_Slot_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container_Slot.Container_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UContainer_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container_Slot.Container_Slot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainer_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "Tick");

	Params::UContainer_Slot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container_Slot.Container_Slot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainer_Slot_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnMouseEnter");

	Params::UContainer_Slot_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container_Slot.Container_Slot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainer_Slot_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "OnMouseLeave");

	Params::UContainer_Slot_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container_Slot.Container_Slot_C.ExecuteUbergraph_Container_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry_1                                        (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainer_Slot_C::ExecuteUbergraph_Container_Slot(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_Slot_C", "ExecuteUbergraph_Container_Slot");

	Params::UContainer_Slot_C_ExecuteUbergraph_Container_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_MyGeometry_1 = K2Node_Event_MyGeometry_1;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface = K2Node_DynamicCast_AsInventory_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_1 = K2Node_DynamicCast_AsInventory_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_2 = K2Node_DynamicCast_AsInventory_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


