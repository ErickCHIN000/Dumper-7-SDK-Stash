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

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOBPLibrary.SetCharacterMovementEnabled
struct UAIOBPLibrary_SetCharacterMovementEnabled_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOBPLibrary.SetAILogicEnabled
struct UAIOBPLibrary_SetAILogicEnabled_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOBPLibrary.RemoveHandle
struct UAIOBPLibrary_RemoveHandle_Params
{
public:
	TArray<struct FAIOSubjectHandle>             Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAIOSubjectHandle                     Handle;                                            // 0x10(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.AIOBPLibrary.IsHandleValid
struct UAIOBPLibrary_IsHandleValid_Params
{
public:
	struct FAIOSubjectHandle                     Handle;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.AIOBPLibrary.GetSubjectTag
struct UAIOBPLibrary_GetSubjectTag_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOBPLibrary.GetString
struct UAIOBPLibrary_GetString_Params
{
public:
	struct FAIOSubjectHandle                     Handle;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.AIOBPLibrary.GetInvokerTag
struct UAIOBPLibrary_GetInvokerTag_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOBPLibrary.FindHandle
struct UAIOBPLibrary_FindHandle_Params
{
public:
	TArray<struct FAIOSubjectHandle>             Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAIOSubjectHandle                     HandleToFind;                                      // 0x10(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOBPLibrary.DebugAIOptimizer
struct UAIOBPLibrary_DebugAIOptimizer_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOBPLibrary.AddUniqueHandle
struct UAIOBPLibrary_AddUniqueHandle_Params
{
public:
	TArray<struct FAIOSubjectHandle>             Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAIOSubjectHandle                     Handle;                                            // 0x10(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOInvokerComponent.DebugAIOptimizer
struct UAIOInvokerComponent_DebugAIOptimizer_Params
{
public:
	bool                                         bDebug;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.UnregisterSubject
struct UAIOptimizerSubsystem_UnregisterSubject_Params
{
public:
	class UAIOSubjectComponent*                  SubjectComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.UnregisterInvoker
struct UAIOptimizerSubsystem_UnregisterInvoker_Params
{
public:
	class UAIOInvokerComponent*                  InvokerComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.SetIsSystemEnabled
struct UAIOptimizerSubsystem_SetIsSystemEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.RemoveDespawnedSubjectByHandle
struct UAIOptimizerSubsystem_RemoveDespawnedSubjectByHandle_Params
{
public:
	struct FAIOSubjectHandle                     Handle;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.RegisterSubject
struct UAIOptimizerSubsystem_RegisterSubject_Params
{
public:
	class UAIOSubjectComponent*                  SubjectComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.RegisterInvoker
struct UAIOptimizerSubsystem_RegisterInvoker_Params
{
public:
	class UAIOInvokerComponent*                  InvokerComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.K2_SpawnSubjectByHandle
struct UAIOptimizerSubsystem_K2_SpawnSubjectByHandle_Params
{
public:
	enum class EDespawnMethod                    Method;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIOSubjectHandle                     SubjectHandle;                                     // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_419[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.K2_DespawnSubjectByHandle
struct UAIOptimizerSubsystem_K2_DespawnSubjectByHandle_Params
{
public:
	struct FAIOSubjectHandle                     SubjectHandle;                                     // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDespawnMethod                    Method;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_431[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideSpawnRadius;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRespawnOnlyByHandle;                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_437[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.K2_DespawnSubject
struct UAIOptimizerSubsystem_K2_DespawnSubject_Params
{
public:
	struct FAIOSubjectHandle                     SubjectHandle;                                     // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDespawnMethod                    Method;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_454[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIOSubjectComponent*                  Component;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideSpawnRadius;                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRespawnOnlyByHandle;                         // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_458[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetSubjectIndex
struct UAIOptimizerSubsystem_GetSubjectIndex_Params
{
public:
	class UAIOSubjectComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetInvokerIndex
struct UAIOptimizerSubsystem_GetInvokerIndex_Params
{
public:
	class UAIOInvokerComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetDistanceToClosestInvokerSquared
struct UAIOptimizerSubsystem_GetDistanceToClosestInvokerSquared_Params
{
public:
	struct FVector                               QuerierLocation;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetDebugSubjects
struct UAIOptimizerSubsystem_GetDebugSubjects_Params
{
public:
	TArray<struct FAIODebugSubjectData>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetClosestInvokerLocation
struct UAIOptimizerSubsystem_GetClosestInvokerLocation_Params
{
public:
	struct FVector                               QuerierLocation;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.GetCategorizedDebugSubjects
struct UAIOptimizerSubsystem_GetCategorizedDebugSubjects_Params
{
public:
	TArray<struct FAIODebugSubjectData>          DebugSubjects;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<enum class EAIODebugGroup, int32>       ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOptimizerSubsystem.DebugAIOptimizer
struct UAIOptimizerSubsystem_DebugAIOptimizer_Params
{
public:
	bool                                         bDebug;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.ShouldBeDespawned
struct UAIOSubjectComponent_ShouldBeDespawned_Params
{
public:
	class UAIOptimizerSubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUpdateDataToInvokers;                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.SetSpawner
struct UAIOSubjectComponent_SetSpawner_Params
{
public:
	TScriptInterface<class ISpawnerInterface>    NewSpawner;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.SetCharacterFeatures
struct UAIOSubjectComponent_SetCharacterFeatures_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FeaturesToEnable;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.SetCanBeUpdatedBySubsystem
struct UAIOSubjectComponent_SetCanBeUpdatedBySubsystem_Params
{
public:
	bool                                         bCanBeUpdated;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.ReinitializeOptimizationLayers
struct UAIOSubjectComponent_ReinitializeOptimizationLayers_Params
{
public:
	TArray<struct FAIOptimizationLayer>          NewOptimizationLayers;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.IsSeenByAnyInvoker
struct UAIOSubjectComponent_IsSeenByAnyInvoker_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.IsDespawning
struct UAIOSubjectComponent_IsDespawning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetSpawnRadiusSquared
struct UAIOSubjectComponent_GetSpawnRadiusSquared_Params
{
public:
	class UAIOptimizerSubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetOptimizationLayerForCurrentDistance
struct UAIOSubjectComponent_GetOptimizationLayerForCurrentDistance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetDistanceToClosestInvoker
struct UAIOSubjectComponent_GetDistanceToClosestInvoker_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetDespawnRadiusSquared
struct UAIOSubjectComponent_GetDespawnRadiusSquared_Params
{
public:
	class UAIOptimizerSubsystem*                 Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_533[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetCurrentOptimizationLayer
struct UAIOSubjectComponent_GetCurrentOptimizationLayer_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.GetClosestInvokerLocation
struct UAIOSubjectComponent_GetClosestInvokerLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AIOptimizer.AIOSubjectComponent.CanBeUpdatedBySubsystem
struct UAIOSubjectComponent_CanBeUpdatedBySubsystem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.SpawnerInterface.OnSubjectSpawnedByOptimizerSubsystem
struct ISpawnerInterface_OnSubjectSpawnedByOptimizerSubsystem_Params
{
public:
	class UAIOSubjectComponent*                  SpawnedSubjectComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AIOptimizer.SpawnerInterface.OnSubjectDespawnedByOptimizerSubsystem
struct ISpawnerInterface_OnSubjectDespawnedByOptimizerSubsystem_Params
{
public:
	class UAIOSubjectComponent*                  DespawnedSubjectComponent;                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


