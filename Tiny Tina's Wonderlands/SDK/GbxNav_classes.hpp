#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x438 - 0x428)
// Class GbxNav.GbxNavSystem
class UGbxNavSystem : public UNavigationSystemV1
{
public:
	uint8                                        Pad_558[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x430(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxNavSystem* GetDefaultObj();

};

// 0x208 (0x2938 - 0x2730)
// Class GbxNav.GbxNavCharacterMovementComponent
class UGbxNavCharacterMovementComponent : public UGbxCharacterMovementComponent
{
public:
	uint8                                        Pad_564[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxNavMovementOptions                NavMovementOptions;                                // 0x27C0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        NavClientPopDistance;                              // 0x27F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxNavAvoidanceOptions               NavAvoidanceOptions;                               // 0x27FC(0x3C)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGbxNavSlowdownData                   NavSlowdownOptions;                                // 0x2838(0x14)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bOverrideSlowdownNearGoal;                         // 0x284C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_567[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStanceFloatValue                     SlowdownSpeedOverride;                             // 0x2850(0x8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x2858(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      GbxNavComponent;                                   // 0x2860(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxNavAgent                          Agent;                                             // 0x2868(0xA8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGbxNavPathingData                    PathingData;                                       // 0x2910(0x10)(Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavMeshLayer*                      ForcedNavMeshLayer;                                // 0x2920(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_56F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideMaxAcceleration;                          // 0x292C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_570[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StanceMaxAcceleration;                             // 0x2930(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_571[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavCharacterMovementComponent* GetDefaultObj();

};

// 0x978 (0xAF0 - 0x178)
// Class GbxNav.GbxNavComponent
class UGbxNavComponent : public UNavComponent
{
public:
	uint8                                        Pad_592[0x3B0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxNavForwardState                   ForwardState;                                      // 0x528(0x128)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxNavStuckState                     StuckState;                                        // 0x650(0x68)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x6B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHavokMovementData*                    OverrideMovementData;                              // 0x6C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHavokPathFindingData*                 OverridePathFindingData;                           // 0x6C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                     MyCapsule;                                         // 0x6D0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AAIController*                         MyAIController;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavCharacterMovementComponent*     MyMovement;                                        // 0x6E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxNavAgent                          Agent;                                             // 0x6E8(0xA8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGbxUserEdgeState                     UserEdgeState;                                     // 0x790(0x1A0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxNavCorrecter                      NavCorrecter;                                      // 0x930(0xB8)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxReachabilityState                 Reachability;                                      // 0x9E8(0x90)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxNavMovementOptions                MovementOptions;                                   // 0xA78(0x38)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGbxNavAvoidanceOptions               AvoidanceOptions;                                  // 0xAB0(0x3C)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5A7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavComponent* GetDefaultObj();

	void TryMoving(float FDuration);
	void SetPathFindingData(class UHavokPathFindingData* NewPathFindingData);
	void ResetPathFindingData();
	class UHavokPathFindingData* GetPathFindingData();
};

// 0x568 (0xB80 - 0x618)
// Class GbxNav.GbxNavWorld
class AGbxNavWorld : public ANavigationData
{
public:
	uint8                                        Pad_5B6[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUserEdgeManager                   UserEdgeManager;                                   // 0x660(0x60)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxPainterManager                    PainterManager;                                    // 0x6C0(0x20)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxNavStreamingData                  FlyStreamingData;                                  // 0x6E0(0x20)(NativeAccessSpecifierPrivate)
	struct FGbxNavStreamingData                  MeshStreamingData;                                 // 0x700(0x20)(NativeAccessSpecifierPrivate)
	struct FGbxNavLayerState                     MeshLayers;                                        // 0x720(0x18)(NativeAccessSpecifierPrivate)
	struct FGbxNavLayerState                     FlyLayers;                                         // 0x738(0x18)(NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      ReachabilityBuilding;                              // 0x750(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGbxNavComponent*>              ReachabilityQueue;                                 // 0x758(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UGbxNavComponent*>              NavComps;                                          // 0x768(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxReachabilityTracker               ReachabilityTracker;                               // 0x778(0xD0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	int32                                        MaxClearanceFillsPerStep;                          // 0x848(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxClearanceChecksPerStep;                         // 0x84C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAsyncProcessingEnabled;                           // 0x850(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAsyncAgentUpdatesEnabled;                         // 0x851(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5C4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       DefaultMeshLayer;                                  // 0x858(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultFlyLayer;                                   // 0x870(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultNavArea;                                    // 0x888(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       NullNavArea;                                       // 0x8A0(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSoftObjectPath>               AllNavAreas;                                       // 0x8B8(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class UGbxNavArea*>                   LoadedAllNavAreas;                                 // 0x8C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UGbxNavSectionComponent*>       SectionsWithDirtyTransforms;                       // 0x8D8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5CE[0x268];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UHavokNavMeshGenerationSettings*       MeshGenSettings;                                   // 0xB50(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHavokNavVolumeGenerationSettings*     VolumeGenSettings;                                 // 0xB58(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5D4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxNavWorld* GetDefaultObj();

};

// 0x90 (0x2C0 - 0x230)
// Class GbxNav.AIVehicleFlightComponent
class UAIVehicleFlightComponent : public UFloatingPawnMovement
{
public:
	uint8                                        Pad_5DE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationRate;                                      // 0x240(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxNavComponent*                      GbxNavComponent;                                   // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E2[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VelocityScaleDuringDescent;                        // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RotationScaleDuringDescent;                        // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LateralDistanceToStartDescent;                     // 0x26C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VelocityScaleDuringAscent;                         // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RotationScaleDuringAscent;                         // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchInDegrees;                                 // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRollInDegrees;                                  // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFlightState                          FlightState;                                       // 0x280(0x28)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5EA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIVehicleFlightComponent* GetDefaultObj();

	void OnRep_FlightState();
};

// 0x10 (0x58 - 0x48)
// Class GbxNav.GbxNavAnimTable
class UGbxNavAnimTable : public UGbxAnimTable
{
public:
	enum class EGbxNavAnimTableType              Type;                                              // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinStopDistance;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxInterpDistance;                                 // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AutoFillAngle;                                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxNavAnimTable* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class GbxNav.GbxAnimStateManager_AINav
class UGbxAnimStateManager_AINav : public UGbxAnimStateManager
{
public:
	enum class ENavAnimState                     Type;                                              // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxNavAnimTable*                      AnimTable;                                         // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        BlendSpaceRef;                                     // 0x48(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UGbxCharacterAnimInstance*             GbxCharAnimInstance;                               // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxCharacterMovementComponent*        GbxCharMoveComponent;                              // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                       ResolvedBlendSpace;                                // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ResolvedBlendSpaceYawMin;                          // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ResolvedBlendSpaceYawMax;                          // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                       BlendSpace;                                        // 0x80(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_609[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_AINav* GetDefaultObj();

	void Owner_PostBeginPlay();
};

// 0x0 (0x38 - 0x38)
// Class GbxNav.GbxAnimStateManager_NavIdle
class UGbxAnimStateManager_NavIdle : public UGbxAnimStateManager
{
public:

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_NavIdle* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class GbxNav.GbxNavIdleTurnTable
class UGbxNavIdleTurnTable : public UGbxAnimTable
{
public:

	static class UClass* StaticClass();
	static class UGbxNavIdleTurnTable* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxNav.GbxAnimStateManager_NavIdleTurn
class UGbxAnimStateManager_NavIdleTurn : public UGbxAnimStateManager_RootMotion
{
public:

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_NavIdleTurn* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxNav.GbxAnimStateManager_NavTable
class UGbxAnimStateManager_NavTable : public UGbxAnimStateManager_NavIdleTurn
{
public:

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_NavTable* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxNav.GbxAnimStateManager_NavHop
class UGbxAnimStateManager_NavHop : public UGbxAnimStateManager_RootMotion
{
public:

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_NavHop* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class GbxNav.GbxNavArea
class UGbxNavArea : public UGbxNavAreaBase
{
public:
	struct FColor                                DrawColor;                                         // 0x30(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_634[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxNavMeshLayer*>              IgnoreLayers;                                      // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UGbxNavArea*                           EffectiveArea;                                     // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EHavokNavMaterial                 HavokNavMaterial;                                  // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_635[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavArea* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxNav.GbxNavAreaData
class UGbxNavAreaData : public UDataAsset
{
public:
	TArray<struct FGbxNavAreaItem>               NavAreas;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxNavAreaData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxNav.GbxNavBlueprintLibrary
class UGbxNavBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxNavBlueprintLibrary* GetDefaultObj();

	void SetAINavPathType(class AActor* Actor, enum class EGbxPathType PathType);
	void ResourceUnlockAvoidance(class AActor* Actor, class FName Reason);
	void ResourceLockAvoidance(class AActor* Actor, class FName Reason);
	void ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer);
	bool FindNavMeshPointForActor(class AActor* Actor, struct FVector& Point, float Radius, struct FVector* Result);
	bool FindNavMeshPoint(class UObject* WorldContextObject, struct FVector& Point, float Radius, struct FVector* Result, class UGbxNavMeshLayer* Layer, float Height);
};

// 0x10 (0x730 - 0x720)
// Class GbxNav.GbxNavBoxComponent
class UGbxNavBoxComponent : public UBoxComponent
{
public:
	struct FGbxTriggerProperty                   AutoResize;                                        // 0x720(0x1)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6B6[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavBoxComponent* GetDefaultObj();

	void DoAutoResize();
};

// 0x8 (0x38 - 0x30)
// Class GbxNav.GbxNavLayer
class UGbxNavLayer : public UGbxNavLayerBase
{
public:
	struct FColor                                DrawColor;                                         // 0x30(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6BD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavLayer* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxNav.GbxNavFlyLayer
class UGbxNavFlyLayer : public UGbxNavLayer
{
public:
	float                                        MaxAgentRadius;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CellWidth;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxNavFlyRoundingMode            RoundingMode;                                      // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6C2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavFlyLayer* GetDefaultObj();

};

// 0x8 (0x4A0 - 0x498)
// Class GbxNav.GbxNavSection
class AGbxNavSection : public ANavMeshBoundsVolume
{
public:
	class UGbxNavSectionComponent*               SectionComponent;                                  // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGbxNavSection* GetDefaultObj();

};

// 0x8 (0x4A8 - 0x4A0)
// Class GbxNav.GbxNavFlySection
class AGbxNavFlySection : public AGbxNavSection
{
public:
	class UGbxNavFlySectionComponent*            FlySectionComponent;                               // 0x4A0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGbxNavFlySection* GetDefaultObj();

};

// 0x70 (0x760 - 0x6F0)
// Class GbxNav.GbxNavSectionComponent
class UGbxNavSectionComponent : public UPrimitiveComponent
{
public:
	uint32                                       SectionID;                                         // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 StreamingGuid;                                     // 0x6F4(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x708(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6E9[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAddAllConnectedComponentsToBounds;                // 0x728(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6EB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BuildTransform;                                    // 0x730(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxNavSectionComponent* GetDefaultObj();

};

// 0x70 (0x7D0 - 0x760)
// Class GbxNav.GbxNavFlySectionComponent
class UGbxNavFlySectionComponent : public UGbxNavSectionComponent
{
public:
	class UGbxNavFlyLayer*                       FlyLayer;                                          // 0x760(0x8)(Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxNavFlyLayer*                       BuildFlyLayer;                                     // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawBoundingFaces;                                // 0x770(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawCells;                                        // 0x771(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawFaces;                                        // 0x772(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6F7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawBoxSize;                                       // 0x774(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DrawCullDistance;                                  // 0x778(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6F9[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHavokNavVolume*                       NavVolume;                                         // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<uint16>                               CellGroups;                                        // 0x7A8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UHavokNavVolumeLayer>      Layer;                                             // 0x7B8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UHavokNavVolumeLayer>      BuildLayer;                                        // 0x7C0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6FD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavFlySectionComponent* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxNav.GbxNavGlobalData
class UGbxNavGlobalData : public UGbxDataAsset
{
public:
	class UGbxNavMeshLayer*                      DefaultMeshLayer;                                  // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxNavFlyLayer*                       DefaultFlyLayer;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxNavArea*                           DefaultMeshArea;                                   // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxNavArea*                           NullMeshArea;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxNavArea*>                   AllMeshAreas;                                      // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxUserEdge*                          DefaultUserEdge;                                   // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxUserEdge*>                  GlobalUserEdges;                                   // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxNavGlobalData* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GbxNav.GbxNavMeshLayer
class UGbxNavMeshLayer : public UGbxNavLayer
{
public:
	float                                        MaxAgentHalfHeight;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAgentRadius;                                    // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetRadiusManually;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_70E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UserEdgeDistance;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetUserEdgeDistanceManually;                      // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_70F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavMeshLayer* GetDefaultObj();

};

// 0x8 (0x498 - 0x490)
// Class GbxNav.GbxNavMeshPainter
class AGbxNavMeshPainter : public AVolume
{
public:
	class UGbxNavMeshPainterComponent*           PainterComponent;                                  // 0x490(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGbxNavMeshPainter* GetDefaultObj();

	void SetPainterEnabled(bool bNewEnabled);
	bool IsPainterEnabled();
};

// 0xA0 (0x218 - 0x178)
// Class GbxNav.GbxNavMeshPainterComponent
class UGbxNavMeshPainterComponent : public UActorComponent
{
public:
	bool                                         bAlwaysEnabled;                                    // 0x178(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_74F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IdleTime;                                          // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxPainterType                   PainterType;                                       // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsForcedDynamic;                                  // 0x181(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_752[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxNavArea*                           GbxNavArea;                                        // 0x188(0x8)(Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          AssociatedComponentNames;                          // 0x190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint32                                       PainterId;                                         // 0x1A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PainterMovedThreshold;                             // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBlocksAutoGeneratedUserEdges;                     // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_759[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxPainterItem>               Painters;                                          // 0x1B0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_75E[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  NavArea;                                           // 0x210(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxNavMeshPainterComponent* GetDefaultObj();

	void SetPainterEnabled(bool bNewEnabled);
	void SetPainterAlwaysEnabled(bool bNewAlwaysEnabled);
	void ResetToStatic();
	bool IsPainterEnabled();
};

// 0x8 (0x4A8 - 0x4A0)
// Class GbxNav.GbxNavMeshSection
class AGbxNavMeshSection : public AGbxNavSection
{
public:
	class UGbxNavMeshSectionComponent*           MeshSectionComponent;                              // 0x4A0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGbxNavMeshSection* GetDefaultObj();

};

// 0x60 (0x7C0 - 0x760)
// Class GbxNav.GbxNavMeshSectionComponent
class UGbxNavMeshSectionComponent : public UGbxNavSectionComponent
{
public:
	class UGbxNavMeshLayer*                      MeshLayer;                                         // 0x760(0x8)(Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxNavMeshLayer*                      BuildMeshLayer;                                    // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoAddUserEdges;                                 // 0x770(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_778[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHavokNavMesh*                         NavMesh;                                           // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UHavokNavMeshLayer>        Layer;                                             // 0x7A8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UHavokNavMeshLayer>        BuildLayer;                                        // 0x7B0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_77C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxNavMeshSectionComponent* GetDefaultObj();

};

// 0xC0 (0x238 - 0x178)
// Class GbxNav.GbxNavUserEdgeTrailComponent
class UGbxNavUserEdgeTrailComponent : public UActorComponent
{
public:
	class UGbxUserEdge*                          GbxUserEdge;                                       // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EdgeWidth;                                         // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AgentRadius;                                       // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AgentHalfHeight;                                   // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NavCheckDistance;                                  // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNumericRange                         ValidEdgeLength;                                   // 0x190(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        MaxActiveEdges;                                    // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TraceRadius;                                       // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x1A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxNavAgentProperties                AgentProps;                                        // 0x1A8(0x60)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_78C[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UHavokUserEdge>            UserEdge;                                          // 0x230(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxNavUserEdgeTrailComponent* GetDefaultObj();

};

// 0x0 (0x350 - 0x350)
// Class GbxNav.HavokPathFollowingComponent
class UHavokPathFollowingComponent : public UPathFollowingComponent
{
public:

	static class UClass* StaticClass();
	static class UHavokPathFollowingComponent* GetDefaultObj();

};

// 0x0 (0x350 - 0x350)
// Class GbxNav.GbxPathFollowingComponent
class UGbxPathFollowingComponent : public UHavokPathFollowingComponent
{
public:

	static class UClass* StaticClass();
	static class UGbxPathFollowingComponent* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GbxNav.GbxUserEdge
class UGbxUserEdge : public UGbxUserEdgeBase
{
public:
	class UGbxUserEdge*                          ReverseEdge;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlignEdges;                                       // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitDistanceMin;                                 // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceMin;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitDistanceMax;                                 // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7B0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceMax;                                       // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitHeightMin;                                   // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7B3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightMin;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitHeightMax;                                   // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightMax;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bZeroWidthEntry;                                   // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bZeroWidthExit;                                    // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTeleportEntry;                                    // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTeleportExit;                                     // 0x5F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UGbxUserEdge*>                  TeleportEdges;                                     // 0x60(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxUserEdge* GetDefaultObj();

};

// 0x38 (0x4C8 - 0x490)
// Class GbxNav.GbxUserEdgeBlocker
class AGbxUserEdgeBlocker : public AVolume
{
public:
	uint8                                        Pad_7C5[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxUserEdgeBlocker* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxNav.HavokMovementData
class UHavokMovementData : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UHavokMovementData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GbxNav.HavokNavObstacle
class UHavokNavObstacle : public UObject
{
public:
	float                                        SphereRadius;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseSphere;                                        // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BoxSize;                                           // 0x30(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseBox;                                           // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x40(0xC)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxNavArea*                           NavArea;                                           // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                   PrimitiveBase;                                     // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHavokNavObstacle* GetDefaultObj();

};

// 0xA0 (0x790 - 0x6F0)
// Class GbxNav.HavokNavObstacleComponent
class UHavokNavObstacleComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_7FD[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHavokNavObstacle*                     Obstacle;                                          // 0x788(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHavokNavObstacleComponent* GetDefaultObj();

	void UnlockObstacle(class FName Reason);
	void LockObstacle(class FName Reason);
};

// 0x28 (0x58 - 0x30)
// Class GbxNav.HavokPathFindingData
class UHavokPathFindingData : public UDataAsset
{
public:
	TArray<struct FHavokUserEdgeItem>            UserEdges;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHavokUserEdgeTeleportItem>    UserEdgeTeleports;                                 // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                DefaultTeleportAction;                             // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHavokPathFindingData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxNav.HavokStreamingSet
class UHavokStreamingSet : public UObject
{
public:
	uint32                                       SectionIdA;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SectionIdB;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_821[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHavokStreamingSet* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class GbxNav.HavokUserEdge_Jump
class UHavokUserEdge_Jump : public UHavokUserEdge
{
public:

	static class UClass* StaticClass();
	static class UHavokUserEdge_Jump* GetDefaultObj();

};

// 0x48 (0x4A0 - 0x458)
// Class GbxNav.HavokUserEdgeActor
class AHavokUserEdgeActor : public AActor
{
public:
	uint8                                        Pad_827[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EdgeEnd;                                           // 0x460(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UHavokUserEdgeComponent*               UserEdgeComponent;                                 // 0x490(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_828[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AHavokUserEdgeActor* GetDefaultObj();

	void SetEdgeEnabled(bool bNewEnabled);
	bool IsEdgeEnabled();
};

// 0x100 (0x7F0 - 0x6F0)
// Class GbxNav.HavokUserEdgeComponent
class UHavokUserEdgeComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_83F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x6F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_840[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EdgeEnd;                                           // 0x700(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        EdgeBeginWidth;                                    // 0x730(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EdgeEndWidth;                                      // 0x734(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxUserEdgeDirection             Direction;                                         // 0x738(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_842[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUserEdge*                          GbxUserEdge;                                       // 0x740(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TeleportRadius;                                    // 0x748(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_843[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHavokUserEdgeComponent*>       TeleportEdges;                                     // 0x750(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bAnchorEnd;                                        // 0x760(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_844[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EndAnchorBase;                                     // 0x768(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            EndAnchorTransform;                                // 0x770(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class USceneComponent*                       RegisteredEndAnchorRoot;                           // 0x7A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       EdgeID;                                            // 0x7A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_845[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UHavokUserEdge>            UserEdge;                                          // 0x7E0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_846[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHavokUserEdgeComponent* GetDefaultObj();

	void SetEdgeEnabled(bool bNewEnabled);
	bool IsEdgeEnabled();
	void AnchorDestroyed(class AActor* Actor);
};

// 0x0 (0x6F0 - 0x6F0)
// Class GbxNav.HavokUserEdgePreviewComponent
class UHavokUserEdgePreviewComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UHavokUserEdgePreviewComponent* GetDefaultObj();

	void OnBlueprintCompiled(class Ublueprint* BP);
};

// 0x0 (0x28 - 0x28)
// Class GbxNav.VehicleSplineConsumerInterface
class IVehicleSplineConsumerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVehicleSplineConsumerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxNav.VehicleSplineInterface
class IVehicleSplineInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVehicleSplineInterface* GetDefaultObj();

};

}


