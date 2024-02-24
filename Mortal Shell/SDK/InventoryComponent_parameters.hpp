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

// 0x4E8 (0x4E8 - 0x0)
// Function InventoryComponent.InventoryComponent_C.ReconstructLoadedItem
struct UInventoryComponent_C_ReconstructLoadedItem_Params
{
public:
	struct FInventoryItem                        In;                                                // 0x0(0x132)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_2B59[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        Out;                                               // 0x138(0x132)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_2B5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x270(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2B64[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        K2Node_MakeStruct_InventoryItem;                   // 0x3B0(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2B6C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function InventoryComponent.InventoryComponent_C.GetInventoryItems
struct UInventoryComponent_C_GetInventoryItems_Params
{
public:
	TArray<struct FInventoryItem>                InventoryItems;                                    // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x3EC (0x3EC - 0x0)
// Function InventoryComponent.InventoryComponent_C.LoadInventoryItems
struct UInventoryComponent_C_LoadInventoryItems_Params
{
public:
	int32                                        InventorySize;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                InventoryItems;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        Temp_struct_Variable;                              // 0x28(0x132)(ConstParm, HasGetValueTypeHash)
	uint8                                        Pad_2C2D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0x160(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2C34[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_ReconstructLoadedItem_Out;                // 0x298(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2C37[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetInventoryItem_Success;                 // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C45[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function InventoryComponent.InventoryComponent_C.DecreaseInventorySize
struct UInventoryComponent_C_DecreaseInventorySize_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                LocalAmountIndexes;                                // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x154 (0x154 - 0x0)
// Function InventoryComponent.InventoryComponent_C.IncreaseInventorySize
struct UInventoryComponent_C_IncreaseInventorySize_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        Temp_struct_Variable;                              // 0x18(0x132)(ConstParm, HasGetValueTypeHash)
	uint8                                        Pad_2D90[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x156 (0x156 - 0x0)
// Function InventoryComponent.InventoryComponent_C.GetInventoryItemCount
struct UInventoryComponent_C_GetInventoryItemCount_Params
{
public:
	int32                                        ItemCount;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalItemCount;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0x18(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2E1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1AA (0x1AA - 0x0)
// Function InventoryComponent.InventoryComponent_C.GetEmptyInventorySpace
struct UInventoryComponent_C_GetEmptyInventorySpace_Params
{
public:
	int32                                        IndexToStartSearch;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalSuccess;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocalIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0x48(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2EC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ECA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function InventoryComponent.InventoryComponent_C.ClearInventoryItem
struct UInventoryComponent_C_ClearInventoryItem_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        Temp_struct_Variable;                              // 0x8(0x132)(ConstParm, HasGetValueTypeHash)
	uint8                                        Pad_2EF9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x141 (0x141 - 0x0)
// Function InventoryComponent.InventoryComponent_C.SetInventoryItem
struct UInventoryComponent_C_SetInventoryItem_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x8(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_2F2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Success;                                           // 0x140(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x279 (0x279 - 0x0)
// Function InventoryComponent.InventoryComponent_C.GetInventoryItem
struct UInventoryComponent_C_GetInventoryItem_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x8(0x132)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_2F66[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0x140(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2F6B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x154 (0x154 - 0x0)
// Function InventoryComponent.InventoryComponent_C.InitInventory
struct UInventoryComponent_C_InitInventory_Params
{
public:
	int32                                        InventorySize;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        Temp_struct_Variable;                              // 0x18(0x132)(ConstParm, HasGetValueTypeHash)
	uint8                                        Pad_2FDF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InventoryComponent.InventoryComponent_C.Server_InitInventory
struct UInventoryComponent_C_Server_InitInventory_Params
{
public:
	int32                                        InventorySize;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
struct UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InventorySize;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InitInventory_Success;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


