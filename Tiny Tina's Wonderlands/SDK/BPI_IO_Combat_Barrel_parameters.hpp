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
// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
struct IBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
struct IBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params
{
public:
	struct FVector                               ThrowVector;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Force;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotatorForSpin;                                    // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        FuseSpeedScale;                                    // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AdditiveVector;                                    // 0x20(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
struct IBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params
{
public:
	bool                                         PhysicsOn_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


