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

// 0x14 (0x14 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalPosition;                                     // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
public:
	TArray<struct FPlane>                        Planes;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       SurfacePoints;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneIndex;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 LocalRotation;                                     // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               HalfExtents;                                       // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneIndex;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
public:
	TArray<struct FClothCollisionPrim_Sphere>    Spheres;                                           // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_Convex>    Convexes;                                          // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_Box>       Boxes;                                             // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.CookedClothData
struct FCookedClothData
{
public:
	class FString                                AssetName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LODIndex;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MNumParticles;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               MPhaseIndices;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                MPhaseTypes;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               MSets;                                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                MRestvalues;                                       // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                MStiffnessValues;                                  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               MIndices;                                          // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               MAnchors;                                          // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                MTetherLengths;                                    // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               MTriangles;                                        // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


