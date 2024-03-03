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
// Function AC_Crafting.AC_Crafting_C.Reset Capture Rotation
struct UAC_Crafting_C_Reset_Capture_Rotation_Params
{
public:
	float                                        CallFunc_BreakRotator_Roll;                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x18(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xA (0xA - 0x0)
// Function AC_Crafting.AC_Crafting_C.Check Inventory Capacity
struct UAC_Crafting_C_Check_Inventory_Capacity_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Find_Item_Quantity_Quantity_Found;        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Inventory_Space_Space_Found;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C4 (0x2C4 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Filter by Armor Slot
struct UAC_Crafting_C_Filter_by_Armor_Slot_Params
{
public:
	TArray<struct FS_Crafting>                   Crafting_Data;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FS_Crafting>                   Filtered_List;                                     // 0x10(0x10)(Parm, OutParm)
	TArray<struct FS_Crafting>                   Filtered_Array;                                    // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Boots;                                             // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Legs;                                              // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Chest;                                             // 0x50(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Neck;                                              // 0x60(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Gloves;                                            // 0x70(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Head;                                              // 0x80(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Temp_struct_Variable;                              // 0x90(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Crafting>                   Temp_struct_Variable_1;                            // 0xA8(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_2;                            // 0xB8(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_3;                            // 0xC8(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_4;                            // 0xD8(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_5;                            // 0xE8(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Crafting>                   Temp_struct_Variable_6;                            // 0x100(0x10)(ReferenceParm)
	struct FS_Crafting                           CallFunc_Array_Get_Item;                           // 0x110(0x30)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x148(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_7;                            // 0x238(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_8;                            // 0x248(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_9;                            // 0x258(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_10;                           // 0x268(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_11;                           // 0x278(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_12;                           // 0x288(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_13;                           // 0x298(0x10)(ReferenceParm)
	enum class E_ItemSlot                        Temp_byte_Variable;                                // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Crafting>                   K2Node_Select_Default;                             // 0x2B0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x192 (0x192 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Create Crafting Lists
struct UAC_Crafting_C_Create_Crafting_Lists_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Crafting>                   CallFunc_Filter_by_Rarity_Filtered_List;           // 0x8(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_296F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Crafting>                   CallFunc_Filter_by_Rarity_Filtered_List_1;         // 0x20(0x10)(ReferenceParm)
	TArray<struct FS_Crafting>                   CallFunc_Filter_by_Armor_Slot_Filtered_List;       // 0x30(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2986[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_299E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow_1;         // 0xA8(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E1 (0x1E1 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Remove Quantity from Equipment
struct UAC_Crafting_C_Remove_Quantity_from_Equipment_Params
{
public:
	struct FS_ItemData                           Equipment_Item;                                    // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Quantity_required;                                 // 0xE8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemStacks                         K2Node_MakeStruct_S_ItemStacks;                    // 0xF0(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           K2Node_SetFieldsInStruct_StructOut;                // 0xF8(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x148 (0x148 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Remove Crafting Widget
struct UAC_Crafting_C_Remove_Crafting_Widget_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CombatCharacter_C*                 CallFunc_Get_Player_Reference_Player;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture;           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_Array_Get_Item;                           // 0x38(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_1;         // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E1 (0x2E1 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Remove Quantity from Inventory
struct UAC_Crafting_C_Remove_Quantity_from_Inventory_Params
{
public:
	TArray<struct FS_ItemData>                   Inventory;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FS_ItemData                           Inventory_Item;                                    // 0x10(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Quantity_required;                                 // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ABD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           Temp_struct_Variable;                              // 0x100(0xE8)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemStacks                         K2Node_MakeStruct_S_ItemStacks;                    // 0x1EC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           K2Node_SetFieldsInStruct_StructOut;                // 0x1F8(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DC (0x1DC - 0x0)
// Function AC_Crafting.AC_Crafting_C.Filter by Rarity
struct UAC_Crafting_C_Filter_by_Rarity_Params
{
public:
	TArray<struct FS_Crafting>                   Crafting_Data;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FS_Crafting>                   Filtered_List;                                     // 0x10(0x10)(Parm, OutParm)
	TArray<struct FS_Crafting>                   Filtered_Array;                                    // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Legendary;                                         // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Epic;                                              // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Superior;                                          // 0x50(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_Crafting>                   Common;                                            // 0x60(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Crafting>                   Temp_struct_Variable;                              // 0x78(0x10)(ReferenceParm)
	struct FS_Crafting                           CallFunc_Array_Get_Item;                           // 0x88(0x30)(HasGetValueTypeHash)
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0xB8(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Crafting>                   Temp_struct_Variable_1;                            // 0x1B0(0x10)(ReferenceParm)
	enum class E_ItemRarity                      Temp_byte_Variable;                                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Crafting>                   K2Node_Select_Default;                             // 0x1C8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D9 (0x1D9 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Find Item Quantity
struct UAC_Crafting_C_Find_Item_Quantity_Params
{
public:
	struct FS_ItemData                           Item_Data;                                         // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Quantity_Found;                                    // 0xE8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_Get_Inventory_Item_by_Data_Item;          // 0xF0(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Inventory_Item_by_Data_Found;         // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C0 (0x3C0 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Try to Craft Item
struct UAC_Crafting_C_Try_to_Craft_Item_Params
{
public:
	int32                                        Required_Item_Quantity;                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_InventoryNotify_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InventoryNotify_C*                 CallFunc_Create_ReturnValue_1;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InventoryNotify_C*                 CallFunc_Create_ReturnValue_2;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)(ConstParm)
	struct FS_ItemStats                          K2Node_MakeStruct_S_ItemStats;                     // 0x40(0x2C)(HasGetValueTypeHash)
	uint8                                        Pad_2C51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           K2Node_MakeStruct_S_ItemData;                      // 0x70(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Has_Player_Gold_Enough__Has_;             // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Leveling_C*                        CallFunc_Get_AC_Leveling_Return_Value;             // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Level_Check_True;                         // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x170(0x18)(ConstParm)
	class UWB_InventoryNotify_C*                 CallFunc_Create_ReturnValue_3;                     // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_SingleDTItem                       CallFunc_Array_Get_Item;                           // 0x198(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x1C0(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_Get_Inventory_Item_by_Data_Item;          // 0x2B0(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Inventory_Item_by_Data_Found;         // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Add_Item_to_Inventory_Inventory_Full_;    // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C7D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_Item_to_Inventory_Added_Slot_Index;   // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Consumable_Item_Already_in_EQ__Already_in_EQ; // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x3A8(0x18)(ConstParm)
};

// 0x639 (0x639 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Set Craftable Item
struct UAC_Crafting_C_Set_Craftable_Item_Params
{
public:
	struct FS_SingleDTItem                       Craftable_Item;                                    // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemStacks                         K2Node_MakeStruct_S_ItemStacks;                    // 0x110(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           K2Node_SetFieldsInStruct_StructOut;                // 0x120(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x208(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x290(0x278)(None)
	TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture;           // 0x508(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_Array_Get_Item;                           // 0x520(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_1;         // 0x608(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_2;         // 0x628(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Open Crafting Widget
struct UAC_Crafting_C_Open_Crafting_Widget_Params
{
public:
	class UWB_CraftingWindow_C*                  CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 CallFunc_Get_Player_Reference_Player;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function AC_Crafting.AC_Crafting_C.Focus Selected Item
struct UAC_Crafting_C_Focus_Selected_Item_Params
{
public:
	struct FS_Crafting                           Crafting_Item_Data;                                // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Inventory_Capacity_Condition;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AC_Crafting.AC_Crafting_C.ExecuteUbergraph_AC_Crafting
struct UAC_Crafting_C_ExecuteUbergraph_AC_Crafting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


