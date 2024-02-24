#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_UI_Items.BPFL_UI_Items_C
class UBPFL_UI_Items_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_UI_Items_C* GetDefaultObj();

	void UI_ShowOrHideItemLevelForItem(class UWidget* ItemLevelWidget, const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, bool* bVisible, const struct FGameplayTagQuery& QUERY_EQUIPMENT, bool bShowWidget, bool CallFunc_IsValid_ReturnValue, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UIGetItemDetailsByInventoryEntry(const struct FInventoryEntry& Entry, class UObject* __WorldContext, bool* ItemFound, class FText* ItemName, class FText* DescriptionText, enum class ELoadoutSlotType* EquipmentSlotType, enum class EItemQuality* Quality, int32* MaxStackCount, class UTexture2D** Icon, class UClass** ItemActor, struct FGameplayTagContainer* GameplayTag, class UTexture2D* Texture, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag);
	TSoftObjectPtr<class UTexture2D> Ui_Get_FullIconSoftReference(const struct FItemDataReference& ItemDataHandle, class UObject* __WorldContext, bool* bSuccess, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetDefaultItemFullSizeIcon_ReturnValue);
	void Ui_UnequipItem_BySlotTag(const struct FGameplayTag& SlotTag, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess);
	void Ui_Get_ItemDetails_byItemID(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* ItemFound, enum class ELoadoutSlotType* EquipmentSlotType, enum class EItemQuality* Quality, int32* MaxStackCount, class UClass** ItemActor, struct FGameplayTagContainer* GameplayTag, bool CallFunc_CheckForValidItem_ItemValid, enum class ELoadoutSlotType CallFunc_GetLoadoutSlotType_SlotType, enum class EItemQuality CallFunc_GetItemQuality_Return_Value, bool CallFunc_GetItemActorClass_Success, class UClass* CallFunc_GetItemActorClass_ItemActor, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, int32 CallFunc_GetItemStackCount_StackCount);
	void Ui_Equip_Item(class APlayerController* Controller, const struct FItemDataReference& ItemId, const struct FGuid& InstanceID, class UObject* __WorldContext, const struct FGameplayTag& FoundEquipmentSlotTag, bool CallFunc_CheckForValidItem_ItemValid, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutEquipInterface> K2Node_DynamicCast_AsLoadout_Equip_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, enum class EToolbarArrangement CallFunc_GetToolbarArrangementForSlotTag_ToolbarArrangement, bool CallFunc_NotEqual_GameplayTag_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, int32 CallFunc_FindSlotIndexForNewSlotEntry_ReturnValue, bool CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


