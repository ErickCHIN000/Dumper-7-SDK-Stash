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

// 0x674 (0x674 - 0x0)
// Function UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C.Update
struct UUMG_ItemContainerDisplay_C_Update_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryContainerData               CallFunc_GetInventoryContainerData_InventoryContainerData; // 0x1F8(0x38)(None)
	enum class EDataValid                        CallFunc_GetInventoryContainerData_Paths;          // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x233(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_Container_Item_Display_C*         CallFunc_Create_ReturnValue;                       // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Container_Item_Display_C*         CallFunc_Create_ReturnValue_1;                     // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventoryContainer_Inventory;          // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetInventoryContainer_Paths;              // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_702[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventorySlot                        CallFunc_Array_Get_Item;                           // 0x270(0x240)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedsRowHandle                CallFunc_GetSeedRow_SeedRow;                       // 0x4B4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSeedRow_ReturnValue;                   // 0x4CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x4D0(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x671(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x672(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x673(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C.BP_OnItemExpansionChanged
struct UUMG_ItemContainerDisplay_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C.BP_OnItemSelectionChanged
struct UUMG_ItemContainerDisplay_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C.ExecuteUbergraph_UMG_ItemContainerDisplay
struct UUMG_ItemContainerDisplay_C_ExecuteUbergraph_UMG_ItemContainerDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


