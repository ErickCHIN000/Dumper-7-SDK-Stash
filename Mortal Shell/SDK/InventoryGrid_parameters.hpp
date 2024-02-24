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

// 0x13A (0x13A - 0x0)
// Function InventoryGrid.InventoryGrid_C.CheckEquipmentTutorial
struct UInventoryGrid_C_CheckEquipmentTutorial_Params
{
public:
	struct FInventoryItem                        InventoryItem;                                     // 0x0(0x132)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_1200[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Add;                                               // 0x138(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function InventoryGrid.InventoryGrid_C.CheckForSword
struct UInventoryGrid_C_CheckForSword_Params
{
public:
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15C (0x15C - 0x0)
// Function InventoryGrid.InventoryGrid_C.AddUnlockedKeyItems
struct UInventoryGrid_C_AddUnlockedKeyItems_Params
{
public:
	TArray<struct FInventoryItem>                Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1255[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1258[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x14C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_125B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x195 (0x195 - 0x0)
// Function InventoryGrid.InventoryGrid_C.SetPreviewGrid
struct UInventoryGrid_C_SetPreviewGrid_Params
{
public:
	int32                                        Local_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UInventoryGridItem_C*                  CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_12B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function InventoryGrid.InventoryGrid_C.IsOnGrid
struct UInventoryGrid_C_IsOnGrid_Params
{
public:
	struct FNavDirectionInt2D                    NavDirectionInt2D;                                 // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnGrid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1313[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumRows_NumRows;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function InventoryGrid.InventoryGrid_C.GetNumRows
struct UInventoryGrid_C_GetNumRows_Params
{
public:
	int32                                        NumRows;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    CallFunc_IndexToRowColum_RowColumn;                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function InventoryGrid.InventoryGrid_C.RowColumToIndex
struct UInventoryGrid_C_RowColumToIndex_Params
{
public:
	struct FNavDirectionInt2D                    RowColumn;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function InventoryGrid.InventoryGrid_C.IndexToRowColum
struct UInventoryGrid_C_IndexToRowColum_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    RowColumn;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D;               // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function InventoryGrid.InventoryGrid_C.GetNextNavGridItem
struct UInventoryGrid_C_GetNextNavGridItem_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENavDirection                     Direction;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextIndex;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsValidNextItem;                                  // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHitLimit;                                         // 0xD(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1497[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavDirectionInt2D                    CalculatedColRow;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    CurrentColumnRow;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    NavDirection;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavDirectionInt2D                    CallFunc_IndexToRowColum_RowColumn;                // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D_1;             // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D_2;             // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D_3;             // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x58(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RowColumToIndex_Index;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOnGrid_bOnGrid;                         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavDirectionInt2D                    K2Node_MakeStruct_NavDirectionInt2D_4;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function InventoryGrid.InventoryGrid_C.SetFilter
struct UInventoryGrid_C_SetFilter_Params
{
public:
	int32                                        FilterID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1546[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_2;                          // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_3;                          // 0x40(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_4;                          // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_5;                          // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EItemType>                 K2Node_MakeArray_Array_6;                          // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x360 (0x360 - 0x0)
// Function InventoryGrid.InventoryGrid_C.GetFilteredItems
struct UInventoryGrid_C_GetFilteredItems_Params
{
public:
	bool                                         bShowKeyItems;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemType>                 FilterType;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FInventoryItem>                InventoryItems;                                    // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                CorrespondingInventorySlot;                        // 0x28(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FInventoryItem>                Local_InventoryItems;                              // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        LocIndex;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Slots;                                             // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EItemType>                 LocFilterType;                                     // 0x60(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FInventoryItem>                FilteredItemList;                                  // 0x70(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         bLocShowKeyItems;                                  // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1611[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0xA8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_162B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1645[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_Array_Get_Item_1;                         // 0x1F0(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1650[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1664[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC;                  // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                CallFunc_GetInventoryItems_InventoryItems;         // 0x350(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function InventoryGrid.InventoryGrid_C.SetRowAndColumn
struct UInventoryGrid_C_SetRowAndColumn_Params
{
public:
	class UUniformGridSlot*                      GridSlot;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Columns;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function InventoryGrid.InventoryGrid_C.Tick
struct UInventoryGrid_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function InventoryGrid.InventoryGrid_C.OnItemStartedDragging_Event_0
struct UInventoryGrid_C_OnItemStartedDragging_Event_0_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1721[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  GridItemWidget;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                    DragDropOperation;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function InventoryGrid.InventoryGrid_C.BuildGrid
struct UInventoryGrid_C_BuildGrid_Params
{
public:
	bool                                         QuickItemAnim;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x145 (0x145 - 0x0)
// Function InventoryGrid.InventoryGrid_C.OnSelectedEvent
struct UInventoryGrid_C_OnSelectedEvent_Params
{
public:
	struct FInventoryItem                        InventoryItem;                                     // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_176E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  HoveredWidget;                                     // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InventorySlot;                                     // 0x140(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseHover;                                        // 0x144(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function InventoryGrid.InventoryGrid_C.PreConstruct
struct UInventoryGrid_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B0 (0x3B0 - 0x0)
// Function InventoryGrid.InventoryGrid_C.ExecuteUbergraph_InventoryGrid
struct UInventoryGrid_C_ExecuteUbergraph_InventoryGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryGridItem_C*                  CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        CallFunc_Array_Get_Item;                           // 0x90(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_17EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_CheckEquipmentTutorial_Add;               // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InventorySlot_1;                // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  K2Node_CustomEvent_GridItemWidget;                 // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                    K2Node_CustomEvent_DragDropOperation;              // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_QuickItemAnim;                  // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1807[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                CallFunc_GetFilteredItems_InventoryItems;          // 0x1F8(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_GetFilteredItems_CorrespondingInventorySlot; // 0x208(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        K2Node_CustomEvent_InventoryItem;                  // 0x220(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_1818[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  K2Node_CustomEvent_HoveredWidget;                  // 0x358(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InventorySlot;                  // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_MouseHover;                     // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x368(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x378(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x388(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1830[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3A0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function InventoryGrid.InventoryGrid_C.OnItemStartedDragging__DelegateSignature
struct UInventoryGrid_C_OnItemStartedDragging__DelegateSignature_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_187E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  GridItemWidget;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                    DragDropOperation;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x144 (0x144 - 0x0)
// Function InventoryGrid.InventoryGrid_C.OnGridItemSelected__DelegateSignature
struct UInventoryGrid_C_OnGridItemSelected__DelegateSignature_Params
{
public:
	struct FInventoryItem                        InventoryItem;                                     // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_18AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  HoveredWidget;                                     // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HoveredInventorySlot;                              // 0x140(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


