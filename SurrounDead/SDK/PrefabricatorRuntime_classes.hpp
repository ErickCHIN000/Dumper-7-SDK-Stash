#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// Class PrefabricatorRuntime.PrefabActor
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                      PrefabComponent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LastUpdateID;                                      // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_715[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APrefabActor* GetDefaultObj();

	void SavePrefab();
	void RandomizeSeed(struct FRandomStream& InRandom, bool bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};

// 0x0 (0x2B8 - 0x2B8)
// Class PrefabricatorRuntime.ReplicablePrefabActor
class AReplicablePrefabActor : public APrefabActor
{
public:

	static class UClass* StaticClass();
	static class AReplicablePrefabActor* GetDefaultObj();

};

// 0x30 (0x2D0 - 0x2A0)
// Class PrefabricatorRuntime.PrefabComponent
class UPrefabComponent : public USceneComponent
{
public:
	TSoftObjectPtr<class UPrefabricatorAssetInterface> PrefabAssetInterface;                              // 0x2A0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_743[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabComponent* GetDefaultObj();

};

// 0x18 (0x2B0 - 0x298)
// Class PrefabricatorRuntime.PrefabDebugActor
class APrefabDebugActor : public AActor
{
public:
	class AActor*                                Actor;                                             // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ActorData;                                         // 0x2A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class APrefabDebugActor* GetDefaultObj();

};

// 0x50 (0x2E8 - 0x298)
// Class PrefabricatorRuntime.PrefabRandomizer
class APrefabRandomizer : public AActor
{
public:
	bool                                         bRandomizeOnBeginPlay;                             // 0x298(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SeedOffset;                                        // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBuildTimePerFrame;                              // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRandomizationComplete;                           // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bFastSyncBuild;                                    // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_773[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APrefabActor*>                  ActorsToRandomize;                                 // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_775[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APrefabRandomizer* GetDefaultObj();

	void Randomize(int32 InSeed);
};

// 0x48 (0x70 - 0x28)
// Class PrefabricatorRuntime.PrefabricatorProperty
class UPrefabricatorProperty : public UObject
{
public:
	class FString                                PropertyName;                                      // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExportedValue;                                     // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;                        // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsCrossReferencedActor;                           // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_784[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CrossReferencePrefabActorId;                       // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_785[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorProperty* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PrefabricatorRuntime.PrefabricatorEventListener
class UPrefabricatorEventListener : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPrefabricatorEventListener* GetDefaultObj();

	void PostSpawn(class APrefabActor* Prefab);
};

// 0x10 (0x38 - 0x28)
// Class PrefabricatorRuntime.PrefabricatorAssetInterface
class UPrefabricatorAssetInterface : public UObject
{
public:
	TSubclassOf<class UPrefabricatorEventListener> EventListener;                                     // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorAssetInterface* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class PrefabricatorRuntime.PrefabricatorAsset
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>       ActorData;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EComponentMobility                PrefabMobility;                                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 LastUpdateID;                                      // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UThumbnailInfo*                        ThumbnailInfo;                                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Version;                                           // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorAsset* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class PrefabricatorRuntime.PrefabricatorAssetCollection
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem> Prefabs;                                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                       Version;                                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorAssetCollection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class PrefabricatorRuntime.PrefabricatorAssetUserData
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>           PrefabActor;                                       // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ItemId;                                            // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPrefabricatorAssetUserData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPrefabricatorBlueprintLibrary* GetDefaultObj();

	void UnlinkPrefab(class APrefabActor* PrefabActor);
	class APrefabActor* SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, struct FTransform& Transform, int32 Seed);
	void SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
	void RandomizePrefab(class APrefabActor* PrefabActor, struct FRandomStream& InRandom);
	void GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
	class APrefabActor* FindTopMostPrefabActor(class AActor* InActor);
};

// 0x68 (0xA0 - 0x38)
// Class PrefabricatorRuntime.PrefabricatorSettings
class UPrefabricatorSettings : public UDeveloperSettings
{
public:
	enum class EPrefabricatorPivotPosition       PivotPosition;                                     // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDynamicUpdate;                               // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          IgnoreBoundingBoxForObjects;                       // 0x40(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        DefaultThumbnailPitch;                             // 0x90(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultThumbnailYaw;                               // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultThumbnailZoom;                              // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_871[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrefabricatorSettings* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class UPrefabSeedLinkerComponent* GetDefaultObj();

};

// 0x18 (0x2B0 - 0x298)
// Class PrefabricatorRuntime.PrefabSeedLinker
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>   LinkedActors;                                      // 0x298(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*            SeedLinkerComponent;                               // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class APrefabSeedLinker* GetDefaultObj();

};

}


