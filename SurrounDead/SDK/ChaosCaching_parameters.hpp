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
// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
struct AChaosCacheManager_TriggerComponentByCache_Params
{
public:
	class FName                                  InCacheName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.TriggerComponent
struct AChaosCacheManager_TriggerComponent_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCaching.ChaosCacheManager.SetStartTime
struct AChaosCacheManager_SetStartTime_Params
{
public:
	float                                        InStartTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.SetCacheCollection
struct AChaosCacheManager_SetCacheCollection_Params
{
public:
	class UChaosCacheCollection*                 InCacheCollection;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
struct AChaosCacheManager_ResetSingleTransform_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
struct AChaosCacheManager_EnablePlaybackByCache_Params
{
public:
	class FName                                  InCacheName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1265[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.EnablePlayback
struct AChaosCacheManager_EnablePlayback_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1287[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


