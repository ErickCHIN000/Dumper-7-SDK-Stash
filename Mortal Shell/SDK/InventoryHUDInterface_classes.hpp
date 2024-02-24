#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InventoryHUDInterface.InventoryHUDInterface_C
class IInventoryHUDInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInventoryHUDInterface_C* GetDefaultObj();

	void UI_Get_InventorySlots(TArray<class UInventory_Slot_C*>* NewParam);
	void UI_Autoloot_Container();
	void UI_UnEquip_To_Container(int32 From_Inventory_Slot, int32 To_Container_Slot);
	void UI_Equip_From_Container(int32 From_Container_Slot, int32 To_Inventory_Slot);
	void UI_Clear_Hotbar_Item(int32 From_Hotbar_Slot);
	void UI_Drop_Inventory_Item(int32 From_Inventory_Slot);
	void UI_Clear_ToolTip(class FName ItemName);
	void UI_Get_Container_ToolTip(int32 Container_Slot);
	void UI_Get_Inventory_ToolTip(int32 Inventory_Slot);
	void UI_Move_Hotbar_Item(int32 From_Slot, int32 To_Slot, bool IsDraggedFromInventory, bool IsDraggedFromHotbar);
	void UI_Use_Container_Item(int32 Container_Slot);
	void UI_Use_Inventory_Item(int32 Inventory_Slot);
	void UI_Split_Item_From_Container(int32 From_Container_Slot, int32 To_Slot, int32 Amount);
	void UI_Split_Item_From_Inventory(int32 From_Inventory_Slot, int32 To_Slot, int32 Amount);
	void UI_Deposit_Container_Item(int32 From_Inventory_Slot, int32 To_Container_Slot);
	void UI_Take_Container_Item(int32 From_Container_Slot, int32 To_Inventory_Slot);
	void UI_Move_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot);
	void UI_Split_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot, int32 Amount);
	void UI_Move_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot);
	void UI_Split_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot, int32 Amount);
	void UI_UnEquip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot);
	void UI_Equip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot);
	void UI_Get_IsShiftKeyDown(bool* IsShiftKeyDown);
	void UI_Get_PlayerStats(int32* Gold, int32* Damage, int32* Armor, int32* Strength, int32* Dexterity, int32* Intelligence, int32* InventorySize);
	void UI_Set_IsMouseOverUI(bool IsMouseOverUI);
	void UI_Close_Container();
	void UI_Close_Equipment();
	void UI_Close_Inventory();
};

}


