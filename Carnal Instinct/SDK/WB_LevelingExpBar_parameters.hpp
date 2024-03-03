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

// 0x4 (0x4 - 0x0)
// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Percent Progress Value
struct UWB_LevelingExpBar_C_Get_Percent_Progress_Value_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Limit Exp as Text
struct UWB_LevelingExpBar_C_Get_Player_Limit_Exp_as_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Current Exp as Text
struct UWB_LevelingExpBar_C_Get_Player_Current_Exp_as_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Level as Text
struct UWB_LevelingExpBar_C_Get_Player_Level_as_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0x24 (0x24 - 0x0)
// Function WB_LevelingExpBar.WB_LevelingExpBar_C.ExecuteUbergraph_WB_LevelingExpBar
struct UWB_LevelingExpBar_C_ExecuteUbergraph_WB_LevelingExpBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_22E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Leveling_C*                        CallFunc_Get_AC_Leveling_Return_Value;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


