#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_UI_Items.BPFL_UI_Items_C
// (None)

class UClass* UBPFL_UI_Items_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_UI_Items_C");

	return Clss;
}


// BPFL_UI_Items_C BPFL_UI_Items.Default__BPFL_UI_Items_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_UI_Items_C* UBPFL_UI_Items_C::GetDefaultObj()
{
	static class UBPFL_UI_Items_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_UI_Items_C*>(UBPFL_UI_Items_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_UI_Items.BPFL_UI_Items_C.UI_ShowOrHideItemLevelForItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ItemLevelWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bVisible                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           QUERY_EQUIPMENT                                                  (Edit, BlueprintVisible)
// bool                               bShowWidget                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_Items_C::UI_ShowOrHideItemLevelForItem(class UWidget* ItemLevelWidget, const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, bool* bVisible, const struct FGameplayTagQuery& QUERY_EQUIPMENT, bool bShowWidget, bool CallFunc_IsValid_ReturnValue, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "UI_ShowOrHideItemLevelForItem");

	Params::UBPFL_UI_Items_C_UI_ShowOrHideItemLevelForItem_Params Parms{};

	Parms.ItemLevelWidget = ItemLevelWidget;
	Parms.InventoryEntry = InventoryEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.QUERY_EQUIPMENT = QUERY_EQUIPMENT;
	Parms.bShowWidget = bShowWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bVisible != nullptr)
		*bVisible = Parms.bVisible;

}


// Function BPFL_UI_Items.BPFL_UI_Items_C.UIGetItemDetailsByInventoryEntry
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemName                                                         (Parm, OutParm)
// class FText                        DescriptionText                                                  (Parm, OutParm)
// enum class ELoadoutSlotType        EquipmentSlotType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemActor                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       GameplayTag                                                      (Parm, OutParm)
// class UTexture2D*                  Texture                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_ReturnValue                                 (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemDescription_ReturnValue                          (None)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ui_Get_ItemDetails_byItemID_ItemFound                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ui_Get_ItemDetails_byItemID_Quality                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_ui_Get_ItemDetails_byItemID_ItemActor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag                 (None)

void UBPFL_UI_Items_C::UIGetItemDetailsByInventoryEntry(const struct FInventoryEntry& Entry, class UObject* __WorldContext, bool* ItemFound, class FText* ItemName, class FText* DescriptionText, enum class ELoadoutSlotType* EquipmentSlotType, enum class EItemQuality* Quality, int32* MaxStackCount, class UTexture2D** Icon, class UClass** ItemActor, struct FGameplayTagContainer* GameplayTag, class UTexture2D* Texture, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "UIGetItemDetailsByInventoryEntry");

	Params::UBPFL_UI_Items_C_UIGetItemDetailsByInventoryEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.__WorldContext = __WorldContext;
	Parms.Texture = Texture;
	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;
	Parms.CallFunc_GetItemDescription_ReturnValue = CallFunc_GetItemDescription_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemFound = CallFunc_ui_Get_ItemDetails_byItemID_ItemFound;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType = CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_Quality = CallFunc_ui_Get_ItemDetails_byItemID_Quality;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount = CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemActor = CallFunc_ui_Get_ItemDetails_byItemID_ItemActor;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag = CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemName != nullptr)
		*ItemName = Parms.ItemName;

	if (DescriptionText != nullptr)
		*DescriptionText = Parms.DescriptionText;

	if (EquipmentSlotType != nullptr)
		*EquipmentSlotType = Parms.EquipmentSlotType;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

	if (MaxStackCount != nullptr)
		*MaxStackCount = Parms.MaxStackCount;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (ItemActor != nullptr)
		*ItemActor = Parms.ItemActor;

	if (GameplayTag != nullptr)
		*GameplayTag = std::move(Parms.GameplayTag);

}


// Function BPFL_UI_Items.BPFL_UI_Items_C.ui_Get_FullIconSoftReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemDataHandle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetDefaultItemFullSizeIcon_ReturnValue                  (UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UBPFL_UI_Items_C::Ui_Get_FullIconSoftReference(const struct FItemDataReference& ItemDataHandle, class UObject* __WorldContext, bool* bSuccess, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetDefaultItemFullSizeIcon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "ui_Get_FullIconSoftReference");

	Params::UBPFL_UI_Items_C_Ui_Get_FullIconSoftReference_Params Parms{};

	Parms.ItemDataHandle = ItemDataHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDefaultItemFullSizeIcon_ReturnValue = CallFunc_GetDefaultItemFullSizeIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function BPFL_UI_Items.BPFL_UI_Items_C.ui_UnequipItem_BySlotTag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         K2Node_DynamicCast_AsBP_Anim_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_Items_C::Ui_UnequipItem_BySlotTag(const struct FGameplayTag& SlotTag, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "ui_UnequipItem_BySlotTag");

	Params::UBPFL_UI_Items_C_Ui_UnequipItem_BySlotTag_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Anim_Character = K2Node_DynamicCast_AsBP_Anim_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UI_Items.BPFL_UI_Items_C.ui_Get_ItemDetails_byItemID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        EquipmentSlotType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemActor                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       GameplayTag                                                      (Parm, OutParm)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_GetLoadoutSlotType_SlotType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_GetItemQuality_Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemActorClass_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetItemActorClass_ItemActor                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags                                        (None)
// int32                              CallFunc_GetItemStackCount_StackCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_Items_C::Ui_Get_ItemDetails_byItemID(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* ItemFound, enum class ELoadoutSlotType* EquipmentSlotType, enum class EItemQuality* Quality, int32* MaxStackCount, class UClass** ItemActor, struct FGameplayTagContainer* GameplayTag, bool CallFunc_CheckForValidItem_ItemValid, enum class ELoadoutSlotType CallFunc_GetLoadoutSlotType_SlotType, enum class EItemQuality CallFunc_GetItemQuality_Return_Value, bool CallFunc_GetItemActorClass_Success, class UClass* CallFunc_GetItemActorClass_ItemActor, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, int32 CallFunc_GetItemStackCount_StackCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "ui_Get_ItemDetails_byItemID");

	Params::UBPFL_UI_Items_C_Ui_Get_ItemDetails_byItemID_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;
	Parms.CallFunc_GetLoadoutSlotType_SlotType = CallFunc_GetLoadoutSlotType_SlotType;
	Parms.CallFunc_GetItemQuality_Return_Value = CallFunc_GetItemQuality_Return_Value;
	Parms.CallFunc_GetItemActorClass_Success = CallFunc_GetItemActorClass_Success;
	Parms.CallFunc_GetItemActorClass_ItemActor = CallFunc_GetItemActorClass_ItemActor;
	Parms.CallFunc_GetItemTags_Tags = CallFunc_GetItemTags_Tags;
	Parms.CallFunc_GetItemStackCount_StackCount = CallFunc_GetItemStackCount_StackCount;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (EquipmentSlotType != nullptr)
		*EquipmentSlotType = Parms.EquipmentSlotType;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

	if (MaxStackCount != nullptr)
		*MaxStackCount = Parms.MaxStackCount;

	if (ItemActor != nullptr)
		*ItemActor = Parms.ItemActor;

	if (GameplayTag != nullptr)
		*GameplayTag = std::move(Parms.GameplayTag);

}


// Function BPFL_UI_Items.BPFL_UI_Items_C.ui_Equip_Item
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FoundEquipmentSlotTag                                            (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>K2Node_DynamicCast_AsToolbar_Access_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutEquipInterface>K2Node_DynamicCast_AsLoadout_Equip_Interface                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemEquipmentSlotTag_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag                (NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     CallFunc_GetToolbarArrangementForSlotTag_ToolbarArrangement      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_FindSlotIndexForNewSlotEntry_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_Items_C::Ui_Equip_Item(class APlayerController* Controller, const struct FItemDataReference& ItemId, const struct FGuid& InstanceID, class UObject* __WorldContext, const struct FGameplayTag& FoundEquipmentSlotTag, bool CallFunc_CheckForValidItem_ItemValid, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutEquipInterface> K2Node_DynamicCast_AsLoadout_Equip_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, enum class EToolbarArrangement CallFunc_GetToolbarArrangementForSlotTag_ToolbarArrangement, bool CallFunc_NotEqual_GameplayTag_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, int32 CallFunc_FindSlotIndexForNewSlotEntry_ReturnValue, bool CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_Items_C", "ui_Equip_Item");

	Params::UBPFL_UI_Items_C_Ui_Equip_Item_Params Parms{};

	Parms.Controller = Controller;
	Parms.ItemId = ItemId;
	Parms.InstanceID = InstanceID;
	Parms.__WorldContext = __WorldContext;
	Parms.FoundEquipmentSlotTag = FoundEquipmentSlotTag;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;
	Parms.K2Node_DynamicCast_AsToolbar_Access_Interface = K2Node_DynamicCast_AsToolbar_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Equip_Interface = K2Node_DynamicCast_AsLoadout_Equip_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemEquipmentSlotTag_bSuccess = CallFunc_GetItemEquipmentSlotTag_bSuccess;
	Parms.CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag = CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag;
	Parms.CallFunc_GetToolbarArrangementForSlotTag_ToolbarArrangement = CallFunc_GetToolbarArrangementForSlotTag_ToolbarArrangement;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_FindSlotIndexForNewSlotEntry_ReturnValue = CallFunc_FindSlotIndexForNewSlotEntry_ReturnValue;
	Parms.CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable = CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


