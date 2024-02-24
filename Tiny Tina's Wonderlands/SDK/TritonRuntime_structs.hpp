#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct TritonRuntime.CachedPerProbeAcousticData
struct FCachedPerProbeAcousticData
{
public:
	float                                        ERVolume;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LRVolume;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LRDuration;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA (0xA - 0x0)
// ScriptStruct TritonRuntime.TritonUpdateDesc
struct FTritonUpdateDesc
{
public:
	bool                                         bCleanTempDirectory;                               // 0x0(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportVoxelizedRegion;                            // 0x1(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateJobConfig;                                  // 0x2(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateTaskImages;                                 // 0x3(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunTasks;                                         // 0x4(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateCompressedVoxMap;                           // 0x5(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollateResults;                                   // 0x6(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLongDistanceProbes;                       // 0x7(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixupDirectionalReciprocity;                      // 0x8(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncorporateNewACE;                                // 0x9(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct TritonRuntime.TritonProbeSet
struct FTritonProbeSet
{
public:
	class FString                                Label;                                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATritonProbeLocationProvider*          ProbeLocationProvider;                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ProbeLocations;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLowDetail;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct TritonRuntime.TritonSimulationParams
struct FTritonSimulationParams
{
public:
	float                                        SimulationFrequency;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationRadius;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationDepth;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationHeight;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdealVoxelmapResolutionInMeters;                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRMSForAveragingLongDistanceVolumes;            // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWallinessFactorForLongDistanceVolumes;         // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19[0x2];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct TritonRuntime.TritonLayerFadeParams
struct FTritonLayerFadeParams
{
public:
	float                                        RangeMin;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolMin;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pivot;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolMax;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct TritonRuntime.FallbackAcousticData
struct FFallbackAcousticData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWwiseEmitterAcousticData             AcousticData;                                      // 0xC(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Outdoorness;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                EarlyReflections;                                  // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct TritonRuntime.TritonAdvancedParams
struct FTritonAdvancedParams
{
public:
	bool                                         bUseProbeStreaming;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreloadDistance;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoadedProbes;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceFractionForPreload;                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpatialInterpCacheSize;                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VoxelDecompressionCacheSize;                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimCellCacheSize;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowProbeAutoLoad;                               // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProbeSearchDistance;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct TritonRuntime.TritonProbeLayer
struct FTritonProbeLayer
{
public:
	TArray<struct FTritonProbeSet>               ProbeLocationSets;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTritonSimulationParams               SimulationParams;                                  // 0x10(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTritonLayerFadeParams                FadeParams;                                        // 0x28(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTritonAdvancedParams                 AdvancedParams;                                    // 0x3C(0x24)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        DatasetPathOverride;                               // 0x60(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                DatasetFile;                                       // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFallbackAcousticData>         FallbackAcousticData;                              // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFallbackAcousticData                 FallbackAcousticDataAggregate;                     // 0x90(0x40)(Edit, NativeAccessSpecifierPublic)
	struct FWwiseAcousticEmulationParameters     FallbackAcousticEmulationParameters;               // 0xD0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasGeneratedEarlyReflections;                     // 0xE8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26[0xC7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


