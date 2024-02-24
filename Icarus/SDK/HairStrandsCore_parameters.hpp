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
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomAsset*                           InGroomAsset;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumInterpolationPoints;                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMatchingSection;                                 // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           InGroomAsset;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumInterpolationPoints;                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_507[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMatchingSection;                                 // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params
{
public:
	class FString                                DesiredPackagePath;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomAsset*                           GroomAsset;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                        GeometryCache;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInterpolationPoints;                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_536[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchingSection;                                   // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           GroomAsset;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                        GeometryCache;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInterpolationPoints;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchingSection;                                   // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_562[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetGroomAsset
struct UGroomComponent_SetGroomAsset_Params
{
public:
	class UGroomAsset*                           Asset;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetBindingAsset
struct UGroomComponent_SetBindingAsset_Params
{
public:
	class UGroomBindingAsset*                    InBinding;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


