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
// Function BP_MountInterface.BP_MountInterface_C.GetMountCombatBehaviour
struct IBP_MountInterface_C_GetMountCombatBehaviour_Params
{
public:
	enum class EMountCombatBehaviourState        CombatBehaviour;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MountInterface.BP_MountInterface_C.GetMountMovementBehaviour
struct IBP_MountInterface_C_GetMountMovementBehaviour_Params
{
public:
	enum class EMountMovementBehaviourState      MovementBehaviour;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MountInterface.BP_MountInterface_C.MountCombatBehaviourUpdated
struct IBP_MountInterface_C_MountCombatBehaviourUpdated_Params
{
public:
	enum class EMountCombatBehaviourState        NewCombatBehaviour;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MountInterface.BP_MountInterface_C.MountMovementBehaviourUpdated
struct IBP_MountInterface_C_MountMovementBehaviourUpdated_Params
{
public:
	enum class EMountMovementBehaviourState      NewMovementBehaviour;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


