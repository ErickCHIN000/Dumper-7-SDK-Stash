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

// 0x12 (0x12 - 0x0)
// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.GetCheckboxState
struct UCF_DebugAISpawnBlockers_C_GetCheckboxState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAISpawner*                            CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDebugSpawnBlockers_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.OnCheckboxStateChanged
struct UCF_DebugAISpawnBlockers_C_OnCheckboxStateChanged_Params
{
public:
	bool                                         NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.ExecuteUbergraph_CF_DebugAISpawnBlockers
struct UCF_DebugAISpawnBlockers_C_ExecuteUbergraph_CF_DebugAISpawnBlockers_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_NewState;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_288F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAISpawner*                            CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


