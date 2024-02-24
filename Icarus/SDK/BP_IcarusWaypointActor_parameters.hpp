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
// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.GetOwningPlayerState
struct ABP_IcarusWaypointActor_C_GetOwningPlayerState_Params
{
public:
	class AIcarusPlayerState*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.CleanUpWaypointRefs
struct ABP_IcarusWaypointActor_C_CleanUpWaypointRefs_Params
{
public:
	int32                                        FoundAddedWaypointsIndex;                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundWaypointLocationIndex;                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ReceiveEndPlay
struct ABP_IcarusWaypointActor_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.InitForPlayer
struct ABP_IcarusWaypointActor_C_InitForPlayer_Params
{
public:
	class AIcarusPlayerState*                    OwningPlayerState;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ExecuteUbergraph_BP_IcarusWaypointActor
struct ABP_IcarusWaypointActor_C_ExecuteUbergraph_BP_IcarusWaypointActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    K2Node_Event_OwningPlayerState;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


