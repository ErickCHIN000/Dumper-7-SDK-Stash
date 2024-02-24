#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class E_WorldPersistenceLoadState : uint8
{
	NotSet                         = 0,
	FirstLaunch                    = 1,
	SubsequentLaunch               = 2,
	DirtyRealmFirstLaunch          = 3,
	E_MAX                          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct NWXWorldPersistence.PersistenceFileMetaData
struct FPersistenceFileMetaData
{
public:
	class FString                                SaveFileNameAsWritten;                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UtcTimestamp;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentChangelist;                                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CompatibleChangelist;                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BranchName;                                        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeployName;                                        // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWXWorldPersistence.PersistentNamedData
struct FPersistentNamedData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXWorldPersistence.PersistenceObjectWrapper
struct FPersistenceObjectWrapper
{
public:
	uint8                                        Pad_D02[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct NWXWorldPersistence.PersistentObjectData
struct FPersistentObjectData : public FPersistentNamedData
{
public:
	class FString                                TypeName;                                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistenceObjectWrapper             PropertiesData;                                    // 0x18(0x10)(NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct NWXWorldPersistence.PersistentComponentData
struct FPersistentComponentData : public FPersistentObjectData
{
public:
};

// 0x78 (0xA0 - 0x28)
// ScriptStruct NWXWorldPersistence.PersistentActorData
struct FPersistentActorData : public FPersistentObjectData
{
public:
	uint8                                        Pad_D1F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPersistentComponentData>      ComponentData;                                     // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct NWXWorldPersistence.PersistentDestroyedLevelActorData
struct FPersistentDestroyedLevelActorData : public FPersistentNamedData
{
public:
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct NWXWorldPersistence.PersistentSpawnedActorData
struct FPersistentSpawnedActorData : public FPersistentActorData
{
public:
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct NWXWorldPersistence.PersistentLevelActorData
struct FPersistentLevelActorData : public FPersistentActorData
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct NWXWorldPersistence.PersistentLevelData
struct FPersistentLevelData : public FPersistentNamedData
{
public:
	TArray<struct FPersistentLevelActorData>     LevelActorData;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistentSpawnedActorData>   SpawnedActorData;                                  // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPersistentDestroyedLevelActorData> DestroyedActorData;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXWorldPersistence.PropertyObjectConnection
struct FPropertyObjectConnection
{
public:
	uint8                                        Pad_D39[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXWorldPersistence.PersistenceStateTracker
struct FPersistenceStateTracker
{
public:
	TMap<TWeakObjectPtr<class UObject>, struct FGuid> ObjectGuidConnectionsForStore;                     // 0x0(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct FGuid, TWeakObjectPtr<class UObject>> ObjectGuidConnectionsForRestore;                   // 0x50(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyObjectConnection>     ReferencesToConnectOnRestore;                      // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UObject>>        RestoredObjects;                                   // 0xB0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D47[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A8 - 0x8)
// ScriptStruct NWXWorldPersistence.PersistentWorldData
struct FPersistentWorldData : public FPersistentNamedData
{
public:
	struct FPersistenceFileMetaData              FileMetaData;                                      // 0x8(0x70)(NativeAccessSpecifierPublic)
	TArray<struct FPersistentLevelData>          LevelData;                                         // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPersistentObjectData> GenericDataMap;                                    // 0x88(0x50)(NativeAccessSpecifierPublic)
	struct FPersistenceStateTracker              StateTracker;                                      // 0xD8(0xD0)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXWorldPersistence.DestroyedLevelActorList
struct FDestroyedLevelActorList
{
public:
	TArray<struct FPersistentDestroyedLevelActorData> DestroyedActors;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


