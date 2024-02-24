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

// 0x18 (0x18 - 0x0)
// Function BPI_WaypointTask.BPI_WaypointTask_C.GetTaskLocationName
struct IBPI_WaypointTask_C_GetTaskLocationName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function BPI_WaypointTask.BPI_WaypointTask_C.GetTaskLocation
struct IBPI_WaypointTask_C_GetTaskLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


