#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AIOptimizer.AIOBPLibrary
class UAIOBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAIOBPLibrary* GetDefaultObj();

	void SetCharacterMovementEnabled(class ACharacter* Character, bool bEnable);
	void SetAILogicEnabled(class AActor* Actor, bool bEnable);
	bool RemoveHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& Handle);
	bool IsHandleValid(struct FAIOSubjectHandle& Handle);
	class FName GetSubjectTag();
	class FString GetString(struct FAIOSubjectHandle& Handle);
	class FName GetInvokerTag();
	int32 FindHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& HandleToFind);
	void DebugAIOptimizer(class UWorld* World, bool bDebug);
	int32 AddUniqueHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& Handle);
};

// 0x0 (0x28 - 0x28)
// Class AIOptimizer.AIOData_Base
class UAIOData_Base : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIOData_Base* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class AIOptimizer.AIODeveloperSettings
class UAIODeveloperSettings : public UDeveloperSettings
{
public:
	uint8                                        bIsSubsystemEnabled : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayDebugInfo : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_F : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_366[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               DebugWidgetClass;                                  // 0x40(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OptimizationUpdateInterval;                        // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDespawnMethod                    HandleSpawnDespawnMethod;                          // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnCapacityPerUpdate;                            // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnInterval;                                     // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DespawnRadius;                                     // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeripheralVisionHalfAngleDegrees;                  // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIODeveloperSettings* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class AIOptimizer.AIOInvokerComponent
class UAIOInvokerComponent : public UActorComponent
{
public:
	class UUserWidget*                           DebugWidget;                                       // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAIOInvokerComponent* GetDefaultObj();

	void DebugAIOptimizer(bool bDebug);
};

// 0xA0 (0xD0 - 0x30)
// Class AIOptimizer.AIOptimizerSubsystem
class UAIOptimizerSubsystem : public UWorldSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnSubjectDespawned;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSubjectSpawned;                                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSubsystemEnabledChanged;                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FAIOSubject>                   SpawnedSubjects;                                   // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAIODespawnedSubject>          DespawnedSubjects;                                 // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAIOInvoker>                   Invokers;                                          // 0x80(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAIOSubject>                   PendingDespawnSubjectsHeap;                        // 0x90(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAIODespawnedSubject>          PendingSpawnSubjectsHeap;                          // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B3[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           DebugWidgetObj;                                    // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIOptimizerSubsystem* GetDefaultObj();

	bool UnregisterSubject(class UAIOSubjectComponent* SubjectComponent);
	bool UnregisterInvoker(class UAIOInvokerComponent* InvokerComponent);
	void ShrinkArrays();
	void SetIsSystemEnabled(bool bIsEnabled);
	bool RemoveDespawnedSubjectByHandle(struct FAIOSubjectHandle& Handle);
	bool RegisterSubject(class UAIOSubjectComponent* SubjectComponent);
	bool RegisterInvoker(class UAIOInvokerComponent* InvokerComponent);
	void LoopSubjects();
	void LoopPendingSubjects();
	bool K2_SpawnSubjectByHandle(enum class EDespawnMethod Method, struct FAIOSubjectHandle& SubjectHandle);
	bool K2_DespawnSubjectByHandle(struct FAIOSubjectHandle& SubjectHandle, enum class EDespawnMethod Method, float OverrideSpawnRadius, bool bAllowRespawnOnlyByHandle);
	bool K2_DespawnSubject(struct FAIOSubjectHandle* SubjectHandle, enum class EDespawnMethod Method, class UAIOSubjectComponent* Component, float OverrideSpawnRadius, bool bAllowRespawnOnlyByHandle);
	int32 GetSubjectIndex(class UAIOSubjectComponent* Component);
	int32 GetInvokerIndex(class UAIOInvokerComponent* Component);
	float GetDistanceToClosestInvokerSquared(struct FVector& QuerierLocation);
	TArray<struct FAIODebugSubjectData> GetDebugSubjects();
	struct FVector GetClosestInvokerLocation(struct FVector& QuerierLocation);
	TMap<enum class EAIODebugGroup, int32> GetCategorizedDebugSubjects(TArray<struct FAIODebugSubjectData>& DebugSubjects);
	void DebugAIOptimizer(bool bDebug);
};

// 0xA0 (0x140 - 0xA0)
// Class AIOptimizer.AIOSubjectComponent
class UAIOSubjectComponent : public UActorComponent
{
public:
	uint8                                        Pad_550[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIOSubjectHandle                     Handle;                                            // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_551[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnOptimizationUpdate;                              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreDespawn;                                      // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostSpawned;                                     // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                Spawner;                                           // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeUpdatedBySubsystem : 1;                      // Mask: 0x1, PropSize: 0x10x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSubsystemToAutoDespawn : 1;                  // Mask: 0x2, PropSize: 0x10x108(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_55A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideSubsystemDespawnRadius;                    // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Priority;                                          // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAIOData_Base>             DataClass;                                         // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIOptimizationLayer>          OptimizationLayers;                                // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bShouldCalculateIsSeen : 1;                        // Mask: 0x1, PropSize: 0x10x130(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIOSubjectComponent* GetDefaultObj();

	void UnregisterSubject();
	bool ShouldBeDespawned(class UAIOptimizerSubsystem* Subsystem, bool bForceUpdateDataToInvokers);
	void SetSpawner(TScriptInterface<class ISpawnerInterface> NewSpawner);
	void SetCharacterFeatures(class ACharacter* Character, int32 FeaturesToEnable);
	void SetCanBeUpdatedBySubsystem(bool bCanBeUpdated);
	void ReinitializeOptimizationLayers(TArray<struct FAIOptimizationLayer>& NewOptimizationLayers);
	void RegisterSubject();
	float IsSeenByAnyInvoker();
	bool IsDespawning();
	float GetSpawnRadiusSquared(class UAIOptimizerSubsystem* Subsystem);
	int32 GetOptimizationLayerForCurrentDistance();
	float GetDistanceToClosestInvoker();
	float GetDespawnRadiusSquared(class UAIOptimizerSubsystem* Subsystem);
	int32 GetCurrentOptimizationLayer();
	struct FVector GetClosestInvokerLocation();
	bool CanBeUpdatedBySubsystem();
};

// 0x0 (0x28 - 0x28)
// Class AIOptimizer.SpawnerInterface
class ISpawnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnerInterface* GetDefaultObj();

	void OnSubjectSpawnedByOptimizerSubsystem(class UAIOSubjectComponent* SpawnedSubjectComponent);
	void OnSubjectDespawnedByOptimizerSubsystem(class UAIOSubjectComponent* DespawnedSubjectComponent);
};

}


