#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x350 (0x378 - 0x28)
// Class NWXWorldPersistence.PersistentWorldState
class UPersistentWorldState : public UObject
{
public:
	TMap<class FString, class UObject*>          GenericDataMap;                                    // 0x28(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_9F4[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FDestroyedLevelActorList> DestroyedPersistentLevelActors;                    // 0x98(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_9F7[0x290];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPersistentWorldState* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class NWXWorldPersistence.WorldPersistenceTestActorComponent
class UWorldPersistenceTestActorComponent : public UActorComponent
{
public:
	uint8                                        Pad_A0F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTestUnsavedProperty;                              // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestSaveGameProperty;                             // 0xA9(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A14[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldPersistenceTestActorComponent* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class NWXWorldPersistence.WorldPersistenceTestSceneComponent
class UWorldPersistenceTestSceneComponent : public USceneComponent
{
public:
	uint8                                        Pad_A30[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTestUnsavedProperty;                              // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestSaveGameProperty;                             // 0x2B1(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A33[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldPersistenceTestSceneComponent* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class NWXWorldPersistence.WorldPersistenceTestActorComponentOptOut
class UWorldPersistenceTestActorComponentOptOut : public UActorComponent
{
public:
	uint8                                        Pad_A45[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldPersistenceTestActorComponentOptOut* GetDefaultObj();

};

// 0x30 (0x2D0 - 0x2A0)
// Class NWXWorldPersistence.WorldPersistenceTestActor
class AWorldPersistenceTestActor : public AActor
{
public:
	uint8                                        Pad_A6A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTestUnsavedProperty;                              // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestSaveGameProperty;                             // 0x2A9(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A77[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldPersistenceTestActorComponent*   TestActorComponent;                                // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorldPersistenceTestSceneComponent*   TestSceneComponent;                                // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorldPersistenceTestActorComponent*   TestDynamicActorComponent;                         // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorldPersistenceTestActorComponentOptOut* TestActorComponentOptOut;                          // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWorldPersistenceTestActor* GetDefaultObj();

};

// 0x8 (0x2A8 - 0x2A0)
// Class NWXWorldPersistence.WorldPersistenceTestActorOptOut
class AWorldPersistenceTestActorOptOut : public AActor
{
public:
	uint8                                        Pad_AA5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWorldPersistenceTestActorOptOut* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NWXWorldPersistence.WorldPersistenceObjectInterface
class IWorldPersistenceObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWorldPersistenceObjectInterface* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void OnPersistentDataRestored();
	void OnLinkedReferencesRestored();
};

// 0x40 (0x68 - 0x28)
// Class NWXWorldPersistence.WorldPersistenceSettings
class UWorldPersistenceSettings : public UObject
{
public:
	class FString                                SavedWorldDirectoryName;                           // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFinalSave;                                  // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePeriodicSave;                               // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoSaveWorldPeriodMinutes;                        // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddTimestampToSaveFiles;                          // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadWorldStateOnStartup;                          // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadWorldStateFromFile;                           // 0x42(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B50[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeploymentName;                                    // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNameToLoad;                                    // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWorldPersistenceSettings* GetDefaultObj();

	class FString GetUnadornedWorldSaveFileFullName(class UWorld* World);
	class FString GetSaveDirectorySettingOrDefault();
	class FString GetPeriodicWorldSaveFileFullName(class UWorld* World);
	class FString GetLoadPersistenceFileFullName(class UWorld* World);
	class FString GetFinalWorldSaveFileFullName(class UWorld* World);
};

// 0x38 (0x68 - 0x30)
// Class NWXWorldPersistence.WorldPersistenceSubsystem
class UWorldPersistenceSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnTrackingRunningWorld;                            // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPersistentWorldState*                 PersistentWorldState;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>         ActorsTrackedForPossibleDelete;                    // 0x50(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UWorld>                 CurrentlyTrackedWorld;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWorldPersistenceSubsystem* GetDefaultObj();

	bool WorldStateIsLoadedFromPersistence();
	void StoreGenericObjectMap(TMap<class FString, class UObject*>& GenericDataMap, bool* Success);
	bool StoreGenericObject(const class FString& Key, class UObject* Object);
	void SavePersistentWorldDataToFile(const class FString& SaveFilePath);
	void RestoreWorld(class UWorld* World);
	void OnActorDestroyed(class AActor* Actor);
	void MaybeLoadPersistentWorldDataFromSettings();
	void LoadWorldDataFromFile(const class FString& SaveFilePath);
	void LoadWorldDataFromBackend(const class FString& BackendName);
	bool IsTrackingRunningWorld();
	bool HasPersistenceBeenAppliedToWorld();
	void HandlePreLoadMap(struct FWorldContext& WorldContext, const class FString& MapName);
	void HandlePostLoadMap(class UWorld* World);
	void HandleLevelRemovedFromWorld(class ULevel* Level, class UWorld* World);
	void HandleLevelAddedToWorld(class ULevel* Level, class UWorld* World);
	enum class E_WorldPersistenceLoadState GetLoadState();
	void GetGenericObjectMap(TMap<class FString, class UObject*>* GenericDataMap, bool* Success);
	bool GetGenericObject(const class FString& Key, class UObject** Object);
};

}


