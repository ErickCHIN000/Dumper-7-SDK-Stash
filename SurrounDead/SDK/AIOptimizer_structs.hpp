#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDespawnMethod : uint8
{
	UseQueue                       = 0,
	Immediately                    = 1,
	EDespawnMethod_MAX             = 2,
};

enum class EAIOFeaturesFlags : uint8
{
	AIBrain                        = 0,
	MovementComponent              = 1,
	Visibility                     = 2,
	Collision                      = 3,
	Animations                     = 4,
	ActorTick                      = 5,
	Shadows                        = 6,
	EAIOFeaturesFlags_MAX          = 7,
};

enum class EAIODebugGroup : uint8
{
	Undefined                      = 0,
	Spawned                        = 1,
	Despawned                      = 2,
	PendingSpawn                   = 3,
	PendingDespawn                 = 4,
	SpawnedClose                   = 5,
	SpawnedMedium                  = 6,
	SpawnedFar                     = 7,
	NotUpdated                     = 8,
	EAIODebugGroup_MAX             = 9,
};

enum class EAIOSelectSpawnPointsMethod : uint8
{
	UseRandomPoints                = 0,
	UseSpecifiedSpawnPoints        = 1,
	EAIOSelectSpawnPointsMethod_MAX = 2,
};

enum class EAIORespawnMethod : uint8
{
	Undefined                      = 0,
	AllAtOnce                      = 1,
	EachIndividually               = 2,
	EAIORespawnMethod_MAX          = 3,
};

enum class EAIOSpawnPointsProjectionMethod : uint8
{
	None                           = 0,
	Geometry                       = 1,
	Navigation                     = 2,
	EAIOSpawnPointsProjectionMethod_MAX = 3,
};

enum class EAIOStartSpawningMethod : uint8
{
	None                           = 0,
	SpawnOnGameStart               = 1,
	SpawnOnRadius                  = 2,
	SpawnOnRegion                  = 3,
	EAIOStartSpawningMethod_MAX    = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct AIOptimizer.AIOSubjectHandle
struct FAIOSubjectHandle
{
public:
	int32                                        HandleId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AIOptimizer.AIODespawnedSubject
struct FAIODespawnedSubject
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    Class;                                             // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnRadiusSquared;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Priority;                                          // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIOData_Base*                         Data;                                              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIOSubjectHandle                     Handle;                                            // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bIsForcedToSpawn : 1;                              // Mask: 0x1, PropSize: 0x10x7C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeRespawnedOnlyByHandle : 1;                   // Mask: 0x2, PropSize: 0x10x7C(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_595[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Spawner;                                           // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIOptimizer.AIOSubject
struct FAIOSubject
{
public:
	class UAIOSubjectComponent*                  Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ComponentOwner;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AIOptimizer.AIOInvoker
struct FAIOInvoker
{
public:
	class UAIOInvokerComponent*                  Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ComponentOwner;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIOptimizer.AIOptimizationLayer
struct FAIOptimizationLayer
{
public:
	float                                        LayerRadius;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AIOptimizer.AIODebugSubjectData
struct FAIODebugSubjectData
{
public:
	int32                                        Layer;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SubjectLocation;                                   // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InvokerLocation;                                   // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSpawned : 1;                                    // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPending : 1;                                    // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNotUpdated : 1;                                   // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSeen : 1;                                       // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToInvoker;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DespawnRadius;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIOptimizer.AIOPendingSpawnGroup
struct FAIOPendingSpawnGroup
{
public:
	int32                                        SpawnedAmount;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalAmountToSpawn;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct AIOptimizer.AIOPendingRespawnGroup
struct FAIOPendingRespawnGroup
{
public:
	float                                        SpawnGameTime;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIOPendingSpawnGroup                 SpawnGroup;                                        // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AIOptimizer.AIOSpawnPoint
struct FAIOSpawnPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


