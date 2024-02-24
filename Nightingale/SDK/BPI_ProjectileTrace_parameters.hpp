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
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.RegisterWhenTraceReady
struct IBPI_ProjectileTrace_C_RegisterWhenTraceReady_Params
{
public:
	class UBP_ProjectileTraceComponent_C*        Registree;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.IsReadyToTrace
struct IBPI_ProjectileTrace_C_IsReadyToTrace_Params
{
public:
	bool                                         IsReady;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.ShouldHideOnFirstCollision
struct IBPI_ProjectileTrace_C_ShouldHideOnFirstCollision_Params
{
public:
	bool                                         ShouldStopTrace;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceOffset
struct IBPI_ProjectileTrace_C_TraceOffset_Params
{
public:
	struct FTransform                            TraceOffset;                                       // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceIgnoreActors
struct IBPI_ProjectileTrace_C_TraceIgnoreActors_Params
{
public:
	TArray<class AActor*>                        TraceIgnoreActors;                                 // 0x0(0x10)(Parm, OutParm)
};

// 0x109 (0x109 - 0x0)
// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceImpactDetected
struct IBPI_ProjectileTrace_C_TraceImpactDetected_Params
{
public:
	double                                       TimeToImpact;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitVelocity;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x20(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bSuccess;                                          // 0x108(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


