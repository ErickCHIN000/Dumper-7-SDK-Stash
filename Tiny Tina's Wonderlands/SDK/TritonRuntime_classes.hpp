#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x420 - 0x2D0)
// Class TritonRuntime.TritonAcousticDataComponent
class UTritonAcousticDataComponent : public USceneComponent
{
public:
	TArray<struct FTritonProbeLayer>             ProbeLayers;                                       // 0x2D0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SpeedOfSound;                                      // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           ExtraTritonMaterialEquivalences;                   // 0x2E8(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAudioPrepComponentFilter>     ExcludeComponentsFilters;                          // 0x338(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAudioPrepComponentFilter>     IncludeComponentsFilters;                          // 0x348(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EOcclusionVoxelThinningAlgorithm> ThinningSteps;                                     // 0x358(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ExtraTerrainThickness;                             // 0x368(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyGenerateSelected;                             // 0x36C(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTritonUpdateDesc                     UpdateSteps;                                       // 0x36D(0xA)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerRefreshCachedVoxelData;                     // 0x377(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerVisualizeMaterials;                         // 0x378(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerAuditProbeLocations;                        // 0x379(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerUpdateProbeLocations;                       // 0x37A(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5[0x5];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioOcclusionVoxelDataProvider*      CachedVoxelData;                                   // 0x380(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioOcclusionVoxelDataProvider*      CachedVoxelDataNoThinning;                         // 0x388(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioOcclusionVoxelDataProvider*      CachedNavMeshVoxelData;                            // 0x390(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerBuildFallbackAcousticData;                  // 0x398(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_6[0x87];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTritonAcousticDataComponent* GetDefaultObj();

	void VisualizeMaterials();
	void UpdateProbeLocations();
	void RefreshCachedVoxelData();
	void BuildFallbackAcousticData();
	void AuditProbeLocations();
};

// 0x8 (0x460 - 0x458)
// Class TritonRuntime.TritonZone
class ATritonZone : public AActor
{
public:
	class UTritonAcousticDataComponent*          TritonDataComponent;                               // 0x458(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATritonZone* GetDefaultObj();

};

// 0x0 (0x490 - 0x490)
// Class TritonRuntime.TritonVoxelOverrideVolume
class ATritonVoxelOverrideVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class ATritonVoxelOverrideVolume* GetDefaultObj();

};

// 0x18 (0x470 - 0x458)
// Class TritonRuntime.TritonProbeHelper
class ATritonProbeHelper : public AActor
{
public:
	float                                        DistanceLimit;                                     // 0x458(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecording;                                        // 0x45C(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       RecordedLocations;                                 // 0x460(0x10)(Edit, ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATritonProbeHelper* GetDefaultObj();

};

// 0x28 (0x4B8 - 0x490)
// Class TritonRuntime.TritonProbeLocationProvider
class ATritonProbeLocationProvider : public AVolume
{
public:
	float                                        TargetDistanceAboveGround;                         // 0x490(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumHorizontalSpacing;                          // 0x494(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWallDistanceForLowDensityProbes;                // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingFactorForLowDensityProbes;                  // 0x49C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecimationThreshold;                               // 0x4A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberDecimations;                              // 0x4A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ATritonProbeLocationProvider*>  SuppressingZones;                                  // 0x4A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATritonProbeLocationProvider* GetDefaultObj();

	void FindProbeLocations(struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* Out_ResultProbeLocations);
};

// 0x10 (0x38 - 0x28)
// Class TritonRuntime.TritonSettings
class UTritonSettings : public UObject
{
public:
	struct FDirectoryPath                        TritonDataPath;                                    // 0x28(0x10)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTritonSettings* GetDefaultObj();

};

}


