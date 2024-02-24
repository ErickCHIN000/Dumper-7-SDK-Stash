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

// 0x1F0 (0x1F0 - 0x0)
// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.SetBaseItem
struct UUMG_BioLab_StatBox_C_SetBaseItem_Params
{
public:
	struct FItemData                             BaseItem;                                          // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x1F0 (0x1F0 - 0x0)
// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.SetComparisonItem
struct UUMG_BioLab_StatBox_C_SetComparisonItem_Params
{
public:
	struct FItemData                             ComparisonItem;                                    // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x4F8 (0x4F8 - 0x0)
// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.ExecuteUbergraph_UMG_BioLab_StatBox
struct UUMG_BioLab_StatBox_C_ExecuteUbergraph_UMG_BioLab_StatBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_StatBox_Row_C*             CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_BaseItem;                       // 0x20(0x1F0)(ContainsInstancedReference)
	struct FItemData                             K2Node_CustomEvent_ComparisonItem;                 // 0x210(0x1F0)(ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3054[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatComparisonResult>         CallFunc_CompareItemStats_ComparisonResults;       // 0x408(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3075[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FStatsRowHandle, int32>          CallFunc_GetStatBoxItemStats_ReturnValue;          // 0x430(0x50)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3086[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatsRowHandle>               CallFunc_Map_Keys_Keys;                            // 0x488(0x10)(ReferenceParm)
	struct FStatComparisonResult                 CallFunc_Array_Get_Item;                           // 0x498(0x24)(NoDestructor)
	struct FStatsRowHandle                       CallFunc_Array_Get_Item_1;                         // 0x4BC(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_StatBox_Row_C*             CallFunc_Create_ReturnValue_1;                     // 0x4E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x4F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


