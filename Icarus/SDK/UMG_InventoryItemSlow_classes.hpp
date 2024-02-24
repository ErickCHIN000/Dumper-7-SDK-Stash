#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0xA31 - 0xA26)
// WidgetBlueprintGeneratedClass UMG_InventoryItemSlow.UMG_InventoryItemSlow_C
class UUMG_InventoryItemSlow_C : public UUMG_InventoryItem_C
{
public:
	uint8                                        Pad_1CE2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NeedsUpdate;                                       // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_InventoryItemSlow_C* GetDefaultObj();

	void Initialise_(class UInventory* BoundInventory, int32 Location, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnInventoryUpdated(class UInventory* Inventory);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnInventoryItemUpdated(class UInventory* Inventory, int32 Location);
	void ExecuteUbergraph_UMG_InventoryItemSlow(int32 EntryPoint, class UInventory* K2Node_CustomEvent_Inventory_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


