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

// 0x39 (0x39 - 0x0)
// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.receive_snapshot
struct USk_mannequin_proxy_AnimBP_C_Receive_snapshot_Params
{
public:
	struct FPoseSnapshot                         Pose_snapshot;                                     // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnNode;                                        // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.AnimGraph
struct USk_mannequin_proxy_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.init_reference
struct USk_mannequin_proxy_AnimBP_C_Init_reference_Params
{
public:
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue_1;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.ExecuteUbergraph_sk_mannequin_proxy_AnimBP
struct USk_mannequin_proxy_AnimBP_C_ExecuteUbergraph_sk_mannequin_proxy_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


