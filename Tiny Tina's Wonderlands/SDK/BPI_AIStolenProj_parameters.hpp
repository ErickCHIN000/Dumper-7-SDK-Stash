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
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptDetonate_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile
struct IBPI_AIStolenProj_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
{
public:
	enum class EOakElementalType                 StolenProjectileElement;                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptLerpToSocket_Params
{
public:
	class FName                                  SocketToLerpTo;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LerpDuration;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptReturnTo_Params
{
public:
	enum class Enum_AIThrowAtStyle               ReturnTo;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetSocket;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPrediction;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnglePercent;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DirectionOffset;                                   // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                               TargetOffset;                                      // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpecifiedActor;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldLocation;                                     // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptAttach_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptDestroy_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm
struct IBPI_AIStolenProj_C_AIStolenProj_AttemptDisarm_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


