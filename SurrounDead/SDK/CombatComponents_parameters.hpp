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
// Function CombatComponents.CCCollisionHandlerComponent.UpdateCollidingComponents
struct UCCCollisionHandlerComponent_UpdateCollidingComponents_Params
{
public:
	TArray<struct FCCCollidingComponent>         CollidingComponents;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.UpdateCollidingComponent
struct UCCCollisionHandlerComponent_UpdateCollidingComponent_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Sockets;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.SetActiveCollisionPart
struct UCCCollisionHandlerComponent_SetActiveCollisionPart_Params
{
public:
	enum class ECCCollisionPart                  CollisionPart;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.IsCollisionActivated
struct UCCCollisionHandlerComponent_IsCollisionActivated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.GetActivatedCollisionPart
struct UCCCollisionHandlerComponent_GetActivatedCollisionPart_Params
{
public:
	enum class ECCCollisionPart                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.DrawHitSphere
struct UCCCollisionHandlerComponent_DrawHitSphere_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.DrawDebugTrace
struct UCCCollisionHandlerComponent_DrawDebugTrace_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CombatComponents.CCCollisionHandlerComponent.ActivateCollision
struct UCCCollisionHandlerComponent_ActivateCollision_Params
{
public:
	enum class ECCCollisionPart                  CollisionPart;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CombatComponents.CCRotatingOwnerComponent.StartRotatingWithLimit
struct UCCRotatingOwnerComponent_StartRotatingWithLimit_Params
{
public:
	float                                        MaxPossibleRotation;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DegressPerSecond;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CombatComponents.CCRotatingOwnerComponent.StartRotating
struct UCCRotatingOwnerComponent_StartRotating_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DegressPerSecond;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CombatComponents.CCRotatingOwnerComponent.SetOwnerRotation
struct UCCRotatingOwnerComponent_SetOwnerRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CombatComponents.CCRotatingOwnerComponent.IsRotating
struct UCCRotatingOwnerComponent_IsRotating_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CombatComponents.CCRotatingOwnerInterface.GetDesiredRotation
struct ICCRotatingOwnerInterface_GetDesiredRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


