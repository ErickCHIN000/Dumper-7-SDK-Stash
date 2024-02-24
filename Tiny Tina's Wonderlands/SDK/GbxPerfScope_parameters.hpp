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

// 0x28 (0x28 - 0x0)
// Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots
struct UGbxPerfScopePerfSampleData_GetMapGPUHotspots_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSamples;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


