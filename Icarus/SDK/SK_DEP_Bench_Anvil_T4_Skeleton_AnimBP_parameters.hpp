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
// Function SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP.SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C.AnimGraph
struct USK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP.SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C.BlueprintUpdateAnimation
struct USK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP.SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C.ExecuteUbergraph_SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP
struct USK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_C_ExecuteUbergraph_SK_DEP_Bench_Anvil_T4_Skeleton_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProcessorBase_C*                   K2Node_DynamicCast_AsBP_Processor_Base;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


