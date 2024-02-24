#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x478 - 0x458)
// Class ApexDestruction.DestructibleActor
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                DestructibleComponent;                             // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAffectNavigation : 1;                             // Mask: 0x1, PropSize: 0x10x460(0x1)(Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_12 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorFracture;                                   // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADestructibleActor* GetDefaultObj();

};

// 0x110 (0xB60 - 0xA50)
// Class ApexDestruction.DestructibleComponent
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	uint8                                        Pad_230[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFractureEffectOverride : 1;                       // Mask: 0x1, PropSize: 0x10xA58(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_14 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_233[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFractureEffect>               FractureEffects;                                   // 0xA60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableHardSleeping;                               // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LargeChunkThreshold;                               // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnComponentFracture;                               // 0xA88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_238[0x94];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseParentComponentPose;                           // 0xB2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_23A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class USkinnedMeshComponent>  DestructiblePoseComponent;                         // 0xB30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPosable;                                        // 0xB38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_23B[0x27];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestructibleComponent* GetDefaultObj();

	void SetDestructiblePoseComponent(class USkinnedMeshComponent* NewDestructiblePoseComponent);
	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength);
};

// 0x98 (0xC0 - 0x28)
// Class ApexDestruction.DestructibleFractureSettings
class UDestructibleFractureSettings : public UObject
{
public:
	int32                                        CellSiteCount;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                     FractureMaterialDesc;                              // 0x2C(0x24)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       VoronoiSites;                                      // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        OriginalSubmeshCount;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            Materials;                                         // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>  ChunkParameters;                                   // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_249[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDestructibleMeshCustomBuilder*        CustomBuilder;                                     // 0xB8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDestructibleFractureSettings* GetDefaultObj();

};

// 0x108 (0x470 - 0x368)
// Class ApexDestruction.DestructibleMesh
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters               DefaultDestructibleParameters;                     // 0x368(0xC8)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>               FractureEffects;                                   // 0x430(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_253[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPosableDestructibleChunkInfo> PosableChunkInfo;                                  // 0x448(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        InitialPosableFractureChunkIndex;                  // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_256[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestructibleMesh* GetDefaultObj();

};

}


