#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// Class ApexDestruction.DestructibleActor
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                DestructibleComponent;                             // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorFracture;                                   // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADestructibleActor* GetDefaultObj();

};

// 0xD8 (0x728 - 0x650)
// Class ApexDestruction.DestructibleComponent
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	uint8                                        bFractureEffectOverride : 1;                       // Mask: 0x1, PropSize: 0x10x650(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_0 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFractureEffect>               FractureEffects;                                   // 0x658(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardSleeping;                               // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LargeChunkThreshold;                               // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnComponentFracture;                               // 0x680(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_22[0x98];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestructibleComponent* GetDefaultObj();

	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength);
};

// 0x90 (0xB8 - 0x28)
// Class ApexDestruction.DestructibleFractureSettings
class UDestructibleFractureSettings : public UObject
{
public:
	int32                                        CellSiteCount;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                     FractureMaterialDesc;                              // 0x2C(0x24)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       VoronoiSites;                                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OriginalSubmeshCount;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            Materials;                                         // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>  ChunkParameters;                                   // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestructibleFractureSettings* GetDefaultObj();

};

// 0xA0 (0x420 - 0x380)
// Class ApexDestruction.DestructibleMesh
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters               DefaultDestructibleParameters;                     // 0x380(0x88)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>               FractureEffects;                                   // 0x408(0x10)(Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestructibleMesh* GetDefaultObj();

};

}


