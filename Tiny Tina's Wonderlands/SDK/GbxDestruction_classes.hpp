#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x470 - 0x458)
// Class GbxDestruction.ClothActor
class AClothActor : public AActor
{
public:
	struct FWindDirectionalSensitivity           WindSensitivity;                                   // 0x458(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AClothActor* GetDefaultObj();

};

// 0x18 (0x488 - 0x470)
// Class GbxDestruction.ClothSkeletalMeshActor
class AClothSkeletalMeshActor : public AClothActor
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x470(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AClothSkeletalMeshActor* GetDefaultObj();

};

// 0x8 (0x478 - 0x470)
// Class GbxDestruction.ClothStaticMeshActor
class AClothStaticMeshActor : public AClothActor
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x470(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AClothStaticMeshActor* GetDefaultObj();

};

// 0x48 (0x4A0 - 0x458)
// Class GbxDestruction.ClothManager
class AClothManager : public AClothManagerInterface
{
public:
	uint8                                        Pad_D5F[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAllowedSimCost;                                 // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeOffScreenBeforeSimulationPause;                // 0x49C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AClothManager* GetDefaultObj();

};

// 0x80 (0x4F8 - 0x478)
// Class GbxDestruction.GbxDestructibleActor
class AGbxDestructibleActor : public ADestructibleActor
{
public:
	struct FGbxDestructibleNetBuffer             FractureBuffer;                                    // 0x478(0x20)(Net, RepNotify, NativeAccessSpecifierPrivate)
	struct FGbxDestructibleNetBuffer             TransformBuffer;                                   // 0x498(0x20)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DA0[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SyncID;                                            // 0x4F0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DA2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxDestructibleActor* GetDefaultObj();

	void SetMissionCritical(bool bCritical);
	void SetFracturable(bool bFracturable);
	void OnRep_TransformBuffer();
	void OnRep_SyncID();
	void OnRep_FractureBuffer();
	bool IsFracturable();
};

// 0x98 (0xBF8 - 0xB60)
// Class GbxDestruction.GbxDestructibleComponent
class UGbxDestructibleComponent : public UDestructibleComponent
{
public:
	uint8                                        Pad_DFE[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondsToWaitAfterNotRenderedToCleanUp;            // 0xB90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbabilityOfTransientChunk;                       // 0xB94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableSimulationOnSleep;                         // 0xB98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FractureEventRefireDelay;                          // 0xB9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E08[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnGbxComponentFracture;                            // 0xBA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EDestructibleRelevance            DestructibleRelevance;                             // 0xBB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ChunkCollisionChannel;                             // 0xBB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E10[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           ChunkImpactData;                                   // 0xBC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayFractureEventOnDebris;                        // 0xBC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportChunksBlockPawnMovement;                   // 0xBC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMissionCritical;                                  // 0xBCA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAssetDamageThreshold;                     // 0xBCB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetersDroppedToBreak;                              // 0xBCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDestructibleDamageThresholdMagnitude DamageThresholdMagnitude;                          // 0xBD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ImpactDamageDefaultDepth;                          // 0xBD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoComputeMaterialStrength;                      // 0xBD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccumulateImpactDamage;                           // 0xBD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E28[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactVelocityThresholdOverride;                   // 0xBDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTotalMass;                                     // 0xBE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TotalMass;                                         // 0xBE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDebrisLifetime;                           // 0xBE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebrisLifetimeMin;                                 // 0xBEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisLifetimeMax;                                 // 0xBF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractureEffectOverlapPercent;                      // 0xBF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDestructibleComponent* GetDefaultObj();

	void SetFracturable(bool bFracturable);
	bool IsFracturable();
	float GetTotalPercentFractured();
	float GetDamageRequiredToFracture(int32 Depth);
	void FractureRandomChunk();
};

// 0xA0 (0x4F8 - 0x458)
// Class GbxDestruction.GbxUserDestructibleSyncManager
class AGbxUserDestructibleSyncManager : public AActor
{
public:
	uint8                                        Pad_E3E[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxUserDestructibleSyncManager* GetDefaultObj();

};

}


