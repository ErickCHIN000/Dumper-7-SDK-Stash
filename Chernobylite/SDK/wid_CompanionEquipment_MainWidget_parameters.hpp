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

// 0xA4 (0xA4 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.HandleGrabItemOnExit
struct UWid_CompanionEquipment_MainWidget_C_HandleGrabItemOnExit_Params
{
public:
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_1;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_1;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_2;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_2;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemOnGrabPanel_Item_ID;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetItemOnGrabPanel_Entry;                 // 0x40(0x30)(None)
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry;                  // 0x70(0x30)(UObjectWrapper)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotType       CallFunc_ItemToEquipmentSlot_SlotType;             // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CompanionEquipItem_ReturnValue;           // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetItemOnGrabPanel
struct UWid_CompanionEquipment_MainWidget_C_GetItemOnGrabPanel_Params
{
public:
	class FName                                  Item_ID;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       Entry;                                             // 0x8(0x30)(Parm, OutParm)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipGrabbedItem
struct UWid_CompanionEquipment_MainWidget_C_EquipGrabbedItem_Params
{
public:
	struct FInventoryEntry                       SwappedItem;                                       // 0x0(0x30)(Edit, BlueprintVisible)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType_1;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DCD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType_2;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionGetEquippedItem_outResult;       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DD8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionGetEquippedItem_ReturnValue;     // 0x48(0x30)(None)
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType_3;           // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DE9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetTileSize_TileSize;                     // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput;              // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_1;                 // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_1;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_2;                 // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_2;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry;                  // 0xC8(0x30)(UObjectWrapper)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E09[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionSwapItem_outResult;              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionSwapItem_ReturnValue;            // 0x110(0x30)(None)
};

// 0x91 (0x91 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.HandleEquipmentSlotClicked
struct UWid_CompanionEquipment_MainWidget_C_HandleEquipmentSlotClicked_Params
{
public:
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType_1;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionUnequipItem_outResult;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionUnequipItem_ReturnValue;         // 0x30(0x30)(None)
	struct FVector2D                             CallFunc_GetTileSize_TileSize;                     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_1;                 // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_1;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput;              // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel_2;                 // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive_2;            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CanEquipItem
struct UWid_CompanionEquipment_MainWidget_C_CanEquipItem_Params
{
public:
	class FName                                  Item_ID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F61[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry;                  // 0x28(0x30)(UObjectWrapper)
	bool                                         CallFunc_CompanionCanEquipItem_ReturnValue;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedGridItemId
struct UWid_CompanionEquipment_MainWidget_C_GetSelectedGridItemId_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       InventoryEntry;                                    // 0x8(0x30)(Parm, OutParm)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetSelectedGridItem_CurrentSelection;     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedSlotType
struct UWid_CompanionEquipment_MainWidget_C_GetSelectedSlotType_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1BD (0x1BD - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UnequipSelectedItem
struct UWid_CompanionEquipment_MainWidget_C_UnequipSelectedItem_Params
{
public:
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry;                  // 0x0(0x30)(UObjectWrapper)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo;     // 0x30(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo; // 0x50(0xC0)(HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_1; // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionUnequipItem_outResult;           // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2066[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionUnequipItem_ReturnValue;         // 0x138(0x30)(None)
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox_1;             // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_ReturnValue;                          // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionGetEquippedItem_outResult;       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2086[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionGetEquippedItem_ReturnValue;     // 0x188(0x30)(None)
	float                                        CallFunc_CanAdd_ReturnValue;                       // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipSelectedGridItem
struct UWid_CompanionEquipment_MainWidget_C_EquipSelectedGridItem_Params
{
public:
	struct FInventoryEntry                       SwappedItem;                                       // 0x0(0x30)(Edit, BlueprintVisible)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetSelectedGridItem_CurrentSelection;     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ItemToEquipmentSlot
struct UWid_CompanionEquipment_MainWidget_C_ItemToEquipmentSlot_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemStatEffectOnCompanion            CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x30)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedGridItem
struct UWid_CompanionEquipment_MainWidget_C_GetSelectedGridItem_Params
{
public:
	class UWid_Inventory_Grid_Entry_C*           CurrentSelection;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetSelectedItemBox
struct UWid_CompanionEquipment_MainWidget_C_GetSelectedItemBox_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelected_ItemBox;                      // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleInputFaceDown
struct UWid_CompanionEquipment_MainWidget_C_CustomHandleInputFaceDown_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2184[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_218B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2192[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox_1;             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleInputFaceUp
struct UWid_CompanionEquipment_MainWidget_C_CustomHandleInputFaceUp_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox_1;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GetGrabPanel
struct UWid_CompanionEquipment_MainWidget_C_GetGrabPanel_Params
{
public:
	class UWid_Storage_V2_Grid_GrabPanel_C*      GrabPanel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemGrabActive;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.CustomHandleDirectionalInput
struct UWid_CompanionEquipment_MainWidget_C_CustomHandleDirectionalInput_Params
{
public:
	enum class EDirections                       Direction;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Handled;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDirections                       Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_231C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_2;                            // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_3;                            // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2334[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default;                             // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_235B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Storage_v2_Grid_C*                K2Node_DynamicCast_AsWid_Storage_V_2_Grid;         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_236F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_2;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_2;                        // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0xBC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0xC4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_3;                        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_3;                        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue_2;       // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_4;                        // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_4;                        // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_1; // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetSize_ReturnValue_1;                    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_5;                        // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_5;                        // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.SlotHovered
struct UWid_CompanionEquipment_MainWidget_C_SlotHovered_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.EquipmentSlotClicked
struct UWid_CompanionEquipment_MainWidget_C_EquipmentSlotClicked_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ItemBoxSelected
struct UWid_CompanionEquipment_MainWidget_C_ItemBoxSelected_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.GridSelected
struct UWid_CompanionEquipment_MainWidget_C_GridSelected_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromKeyboard;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.PreConstruct
struct UWid_CompanionEquipment_MainWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.MoveGrabPanelToItemBox
struct UWid_CompanionEquipment_MainWidget_C_MoveGrabPanelToItemBox_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UpdateSwapBackground
struct UWid_CompanionEquipment_MainWidget_C_UpdateSwapBackground_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.UpdateStatsForSlot
struct UWid_CompanionEquipment_MainWidget_C_UpdateStatsForSlot_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveCurrentSlot;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5CC (0x5CC - 0x0)
// Function wid_CompanionEquipment_MainWidget.wid_CompanionEquipment_MainWidget_C.ExecuteUbergraph_wid_CompanionEquipment_MainWidget
struct UWid_CompanionEquipment_MainWidget_C_ExecuteUbergraph_wid_CompanionEquipment_MainWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo;     // 0x20(0x20)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_2;                              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_3;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_4;                              // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_5;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_6;                              // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_7;                              // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_8;                              // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_9;                              // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x68(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x78(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0x88(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0x98(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_2;                            // 0xA8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_2;                          // 0xB8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_3;                            // 0xC8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_3;                          // 0xD8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_4;                            // 0xE8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_4;                          // 0xF8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         CallFunc_CustomHandleInputFaceDown_Handled;        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled;     // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_1;   // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A22[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_CustomEvent_ItemBox_2;                      // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       K2Node_CustomEvent_SlotType_3;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_2;   // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_3;   // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_4;   // 0x11B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_5;   // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_CustomEvent_ItemBox_1;                      // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       K2Node_CustomEvent_SlotType_2;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       K2Node_CustomEvent_SlotType_1;                     // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsSelected;                     // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionGetEquippedItem_outResult;       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionGetEquippedItem_ReturnValue;     // 0x140(0x30)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x174(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_5;                              // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Name;                           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_FromKeyboard;                   // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_12;                             // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_13;                             // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x194(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  CallFunc_GetSelectedGridItemId_ItemID;             // 0x1A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetSelectedGridItemId_InventoryEntry;     // 0x1B0(0x30)(None)
	enum class ECompanionEquipmentSlotType       CallFunc_GetSelectedSlotType_SlotType;             // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_ItemToEquipmentSlot_SlotType;             // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x1E8(0x18)(None)
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_CustomEvent_ItemBox;                        // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x208(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	class UWid_Storage_V2_Grid_GrabPanel_C*      CallFunc_GetGrabPanel_GrabPanel;                   // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrabPanel_ItemGrabActive;              // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetLocalTopLeft_ReturnValue;              // 0x24C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     CallFunc_GetSelectedItemBox_ItemBox;               // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToAbsolute_ReturnValue;              // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;   // 0x268(0x20)(HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_ItemID;                         // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_ItemToEquipmentSlot_SlotType_1;           // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_1;                           // 0x292(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_2;                           // 0x293(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_3;                           // 0x295(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_4;                           // 0x296(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x297(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  CallFunc_GetItemOnGrabPanel_Item_ID;               // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetItemOnGrabPanel_Entry;                 // 0x2A0(0x30)(None)
	class FName                                  CallFunc_GetItemOnGrabPanel_Item_ID_1;             // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetItemOnGrabPanel_Entry_1;               // 0x2D8(0x30)(None)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_6;   // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleDirectionalInput_Handled_7;   // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotType       K2Node_CustomEvent_SlotType;                       // 0x30A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_RemoveCurrentSlot;              // 0x30B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CustomHandleInputFaceUp_Handled;          // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetSelectedGridItemId_ItemID_1;           // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetSelectedGridItemId_InventoryEntry_1;   // 0x318(0x30)(None)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_3;          // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotType       CallFunc_ItemToEquipmentSlot_SlotType_2;           // 0x34A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       CallFunc_ItemToEquipmentSlot_SlotType_3;           // 0x34B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanEquipItem_ReturnValue;                 // 0x34C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x34D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AC0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;   // 0x350(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo; // 0x370(0xC0)(HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_5;                           // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default_6;                           // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ACD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x434(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry;                  // 0x448(0x30)(UObjectWrapper)
	struct FInventoryEntry                       K2Node_MakeStruct_InventoryEntry_1;                // 0x478(0x30)(UObjectWrapper)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;   // 0x4B0(0x20)(HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1; // 0x4D8(0xC0)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_2;                  // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_3;                  // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_4;                  // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


