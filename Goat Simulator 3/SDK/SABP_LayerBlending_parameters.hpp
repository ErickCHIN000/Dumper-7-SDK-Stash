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

// 0x40 (0x40 - 0x0)
// Function SABP_LayerBlending.SABP_LayerBlending_C.AnimGraph
struct USABP_LayerBlending_C_AnimGraph_Params
{
public:
	struct FPoseLink                             Base_Layer;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Overlay_Layer;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Base_Pose_Layer;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SABP_LayerBlending.SABP_LayerBlending_C.ExecuteUbergraph_SABP_LayerBlending
struct USABP_LayerBlending_C_ExecuteUbergraph_SABP_LayerBlending_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


