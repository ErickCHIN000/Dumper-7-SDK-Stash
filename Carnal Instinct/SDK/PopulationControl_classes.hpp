#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// Class PopulationControl.BlockZonePC
class ABlockZonePC : public AActor
{
public:
	class UBoxComponent*                         BoxComponent;                                      // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ABlockZonePC* GetDefaultObj();

};

// 0x180 (0x3A0 - 0x220)
// Class PopulationControl.PopulationControlSpawner
class APopulationControlSpawner : public AActor
{
public:
	class UBoxComponent*                         BoxComponent;                                      // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInstancedStaticMeshComponent*         StaticMeshInstanceComponent;                       // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInstancedStaticMeshComponent*         SpawnPointInstanceComponent;                       // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AllBoxCount;                                       // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnBoxCount;                                     // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NpcForSpawn;                                       // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_270[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpawnerStatus;                                     // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CacheStatus;                                       // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveParameters;                                   // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShuffleSpawnPoints;                               // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShuffleTime;                                       // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldDirectorSupport;                             // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDebug;                                          // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDebugChanceSpawn;                               // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPointsInEditor;                               // 0x273(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowEmptyPointsInEditor;                          // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidePointsInGame;                                 // 0x275(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnBoxScale;                                     // 0x278(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECheckFilter                      CheckFilter;                                       // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        buildMatrixRate;                                   // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_288[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectsCollision;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            PlayersClassesArr;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNpcStructData>                NpcParametersArr;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       TempBuildBoxLeftArr;                               // 0x2D0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       TempBuildBoxRightArr;                              // 0x2E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       TempBuildBoxUpArr;                                 // 0x2F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       TempBuildBoxDownArr;                               // 0x300(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29F[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnBoxSize;                                      // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SpawnBoxExtent;                                    // 0x33C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPointStructData>              PointsArr;                                         // 0x348(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNpcStructData>                SpawnDataArr;                                      // 0x358(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FVector                               NowActorLocation;                                  // 0x368(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               EqualActorLocation;                                // 0x374(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeferredConstructRate;                             // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SpawnRate;                                         // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WorkerRate;                                        // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCalculatedInEditor;                               // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2A9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABlockZonePC*>                  blockingBoxesArr;                                  // 0x390(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APopulationControlSpawner* GetDefaultObj();

	void SaveWithoutClearCache();
	void SaveAndClearCache();
	void RebuildSpawnPoints();
	bool GetIsExcludeNpcFromThePopulationControl(class AActor* SetActorRef, bool* bIsValidActor);
	bool ExternalControlSpawnNPC(class AActor* SpawnActorRef);
	bool ExternalControlDestroyNPC(class AActor* DestroyActorRef);
	void ExcludeThisNpcFromThePopulationControl(enum class ETypeExclude SetType, class AActor* SetActorRef, bool* bIsValidActor);
	void ClearedThisNpcFromThePopulationControl(class AActor* SetActorRef, bool* bIsCleared);
};

}


