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
// Function TwAIFramework.TwAIHelperLibrary.InvalidRotation
struct UTwAIHelperLibrary_InvalidRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwAIFramework.TwAIHelperLibrary.InvalidOrientation
struct UTwAIHelperLibrary_InvalidOrientation_Params
{
public:
	struct FQuat                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TwAIFramework.TwAIHelperLibrary.InvalidLocation
struct UTwAIHelperLibrary_InvalidLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TwAIFramework.TwAIHelperLibrary.InvalidDirection
struct UTwAIHelperLibrary_InvalidDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwAIFramework.TwAIPatrolableInterface.SetAIPatrolPlotter
struct ITwAIPatrolableInterface_SetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    InPatrolPlotter;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwAIFramework.TwAIPatrolableInterface.GetAIPatrolPlotter
struct ITwAIPatrolableInterface_GetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwAIFramework.TwAIPatrolPlotter.IsClosedLoopPatrol
struct ATwAIPatrolPlotter_IsClosedLoopPatrol_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolSplineComponent
struct ATwAIPatrolPlotter_GetPatrolSplineComponent_Params
{
public:
	class UTwAIPatrolSplineComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolLocationAtPoint
struct ATwAIPatrolPlotter_GetPatrolLocationAtPoint_Params
{
public:
	int32                                        PointIdx;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function TwAIFramework.TwAIPatrolPlotter.GetNearestPatrolPointToLoc
struct ATwAIPatrolPlotter_GetNearestPatrolPointToLoc_Params
{
public:
	struct FVector                               TestLocation;                                      // 0x0(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointIdx;                                          // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwAIFramework.TwAIPatrolPlotter.GetMaxDefinedPatrolPoints
struct ATwAIPatrolPlotter_GetMaxDefinedPatrolPoints_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


