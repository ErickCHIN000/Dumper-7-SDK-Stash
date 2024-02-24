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
// Function NWXWorldPersistence.WorldPersistenceObjectInterface.ShouldOptOutOfPersistenceStore
struct IWorldPersistenceObjectInterface_ShouldOptOutOfPersistenceStore_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSettings.GetUnadornedWorldSaveFileFullName
struct UWorldPersistenceSettings_GetUnadornedWorldSaveFileFullName_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSettings.GetSaveDirectorySettingOrDefault
struct UWorldPersistenceSettings_GetSaveDirectorySettingOrDefault_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSettings.GetPeriodicWorldSaveFileFullName
struct UWorldPersistenceSettings_GetPeriodicWorldSaveFileFullName_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSettings.GetLoadPersistenceFileFullName
struct UWorldPersistenceSettings_GetLoadPersistenceFileFullName_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSettings.GetFinalWorldSaveFileFullName
struct UWorldPersistenceSettings_GetFinalWorldSaveFileFullName_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.WorldStateIsLoadedFromPersistence
struct UWorldPersistenceSubsystem_WorldStateIsLoadedFromPersistence_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.StoreGenericObjectMap
struct UWorldPersistenceSubsystem_StoreGenericObjectMap_Params
{
public:
	TMap<class FString, class UObject*>          GenericDataMap;                                    // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B74[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.StoreGenericObject
struct UWorldPersistenceSubsystem_StoreGenericObject_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.SavePersistentWorldDataToFile
struct UWorldPersistenceSubsystem_SavePersistentWorldDataToFile_Params
{
public:
	class FString                                SaveFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.RestoreWorld
struct UWorldPersistenceSubsystem_RestoreWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.OnActorDestroyed
struct UWorldPersistenceSubsystem_OnActorDestroyed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.LoadWorldDataFromFile
struct UWorldPersistenceSubsystem_LoadWorldDataFromFile_Params
{
public:
	class FString                                SaveFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.LoadWorldDataFromBackend
struct UWorldPersistenceSubsystem_LoadWorldDataFromBackend_Params
{
public:
	class FString                                BackendName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.IsTrackingRunningWorld
struct UWorldPersistenceSubsystem_IsTrackingRunningWorld_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.HasPersistenceBeenAppliedToWorld
struct UWorldPersistenceSubsystem_HasPersistenceBeenAppliedToWorld_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2D8 (0x2D8 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandlePreLoadMap
struct UWorldPersistenceSubsystem_HandlePreLoadMap_Params
{
public:
	struct FWorldContext                         WorldContext;                                      // 0x0(0x2C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x2C8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandlePostLoadMap
struct UWorldPersistenceSubsystem_HandlePostLoadMap_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandleLevelRemovedFromWorld
struct UWorldPersistenceSubsystem_HandleLevelRemovedFromWorld_Params
{
public:
	class ULevel*                                Level;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                World;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandleLevelAddedToWorld
struct UWorldPersistenceSubsystem_HandleLevelAddedToWorld_Params
{
public:
	class ULevel*                                Level;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                World;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetLoadState
struct UWorldPersistenceSubsystem_GetLoadState_Params
{
public:
	enum class E_WorldPersistenceLoadState       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetGenericObjectMap
struct UWorldPersistenceSubsystem_GetGenericObjectMap_Params
{
public:
	TMap<class FString, class UObject*>          GenericDataMap;                                    // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C81[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetGenericObject
struct UWorldPersistenceSubsystem_GetGenericObject_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


