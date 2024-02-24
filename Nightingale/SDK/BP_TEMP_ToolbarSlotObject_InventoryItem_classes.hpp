#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x390 - 0x390)
// BlueprintGeneratedClass BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C
class UBP_TEMP_ToolbarSlotObject_InventoryItem_C : public UToolbarSlotEntry_InventoryEntry
{
public:

	static class UClass* StaticClass();
	static class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* GetDefaultObj();

	class UDragDropOperation* GetDragAndDropOperation_BP(class UDragOperation_Item_C* CallFunc_CreateDragDropOperation_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, int32 CallFunc_GetSlotIndex_ReturnValue, class APlayerController* CallFunc_GetOwningController_ReturnValue, class UWBP_GridItem_Draggable_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	class UUserWidget* GetTooltipWidget_BP(const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, class APlayerController* CallFunc_GetOwningController_ReturnValue, class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue);
	void IsSameInventoryEntry(const struct FGuid& OtherItemInstanceId, bool* IsSameInventoryEntry, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
};

}


