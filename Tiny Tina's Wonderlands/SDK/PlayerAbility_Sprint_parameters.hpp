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

// 0x10 (0x10 - 0x0)
// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle
struct UPlayerAbility_Sprint_C_IsSprintToggle_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1487[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxProfile*                           CallFunc_GetPlayerProfile_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3
struct UPlayerAbility_Sprint_C_GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2
struct UPlayerAbility_Sprint_C_GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint
struct UPlayerAbility_Sprint_C_ExecuteUbergraph_PlayerAbility_Sprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggle_Res;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetWantsToSprint_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1505[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action1;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggle_Res1;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


