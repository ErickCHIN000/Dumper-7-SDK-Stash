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
// Function BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C.ResolveSimulationRound
struct IBPI_HasSimulationStateManager_C_ResolveSimulationRound_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C.GetSimulationStateManager
struct IBPI_HasSimulationStateManager_C_GetSimulationStateManager_Params
{
public:
	class ANWXSimStateManagerBase*               Simulation_State_Manager;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


