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

// 0x1D0 (0x1D0 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.PreviewGrid
struct UUI_MerchantGrid_C_PreviewGrid_Params
{
public:
	class UUI_MerchantItemNew_C*                 Local_Item;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 Local_Preview;                                     // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMerchantItem>                 K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FMerchantItem                         CallFunc_Array_Get_Item;                           // 0x38(0x25)(HasGetValueTypeHash)
	uint8                                        Pad_1C77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_RowName_ReturnValue;                      // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x70(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1C8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MerchantItemNew_C*                 CallFunc_Create_ReturnValue;                       // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.SetFilter
struct UUI_MerchantGrid_C_SetFilter_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_2;                          // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_3;                          // 0x40(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_4;                          // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_5;                          // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_6;                          // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.SetRowAndColumn
struct UUI_MerchantGrid_C_SetRowAndColumn_Params
{
public:
	class UUniformGridSlot*                      Grid;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Columns;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.GetAvailableItems
struct UUI_MerchantGrid_C_GetAvailableItems_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMerchantItem>                 CallFunc_GetStock_NewParam;                        // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMerchantItem                         CallFunc_Array_Get_Item;                           // 0x28(0x25)(HasGetValueTypeHash)
	uint8                                        Pad_1DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckRequirements_bAllAdded;              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BA (0x1BA - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.GetFilteredItems
struct UUI_MerchantGrid_C_GetFilteredItems_Params
{
public:
	TArray<enum class EItemType>                 Filter;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 FilteredItems;                                     // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Loca_Index;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 Local_FilterType;                                  // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMerchantItem                         CallFunc_Array_Get_Item;                           // 0x48(0x25)(HasGetValueTypeHash)
	uint8                                        Pad_1E34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItem_bFound;                           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetItem_OutRow;                           // 0x80(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1E48[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B9 (0x1B9 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.BuildGrid
struct UUI_MerchantGrid_C_BuildGrid_Params
{
public:
	class UUI_MerchantItemNew_C*                 Local_Item;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCurrency_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MerchantItemNew_C*                 CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 CallFunc_GetFilteredItems_FilteredItems;           // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FMerchantItem                         CallFunc_Array_Get_Item;                           // 0x48(0x25)(HasGetValueTypeHash)
	uint8                                        Pad_1ED8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItem_bFound;                           // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetItem_OutRow;                           // 0x78(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1EE2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNotSoldCount_NotSoldCount;             // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.PreConstruct
struct UUI_MerchantGrid_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_MerchantGrid.UI_MerchantGrid_C.ExecuteUbergraph_UI_MerchantGrid
struct UUI_MerchantGrid_C_ExecuteUbergraph_UI_MerchantGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


