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

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.IsButtonEnabled
struct UUI_StormMode_Statistics_PageButton_C_IsButtonEnabled_Params
{
public:
	bool                                         Enabled_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.HighlightButton
struct UUI_StormMode_Statistics_PageButton_C_HighlightButton_Params
{
public:
	bool                                         Highlight_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.SetParentRef
struct UUI_StormMode_Statistics_PageButton_C_SetParentRef_Params
{
public:
	class UWidget*                               Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.UpdateSettingValues
struct UUI_StormMode_Statistics_PageButton_C_UpdateSettingValues_Params
{
public:
	TArray<class FText>                          Values;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.UpdateSettingName
struct UUI_StormMode_Statistics_PageButton_C_UpdateSettingName_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.ForceSelectButton
struct UUI_StormMode_Statistics_PageButton_C_ForceSelectButton_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.EnableOrDisableButton
struct UUI_StormMode_Statistics_PageButton_C_EnableOrDisableButton_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.NavVertical
struct UUI_StormMode_Statistics_PageButton_C_NavVertical_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.NavHorizontal
struct UUI_StormMode_Statistics_PageButton_C_NavHorizontal_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.OverrideCurrentValue
struct UUI_StormMode_Statistics_PageButton_C_OverrideCurrentValue_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.UpdateIndexes
struct UUI_StormMode_Statistics_PageButton_C_UpdateIndexes_Params
{
public:
	TArray<int32>                                Indexes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.PreConstruct
struct UUI_StormMode_Statistics_PageButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.SelectButton
struct UUI_StormMode_Statistics_PageButton_C_SelectButton_Params
{
public:
	bool                                         Select_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C.ExecuteUbergraph_UI_StormMode_Statistics_PageButton
struct UUI_StormMode_Statistics_PageButton_C_ExecuteUbergraph_UI_StormMode_Statistics_PageButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Highlight_;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Parent;                               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_Event_Values;                               // 0x30(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Text;                                 // 0x40(0x18)(None)
	bool                                         K2Node_Event_Select;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Enable;                               // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Delta_1;                              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Delta;                                // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_Event_Indexes;                              // 0x68(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Select_;                              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


