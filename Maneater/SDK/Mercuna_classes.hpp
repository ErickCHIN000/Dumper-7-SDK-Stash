#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xC0 - 0x68)
// Class Mercuna.BTDecorator_Mercuna_Reachable
class UBTDecorator_Mercuna_Reachable : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                Source;                                            // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                Destination;                                       // 0x90(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        MaxPathLength;                                     // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_Mercuna_Reachable* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class Mercuna.BTTask_Mercuna_MoveTo
class UBTTask_Mercuna_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                        Speed;                                             // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDistance;                                       // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x2, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_Mercuna_MoveTo* GetDefaultObj();

};

// 0xF0 (0x140 - 0x50)
// Class Mercuna.EnvQueryGenerator_Mercuna_Sphere
class UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumberOfShells;                                    // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               PointsPerShell;                                    // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EMercunaPointDistribution         Distribution;                                      // 0x130(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Mercuna_Sphere* GetDefaultObj();

};

// 0x190 (0x1E0 - 0x50)
// Class Mercuna.EnvQueryGenerator_Mercuna_3DRing
class UEnvQueryGenerator_Mercuna_3DRing : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumberOfRings;                                     // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               PointsPerRing;                                     // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             MinHeight;                                         // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             MaxHeight;                                         // 0x168(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumberOfLayers;                                    // 0x1A0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Mercuna_3DRing* GetDefaultObj();

};

// 0x0 (0x1F8 - 0x1F8)
// Class Mercuna.MercunaQueryTest
class UMercunaQueryTest : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UMercunaQueryTest* GetDefaultObj();

};

// 0x0 (0x1F8 - 0x1F8)
// Class Mercuna.EnvQueryTest_Mercuna_NavigableVolume
class UEnvQueryTest_Mercuna_NavigableVolume : public UMercunaQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_Mercuna_NavigableVolume* GetDefaultObj();

};

// 0x40 (0x238 - 0x1F8)
// Class Mercuna.EnvQueryTest_Mercuna_Reachable
class UEnvQueryTest_Mercuna_Reachable : public UMercunaQueryTest
{
public:
	struct FAIDataProviderFloatValue             MaxPathLength;                                     // 0x1F8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Mercuna_Reachable* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class Mercuna.EnvQueryTest_Mercuna_NavRaycast
class UEnvQueryTest_Mercuna_NavRaycast : public UMercunaQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Mercuna_NavRaycast* GetDefaultObj();

};

// 0x38 (0x230 - 0x1F8)
// Class Mercuna.EnvQueryTest_Mercuna_Project
class UEnvQueryTest_Mercuna_Project : public UMercunaQueryTest
{
public:
	struct FAIDataProviderFloatValue             MaxSearchRadius;                                   // 0x1F8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Mercuna_Project* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class Mercuna.MercunaNavigationComponent
class UMercunaNavigationComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMoveCompleted;                                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMercunaNavigationConfiguration       Configuration;                                     // 0xC0(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMercunaNavOctree*                     NavOctree;                                         // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Pathfinding;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DynamicAvoidance;                                  // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMercunaPawnUsageFlags                UsageFlags;                                        // 0xEC(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F5[0x3C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaNavigationComponent* GetDefaultObj();

	void TrackActor(class AActor* Actor, float Distance, float Speed);
	void Stop();
	void SetUsageFlags(struct FMercunaPawnUsageFlags* UsageFlags);
	void SetNavOctree(class AMercunaNavOctree* NavOctree);
	void SetEnabled(bool bEnable);
	void SetAvoidanceAgainst(class AActor* Actor, bool Enable);
	void ResumeNavigation();
	void PauseNavigation();
	void MoveToLocation(struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
	void MoveToActor(class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
	void MercunaMoveComplete__DelegateSignature(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result);
	void LookInDirection(const struct FVector& Direction, float MaxPitch);
	void LookAt(class AActor* Actor, float MaxPitch);
	void IsReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void GetPathInfo(bool* Valid, float* DistanceToEnd, struct FVector* NextPathPoint, bool* bIsFinalPoint);
	class AMercunaNavOctree* GetNavOctree();
	void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance);
	void Configure(struct FMercunaNavigationConfiguration& NewConfiguration);
	void ClearAvoidanceExclusions();
	void CheckReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void CancelMovement();
	void CancelLookAt();
};

// 0x50 (0x80 - 0x30)
// Class Mercuna.MercunaMoveToProxy
class UMercunaMoveToProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaMoveToProxy* GetDefaultObj();

	void OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result);
	class UMercunaMoveToProxy* MercunaMoveToLocation(class UObject* WorldContextObject, class APawn* Pawn, struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
	class UMercunaMoveToProxy* MercunaMoveToActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
};

// 0x30 (0x60 - 0x30)
// Class Mercuna.MercunaTrackActorProxy
class UMercunaTrackActorProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaTrackActorProxy* GetDefaultObj();

	void OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result);
	class UMercunaTrackActorProxy* MercunaTrackActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float Distance, float Speed);
};

// 0x18 (0x290 - 0x278)
// Class Mercuna.MercunaNavModifierVolume
class AMercunaNavModifierVolume : public AVolume
{
public:
	bool                                         bEnabled;                                          // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CostMultiplier;                                    // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CostMultipler;                                     // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMercunaNavUsageTypes                 UsageTypes;                                        // 0x284(0x4)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class AMercunaNavOctree*                     NavOctree;                                         // 0x288(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMercunaNavModifierVolume* GetDefaultObj();

	void SetUsageTypes(struct FMercunaNavUsageTypes& NewUsageTypes);
	void SetSize(const struct FVector& Size);
	void SetLocationAndSize(const struct FVector& Location, const struct FVector& Size);
	void SetLocation(const struct FVector& Location);
	void SetEnabled(bool Enabled);
	void SetCostMultiplier(float NewCostMultiplier);
	void AddToOctree(class AMercunaNavOctree* NavOctree);
};

// 0x98 (0x2B8 - 0x220)
// Class Mercuna.MercunaNavOctree
class AMercunaNavOctree : public AActor
{
public:
	float                                        CellSize;                                          // 0x220(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPawnRadius;                                     // 0x224(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPawnRadius;                                     // 0x228(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeverSave;                                        // 0x22C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowOctreeMerging;                               // 0x22D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 GeometryCollisionChannel;                          // 0x22E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecordOctreeDeltas;                               // 0x22F(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBuildComplete;                                   // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBuildLowResReady;                                // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRebuildComplete;                                 // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRebuildLowResReady;                              // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadComplete;                                    // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShortRangeLoadComplete;                          // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMerOctreeDebugDrawMode           DebugDrawMode;                                     // 0x298(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_41E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMerNavOctreeRenderingComponent*       MerNavOctreeRenderingComponent;                    // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBuildAsSublevel;                                  // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNeedsRebuild;                                     // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_422[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMercunaNavOctree* GetDefaultObj();

	void UpdateModifierVolumeParams(class AMercunaNavModifierVolume* ModifierVolume);
	void SetNavigationRotation(struct FRotator& Rotation);
	void RemoveModifierVolume(class AMercunaNavModifierVolume* ModifierVolume);
	void RebuildVolumes(TArray<struct FBox>& Volumes, bool StagedBuild);
	void RebuildVolume(class AActor* Volume, bool StagedBuild);
	void Raycast(const struct FVector& Start, const struct FVector& End, float NavigationRadius, struct FVector* HitPosition, bool* RayHit);
	void MercunaRebuildComplete__DelegateSignature(class AActor* Volume);
	void MercunaLoadComplete__DelegateSignature();
	void MercunaBuildComplete__DelegateSignature();
	bool IsReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength);
	void IsNavigableMulti(TArray<struct FVector>& Positions, float NavigationRadius, TArray<bool>* Results);
	void IsNavigable(const struct FVector& Position, float NavigationRadius, bool* Result);
	class UMercunaSpline* FindSplineToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
	class UMercunaPath* FindPathToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, bool AllowPartial, float MaxPathLength);
	class UMercunaPath* FindPathToActor(const struct FVector& Start, class AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength);
	void ClampToNavigable(const struct FVector& Position, float NavigationRadius, float SearchRadius, struct FVector* ClampedPosition, bool* Result);
	void CheckReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength, bool* Result);
	void Build();
};

// 0x0 (0x220 - 0x220)
// Class Mercuna.MercunaNavSeed
class AMercunaNavSeed : public AActor
{
public:

	static class UClass* StaticClass();
	static class AMercunaNavSeed* GetDefaultObj();

};

// 0x0 (0x1F0 - 0x1F0)
// Class Mercuna.MercunaNavSeedComponent
class UMercunaNavSeedComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class UMercunaNavSeedComponent* GetDefaultObj();

};

// 0x60 (0x280 - 0x220)
// Class Mercuna.MercunaNavTestingActor
class AMercunaNavTestingActor : public AActor
{
public:
	float                                        Radius;                                            // 0x220(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x1, PropSize: 0x10x224(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_21 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_46E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMercunaNavTestingActor*               OtherActor;                                        // 0x228(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMercunaPawnUsageFlags                UsageFlags;                                        // 0x230(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HeightChangePenalty;                               // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinuouslyRepath : 1;                           // Mask: 0x1, PropSize: 0x10x23C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawSpline : 1;                                   // Mask: 0x2, PropSize: 0x10x23C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_22 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_473[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeed;                                          // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAcceleration;                                   // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathIsOutOfNodes : 1;                             // Mask: 0x4, PropSize: 0x10x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_23 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PathLength;                                        // 0x24C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathSections;                                      // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathFindTime;                                      // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathNodesUsed;                                     // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      SphereComponent;                                   // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMercunaSpline*                        Spline;                                            // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMercunaNavOctree*                     Octree;                                            // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_486[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMercunaNavTestingActor* GetDefaultObj();

	void OnSplineUpdate(enum class EMercunaSplineEvent SplineEvent);
	void OnOctreeBuildComplete();
};

// 0x10 (0x288 - 0x278)
// Class Mercuna.MercunaNavVolume
class AMercunaNavVolume : public AVolume
{
public:
	class AMercunaNavOctree*                     NavOctree;                                         // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         PreciseBoundaries;                                 // 0x280(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMercunaLevelOfDetail             LOD;                                               // 0x281(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         FullDetailBuild;                                   // 0x282(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4C2[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMercunaNavVolume* GetDefaultObj();

	void SetSize(const struct FVector& Size);
	void SetNavigationRotation(struct FRotator& Rotation);
	void AddToOctree(class AMercunaNavOctree* NavOctree);
};

// 0x10 (0x200 - 0x1F0)
// Class Mercuna.MercunaObstacleComponent
class UMercunaObstacleComponent : public USceneComponent
{
public:
	bool                                         bAutomatic;                                        // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaObstacleComponent* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class Mercuna.MercunaClampToNavigableProxy
class UMercunaClampToNavigableProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F8[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaClampToNavigableProxy* GetDefaultObj();

	class UMercunaClampToNavigableProxy* MercunaClampToNavigable(class UObject* WorldContextObject, const struct FVector& Position, float NavigationRadius, float SearchRadius);
};

// 0x48 (0x78 - 0x30)
// Class Mercuna.MercunaRaycastProxy
class UMercunaRaycastProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnHit;                                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNoHit;                                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_513[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaRaycastProxy* GetDefaultObj();

	class UMercunaRaycastProxy* MercunaRaycast(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float NavigationRadius);
};

// 0x18 (0x40 - 0x28)
// Class Mercuna.MercunaPath
class UMercunaPath : public UObject
{
public:
	FMulticastInlineDelegateProperty_            PathUpdated;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_545[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaPath* GetDefaultObj();

	bool IsValid();
	bool IsReady();
	bool IsPartial();
	struct FVector GetPoint(int32 I);
	float GetPathLength();
	int32 GetNumPoints();
	void GetDebugInfo(int32* NodesUsed, bool* bOutOfNodes, float* QueryTime);
};

// 0x18 (0x40 - 0x28)
// Class Mercuna.MercunaSpline
class UMercunaSpline : public UObject
{
public:
	FMulticastInlineDelegateProperty_            SplineUpdated;                                     // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_57F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaSpline* GetDefaultObj();

	bool IsValid();
	bool IsReady();
	bool IsPartial();
	TArray<struct FSplinePoint> GetSplinePoints();
	struct FVector GetPathPoint(int32 I);
	int32 GetNumPathPoints();
	float GetLength();
};

// 0x58 (0xC8 - 0x70)
// Class Mercuna.MercunaTask_MoveTo
class UMercunaTask_MoveTo : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnRequestFailed;                                   // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnMoveFinished;                                    // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5D3[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercunaTask_MoveTo* GetDefaultObj();

	void OnMoveComplete(const struct FAIRequestID& RequestID, enum class EMercunaMoveResult Result);
	class UMercunaTask_MoveTo* MercunaMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
};

// 0x8 (0x440 - 0x438)
// Class Mercuna.MerNavOctreeRenderingComponent
class UMerNavOctreeRenderingComponent : public UMeshComponent
{
public:
	uint8                                        Pad_5E3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMerNavOctreeRenderingComponent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Mercuna.MerSettings
class UMerSettings : public UObject
{
public:
	float                                        DebugLengthScale;                                  // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowErrors;                                 // 0x2C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CellSize;                                          // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPawnRadius;                                     // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPawnRadius;                                     // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoLinkNavVolumesWithOctrees;                    // 0x3C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowOctreeMerging;                               // 0x3D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ModifierUsageTypes;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMerSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Mercuna.MerEditorSettings
class UMerEditorSettings : public UObject
{
public:
	bool                                         bEnableExtraLogging;                               // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_600[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          NavigableColor;                                    // 0x2C(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighCostColor;                                     // 0x3C(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UnnavigableColor;                                  // 0x4C(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_601[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMerEditorSettings* GetDefaultObj();

};

}


