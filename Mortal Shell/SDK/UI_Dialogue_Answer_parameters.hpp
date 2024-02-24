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

// 0x2A8 (0x2A8 - 0x0)
// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.SetHighlighted
struct UUI_Dialogue_Answer_C_SetHighlighted_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2238[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x8(0x28)(None)
	struct FButtonStyle                          K2Node_Select_Default_1;                           // 0x30(0x278)(ConstParm)
};

// 0x1 (0x1 - 0x0)
// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.PreConstruct
struct UUI_Dialogue_Answer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.ExecuteUbergraph_UI_Dialogue_Answer
struct UUI_Dialogue_Answer_C_ExecuteUbergraph_UI_Dialogue_Answer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


