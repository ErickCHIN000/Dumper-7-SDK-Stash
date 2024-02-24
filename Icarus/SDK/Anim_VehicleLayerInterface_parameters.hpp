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
// Function Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C.VehicleUpperBody
struct IAnim_VehicleLayerInterface_C_VehicleUpperBody_Params
{
public:
	struct FPoseLink                             UpperInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleUpperBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C.VehicleLowerBody
struct IAnim_VehicleLayerInterface_C_VehicleLowerBody_Params
{
public:
	struct FPoseLink                             LowerInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}


