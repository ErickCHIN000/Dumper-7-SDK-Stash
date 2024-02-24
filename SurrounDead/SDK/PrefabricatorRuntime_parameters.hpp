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
// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
struct APrefabActor_RandomizeSeed_Params
{
public:
	struct FRandomStream                         InRandom;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
struct APrefabActor_IsPrefabOutdated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
struct APrefabActor_GetPrefabAsset_Params
{
public:
	class UPrefabricatorAsset*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
struct APrefabRandomizer_Randomize_Params
{
public:
	int32                                        InSeed;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
struct UPrefabricatorEventListener_PostSpawn_Params
{
public:
	class APrefabActor*                          Prefab;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
struct UPrefabricatorBlueprintLibrary_UnlinkPrefab_Params
{
public:
	class APrefabActor*                          PrefabActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
struct UPrefabricatorBlueprintLibrary_SpawnPrefab_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrefabricatorAssetInterface*          Prefab;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APrefabActor*                          ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
struct UPrefabricatorBlueprintLibrary_SetPrefabAsset_Params
{
public:
	class APrefabActor*                          PrefabActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrefabricatorAssetInterface*          Prefab;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReloadPrefab;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_824[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
struct UPrefabricatorBlueprintLibrary_RandomizePrefab_Params
{
public:
	class APrefabActor*                          PrefabActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                         InRandom;                                          // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
struct UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params
{
public:
	class AActor*                                Prefab;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AttachedActors;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor
struct UPrefabricatorBlueprintLibrary_FindTopMostPrefabActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APrefabActor*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


