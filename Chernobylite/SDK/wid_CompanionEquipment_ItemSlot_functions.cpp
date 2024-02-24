#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C
// (None)

class UClass* UWid_CompanionEquipment_ItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipment_ItemSlot_C");

	return Clss;
}


// wid_CompanionEquipment_ItemSlot_C wid_CompanionEquipment_ItemSlot.Default__wid_CompanionEquipment_ItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipment_ItemSlot_C* UWid_CompanionEquipment_ItemSlot_C::GetDefaultObj()
{
	static class UWid_CompanionEquipment_ItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipment_ItemSlot_C*>(UWid_CompanionEquipment_ItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.UpdateUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FItemEntry                  ItemInfo                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWid_Upgrade_Icon_C*         UpgradeIconWidget                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AvailableUpgrades                                                (Edit, BlueprintVisible)
// int32                              Column                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrade_Icon_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetUpgrades_ReturnValue                                 (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUpgradeInfo_isVaid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUpgradeEntry               CallFunc_GetUpgradeInfo_ReturnValue                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemSlot_C::UpdateUpgrades(struct FInventoryEntry& InventoryEntry, struct FItemEntry& ItemInfo, class UWid_Upgrade_Icon_C* UpgradeIconWidget, const TArray<class FName>& AvailableUpgrades, int32 Column, class UWid_Upgrade_Icon_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "UpdateUpgrades");

	Params::UWid_CompanionEquipment_ItemSlot_C_UpdateUpgrades_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.ItemInfo = ItemInfo;
	Parms.UpgradeIconWidget = UpgradeIconWidget;
	Parms.AvailableUpgrades = AvailableUpgrades;
	Parms.Column = Column;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetUpgrades_ReturnValue = CallFunc_GetUpgrades_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetUpgradeInfo_isVaid = CallFunc_GetUpgradeInfo_isVaid;
	Parms.CallFunc_GetUpgradeInfo_ReturnValue = CallFunc_GetUpgradeInfo_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWid_CompanionEquipment_ItemSlot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnMouseButtonUp");

	Params::UWid_CompanionEquipment_ItemSlot_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.GetEquippedItemAndItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             EquippedItem                                                     (Parm, OutParm)
// struct FItemEntry                  ItemInfo                                                         (Parm, OutParm)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  LocalItemInfo                                                    (Edit, BlueprintVisible)
// struct FInventoryEntry             LocalEquippedItem                                                (Edit, BlueprintVisible)
// bool                               CallFunc_IsSlotValid_Result                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionGetEquippedItem_outResult                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionGetEquippedItem_ReturnValue                    (None)

void UWid_CompanionEquipment_ItemSlot_C::GetEquippedItemAndItemInfo(struct FInventoryEntry* EquippedItem, struct FItemEntry* ItemInfo, bool* IsValid, const struct FItemEntry& LocalItemInfo, const struct FInventoryEntry& LocalEquippedItem, bool CallFunc_IsSlotValid_Result, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "GetEquippedItemAndItemInfo");

	Params::UWid_CompanionEquipment_ItemSlot_C_GetEquippedItemAndItemInfo_Params Parms{};

	Parms.LocalItemInfo = LocalItemInfo;
	Parms.LocalEquippedItem = LocalEquippedItem;
	Parms.CallFunc_IsSlotValid_Result = CallFunc_IsSlotValid_Result;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_CompanionGetEquippedItem_outResult = CallFunc_CompanionGetEquippedItem_outResult;
	Parms.CallFunc_CompanionGetEquippedItem_ReturnValue = CallFunc_CompanionGetEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EquippedItem != nullptr)
		*EquippedItem = std::move(Parms.EquippedItem);

	if (ItemInfo != nullptr)
		*ItemInfo = std::move(Parms.ItemInfo);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemEntry                  ItemInfo                                                         (Edit, BlueprintVisible)
// struct FInventoryEntry             EquippedItem                                                     (Edit, BlueprintVisible)
// struct FInventoryEntry             CallFunc_GetEquippedItemAndItemInfo_EquippedItem                 (None)
// struct FItemEntry                  CallFunc_GetEquippedItemAndItemInfo_ItemInfo                     (None)
// bool                               CallFunc_GetEquippedItemAndItemInfo_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemSlot_C::Update(const struct FItemEntry& ItemInfo, const struct FInventoryEntry& EquippedItem, const struct FInventoryEntry& CallFunc_GetEquippedItemAndItemInfo_EquippedItem, const struct FItemEntry& CallFunc_GetEquippedItemAndItemInfo_ItemInfo, bool CallFunc_GetEquippedItemAndItemInfo_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "Update");

	Params::UWid_CompanionEquipment_ItemSlot_C_Update_Params Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.EquippedItem = EquippedItem;
	Parms.CallFunc_GetEquippedItemAndItemInfo_EquippedItem = CallFunc_GetEquippedItemAndItemInfo_EquippedItem;
	Parms.CallFunc_GetEquippedItemAndItemInfo_ItemInfo = CallFunc_GetEquippedItemAndItemInfo_ItemInfo;
	Parms.CallFunc_GetEquippedItemAndItemInfo_IsValid = CallFunc_GetEquippedItemAndItemInfo_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.GetBackgroundBasedOnSelectionType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECompanionEquipmentSlotSelectionTypeSelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotSelectionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::GetBackgroundBasedOnSelectionType(enum class ECompanionEquipmentSlotSelectionType SelectionType, class UTexture2D** Texture, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "GetBackgroundBasedOnSelectionType");

	Params::UWid_CompanionEquipment_ItemSlot_C_GetBackgroundBasedOnSelectionType_Params Parms{};

	Parms.SelectionType = SelectionType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.UpdateBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotSelectionTypeSelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBackgroundBasedOnSelectionType_Texture               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::UpdateBackground(enum class ECompanionEquipmentSlotSelectionType SelectionType, class UTexture2D* CallFunc_GetBackgroundBasedOnSelectionType_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "UpdateBackground");

	Params::UWid_CompanionEquipment_ItemSlot_C_UpdateBackground_Params Parms{};

	Parms.SelectionType = SelectionType;
	Parms.CallFunc_GetBackgroundBasedOnSelectionType_Texture = CallFunc_GetBackgroundBasedOnSelectionType_Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.IsSlotValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemSlot_C::IsSlotValid(bool* Result, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "IsSlotValid");

	Params::UWid_CompanionEquipment_ItemSlot_C_IsSlotValid_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "PreConstruct");

	Params::UWid_CompanionEquipment_ItemSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeInSlotType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InCompanionID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::Init(enum class ECompanionEquipmentSlotType InSlotType, class FName InCompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "Init");

	Params::UWid_CompanionEquipment_ItemSlot_C_Init_Params Parms{};

	Parms.InSlotType = InSlotType;
	Parms.InCompanionID = InCompanionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.BndEvt__InteractableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemSlot_C::BndEvt__InteractableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "BndEvt__InteractableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.BndEvt__InteractableButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemSlot_C::BndEvt__InteractableButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "BndEvt__InteractableButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.BndEvt__InteractableButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemSlot_C::BndEvt__InteractableButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "BndEvt__InteractableButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.ExecuteUbergraph_wid_CompanionEquipment_ItemSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_InSlotType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_InCompanionID                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::ExecuteUbergraph_wid_CompanionEquipment_ItemSlot(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ Temp_delegate_Variable, bool K2Node_Event_IsDesignTime, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_InSlotType, class FName K2Node_CustomEvent_InCompanionID, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "ExecuteUbergraph_wid_CompanionEquipment_ItemSlot");

	Params::UWid_CompanionEquipment_ItemSlot_C_ExecuteUbergraph_wid_CompanionEquipment_ItemSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_InSlotType = K2Node_CustomEvent_InSlotType;
	Parms.K2Node_CustomEvent_InCompanionID = K2Node_CustomEvent_InCompanionID;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotButtonUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_ItemSlot_C::OnSlotButtonUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnSlotButtonUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewIsSelected                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_ItemSlot_C::OnSelected__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType, bool NewIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnSelected__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemSlot_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.NewIsSelected = NewIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::OnSlotPressed__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnSlotPressed__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemSlot_C_OnSlotPressed__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::OnSlotUnhovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnSlotUnhovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemSlot_C_OnSlotUnhovered__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_ItemSlot_C::OnSlotHovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_ItemSlot_C", "OnSlotHovered__DelegateSignature");

	Params::UWid_CompanionEquipment_ItemSlot_C_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}

}


