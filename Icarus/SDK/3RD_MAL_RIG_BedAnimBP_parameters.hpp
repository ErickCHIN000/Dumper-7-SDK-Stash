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

// 0x20 (0x20 - 0x0)
// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleLowerBody
struct UThreeRD_MAL_RIG_BedAnimBP_C_VehicleLowerBody_Params
{
public:
	struct FPoseLink                             LowerInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleUpperBody
struct UThreeRD_MAL_RIG_BedAnimBP_C_VehicleUpperBody_Params
{
public:
	struct FPoseLink                             UpperInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleUpperBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.AnimGraph
struct UThreeRD_MAL_RIG_BedAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP
struct UThreeRD_MAL_RIG_BedAnimBP_C_ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


