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

// 0x1 (0x1 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.CanKillcam
struct IICriticalHitInterface_C_CanKillcam_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.GatherIntersections
struct IICriticalHitInterface_C_GatherIntersections_Params
{
public:
	class AActor*                                Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Return;                                            // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EBB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFCHCollisionStruct>           Intersections;                                     // 0x10(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.GetCHBounds
struct IICriticalHitInterface_C_GetCHBounds_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         Box;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.GetTargetHealth
struct IICriticalHitInterface_C_GetTargetHealth_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.ResetPrediction
struct IICriticalHitInterface_C_ResetPrediction_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ICriticalHitInterface.ICriticalHitInterface_C.PredictMovement
struct IICriticalHitInterface_C_PredictMovement_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


