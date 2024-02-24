#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C
// (None)

class UClass* UWid_CompanionEquipment_MainWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipment_MainWidget_C");

	return Clss;
}


// wid_CompanionEquipment_MainWidget_C wid_CompanionEquipment_MainWidget.Default__wid_CompanionEquipment_MainWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipment_MainWidget_C* UWid_CompanionEquipment_MainWidget_C::GetDefaultObj()
{
	static class UWid_CompanionEquipment_MainWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipment_MainWidget_C*>(UWid_CompanionEquipment_MainWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.HandleGrabItemOnExit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemOnGrabPanel_Item_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemOnGrabPanel_Entry                                (None)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCallFunc_ItemToEquipmentSlot_SlotType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompanionEquipItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::HandleGrabItemOnExit(class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_1, bool CallFunc_GetGrabPanel_ItemGrabActive_1, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_2, bool CallFunc_GetGrabPanel_ItemGrabActive_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetItemOnGrabPanel_Item_ID, const struct FInventoryEntry& CallFunc_GetItemOnGrabPanel_Entry, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, bool CallFunc_NotEqual_NameName_ReturnValue, enum class ECompanionEquipmentSlotType CallFunc_ItemToEquipmentSlot_SlotType, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CompanionEquipItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "HandleGrabItemOnExit");

	Params::UWid_CompanionEquipment_MainWidget_C_HandleGrabItemOnExit_Params Parms{};

	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_GetGrabPanel_GrabPanel_1 = CallFunc_GetGrabPanel_GrabPanel_1;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_1 = CallFunc_GetGrabPanel_ItemGrabActive_1;
	Parms.CallFunc_GetGrabPanel_GrabPanel_2 = CallFunc_GetGrabPanel_GrabPanel_2;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_2 = CallFunc_GetGrabPanel_ItemGrabActive_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetItemOnGrabPanel_Item_ID = CallFunc_GetItemOnGrabPanel_Item_ID;
	Parms.CallFunc_GetItemOnGrabPanel_Entry = CallFunc_GetItemOnGrabPanel_Entry;
	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_ItemToEquipmentSlot_SlotType = CallFunc_ItemToEquipmentSlot_SlotType;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CompanionEquipItem_ReturnValue = CallFunc_CompanionEquipItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetItemOnGrabPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Item_ID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Entry                                                            (Parm, OutParm)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::GetItemOnGrabPanel(class FName* Item_ID, struct FInventoryEntry* Entry, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetItemOnGrabPanel");

	Params::UWid_CompanionEquipment_MainWidget_C_GetItemOnGrabPanel_Params Parms{};

	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_ID != nullptr)
		*Item_ID = Parms.Item_ID;

	if (Entry != nullptr)
		*Entry = std::move(Parms.Entry);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipGrabbedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             SwappedItem                                                      (Edit, BlueprintVisible)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionGetEquippedItem_outResult                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionGetEquippedItem_ReturnValue                    (None)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetTileSize_TileSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionSwapItem_outResult                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionSwapItem_ReturnValue                           (None)

void UWid_CompanionEquipment_MainWidget_C::EquipGrabbedItem(const struct FInventoryEntry& SwappedItem, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType_2, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType_3, const struct FVector2D& CallFunc_GetTileSize_TileSize, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_1, bool CallFunc_GetGrabPanel_ItemGrabActive_1, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_2, bool CallFunc_GetGrabPanel_ItemGrabActive_2, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_CompanionSwapItem_outResult, const struct FInventoryEntry& CallFunc_CompanionSwapItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "EquipGrabbedItem");

	Params::UWid_CompanionEquipment_MainWidget_C_EquipGrabbedItem_Params Parms{};

	Parms.SwappedItem = SwappedItem;
	Parms.CallFunc_GetSelectedSlotType_SlotType = CallFunc_GetSelectedSlotType_SlotType;
	Parms.CallFunc_GetSelectedSlotType_SlotType_1 = CallFunc_GetSelectedSlotType_SlotType_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetSelectedSlotType_SlotType_2 = CallFunc_GetSelectedSlotType_SlotType_2;
	Parms.CallFunc_CompanionGetEquippedItem_outResult = CallFunc_CompanionGetEquippedItem_outResult;
	Parms.CallFunc_CompanionGetEquippedItem_ReturnValue = CallFunc_CompanionGetEquippedItem_ReturnValue;
	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_GetSelectedSlotType_SlotType_3 = CallFunc_GetSelectedSlotType_SlotType_3;
	Parms.CallFunc_GetTileSize_TileSize = CallFunc_GetTileSize_TileSize;
	Parms.CallFunc_ChangeApp_NextApp_CastInput = CallFunc_ChangeApp_NextApp_CastInput;
	Parms.CallFunc_GetGrabPanel_GrabPanel_1 = CallFunc_GetGrabPanel_GrabPanel_1;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_1 = CallFunc_GetGrabPanel_ItemGrabActive_1;
	Parms.CallFunc_GetGrabPanel_GrabPanel_2 = CallFunc_GetGrabPanel_GrabPanel_2;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_2 = CallFunc_GetGrabPanel_ItemGrabActive_2;
	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_CompanionSwapItem_outResult = CallFunc_CompanionSwapItem_outResult;
	Parms.CallFunc_CompanionSwapItem_ReturnValue = CallFunc_CompanionSwapItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.HandleEquipmentSlotClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionUnequipItem_outResult                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionUnequipItem_ReturnValue                        (None)
// struct FVector2D                   CallFunc_GetTileSize_TileSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IInventoryGridApp_C>CallFunc_ChangeApp_NextApp_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::HandleEquipmentSlotClicked(enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType_1, bool CallFunc_CompanionUnequipItem_outResult, const struct FInventoryEntry& CallFunc_CompanionUnequipItem_ReturnValue, const struct FVector2D& CallFunc_GetTileSize_TileSize, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_1, bool CallFunc_GetGrabPanel_ItemGrabActive_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel_2, bool CallFunc_GetGrabPanel_ItemGrabActive_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "HandleEquipmentSlotClicked");

	Params::UWid_CompanionEquipment_MainWidget_C_HandleEquipmentSlotClicked_Params Parms{};

	Parms.CallFunc_GetSelectedSlotType_SlotType = CallFunc_GetSelectedSlotType_SlotType;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetSelectedSlotType_SlotType_1 = CallFunc_GetSelectedSlotType_SlotType_1;
	Parms.CallFunc_CompanionUnequipItem_outResult = CallFunc_CompanionUnequipItem_outResult;
	Parms.CallFunc_CompanionUnequipItem_ReturnValue = CallFunc_CompanionUnequipItem_ReturnValue;
	Parms.CallFunc_GetTileSize_TileSize = CallFunc_GetTileSize_TileSize;
	Parms.CallFunc_GetGrabPanel_GrabPanel_1 = CallFunc_GetGrabPanel_GrabPanel_1;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_1 = CallFunc_GetGrabPanel_ItemGrabActive_1;
	Parms.CallFunc_ChangeApp_NextApp_CastInput = CallFunc_ChangeApp_NextApp_CastInput;
	Parms.CallFunc_GetGrabPanel_GrabPanel_2 = CallFunc_GetGrabPanel_GrabPanel_2;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive_2 = CallFunc_GetGrabPanel_ItemGrabActive_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CanEquipItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Item_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// bool                               CallFunc_CompanionCanEquipItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_CompanionEquipment_MainWidget_C::CanEquipItem(class FName Item_ID, enum class ECompanionEquipmentSlotType SlotType, TArray<class FName>& K2Node_MakeArray_Array, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, bool CallFunc_CompanionCanEquipItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "CanEquipItem");

	Params::UWid_CompanionEquipment_MainWidget_C_CanEquipItem_Params Parms{};

	Parms.Item_ID = Item_ID;
	Parms.SlotType = SlotType;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.CallFunc_CompanionCanEquipItem_ReturnValue = CallFunc_CompanionCanEquipItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedGridItemId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (Parm, OutParm)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetSelectedGridItem_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::GetSelectedGridItemId(class FName* ItemId, struct FInventoryEntry* InventoryEntry, class UWid_Inventory_Grid_Entry_C* CallFunc_GetSelectedGridItem_CurrentSelection, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetSelectedGridItemId");

	Params::UWid_CompanionEquipment_MainWidget_C_GetSelectedGridItemId_Params Parms{};

	Parms.CallFunc_GetSelectedGridItem_CurrentSelection = CallFunc_GetSelectedGridItem_CurrentSelection;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

	if (InventoryEntry != nullptr)
		*InventoryEntry = std::move(Parms.InventoryEntry);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedSlotType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::GetSelectedSlotType(enum class ECompanionEquipmentSlotType* SlotType, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetSelectedSlotType");

	Params::UWid_CompanionEquipment_MainWidget_C_GetSelectedSlotType_Params Parms{};

	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UnequipSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionUnequipItem_outResult                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionUnequipItem_ReturnValue                        (None)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionGetEquippedItem_outResult                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionGetEquippedItem_ReturnValue                    (None)
// float                              CallFunc_CanAdd_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::UnequipSelectedItem(const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_CompanionUnequipItem_outResult, const struct FInventoryEntry& CallFunc_CompanionUnequipItem_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue, float CallFunc_CanAdd_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "UnequipSelectedItem");

	Params::UWid_CompanionEquipment_MainWidget_C_UnequipSelectedItem_Params Parms{};

	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_CompanionUnequipItem_outResult = CallFunc_CompanionUnequipItem_outResult;
	Parms.CallFunc_CompanionUnequipItem_ReturnValue = CallFunc_CompanionUnequipItem_ReturnValue;
	Parms.CallFunc_GetSelectedItemBox_ItemBox_1 = CallFunc_GetSelectedItemBox_ItemBox_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_CompanionGetEquippedItem_outResult = CallFunc_CompanionGetEquippedItem_outResult;
	Parms.CallFunc_CompanionGetEquippedItem_ReturnValue = CallFunc_CompanionGetEquippedItem_ReturnValue;
	Parms.CallFunc_CanAdd_ReturnValue = CallFunc_CanAdd_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipSelectedGridItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             SwappedItem                                                      (Edit, BlueprintVisible)
// class UWid_Inventory_Grid_Entry_C* CallFunc_GetSelectedGridItem_CurrentSelection                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::EquipSelectedGridItem(const struct FInventoryEntry& SwappedItem, class UWid_Inventory_Grid_Entry_C* CallFunc_GetSelectedGridItem_CurrentSelection, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "EquipSelectedGridItem");

	Params::UWid_CompanionEquipment_MainWidget_C_EquipSelectedGridItem_Params Parms{};

	Parms.SwappedItem = SwappedItem;
	Parms.CallFunc_GetSelectedGridItem_CurrentSelection = CallFunc_GetSelectedGridItem_CurrentSelection;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ItemToEquipmentSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStatEffectOnCompanion  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::ItemToEquipmentSlot(class FName ItemId, enum class ECompanionEquipmentSlotType* SlotType, const struct FItemStatEffectOnCompanion& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "ItemToEquipmentSlot");

	Params::UWid_CompanionEquipment_MainWidget_C_ItemToEquipmentSlot_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedGridItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_Inventory_Grid_Entry_C* CurrentSelection                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::GetSelectedGridItem(class UWid_Inventory_Grid_Entry_C** CurrentSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetSelectedGridItem");

	Params::UWid_CompanionEquipment_MainWidget_C_GetSelectedGridItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSelection != nullptr)
		*CurrentSelection = Parms.CurrentSelection;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedItemBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelected_ItemBox                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::GetSelectedItemBox(class UWid_CompanionEquipment_ItemBox_C** ItemBox, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelected_ItemBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetSelectedItemBox");

	Params::UWid_CompanionEquipment_MainWidget_C_GetSelectedItemBox_Params Parms{};

	Parms.CallFunc_GetSelected_ItemBox = CallFunc_GetSelected_ItemBox;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemBox != nullptr)
		*ItemBox = Parms.ItemBox;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleInputFaceDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::CustomHandleInputFaceDown(bool* Handled, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, bool CallFunc_IsValid_ReturnValue, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "CustomHandleInputFaceDown");

	Params::UWid_CompanionEquipment_MainWidget_C_CustomHandleInputFaceDown_Params Parms{};

	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_GetSelectedItemBox_ItemBox_1 = CallFunc_GetSelectedItemBox_ItemBox_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleInputFaceUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::CustomHandleInputFaceUp(bool* Handled, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, bool CallFunc_IsValid_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox_1, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "CustomHandleInputFaceUp");

	Params::UWid_CompanionEquipment_MainWidget_C_CustomHandleInputFaceUp_Params Parms{};

	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedItemBox_ItemBox_1 = CallFunc_GetSelectedItemBox_ItemBox_1;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetGrabPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_Storage_V2_Grid_GrabPanel_C*GrabPanel                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemGrabActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::GetGrabPanel(class UWid_Storage_V2_Grid_GrabPanel_C** GrabPanel, bool* ItemGrabActive, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GetGrabPanel");

	Params::UWid_CompanionEquipment_MainWidget_C_GetGrabPanel_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GrabPanel != nullptr)
		*GrabPanel = Parms.GrabPanel;

	if (ItemGrabActive != nullptr)
		*ItemGrabActive = Parms.ItemGrabActive;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleDirectionalInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDirections             Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDirections             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Storage_v2_Grid_C*      K2Node_DynamicCast_AsWid_Storage_V_2_Grid                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::CustomHandleDirectionalInput(enum class EDirections Direction, bool* Handled, enum class EDirections Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, float CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_SelectFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, bool CallFunc_IsValid_ReturnValue, class UWid_Storage_v2_Grid_C* K2Node_DynamicCast_AsWid_Storage_V_2_Grid, bool K2Node_DynamicCast_bSuccess, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const struct FVector2D& CallFunc_GetSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "CustomHandleDirectionalInput");

	Params::UWid_CompanionEquipment_MainWidget_C_CustomHandleDirectionalInput_Params Parms{};

	Parms.Direction = Direction;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Storage_V_2_Grid = K2Node_DynamicCast_AsWid_Storage_V_2_Grid;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_2 = CallFunc_Add_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_GetSize_ReturnValue_1 = CallFunc_GetSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_2 = CallFunc_EqualEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.SlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::SlotHovered(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "SlotHovered");

	Params::UWid_CompanionEquipment_MainWidget_C_SlotHovered_Params Parms{};

	Parms.ItemBox = ItemBox;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipmentSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::EquipmentSlotClicked(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "EquipmentSlotClicked");

	Params::UWid_CompanionEquipment_MainWidget_C_EquipmentSlotClicked_Params Parms{};

	Parms.ItemBox = ItemBox;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputLeftStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputLeftStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputLeftStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputRightStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputFaceUpReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputFaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputFaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.InputAssign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::InputAssign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "InputAssign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ItemBoxSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::ItemBoxSelected(enum class ECompanionEquipmentSlotType SlotType, bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "ItemBoxSelected");

	Params::UWid_CompanionEquipment_MainWidget_C_ItemBoxSelected_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GridSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromKeyboard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::GridSelected(class FName Name, bool FromKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "GridSelected");

	Params::UWid_CompanionEquipment_MainWidget_C_GridSelected_Params Parms{};

	Parms.Name = Name;
	Parms.FromKeyboard = FromKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipmentUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::EquipmentUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "EquipmentUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.BindCallbacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::BindCallbacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "BindCallbacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UnbindCallbacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::UnbindCallbacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "UnbindCallbacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "PreConstruct");

	Params::UWid_CompanionEquipment_MainWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.MoveGrabPanelToItemBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::MoveGrabPanelToItemBox(class UWid_CompanionEquipment_ItemBox_C* ItemBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "MoveGrabPanelToItemBox");

	Params::UWid_CompanionEquipment_MainWidget_C_MoveGrabPanelToItemBox_Params Parms{};

	Parms.ItemBox = ItemBox;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.OnSlotButtonUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::OnSlotButtonUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "OnSlotButtonUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UpdateSwapBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::UpdateSwapBackground(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "UpdateSwapBackground");

	Params::UWid_CompanionEquipment_MainWidget_C_UpdateSwapBackground_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UpdateStatsForSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveCurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_MainWidget_C::UpdateStatsForSlot(enum class ECompanionEquipmentSlotType SlotType, bool RemoveCurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "UpdateStatsForSlot");

	Params::UWid_CompanionEquipment_MainWidget_C_UpdateStatsForSlot_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.RemoveCurrentSlot = RemoveCurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ReleaseButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_MainWidget_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ExecuteUbergraph_wid_CompanionEquipment_MainWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_4                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_4                                         (ConstParm, ZeroConstructor, NoDestructor)
// bool                               CallFunc_CustomHandleInputFaceDown_Handled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_CustomEvent_ItemBox_2                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_SlotType_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_5                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_CustomEvent_ItemBox_1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_SlotType_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_SlotType_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSelected                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionGetEquippedItem_outResult                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionGetEquippedItem_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromKeyboard                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetSelectedGridItemId_ItemID                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetSelectedGridItemId_InventoryEntry                    (None)
// enum class ECompanionEquipmentSlotTypeCallFunc_GetSelectedSlotType_SlotType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_ItemToEquipmentSlot_SlotType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_CustomEvent_ItemBox                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// class UWid_Storage_V2_Grid_GrabPanel_C*CallFunc_GetGrabPanel_GrabPanel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGrabPanel_ItemGrabActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetLocalTopLeft_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*CallFunc_GetSelectedItemBox_ItemBox                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToAbsolute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_ItemToEquipmentSlot_SlotType_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetItemOnGrabPanel_Item_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemOnGrabPanel_Entry                                (None)
// class FName                        CallFunc_GetItemOnGrabPanel_Item_ID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemOnGrabPanel_Entry_1                              (None)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_6                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleDirectionalInput_Handled_7                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_SlotType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_RemoveCurrentSlot                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CustomHandleInputFaceUp_Handled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetSelectedGridItemId_ItemID_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetSelectedGridItemId_InventoryEntry_1                  (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCallFunc_ItemToEquipmentSlot_SlotType_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeCallFunc_ItemToEquipmentSlot_SlotType_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEquipItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotSelectionTypeK2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry                                 (UObjectWrapper)
// struct FInventoryEntry             K2Node_MakeStruct_InventoryEntry_1                               (UObjectWrapper)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_3                  (HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_MainWidget_C::ExecuteUbergraph_wid_CompanionEquipment_MainWidget(int32 EntryPoint, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_2, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_4, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_6, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_7, bool Temp_bool_Variable_3, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_8, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_9, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_4, FDelegateProperty_ Temp_delegate_Variable_4, bool CallFunc_CustomHandleInputFaceDown_Handled, bool CallFunc_CustomHandleDirectionalInput_Handled, bool CallFunc_CustomHandleDirectionalInput_Handled_1, class UWid_CompanionEquipment_ItemBox_C* K2Node_CustomEvent_ItemBox_2, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_SlotType_3, bool CallFunc_CustomHandleDirectionalInput_Handled_2, bool CallFunc_CustomHandleDirectionalInput_Handled_3, bool CallFunc_CustomHandleDirectionalInput_Handled_4, bool CallFunc_CustomHandleDirectionalInput_Handled_5, class UWid_CompanionEquipment_ItemBox_C* K2Node_CustomEvent_ItemBox_1, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_SlotType_2, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_SlotType_1, bool K2Node_CustomEvent_IsSelected, enum class ESlateVisibility K2Node_Select_Default, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_5, class FName K2Node_CustomEvent_Name, bool K2Node_CustomEvent_FromKeyboard, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_12, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_13, bool Temp_bool_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName CallFunc_GetSelectedGridItemId_ItemID, const struct FInventoryEntry& CallFunc_GetSelectedGridItemId_InventoryEntry, enum class ECompanionEquipmentSlotType CallFunc_GetSelectedSlotType_SlotType, enum class ECompanionEquipmentSlotType CallFunc_ItemToEquipmentSlot_SlotType, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* K2Node_CustomEvent_ItemBox, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, class UWid_Storage_V2_Grid_GrabPanel_C* CallFunc_GetGrabPanel_GrabPanel, bool CallFunc_GetGrabPanel_ItemGrabActive, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* CallFunc_GetSelectedItemBox_ItemBox, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, class FName K2Node_CustomEvent_ItemID, enum class ECompanionEquipmentSlotType CallFunc_ItemToEquipmentSlot_SlotType_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_1, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_3, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_4, bool CallFunc_NotEqual_NameName_ReturnValue_1, class FName CallFunc_GetItemOnGrabPanel_Item_ID, const struct FInventoryEntry& CallFunc_GetItemOnGrabPanel_Entry, class FName CallFunc_GetItemOnGrabPanel_Item_ID_1, const struct FInventoryEntry& CallFunc_GetItemOnGrabPanel_Entry_1, bool CallFunc_CustomHandleDirectionalInput_Handled_6, bool CallFunc_CustomHandleDirectionalInput_Handled_7, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_SlotType, bool K2Node_CustomEvent_RemoveCurrentSlot, bool CallFunc_CustomHandleInputFaceUp_Handled, class FName CallFunc_GetSelectedGridItemId_ItemID_1, const struct FInventoryEntry& CallFunc_GetSelectedGridItemId_InventoryEntry_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_3, enum class ECompanionEquipmentSlotType CallFunc_ItemToEquipmentSlot_SlotType_2, enum class ECompanionEquipmentSlotType CallFunc_ItemToEquipmentSlot_SlotType_3, bool CallFunc_CanEquipItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, int32 CallFunc_PostEvent_ReturnValue, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, int32 CallFunc_PostEvent_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 CallFunc_PostEvent_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_MainWidget_C", "ExecuteUbergraph_wid_CompanionEquipment_MainWidget");

	Params::UWid_CompanionEquipment_MainWidget_C_ExecuteUbergraph_wid_CompanionEquipment_MainWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_delegate_Variable_4 = Temp_delegate_Variable_4;
	Parms.CallFunc_CustomHandleInputFaceDown_Handled = CallFunc_CustomHandleInputFaceDown_Handled;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled = CallFunc_CustomHandleDirectionalInput_Handled;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_1 = CallFunc_CustomHandleDirectionalInput_Handled_1;
	Parms.K2Node_CustomEvent_ItemBox_2 = K2Node_CustomEvent_ItemBox_2;
	Parms.K2Node_CustomEvent_SlotType_3 = K2Node_CustomEvent_SlotType_3;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_2 = CallFunc_CustomHandleDirectionalInput_Handled_2;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_3 = CallFunc_CustomHandleDirectionalInput_Handled_3;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_4 = CallFunc_CustomHandleDirectionalInput_Handled_4;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_5 = CallFunc_CustomHandleDirectionalInput_Handled_5;
	Parms.K2Node_CustomEvent_ItemBox_1 = K2Node_CustomEvent_ItemBox_1;
	Parms.K2Node_CustomEvent_SlotType_2 = K2Node_CustomEvent_SlotType_2;
	Parms.K2Node_CustomEvent_SlotType_1 = K2Node_CustomEvent_SlotType_1;
	Parms.K2Node_CustomEvent_IsSelected = K2Node_CustomEvent_IsSelected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_CompanionGetEquippedItem_outResult = CallFunc_CompanionGetEquippedItem_outResult;
	Parms.CallFunc_CompanionGetEquippedItem_ReturnValue = CallFunc_CompanionGetEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_FromKeyboard = K2Node_CustomEvent_FromKeyboard;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetSelectedGridItemId_ItemID = CallFunc_GetSelectedGridItemId_ItemID;
	Parms.CallFunc_GetSelectedGridItemId_InventoryEntry = CallFunc_GetSelectedGridItemId_InventoryEntry;
	Parms.CallFunc_GetSelectedSlotType_SlotType = CallFunc_GetSelectedSlotType_SlotType;
	Parms.CallFunc_ItemToEquipmentSlot_SlotType = CallFunc_ItemToEquipmentSlot_SlotType;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_CustomEvent_ItemBox = K2Node_CustomEvent_ItemBox;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetGrabPanel_GrabPanel = CallFunc_GetGrabPanel_GrabPanel;
	Parms.CallFunc_GetGrabPanel_ItemGrabActive = CallFunc_GetGrabPanel_ItemGrabActive;
	Parms.CallFunc_GetLocalTopLeft_ReturnValue = CallFunc_GetLocalTopLeft_ReturnValue;
	Parms.CallFunc_GetSelectedItemBox_ItemBox = CallFunc_GetSelectedItemBox_ItemBox;
	Parms.CallFunc_LocalToAbsolute_ReturnValue = CallFunc_LocalToAbsolute_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.CallFunc_ItemToEquipmentSlot_SlotType_1 = CallFunc_ItemToEquipmentSlot_SlotType_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetItemOnGrabPanel_Item_ID = CallFunc_GetItemOnGrabPanel_Item_ID;
	Parms.CallFunc_GetItemOnGrabPanel_Entry = CallFunc_GetItemOnGrabPanel_Entry;
	Parms.CallFunc_GetItemOnGrabPanel_Item_ID_1 = CallFunc_GetItemOnGrabPanel_Item_ID_1;
	Parms.CallFunc_GetItemOnGrabPanel_Entry_1 = CallFunc_GetItemOnGrabPanel_Entry_1;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_6 = CallFunc_CustomHandleDirectionalInput_Handled_6;
	Parms.CallFunc_CustomHandleDirectionalInput_Handled_7 = CallFunc_CustomHandleDirectionalInput_Handled_7;
	Parms.K2Node_CustomEvent_SlotType = K2Node_CustomEvent_SlotType;
	Parms.K2Node_CustomEvent_RemoveCurrentSlot = K2Node_CustomEvent_RemoveCurrentSlot;
	Parms.CallFunc_CustomHandleInputFaceUp_Handled = CallFunc_CustomHandleInputFaceUp_Handled;
	Parms.CallFunc_GetSelectedGridItemId_ItemID_1 = CallFunc_GetSelectedGridItemId_ItemID_1;
	Parms.CallFunc_GetSelectedGridItemId_InventoryEntry_1 = CallFunc_GetSelectedGridItemId_InventoryEntry_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.CallFunc_ItemToEquipmentSlot_SlotType_2 = CallFunc_ItemToEquipmentSlot_SlotType_2;
	Parms.CallFunc_ItemToEquipmentSlot_SlotType_3 = CallFunc_ItemToEquipmentSlot_SlotType_3;
	Parms.CallFunc_CanEquipItem_ReturnValue = CallFunc_CanEquipItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeStruct_InventoryEntry = K2Node_MakeStruct_InventoryEntry;
	Parms.K2Node_MakeStruct_InventoryEntry_1 = K2Node_MakeStruct_InventoryEntry_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_3 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_PostEvent_ReturnValue_4 = CallFunc_PostEvent_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


