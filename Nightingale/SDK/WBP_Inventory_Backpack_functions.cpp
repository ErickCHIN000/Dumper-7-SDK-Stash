#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Inventory_Backpack.WBP_Inventory_Backpack_C
// (None)

class UClass* UWBP_Inventory_Backpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Inventory_Backpack_C");

	return Clss;
}


// WBP_Inventory_Backpack_C WBP_Inventory_Backpack.Default__WBP_Inventory_Backpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Inventory_Backpack_C* UWBP_Inventory_Backpack_C::GetDefaultObj()
{
	static class UWBP_Inventory_Backpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Inventory_Backpack_C*>(UWBP_Inventory_Backpack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::CREATEDELEGATE_PROXYFUNCTION_3(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.ItemEntry = ItemEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::CREATEDELEGATE_PROXYFUNCTION_2(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.ItemEntry = ItemEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::CREATEDELEGATE_PROXYFUNCTION_1(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.ItemEntry = ItemEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::CREATEDELEGATE_PROXYFUNCTION_0(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_Inventory_Backpack_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.ItemEntry = ItemEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.HandleGamepadMoveItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragOperation_Item_C*       NewDragOperation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               TargetCanReceive                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SourceCanReceive                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       SourceInstanceId                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       TargetInstanceId                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SourceSlotIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetSlotIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SourceToolbar                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     TargetToolbar                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     SourceToolbarArrangement                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     TargetToolbarArrangement                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>Temp_interface_Variable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_TEMP_ToolbarSlotObject_InventoryItem_C*K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAssignInventoryEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAssignInventoryEntry_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>CallFunc_GetSlotEntryObjectAtIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::HandleGamepadMoveItem(class UDragOperation_Item_C* NewDragOperation, bool TargetCanReceive, bool SourceCanReceive, const struct FGuid& SourceInstanceId, const struct FGuid& TargetInstanceId, int32 SourceSlotIndex, int32 TargetSlotIndex, class UObject* SourceToolbar, class UObject* TargetToolbar, enum class EToolbarArrangement SourceToolbarArrangement, enum class EToolbarArrangement TargetToolbarArrangement, TScriptInterface<class IToolbarSlotEntryObjectInterface> Temp_interface_Variable, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_Guid_ReturnValue_2, bool CallFunc_IsValid_Guid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_CanAssignInventoryEntry_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanAssignInventoryEntry_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_6, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_7, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_8, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_1, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "HandleGamepadMoveItem");

	Params::UWBP_Inventory_Backpack_C_HandleGamepadMoveItem_Params Parms{};

	Parms.NewDragOperation = NewDragOperation;
	Parms.TargetCanReceive = TargetCanReceive;
	Parms.SourceCanReceive = SourceCanReceive;
	Parms.SourceInstanceId = SourceInstanceId;
	Parms.TargetInstanceId = TargetInstanceId;
	Parms.SourceSlotIndex = SourceSlotIndex;
	Parms.TargetSlotIndex = TargetSlotIndex;
	Parms.SourceToolbar = SourceToolbar;
	Parms.TargetToolbar = TargetToolbar;
	Parms.SourceToolbarArrangement = SourceToolbarArrangement;
	Parms.TargetToolbarArrangement = TargetToolbarArrangement;
	Parms.Temp_interface_Variable = Temp_interface_Variable;
	Parms.K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item = K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue_1 = CallFunc_IsValid_Guid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface = K2Node_DynamicCast_AsToolbar_Arrangement_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_Guid_ReturnValue_2 = CallFunc_IsValid_Guid_ReturnValue_2;
	Parms.CallFunc_IsValid_Guid_ReturnValue_3 = CallFunc_IsValid_Guid_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_4 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_CanAssignInventoryEntry_ReturnValue = CallFunc_CanAssignInventoryEntry_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_5 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_CanAssignInventoryEntry_ReturnValue_1 = CallFunc_CanAssignInventoryEntry_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_6 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_7 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_8 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetSlotEntryObjectAtIndex_ReturnValue = CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput_1 = CallFunc_FindToolbarArrangement_BP_self_CastInput_1;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_1 = CallFunc_FindToolbarArrangement_BP_ReturnValue_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnGamepadToolbarMove
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragOperation_Item_C*       DragOperation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       NewDragOperation                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>CallFunc_GetSlotEntryObjectAtIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TEMP_ToolbarSlotObject_InventoryItem_C*K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnGamepadToolbarMove(class UDragOperation_Item_C* DragOperation, class UDragOperation_Item_C* NewDragOperation, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnGamepadToolbarMove");

	Params::UWBP_Inventory_Backpack_C_OnGamepadToolbarMove_Params Parms{};

	Parms.DragOperation = DragOperation;
	Parms.NewDragOperation = NewDragOperation;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_GetSlotEntryObjectAtIndex_ReturnValue = CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item = K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetToolbarsInGridVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowToolbars                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::SetToolbarsInGridVisible(bool bShowToolbars, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "SetToolbarsInGridVisible");

	Params::UWBP_Inventory_Backpack_C_SetToolbarsInGridVisible_Params Parms{};

	Parms.bShowToolbars = bShowToolbars;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateSortOrderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         SortOrder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSortOrderName_ReturnValue                            (None)

void UWBP_Inventory_Backpack_C::UpdateSortOrderText(enum class EEntrySortOrder SortOrder, class FText CallFunc_GetSortOrderName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "UpdateSortOrderText");

	Params::UWBP_Inventory_Backpack_C_UpdateSortOrderText_Params Parms{};

	Parms.SortOrder = SortOrder;
	Parms.CallFunc_GetSortOrderName_ReturnValue = CallFunc_GetSortOrderName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetRepairAllTooltipText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRequiredEssencesToRepairAllItems_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Inventory_Backpack_C::GetRepairAllTooltipText(class FText* Text, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetRequiredEssencesToRepairAllItems_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "GetRepairAllTooltipText");

	Params::UWBP_Inventory_Backpack_C_GetRepairAllTooltipText_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetRequiredEssencesToRepairAllItems_ReturnValue = CallFunc_GetRequiredEssencesToRepairAllItems_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetRepairAllTooltipWidget
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRepairAllTooltipText_Text                            (None)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inventory_Backpack_C::GetRepairAllTooltipWidget(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_GetRepairAllTooltipText_Text, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "GetRepairAllTooltipWidget");

	Params::UWBP_Inventory_Backpack_C_GetRepairAllTooltipWidget_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetRepairAllTooltipText_Text = CallFunc_GetRepairAllTooltipText_Text;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarDragCancelled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          DragDropOperation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_GetLoadoutSlotType_SlotType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnToolbarDragCancelled(class UDragDropOperation* DragDropOperation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, enum class ELoadoutSlotType CallFunc_GetLoadoutSlotType_SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnToolbarDragCancelled");

	Params::UWBP_Inventory_Backpack_C_OnToolbarDragCancelled_Params Parms{};

	Parms.DragDropOperation = DragDropOperation;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item = K2Node_DynamicCast_AsDrag_Operation_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLoadoutSlotType_SlotType = CallFunc_GetLoadoutSlotType_SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarDragStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          DragDropOperation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_GetLoadoutSlotType_SlotType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnToolbarDragStarted(class UDragDropOperation* DragDropOperation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, enum class ELoadoutSlotType CallFunc_GetLoadoutSlotType_SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnToolbarDragStarted");

	Params::UWBP_Inventory_Backpack_C_OnToolbarDragStarted_Params Parms{};

	Parms.DragDropOperation = DragDropOperation;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item = K2Node_DynamicCast_AsDrag_Operation_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLoadoutSlotType_SlotType = CallFunc_GetLoadoutSlotType_SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnConsumableToolbarEntrySelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnConsumableToolbarEntrySelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnConsumableToolbarEntrySelected");

	Params::UWBP_Inventory_Backpack_C_OnConsumableToolbarEntrySelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnOffhandToolbarEntrySelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnOffhandToolbarEntrySelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnOffhandToolbarEntrySelected");

	Params::UWBP_Inventory_Backpack_C_OnOffhandToolbarEntrySelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainhandToolbarEntrySelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnMainhandToolbarEntrySelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnMainhandToolbarEntrySelected");

	Params::UWBP_Inventory_Backpack_C_OnMainhandToolbarEntrySelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.HideDroptargetsAndUnhighlightSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::HideDroptargetsAndUnhighlightSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "HideDroptargetsAndUnhighlightSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindingsMainHandToolbar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::SetupBindingsMainHandToolbar(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "SetupBindingsMainHandToolbar");

	Params::UWBP_Inventory_Backpack_C_SetupBindingsMainHandToolbar_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnToolbarEntrySelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnToolbarEntrySelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnToolbarEntrySelected");

	Params::UWBP_Inventory_Backpack_C_OnToolbarEntrySelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindingsLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::SetupBindingsLoadout(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "SetupBindingsLoadout");

	Params::UWBP_Inventory_Backpack_C_SetupBindingsLoadout_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.EquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::EquipItem(const struct FInventoryEntry& ItemEntry, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_CheckForValidItem_ItemValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "EquipItem");

	Params::UWBP_Inventory_Backpack_C_EquipItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnLoadoutDragDropped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnLoadoutDragDropped(enum class ELoadoutSlotType Slot, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnLoadoutDragDropped");

	Params::UWBP_Inventory_Backpack_C_OnLoadoutDragDropped_Params Parms{};

	Parms.Slot = Slot;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnLoadoutSlotDragStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnLoadoutSlotDragStarted(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnLoadoutSlotDragStarted");

	Params::UWBP_Inventory_Backpack_C_OnLoadoutSlotDragStarted_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.RefreshInventoryBackpack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LToolbarArrangementInterface                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::RefreshInventoryBackpack(class UObject* LToolbarArrangementInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "RefreshInventoryBackpack");

	Params::UWBP_Inventory_Backpack_C_RefreshInventoryBackpack_Params Parms{};

	Parms.LToolbarArrangementInterface = LToolbarArrangementInterface;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainHandToolbarContextMenuOpened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnMainHandToolbarContextMenuOpened(const struct FInventoryEntry& Item, class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnMainHandToolbarContextMenuOpened");

	Params::UWBP_Inventory_Backpack_C_OnMainHandToolbarContextMenuOpened_Params Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.TryHighlightLoadoutSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_ui_Get_ItemDetails_byItemID_ItemFound                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ui_Get_ItemDetails_byItemID_Quality                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_ui_Get_ItemDetails_byItemID_ItemActor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag                 (None)

void UWBP_Inventory_Backpack_C::TryHighlightLoadoutSlot(const struct FInventoryEntry& NewParam, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "TryHighlightLoadoutSlot");

	Params::UWBP_Inventory_Backpack_C_TryHighlightLoadoutSlot_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemFound = CallFunc_ui_Get_ItemDetails_byItemID_ItemFound;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType = CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_Quality = CallFunc_ui_Get_ItemDetails_byItemID_Quality;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount = CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemActor = CallFunc_ui_Get_ItemDetails_byItemID_ItemActor;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag = CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.ShowDropTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::ShowDropTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "ShowDropTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.HideDropTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::HideDropTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "HideDropTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UnequipViaDragAndDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Paylod                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       DragDrop                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ItemInstanceId                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     LToolbarType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         K2Node_DynamicCast_AsBP_Anim_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInventoryEntryInToolbar_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::UnequipViaDragAndDrop(class UObject* Paylod, class UDragOperation_Item_C* DragDrop, const struct FGuid& ItemInstanceId, enum class EToolbarArrangement LToolbarType, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInventoryEntryInToolbar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "UnequipViaDragAndDrop");

	Params::UWBP_Inventory_Backpack_C_UnequipViaDragAndDrop_Params Parms{};

	Parms.Paylod = Paylod;
	Parms.DragDrop = DragDrop;
	Parms.ItemInstanceId = ItemInstanceId;
	Parms.LToolbarType = LToolbarType;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item = K2Node_DynamicCast_AsDrag_Operation_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Anim_Character = K2Node_DynamicCast_AsBP_Anim_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsInventoryEntryInToolbar_ReturnValue = CallFunc_IsInventoryEntryInToolbar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inventory_Backpack_C::OnEntryFocused(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntryFocused");

	Params::UWBP_Inventory_Backpack_C_OnEntryFocused_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetInventoryItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_sw_GridEntryItem_C*>Items                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)

void UWBP_Inventory_Backpack_C::GetInventoryItems(TArray<class UWBP_sw_GridEntryItem_C*>* Items, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "GetInventoryItems");

	Params::UWBP_Inventory_Backpack_C_GetInventoryItems_Params Parms{};

	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;

	UObject::ProcessEvent(Func, &Parms);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateWeightTooltipText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::UpdateWeightTooltipText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "UpdateWeightTooltipText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.MaxWeightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::MaxWeightUpdated(float Delta, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "MaxWeightUpdated");

	Params::UWBP_Inventory_Backpack_C_MaxWeightUpdated_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateWeightCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentWeight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LTiredIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseWeight                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxWeight                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCount_MaxValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCount_CurrentValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCount_CurrentValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::UpdateWeightCounter(float CurrentWeight, int32 LTiredIndex, float BaseWeight, float MaxWeight, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_UpdateCount_MaxValue_ImplicitCast, double CallFunc_UpdateCount_CurrentValue_ImplicitCast, double CallFunc_UpdateCount_CurrentValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "UpdateWeightCounter");

	Params::UWBP_Inventory_Backpack_C_UpdateWeightCounter_Params Parms{};

	Parms.CurrentWeight = CurrentWeight;
	Parms.LTiredIndex = LTiredIndex;
	Parms.BaseWeight = BaseWeight;
	Parms.MaxWeight = MaxWeight;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeBaseFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_UpdateCount_MaxValue_ImplicitCast = CallFunc_UpdateCount_MaxValue_ImplicitCast;
	Parms.CallFunc_UpdateCount_CurrentValue_ImplicitCast = CallFunc_UpdateCount_CurrentValue_ImplicitCast;
	Parms.CallFunc_UpdateCount_CurrentValue_ImplicitCast_1 = CallFunc_UpdateCount_CurrentValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.HideContextTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::HideContextTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "HideContextTooltip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.ShowContextTooltip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LBonusText                                                       (Edit, BlueprintVisible)
// class FText                        LPenaltyText                                                     (Edit, BlueprintVisible)

void UWBP_Inventory_Backpack_C::ShowContextTooltip(class FText LBonusText, class FText LPenaltyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "ShowContextTooltip");

	Params::UWBP_Inventory_Backpack_C_ShowContextTooltip_Params Parms{};

	Parms.LBonusText = LBonusText;
	Parms.LPenaltyText = LPenaltyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnInventoryReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     Inventory                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EEntrySortOrder         CallFunc_GetCurrentSortOrder_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGenericContainerCosmeticSettingsK2Node_MakeStruct_GenericContainerCosmeticSettings               (NoDestructor)
// TScriptInterface<class IItemContainer>CallFunc_GetRealmCardDeck_Container                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmCardDeck_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGenericContainerCosmeticSettingsK2Node_MakeStruct_GenericContainerCosmeticSettings_1             (NoDestructor)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FGenericContainerCosmeticSettingsK2Node_MakeStruct_GenericContainerCosmeticSettings_2             (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnInventoryReady(bool Success, class UInventoryComponentBase* Inventory, enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, const struct FGenericContainerCosmeticSettings& K2Node_MakeStruct_GenericContainerCosmeticSettings, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const struct FGenericContainerCosmeticSettings& K2Node_MakeStruct_GenericContainerCosmeticSettings_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGenericContainerCosmeticSettings& K2Node_MakeStruct_GenericContainerCosmeticSettings_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnInventoryReady");

	Params::UWBP_Inventory_Backpack_C_OnInventoryReady_Params Parms{};

	Parms.Success = Success;
	Parms.Inventory = Inventory;
	Parms.CallFunc_GetCurrentSortOrder_ReturnValue = CallFunc_GetCurrentSortOrder_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue = CallFunc_GetLocalPlayerUIPersistenceComponent_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.K2Node_MakeStruct_GenericContainerCosmeticSettings = K2Node_MakeStruct_GenericContainerCosmeticSettings;
	Parms.CallFunc_GetRealmCardDeck_Container = CallFunc_GetRealmCardDeck_Container;
	Parms.CallFunc_GetRealmCardDeck_ReturnValue = CallFunc_GetRealmCardDeck_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.K2Node_MakeStruct_GenericContainerCosmeticSettings_1 = K2Node_MakeStruct_GenericContainerCosmeticSettings_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_GenericContainerCosmeticSettings_2 = K2Node_MakeStruct_GenericContainerCosmeticSettings_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnContainerSortOrderUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         SortOrder                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnContainerSortOrderUpdated(enum class EEntrySortOrder SortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnContainerSortOrderUpdated");

	Params::UWBP_Inventory_Backpack_C_OnContainerSortOrderUpdated_Params Parms{};

	Parms.SortOrder = SortOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnGridUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::OnGridUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnGridUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntrySubContextMenuOpened
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnEntrySubContextMenuOpened(struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntrySubContextMenuOpened");

	Params::UWBP_Inventory_Backpack_C_OnEntrySubContextMenuOpened_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryMouseButtonUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnEntryMouseButtonUp(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntryMouseButtonUp");

	Params::UWBP_Inventory_Backpack_C_OnEntryMouseButtonUp_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntryDragged");

	Params::UWBP_Inventory_Backpack_C_OnEntryDragged_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryDoubleClicked
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnEntryDoubleClicked(struct FInventoryEntry& InventoryEntry, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_CheckForValidItem_ItemValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntryDoubleClicked");

	Params::UWBP_Inventory_Backpack_C_OnEntryDoubleClicked_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntryHovered
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnEntryHovered(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntryHovered");

	Params::UWBP_Inventory_Backpack_C_OnEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.InventoryEntry = InventoryEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnEntrySelected
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inventory_Backpack_C::OnEntrySelected(struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnEntrySelected");

	Params::UWBP_Inventory_Backpack_C_OnEntrySelected_Params Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttributeSet*               CallFunc_GetAttributeSet_ReturnValue                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            K2Node_DynamicCast_AsNWXAttribute_Set                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, class UAttributeSet* CallFunc_GetAttributeSet_ReturnValue, class UNWXAttributeSet* K2Node_DynamicCast_AsNWXAttribute_Set, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "RemoveBindings");

	Params::UWBP_Inventory_Backpack_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttributeSet_ReturnValue = CallFunc_GetAttributeSet_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAttribute_Set = K2Node_DynamicCast_AsNWXAttribute_Set;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttributeSet*               CallFunc_GetAttributeSet_ReturnValue                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            K2Node_DynamicCast_AsNWXAttribute_Set                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue, class UAttributeSet* CallFunc_GetAttributeSet_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UNWXAttributeSet* K2Node_DynamicCast_AsNWXAttribute_Set, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "SetupBindings");

	Params::UWBP_Inventory_Backpack_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttributeSet_ReturnValue = CallFunc_GetAttributeSet_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_DynamicCast_AsNWXAttribute_Set = K2Node_DynamicCast_AsNWXAttribute_Set;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetVolumeToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inventory_Backpack_C::GetVolumeToolTip(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "GetVolumeToolTip");

	Params::UWBP_Inventory_Backpack_C_GetVolumeToolTip_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.GetCarryWeightToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inventory_Backpack_C::GetCarryWeightToolTip(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "GetCarryWeightToolTip");

	Params::UWBP_Inventory_Backpack_C_GetCarryWeightToolTip_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.UpdateStatCounters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentWeightOfContainer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerCapacityData      CallFunc_GetContainerCapacityData_ReturnValue                    (NoDestructor)
// int32                              CallFunc_GetNumberItemEntries_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRepairAllTooltipText_Text                            (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::UpdateStatCounters(class UInventoryComponentBase* InventoryComponent, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue_1, float CallFunc_GetCurrentWeightOfContainer_ReturnValue, const struct FContainerCapacityData& CallFunc_GetContainerCapacityData_ReturnValue, int32 CallFunc_GetNumberItemEntries_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, class FText CallFunc_GetRepairAllTooltipText_Text, bool CallFunc_IsVisible_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "UpdateStatCounters");

	Params::UWBP_Inventory_Backpack_C_UpdateStatCounters_Params Parms{};

	Parms.InventoryComponent = InventoryComponent;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider_1 = K2Node_DynamicCast_AsItem_Container_Provider_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_GetDefaultContainer_ReturnValue_1 = CallFunc_GetDefaultContainer_ReturnValue_1;
	Parms.CallFunc_GetCurrentWeightOfContainer_ReturnValue = CallFunc_GetCurrentWeightOfContainer_ReturnValue;
	Parms.CallFunc_GetContainerCapacityData_ReturnValue = CallFunc_GetContainerCapacityData_ReturnValue;
	Parms.CallFunc_GetNumberItemEntries_ReturnValue = CallFunc_GetNumberItemEntries_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_GetRepairAllTooltipText_Text = CallFunc_GetRepairAllTooltipText_Text;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_BackPackGrid_DropTarget_Unequip_List_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_2_LoadoutSlotDrag_Cancelled__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature(enum class ELoadoutSlotType Slot, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_LoadOutSlots_K2Node_ComponentBoundEvent_3_LoadoutSlotDragDropped__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnInputMethodChanged");

	Params::UWBP_Inventory_Backpack_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_Backpack_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_RealmCards_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBUEssences_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_BndEvt__WBP_Inventory_Backpack_CBU_SortingOrder_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.ExecuteUbergraph_WBP_Inventory_Backpack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_ComponentBoundEvent_Payload                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             K2Node_ComponentBoundEvent_Item                                  (None)
// enum class ELoadoutSlotType        K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_ComponentBoundEvent_ItemEntry                             (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    K2Node_DynamicCast_AsBP_Inventory_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EEntrySortOrder         CallFunc_GetCurrentSortOrder_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::ExecuteUbergraph_WBP_Inventory_Backpack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, const struct FInventoryEntry& K2Node_ComponentBoundEvent_Item, enum class ELoadoutSlotType K2Node_ComponentBoundEvent_Slot_1, enum class ELoadoutSlotType K2Node_ComponentBoundEvent_Slot, const struct FInventoryEntry& K2Node_ComponentBoundEvent_ItemEntry, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, enum class ECommonInputType K2Node_Event_CurrentInputType, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class UBP_InventoryComponent_C* K2Node_DynamicCast_AsBP_Inventory_Component, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "ExecuteUbergraph_WBP_Inventory_Backpack");

	Params::UWBP_Inventory_Backpack_C_ExecuteUbergraph_WBP_Inventory_Backpack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Payload = K2Node_ComponentBoundEvent_Payload;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.K2Node_ComponentBoundEvent_ItemEntry = K2Node_ComponentBoundEvent_ItemEntry;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Inventory_Component = K2Node_DynamicCast_AsBP_Inventory_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetCurrentSortOrder_ReturnValue = CallFunc_GetCurrentSortOrder_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackDragCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::OnBackpackDragCancelled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackDragCancelled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnMainHandToolbarContextOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnMainHandToolbarContextOpened__DelegateSignature(const struct FInventoryEntry& Item, class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnMainHandToolbarContextOpened__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnMainHandToolbarContextOpened__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnBackpackEntryFocused__DelegateSignature(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntryFocused__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntryFocused__DelegateSignature_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackSortOrderUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         SortOrder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnBackpackSortOrderUpdated__DelegateSignature(enum class EEntrySortOrder SortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackSortOrderUpdated__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackSortOrderUpdated__DelegateSignature_Params Parms{};

	Parms.SortOrder = SortOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inventory_Backpack_C::OnBackpackUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackDragDroppedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnBackpackDragDroppedItem__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackDragDroppedItem__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackDragDroppedItem__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntrySubContextMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnBackpackEntrySubContextMenuOpened__DelegateSignature(const struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntrySubContextMenuOpened__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntrySubContextMenuOpened__DelegateSignature_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryMouseButtonUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnBackpackEntryMouseButtonUp__DelegateSignature(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntryMouseButtonUp__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntryMouseButtonUp__DelegateSignature_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnBackpackEntryDragged__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntryDragged__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntryDragged__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnBackpackEntryDoubleClicked__DelegateSignature(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntryDoubleClicked__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntryDoubleClicked__DelegateSignature_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Backpack_C::OnBackpackEntryHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntryHovered__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntryHovered__DelegateSignature_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.InventoryEntry = InventoryEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inventory_Backpack.WBP_Inventory_Backpack_C.OnBackpackEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inventory_Backpack_C::OnBackpackEntrySelected__DelegateSignature(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inventory_Backpack_C", "OnBackpackEntrySelected__DelegateSignature");

	Params::UWBP_Inventory_Backpack_C_OnBackpackEntrySelected__DelegateSignature_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


