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

// 0x18 (0x18 - 0x0)
// Function MeshWidget.MeshWidget.UpdatePerInstanceBuffer
struct UMeshWidget_UpdatePerInstanceBuffer_Params
{
public:
	int32                                        MeshId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector4>                      Data;                                              // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MeshWidget.MeshWidget.UpdateMeshInstance
struct UMeshWidget_UpdateMeshInstance_Params
{
public:
	int32                                        MeshId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceId;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshInstanceData                     NewData;                                           // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MeshWidget.MeshWidget.GetCachedAllottedGeometry
struct UMeshWidget_GetCachedAllottedGeometry_Params
{
public:
	struct FGeometry                             ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshWidget.MeshWidget.EnableInstancing
struct UMeshWidget_EnableInstancing_Params
{
public:
	int32                                        MeshId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceCount;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshWidget.MeshWidget.ConvertToMaterialInstanceDynamic
struct UMeshWidget_ConvertToMaterialInstanceDynamic_Params
{
public:
	int32                                        MeshId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MeshWidget.MeshWidget.ClearRuns
struct UMeshWidget_ClearRuns_Params
{
public:
	int32                                        NumRuns;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MeshWidget.MeshWidget.AddRenderRun
struct UMeshWidget_AddRenderRun_Params
{
public:
	int32                                        InMeshIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InInstanceOffset;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumInstances;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshWidget.MeshWidget.AddMeshWithInstancing
struct UMeshWidget_AddMeshWithInstancing_Params
{
public:
	class USlateVectorArtData*                   InMeshData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceCount;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshWidget.MeshWidget.AddMesh
struct UMeshWidget_AddMesh_Params
{
public:
	class USlateVectorArtData*                   InMeshData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_454[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


