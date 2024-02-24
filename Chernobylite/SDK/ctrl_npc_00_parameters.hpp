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

// 0x8 (0x8 - 0x0)
// Function ctrl_npc_00.ctrl_npc_00_C.ReceivePossess
struct ACtrl_npc_00_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ctrl_npc_00.ctrl_npc_00_C.ExecuteUbergraph_ctrl_npc_00
struct ACtrl_npc_00_C_ExecuteUbergraph_ctrl_npc_00_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunBehaviorTree_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


