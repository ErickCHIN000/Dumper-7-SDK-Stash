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
// Function BPI_SpawnerPortal.BPI_SpawnerPortal_C.GetRallyPointLocations
struct IBPI_SpawnerPortal_C_GetRallyPointLocations_Params
{
public:
	TArray<struct FVector>                       RallyPointLocations;                               // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BPI_SpawnerPortal.BPI_SpawnerPortal_C.GetSpawnTransforms
struct IBPI_SpawnerPortal_C_GetSpawnTransforms_Params
{
public:
	TArray<struct FTransform>                    SpawnTransforms;                                   // 0x0(0x10)(Parm, OutParm)
};

}
}


