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

// 0x40 (0x40 - 0x0)
// Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
struct ATritonProbeLocationProvider_FindProbeLocations_Params
{
public:
	struct FBoxSphereBounds                      WorldBoxSphere;                                    // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioOcclusionVoxelDataProvider*      GeoVoxels;                                         // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioOcclusionVoxelDataProvider*      NavVoxels;                                         // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Out_ResultProbeLocations;                          // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}
}


