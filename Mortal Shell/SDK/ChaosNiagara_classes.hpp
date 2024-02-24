#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x230 - 0x30)
// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DataProcessFrequency;                              // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoSpawn;                                           // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnChance;                                       // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0x9C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xA4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xAC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xB4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0xC4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0xCC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurfaceTypeToSpawn;                                // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0xDC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0xF4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetExternalCollisionData;                         // 0xFD(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoSpatialHash;                                     // 0xFE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpatialHashVolumeMin;                              // 0x100(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpatialHashVolumeMax;                              // 0x10C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x118(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDataPerCell;                                    // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyMaterialsFilter;                             // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x130(0x50)(Edit, NativeAccessSpecifierPublic)
	bool                                         bGetExternalBreakingData;                          // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetExternalTrailingData;                          // 0x181(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x184(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritedVelocityMultiplier;                       // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x194(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadAngleMax;                                    // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityOffsetMin;                                 // 0x1A0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityOffsetMax;                                 // 0x1AC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLatency;                                        // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x1C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastSpawnedPointID;                                // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastSpawnTime;                                     // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverTime;                                        // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeStampOfLastProcessedData;                      // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E2[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

}


