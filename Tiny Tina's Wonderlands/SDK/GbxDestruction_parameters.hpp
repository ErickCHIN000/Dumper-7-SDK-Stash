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
// Function GbxDestruction.GbxDestructibleActor.SetMissionCritical
struct AGbxDestructibleActor_SetMissionCritical_Params
{
public:
	bool                                         bCritical;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDestruction.GbxDestructibleActor.SetFracturable
struct AGbxDestructibleActor_SetFracturable_Params
{
public:
	bool                                         bFracturable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDestruction.GbxDestructibleActor.IsFracturable
struct AGbxDestructibleActor_IsFracturable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDestruction.GbxDestructibleComponent.SetFracturable
struct UGbxDestructibleComponent_SetFracturable_Params
{
public:
	bool                                         bFracturable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDestruction.GbxDestructibleComponent.IsFracturable
struct UGbxDestructibleComponent_IsFracturable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
struct UGbxDestructibleComponent_GetTotalPercentFractured_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
struct UGbxDestructibleComponent_GetDamageRequiredToFracture_Params
{
public:
	int32                                        Depth;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


