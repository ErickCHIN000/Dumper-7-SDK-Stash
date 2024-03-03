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

// 0x118 (0x118 - 0x0)
// Function WB_ToolTipAbilities.WB_ToolTipAbilities_C.GetAbilityPoints
struct UWB_ToolTipAbilities_C_GetAbilityPoints_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2287[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x48(0x28)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x70(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x88(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm)
	struct FSlateColor                           K2Node_Select_Default;                             // 0xD8(0x28)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTipAbilities.WB_ToolTipAbilities_C.GetLockedText
struct UWB_ToolTipAbilities_C_GetLockedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTipAbilities.WB_ToolTipAbilities_C.GetName
struct UWB_ToolTipAbilities_C_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTipAbilities.WB_ToolTipAbilities_C.GetDescription
struct UWB_ToolTipAbilities_C_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x11 (0x11 - 0x0)
// Function WB_ToolTipAbilities.WB_ToolTipAbilities_C.ExecuteUbergraph_WB_ToolTipAbilities
struct UWB_ToolTipAbilities_C_ExecuteUbergraph_WB_ToolTipAbilities_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2353[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


