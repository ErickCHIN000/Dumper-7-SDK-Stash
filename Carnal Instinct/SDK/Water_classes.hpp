#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x1A8 - 0xB0)
// Class Water.BuoyancyComponent
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>             Pontoons;                                          // 0xB0(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnteredWaterDelegate;                            // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitedWaterDelegate;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FBuoyancyData                         BuoyancyData;                                      // 0xE0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AWaterBody*>                    CurrentWaterBodies;                                // 0x130(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CF[0x60];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBuoyancyComponent* GetDefaultObj();

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon);
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
};

// 0x0 (0x80 - 0x80)
// Class Water.ConvertWaterBodyActorsCommandlet
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UConvertWaterBodyActorsCommandlet* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class Water.EnvQueryTest_InsideWaterBody
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                         bIncludeWaves;                                     // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleWaves;                                      // 0x1F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreExclusionVolumes;                           // 0x1FA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6[0x5];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorBase* GetDefaultObj();

	void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
};

// 0x38 (0x60 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSimple
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
public:
	int32                                        NumWaves;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Randomness;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWavelength;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWavelength;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WavelengthFalloff;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAmplitude;                                      // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAmplitude;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplitudeFalloff;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAngleDeg;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAngularSpreadDeg;                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmallWaveSteepness;                                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LargeWaveSteepness;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteepnessFalloff;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSimple* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSpectrum
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
public:
	enum class EWaveSpectrumType                 SpectrumType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGerstnerWaveOctave>           Octaves;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSpectrum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWavesBase
class UWaterWavesBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterWavesBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWaves
class UWaterWaves : public UWaterWavesBase
{
public:

	static class UClass* StaticClass();
	static class UWaterWaves* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.GerstnerWaterWaves
class UGerstnerWaterWaves : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*       GerstnerWaveGenerator;                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGerstnerWave>                 GerstnerWaves;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        MaxWaveHeight;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_114[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaves* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class Water.GerstnerWaterWaveSubsystem
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_11A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveSubsystem* GetDefaultObj();

};

// 0x20 (0x460 - 0x440)
// Class Water.LakeCollisionComponent
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoxExtent;                                         // 0x448(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12D[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULakeCollisionComponent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Water.NiagaraDataInterfaceWater
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class AWaterBody*                            SourceBody;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceWater* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.NiagaraWaterFunctionLibrary
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj();

	void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
};

// 0x30 (0x470 - 0x440)
// Class Water.OceanCollisionComponent
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_151[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOceanCollisionComponent* GetDefaultObj();

};

// 0x0 (0x470 - 0x470)
// Class Water.OceanBoxCollisionComponent
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:

	static class UClass* StaticClass();
	static class UOceanBoxCollisionComponent* GetDefaultObj();

};

// 0xBB0 (0xDD0 - 0x220)
// Class Water.WaterBody
class AWaterBody : public AActor
{
public:
	uint8                                        Pad_1AA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWaveMaskDepth;                               // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaveHeightOffset;                               // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaterBodyIndex;                                    // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillCollisionUnderWaterBodiesForNavmesh;          // 0x244(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUnderwaterPostProcessSettings        UnderwaterPostProcessSettings;                     // 0x250(0x570)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWaterBodyType                    WaterBodyType;                                     // 0x7C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWaterCurveSettings                   CurveSettings;                                     // 0x7C8(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterMaterial;                                     // 0x7E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    UnderwaterPostProcessMaterial;                     // 0x7F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsLandscape;                                 // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisions;                               // 0x7F9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWaterMesh;                                // 0x7FA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           WaterMeshOverride;                                 // 0x800(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OverlapMaterialPriority;                           // 0x808(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CollisionProfileName;                              // 0x80C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x818(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0x820(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterMID;                                          // 0x828(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              UnderwaterPostProcessMID;                          // 0x830(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>> Islands;                                           // 0x838(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                  // 0x848(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>        Landscape;                                         // 0x858(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPostProcessSettings                  CurrentPostProcessSettings;                        // 0x860(0x550)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanAffectNavigation;                              // 0xDB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavAreaBase>              WaterNavAreaClass;                                 // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterWavesBase*                       WaterWaves;                                        // 0xDC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasWaveSpectrumSettings;                          // 0xDC8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasTerrainCarvingSettingsSettings;                // 0xDC9(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CD[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWaterBody* GetDefaultObj();

	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInterface* GetWaterMaterial();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	float GetMaxWaveHeight();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyGenerator
class UWaterBodyGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyGenerator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.CustomMeshGenerator
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomMeshGenerator* GetDefaultObj();

};

// 0x10 (0xDE0 - 0xDD0)
// Class Water.WaterBodyCustom
class AWaterBodyCustom : public AWaterBody
{
public:
	class UCustomMeshGenerator*                  CustomGenerator;                                   // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWaterBodyCustom* GetDefaultObj();

};

// 0x18 (0x280 - 0x268)
// Class Water.WaterBodyExclusionVolume
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                         bIgnoreAllOverlappingWaterBodies;                  // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWaterBody*>                    WaterBodiesToIgnore;                               // 0x270(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWaterBodyExclusionVolume* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Water.WaterBodyIsland
class AWaterBodyIsland : public AActor
{
public:
	uint8                                        Pad_222[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyIsland* GetDefaultObj();

	class UWaterSplineComponent* GetWaterSpline();
};

// 0x18 (0x40 - 0x28)
// Class Water.LakeGenerator
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                         LakeCollisionComp;                                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULakeGenerator* GetDefaultObj();

};

// 0x10 (0xDE0 - 0xDD0)
// Class Water.WaterBodyLake
class AWaterBodyLake : public AWaterBody
{
public:
	class ULakeGenerator*                        LakeGenerator;                                     // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWaterBodyLake* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.OceanGenerator
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOceanGenerator* GetDefaultObj();

};

// 0x20 (0xDF0 - 0xDD0)
// Class Water.WaterBodyOcean
class AWaterBodyOcean : public AWaterBody
{
public:
	class UOceanGenerator*                       OceanGenerator;                                    // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CollisionExtents;                                  // 0xDD8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightOffset;                                      // 0xDE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_265[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWaterBodyOcean* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Water.RiverGenerator
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URiverGenerator* GetDefaultObj();

};

// 0x30 (0xE00 - 0xDD0)
// Class Water.WaterBodyRiver
class AWaterBodyRiver : public AWaterBody
{
public:
	class URiverGenerator*                       RiverGenerator;                                    // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LakeTransitionMaterial;                            // 0xDD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LakeTransitionMID;                                 // 0xDE0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OceanTransitionMaterial;                           // 0xDE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              OceanTransitionMID;                                // 0xDF0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWaterBodyRiver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBrushActorInterface
class IWaterBrushActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWaterBrushActorInterface* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Water.WaterMeshActor
class AWaterMeshActor : public AActor
{
public:
	class UTexture2D*                            WaterVelocityTexture;                              // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaterMeshComponent*                   WaterMesh;                                         // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWaterMeshActor* GetDefaultObj();

};

// 0x128 (0x590 - 0x468)
// Class Water.WaterMeshComponent
class UWaterMeshComponent : public UMeshComponent
{
public:
	int32                                        ForceCollapseDensityLevel;                         // 0x468(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x46C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ExtentInTiles;                                     // 0x470(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FarDistanceMaterial;                               // 0x478(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistanceMeshExtent;                             // 0x480(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldLocation;                                   // 0x484(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldSizeVector;                                 // 0x490(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E6[0xE4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationFactor;                                // 0x580(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LODScale;                                          // 0x584(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterMeshComponent* GetDefaultObj();

	bool IsEnabled();
};

// 0x40 (0x78 - 0x38)
// Class Water.WaterRuntimeSettings
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	enum class ECollisionChannel                 CollisionChannelForWaterTraces;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;                       // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldSize;                            // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldZOffset;                         // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultWaterCollisionProfileName;                  // 0x70(0x8)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterRuntimeSettings* GetDefaultObj();

};

// 0x28 (0x560 - 0x538)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults             WaterSplineDefaults;                               // 0x538(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSplineCurveDefaults             PreviousWaterSplineDefaults;                       // 0x548(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_323[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSplineComponent* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                     Depth;                                             // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     WaterVelocityScalar;                               // 0x40(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     RiverWidth;                                        // 0x58(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     AudioIntensity;                                    // 0x70(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    WaterVelocity;                                     // 0x88(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterSplineMetadata* GetDefaultObj();

};

// 0xC8 (0xF8 - 0x30)
// Class Water.WaterSubsystem
class UWaterSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_439[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCameraUnderwaterStateChanged;                    // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWaterScalabilityChanged;                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultRiverMesh;                                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultLakeMesh;                                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaterMeshActor*                       WaterMeshActor;                                    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43E[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSubsystem* GetDefaultObj();

	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const class FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetWaterTimeSeconds();
	float GetSmoothedWorldTimeSeconds();
	int32 GetShallowWaterSimulationRenderTargetSize();
	int32 GetShallowWaterMaxImpulseForces();
	int32 GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAsset
class UWaterWavesAsset : public UObject
{
public:
	class UWaterWaves*                           WaterWaves;                                        // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAssetReference
class UWaterWavesAssetReference : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                      WaterWavesAsset;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAssetReference* GetDefaultObj();

};

}


