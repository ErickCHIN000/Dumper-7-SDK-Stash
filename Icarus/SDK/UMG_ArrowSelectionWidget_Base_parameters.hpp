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

// 0x38 (0x38 - 0x0)
// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.GetSelectedOption
struct UUMG_ArrowSelectionWidget_Base_C_GetSelectedOption_Params
{
public:
	class FText                                  SelectedRow;                                       // 0x0(0x18)(Parm, OutParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x20(0x18)(None)
};

// 0x7 (0x7 - 0x0)
// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ChangeSelection
struct UUMG_ArrowSelectionWidget_Base_C_ChangeSelection_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ClearOptions
struct UUMG_ArrowSelectionWidget_Base_C_ClearOptions_Params
{
public:
	bool                                         ClearIndex;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddOption_Index;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.AddOption
struct UUMG_ArrowSelectionWidget_Base_C_AddOption_Params
{
public:
	class FText                                  Option;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C.ExecuteUbergraph_UMG_ArrowSelectionWidget_Base
struct UUMG_ArrowSelectionWidget_Base_C_ExecuteUbergraph_UMG_ArrowSelectionWidget_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


