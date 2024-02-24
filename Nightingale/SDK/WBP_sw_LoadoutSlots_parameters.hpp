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

// 0x34 (0x34 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.RefreshSlot
struct UWBP_sw_LoadoutSlots_C_RefreshSlot_Params
{
public:
	enum class ELoadoutSlotType                  SlotType;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_488B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_488F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4893[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  CallFunc_GetSlotType_LoadoutSlotType;              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.InitializeLoadoutSlots
struct UWBP_sw_LoadoutSlots_C_InitializeLoadoutSlots_Params
{
public:
	class UBP_LoadoutComponent_C*                LoadoutComp;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_sw_InventoryEquipSlot_C*>  K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.HighlightAppropriateSlot
struct UWBP_sw_LoadoutSlots_C_HighlightAppropriateSlot_Params
{
public:
	enum class ELoadoutSlotType                  SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_InventoryEquipSlot_C*          CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.OnRightClickContextMenu
struct UWBP_sw_LoadoutSlots_C_OnRightClickContextMenu_Params
{
public:
	struct FInventoryEntry                       SlottedItem;                                       // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               Widget;                                            // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.GetDefaultFocusWidget
struct UWBP_sw_LoadoutSlots_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.MouseButtonUp_FromSubWidget
struct UWBP_sw_LoadoutSlots_C_MouseButtonUp_FromSubWidget_Params
{
public:
	struct FPointerEvent                         Mouse_Button;                                      // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x300 (0x300 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.OnSlotHovered
struct UWBP_sw_LoadoutSlots_C_OnSlotHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_490F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x300 (0x300 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.Equip Slot
struct UWBP_sw_LoadoutSlots_C_Equip_Slot_Params
{
public:
	enum class ELoadoutSlotType                  LoadoutSlot;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4925[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.RefreshSlots
struct UWBP_sw_LoadoutSlots_C_RefreshSlots_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4952[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_InventoryEquipSlot_C*          CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  CallFunc_GetSlotType_LoadoutSlotType;              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4957[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadoutSlot                          CallFunc_GetSlotByType_ReturnValue;                // 0x20(0xA0)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.LoadoutSlots_DragCancelled
struct UWBP_sw_LoadoutSlots_C_LoadoutSlots_DragCancelled_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.LoadoutSlots_DragStarted
struct UWBP_sw_LoadoutSlots_C_LoadoutSlots_DragStarted_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.RemoveSlotBindings
struct UWBP_sw_LoadoutSlots_C_RemoveSlotBindings_Params
{
public:
	class UWBP_sw_InventoryEquipSlot_C*          L_CurrentSlot;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_InventoryEquipSlot_C*          CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.SetupSlotBinding
struct UWBP_sw_LoadoutSlots_C_SetupSlotBinding_Params
{
public:
	class UWBP_sw_InventoryEquipSlot_C*          L_CurrentSlot;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_InventoryEquipSlot_C*          CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.ExecuteUbergraph_WBP_sw_LoadoutSlots
struct UWBP_sw_LoadoutSlots_C_ExecuteUbergraph_WBP_sw_LoadoutSlots_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.OnLoadoutSlotHovered__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_OnLoadoutSlotHovered__DelegateSignature_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A13[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETooltipSource                    TooltipSource;                                     // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.RightClickContextMenuEvent__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_RightClickContextMenuEvent__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       SlottedItem;                                       // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               Widget;                                            // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.MouseButtonUp__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_MouseButtonUp__DelegateSignature_Params
{
public:
	struct FPointerEvent                         Mouse_Event;                                       // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.LoadoutSlotDrag_Started__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_LoadoutSlotDrag_Started__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.LoadoutSlotDrag_Cancelled__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_LoadoutSlotDrag_Cancelled__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       Item;                                              // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ELoadoutSlotType                  Slot;                                              // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x300 (0x300 - 0x0)
// Function WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C.LoadoutSlotDragDropped__DelegateSignature
struct UWBP_sw_LoadoutSlots_C_LoadoutSlotDragDropped__DelegateSignature_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A7E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


