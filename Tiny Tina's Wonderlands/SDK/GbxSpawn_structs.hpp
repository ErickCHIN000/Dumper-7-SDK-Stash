#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpawnAnimNotifyAction : uint8
{
	Start                          = 0,
	Stop                           = 1,
	ESpawnAnimNotifyAction_MAX     = 2,
};

enum class EScriptedWarmup : uint8
{
	None                           = 0,
	FirstWave                      = 1,
	AllWaves                       = 2,
	EScriptedWarmup_MAX            = 3,
};

enum class ESpawnerDrawStyle : uint8
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	ESpawnerDrawStyle_MAX          = 4,
};

enum class EScriptedWarmupState : uint8
{
	None                           = 0,
	Activated                      = 1,
	Complete                       = 2,
	EScriptedWarmupState_MAX       = 3,
};

enum class EEncounterAdvanceType : uint8
{
	All                            = 0,
	Any                            = 1,
	EEncounterAdvanceType_MAX      = 2,
};

enum class ESpawnSystemStreamStyle : uint8
{
	MapStartSynchronous            = 0,
	MapStartAsynchronous           = 1,
	ESpawnSystemStreamStyle_MAX    = 2,
};

enum class ESpawnerType : uint8
{
	None                           = 0,
	Level                          = 1,
	Static                         = 2,
	Dynamic                        = 3,
	ESpawnerType_MAX               = 4,
};

enum class ESpawnerActorState : uint8
{
	Unborn                         = 0,
	Alive                          = 1,
	Suspended                      = 2,
	Dead                           = 3,
	ESpawnerActorState_MAX         = 4,
};

enum class ESpawnPointUseType : uint8
{
	Self                           = 0,
	List                           = 1,
	ManualGroup                    = 2,
	ClusterGroup                   = 3,
	ESpawnPointUseType_MAX         = 4,
};

enum class ESpawnPointFilter : uint8
{
	Any                            = 0,
	All                            = 1,
	NotAny                         = 2,
	NotAll                         = 3,
	ESpawnPointFilter_MAX          = 4,
};

enum class ESpawnLimitType : uint8
{
	None                           = 0,
	Spawner                        = 1,
	SpawnerGroup                   = 2,
	ESpawnLimitType_MAX            = 3,
};

enum class ESpawnerCritical : uint8
{
	NotCritical                    = 0,
	AlwaysSpawn                    = 1,
	Critical                       = 2,
	ESpawnerCritical_MAX           = 3,
};

enum class EIrrelevantAction : uint8
{
	Suspend                        = 0,
	Remove                         = 1,
	Nothing                        = 2,
	EIrrelevantAction_MAX          = 3,
};

enum class ERespawnStyle : uint8
{
	Timed                          = 0,
	Level                          = 1,
	Never                          = 2,
	ERespawnStyle_MAX              = 3,
};

enum class ESpawnStretchType : uint8
{
	None                           = 0,
	StartPoint                     = 1,
	EndPoint                       = 2,
	Dynamic                        = 3,
	ESpawnStretchType_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GbxSpawn.SpawnerActorData
struct FSpawnerActorData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D9[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnFactory*                         Factory;                                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DA[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x4F8 - 0x4F8)
// ScriptStruct GbxSpawn.ActionState_SpawnAnim
struct FActionState_SpawnAnim : public FActionState_Anim
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxSpawn.SpawnDLCItem
struct FSpawnDLCItem
{
public:
	TSoftObjectPtr<class USpawnDLCData>          Data;                                              // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          IsEnabled;                                         // 0x28(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxSpawn.SpawnerSoftPath
struct FSpawnerSoftPath
{
public:
	class FName                                  SpawnerPathName;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnerSubPathString;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxSpawn.SpawnDLCScriptGroup
struct FSpawnDLCScriptGroup
{
public:
	class FString                                Description;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             MaximumScriptedSpawnersPerGroupOverride;           // 0x10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpawnerSoftPath>              SpawnerSoftPaths;                                  // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAlwaysEnabledDuringEvent;                         // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E5[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxSpawn.SpawnDLCGroupItem
struct FSpawnDLCGroupItem
{
public:
	TArray<struct FSpawnerSoftPath>              SpawnerSoftPaths;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class USpawnOptionData*                      SpawnOptions;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysEnabledDuringEvent;                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxSpawn.SpawnDLCGroup
struct FSpawnDLCGroup
{
public:
	class FString                                Description;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpawnDLCGroupItem>            Replacements;                                      // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxSpawn.SpawnerData
struct FSpawnerData
{
public:
	class USpawnManager*                         Manager;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9EB[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASpawner*                              Spawner;                                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerComponent*                     SpawnerComp;                                       // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerStyle*                         SpawnerStyle;                                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9EF[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnerActorData>             Actors;                                            // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9F0[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        DeadActors;                                        // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class USpawnDLCScript*>               DLCScripts;                                        // 0xD8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9F1[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxSpawn.SpawnerLinkData
struct FSpawnerLinkData
{
public:
	class AActor*                                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASpawner*                              Spawner;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTeamComponent*                        TeamComp;                                          // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnerComponent*                     SpawnerComp;                                       // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnerLinkComponent*                 LinkComp;                                          // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GbxSpawn.SpawnBunchListItem
struct FSpawnBunchListItem
{
public:
	class USpawnOptionData*                      SpawnOptions;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             NumActorsParam;                                    // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  SpawnPointGroupName;                               // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxSpawn.EncounterAdvanceData
struct FEncounterAdvanceData
{
public:
	enum class EEncounterAdvanceType             Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTimer;                                         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePercent;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// ScriptStruct GbxSpawn.SpawnLimitData
struct FSpawnLimitData
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DisallowedTypes;                                   // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ESpawnPointFilter                 TagFilterType;                                     // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             TotalLimit;                                        // 0x48(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bLimitTotal;                                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AliveLimit;                                        // 0xD0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bLimitAlive;                                       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayContainerMatchType       TagMatchType;                                      // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A03[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxSpawn.EncounterWave
struct FEncounterWave
{
public:
	class USpawnerStyle*                         SpawnerStyle;                                      // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEncounterAdvanceData                 Advancement;                                       // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WarmupTimer;                                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A07[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpawnLimitData>               Limits;                                            // 0x20(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  SpawnPointGroupName;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxSpawn.SpawnOptionDataSoftPath
struct FSpawnOptionDataSoftPath
{
public:
	class FName                                  SpawnOptionDataPathName;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnOptionDataSubPathString;                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x7 (0x7 - 0x0)
// ScriptStruct GbxSpawn.SpawnDetails
struct FSpawnDetails
{
public:
	enum class ESpawnerCritical                  Critical;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCritical;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERespawnStyle                     RespawnStyle;                                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideRespawnStyle;                             // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIrrelevantAction                 IrrelevantAction;                                  // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideIrrelevantAction;                         // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCritical;                                         // 0x6(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxSpawn.SpawnManagerAsyncRequest
struct FSpawnManagerAsyncRequest
{
public:
	class AActor*                                Context;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnFactory*                         SpawnFactory;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnOptionData*                      SpawnOptions;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnPointComponent*                  SpawnPointComponent;                               // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnerComponent*                     SpawnerComponent;                                  // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Spawned;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Failed;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_A13[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnDetails                         SpawnDetails;                                      // 0x60(0x7)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_A15[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x80 - 0x68)
// ScriptStruct GbxSpawn.SpawnManagerAsyncRequestEntry
struct FSpawnManagerAsyncRequestEntry : public FSpawnManagerAsyncRequest
{
public:
	uint8                                        Pad_A17[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xF0 - 0xD8)
// ScriptStruct GbxSpawn.SpawnPreviewState
struct FSpawnPreviewState : public FPreviewState
{
public:
	class USpawnPointComponent*                  SpawnPointComponent;                               // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpawnFactory*>                 PreviewFactories;                                  // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxSpawn.SpawnPointGroup
struct FSpawnPointGroup
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x8(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TerritoryActorForThisGroup;                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASpawnPoint*>                   SpawnPoints;                                       // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRandomize;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct GbxSpawn.SpawnFactoryData
struct FSpawnFactoryData
{
public:
	class USpawnFactory*                         Factory;                                           // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             WeightParam;                                       // 0x8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                Probability;                                       // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnLimitType                   AliveLimitType;                                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AliveLimitParam;                                   // 0xA0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        AliveLimit;                                        // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxSpawn.PointWidget
struct FPointWidget
{
public:
	struct FTransform                            Point;                                             // 0x0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}


