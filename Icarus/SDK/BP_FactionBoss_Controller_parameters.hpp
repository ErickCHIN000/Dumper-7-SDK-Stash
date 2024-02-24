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

// 0x11 (0x11 - 0x0)
// Function BP_FactionBoss_Controller.BP_FactionBoss_Controller_C.ExecuteUbergraph_BP_FactionBoss_Controller
struct ABP_FactionBoss_Controller_C_ExecuteUbergraph_BP_FactionBoss_Controller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunBehaviorTree_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_UseBlackboard_BlackboardComponent;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseBlackboard_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


