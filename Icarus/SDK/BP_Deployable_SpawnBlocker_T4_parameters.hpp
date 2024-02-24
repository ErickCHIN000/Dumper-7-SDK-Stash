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
// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.UpdateSpawnBlockerEffects
struct ABP_Deployable_SpawnBlocker_T4_C_UpdateSpawnBlockerEffects_Params
{
public:
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.OnEnergyStateUpdated
struct ABP_Deployable_SpawnBlocker_T4_C_OnEnergyStateUpdated_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4
struct ABP_Deployable_SpawnBlocker_T4_C_ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsActive;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


