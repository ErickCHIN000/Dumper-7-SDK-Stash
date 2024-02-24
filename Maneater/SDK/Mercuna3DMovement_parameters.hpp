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

// 0xC (0xC - 0x0)
// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity
struct UMercuna3DMovementComponent_SetVelocity_Params
{
public:
	struct FVector                               NewVelocity;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity
struct UMercuna3DMovementComponent_SetAngularVelocity_Params
{
public:
	struct FVector                               NewAngVel;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity
struct UMercuna3DMovementComponent_GetLocalVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate
struct UMercuna3DMovementComponent_GetLocalRotationRate_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse
struct UMercuna3DMovementComponent_AddImpulse_Params
{
public:
	struct FVector                               Impulse;                                           // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


