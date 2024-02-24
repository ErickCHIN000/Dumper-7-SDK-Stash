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

// 0x38 (0x38 - 0x0)
// Function ALL_WSP_Calm.ALL_WSP_Calm_C.IdleLayer
struct UALL_WSP_Calm_C_IdleLayer_Params
{
public:
	struct FPoseLink                             IdleIn;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       IdleInPlayRate;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSequenceCache                    IdleAnimSequence;                                  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             IdleLayer;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ALL_WSP_Calm.ALL_WSP_Calm_C.WalkLayer
struct UALL_WSP_Calm_C_WalkLayer_Params
{
public:
	struct FPoseLink                             InWalkPose;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FAnimSequenceCache                    WalkAnimSequence;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       InWalkPlayRate;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             WalkLayer;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ALL_WSP_Calm.ALL_WSP_Calm_C.TrotLayer
struct UALL_WSP_Calm_C_TrotLayer_Params
{
public:
	struct FPoseLink                             InTrotPose;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       InTrotPlayRate;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSequenceCache                    TrotAnimSequence;                                  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             TrotLayer;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ALL_WSP_Calm.ALL_WSP_Calm_C.AnimGraph
struct UALL_WSP_Calm_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ALL_WSP_Calm.ALL_WSP_Calm_C.ExecuteUbergraph_ALL_WSP_Calm
struct UALL_WSP_Calm_C_ExecuteUbergraph_ALL_WSP_Calm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


