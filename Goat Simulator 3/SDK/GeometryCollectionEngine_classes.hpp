#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x430 - 0x208)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_51 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9C3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x20C(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x224(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x23C(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x258(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x2A8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D1[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x240 - 0x230)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(NativeAccessSpecifierPrivate)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x488 (0x920 - 0x498)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_B2F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x4A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B32[0xE0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCollection*                   RestCollection;                                    // 0x588(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x590(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	bool                                         Simulating;                                        // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableClustering;                                  // 0x5A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B48[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageThreshold;                                   // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CollisionGroup;                                    // 0x5CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionSampleFraction;                           // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearEtherDrag;                                   // 0x5D4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularEtherDrag;                                  // 0x5D8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x5E0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0x5EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0x5F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B76[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x608(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x610(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x660(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x670(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x698(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        DesiredCacheTime;                                  // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CachePlayback;                                     // 0x6AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x6B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bNotifyBreaks;                                     // 0x6C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNotifyCollisions;                                 // 0x6C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableReplication;                                // 0x6C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAbandonAfterLevel;                          // 0x6C3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationAbandonClusterLevel;                    // 0x6C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGeometryCollectionRepData            RepData;                                           // 0x6C8(0x18)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA9[0x218];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            DummyBodySetup;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BAA[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NetAbandonCluster(int32 TransformIndex);
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
};

// 0xE8 (0x318 - 0x230)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x238(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawWholeCollection;                         // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawHierarchy;                               // 0x251(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawClustering;                              // 0x252(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x253(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyId;                                  // 0x254(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyCollision;                           // 0x255(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollisionAtOrigin;                                // 0x256(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyTransform;                           // 0x257(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInertia;                             // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyVelocity;                            // 0x259(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyForce;                               // 0x25A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInfos;                               // 0x25B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransformIndex;                               // 0x25C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransform;                                    // 0x25D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParent;                                       // 0x25E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLevel;                                        // 0x25F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowConnectivityEdges;                            // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryIndex;                                // 0x261(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryTransform;                            // 0x262(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoundingBox;                                  // 0x263(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaces;                                        // 0x264(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceIndices;                                  // 0x265(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceNormals;                                  // 0x266(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSingleFace;                                   // 0x267(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SingleFaceIndex;                                   // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertices;                                     // 0x26C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexIndices;                                // 0x26D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexNormals;                                // 0x26E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActiveVisualization;                           // 0x26F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointThickness;                                    // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTextShadow;                                       // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TextScale;                                         // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalScale;                                       // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x284(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrowScale;                                        // 0x288(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyIdColor;                                  // 0x28C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RigidBodyTransformScale;                           // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyCollisionColor;                           // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInertiaColor;                             // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyVelocityColor;                            // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyForceColor;                               // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                RigidBodyInfoColor;                                // 0x2A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TransformIndexColor;                               // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransformScale;                                    // 0x2AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LevelColor;                                        // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ParentColor;                                       // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectivityEdgeThickness;                         // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                GeometryIndexColor;                                // 0x2BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeometryTransformScale;                            // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BoundingBoxColor;                                  // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceColor;                                         // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceIndexColor;                                    // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FaceNormalColor;                                   // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SingleFaceColor;                                   // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexColor;                                       // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexIndexColor;                                  // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexNormalColor;                                 // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   SpriteComponent;                                   // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA3[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_CD6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableClustering;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionSource>     GeometrySource;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLevelSetResolution;                             // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinClusterLevelSetResolution;                      // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevelSetResolution;                      // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionObjectReductionPercentage;                // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMassAsDensity;                                    // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMassClamp;                                  // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionParticlesFraction;                        // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumCollisionParticles;                         // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableRemovePiecesOnFracture;                      // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 PersistentGuid;                                    // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 StateGuid;                                         // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BoneSelectedMaterialIndex;                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D1D[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xA0 (0x2D0 - 0x230)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             RayMarchMaterial;                                  // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceTolerance;                                  // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Isovalue;                                          // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderVolumeBoundingBox;                           // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4D[0x86];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

// 0x88 (0x138 - 0xB0)
// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	uint8                                        Pad_D7C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimulating;                                       // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0xD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Density;                                           // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinMass;                                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMass;                                           // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImplicitShapeParticlesPerUnitArea;                 // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImplicitShapeMinNumParticles;                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImplicitShapeMaxNumParticles;                      // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLevelSetResolution;                             // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionGroup;                                    // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0x100(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0x10C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkeletalMeshSimulationComponent* GetDefaultObj();

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// 0x88 (0x138 - 0xB0)
// Class GeometryCollectionEngine.StaticMeshSimulationComponent
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	uint8                                        Pad_E29[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Simulating;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E33[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTypeEnum                CollisionType;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EImplicitTypeEnum                 ImplicitType;                                      // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLevelSetResolution;                             // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevelSetResolution;                             // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0xD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialAngularVelocity;                            // 0xDC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageThreshold;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           SimulatedComponents;                               // 0x120(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E5F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaticMeshSimulationComponent* GetDefaultObj();

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void ForceRecreatePhysicsState();
};

}


