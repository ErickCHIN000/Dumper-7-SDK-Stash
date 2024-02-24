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
// Function ABP_PostProcessing.ABP_PostProcessing_C.AnimGraph
struct UABP_PostProcessing_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ABP_PostProcessing.ABP_PostProcessing_C.ExecuteUbergraph_ABP_PostProcessing
struct UABP_PostProcessing_C_ExecuteUbergraph_ABP_PostProcessing_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetUnRagdollBlendTime_ReturnValue;        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


