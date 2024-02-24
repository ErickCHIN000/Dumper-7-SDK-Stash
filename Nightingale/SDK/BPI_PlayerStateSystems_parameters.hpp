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
// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetBPPlayerController
struct IBPI_PlayerStateSystems_C_GetBPPlayerController_Params
{
public:
	class ABP_PlayerController_C*                Player_Controller;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetMapTracker
struct IBPI_PlayerStateSystems_C_GetMapTracker_Params
{
public:
	class UBP_MapTracker_C*                      MapTracker;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetGroupSystem
struct IBPI_PlayerStateSystems_C_GetGroupSystem_Params
{
public:
	class UGroupComponentBase*                   GroupComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetDebugModeStateInterface
struct IBPI_PlayerStateSystems_C_GetDebugModeStateInterface_Params
{
public:
	class UBP_DebugModeStateComponent_C*         DebugModeState;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


