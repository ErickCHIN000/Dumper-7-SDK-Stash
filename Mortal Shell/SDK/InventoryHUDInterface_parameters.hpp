#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_InventorySlots
struct IInventoryHUDInterface_C_UI_Get_InventorySlots_Params
{
public:
	TArray<class UInventory_Slot_C*>             NewParam;                                          // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_UnEquip_To_Container
struct IInventoryHUDInterface_C_UI_UnEquip_To_Container_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Container_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Equip_From_Container
struct IInventoryHUDInterface_C_UI_Equip_From_Container_Params
{
public:
	int32                                        From_Container_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Clear_Hotbar_Item
struct IInventoryHUDInterface_C_UI_Clear_Hotbar_Item_Params
{
public:
	int32                                        From_Hotbar_Slot;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Drop_Inventory_Item
struct IInventoryHUDInterface_C_UI_Drop_Inventory_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Clear_ToolTip
struct IInventoryHUDInterface_C_UI_Clear_ToolTip_Params
{
public:
	class FName                                  ItemName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_Container_ToolTip
struct IInventoryHUDInterface_C_UI_Get_Container_ToolTip_Params
{
public:
	int32                                        Container_Slot;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_Inventory_ToolTip
struct IInventoryHUDInterface_C_UI_Get_Inventory_ToolTip_Params
{
public:
	int32                                        Inventory_Slot;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Hotbar_Item
struct IInventoryHUDInterface_C_UI_Move_Hotbar_Item_Params
{
public:
	int32                                        From_Slot;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Slot;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDraggedFromInventory;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsDraggedFromHotbar;                               // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Use_Container_Item
struct IInventoryHUDInterface_C_UI_Use_Container_Item_Params
{
public:
	int32                                        Container_Slot;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Use_Inventory_Item
struct IInventoryHUDInterface_C_UI_Use_Inventory_Item_Params
{
public:
	int32                                        Inventory_Slot;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Item_From_Container
struct IInventoryHUDInterface_C_UI_Split_Item_From_Container_Params
{
public:
	int32                                        From_Container_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Slot;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Item_From_Inventory
struct IInventoryHUDInterface_C_UI_Split_Item_From_Inventory_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Slot;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Deposit_Container_Item
struct IInventoryHUDInterface_C_UI_Deposit_Container_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Container_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Take_Container_Item
struct IInventoryHUDInterface_C_UI_Take_Container_Item_Params
{
public:
	int32                                        From_Container_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Container_Item
struct IInventoryHUDInterface_C_UI_Move_Container_Item_Params
{
public:
	int32                                        From_Container_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Container_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Container_Item
struct IInventoryHUDInterface_C_UI_Split_Container_Item_Params
{
public:
	int32                                        From_Container_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Container_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Move_Inventory_Item
struct IInventoryHUDInterface_C_UI_Move_Inventory_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Split_Inventory_Item
struct IInventoryHUDInterface_C_UI_Split_Inventory_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_UnEquip_Inventory_Item
struct IInventoryHUDInterface_C_UI_UnEquip_Inventory_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Equip_Inventory_Item
struct IInventoryHUDInterface_C_UI_Equip_Inventory_Item_Params
{
public:
	int32                                        From_Inventory_Slot;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        To_Inventory_Slot;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_IsShiftKeyDown
struct IInventoryHUDInterface_C_UI_Get_IsShiftKeyDown_Params
{
public:
	bool                                         IsShiftKeyDown;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Get_PlayerStats
struct IInventoryHUDInterface_C_UI_Get_PlayerStats_Params
{
public:
	int32                                        Gold;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Armor;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Strength;                                          // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Dexterity;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Intelligence;                                      // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InventorySize;                                     // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function InventoryHUDInterface.InventoryHUDInterface_C.UI_Set_IsMouseOverUI
struct IInventoryHUDInterface_C_UI_Set_IsMouseOverUI_Params
{
public:
	bool                                         IsMouseOverUI;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


