#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMarchingCubesNormal : uint8
{
	GradientAdvanced               = 0,
	GradientBasic                  = 1,
	Triangle                       = 2,
	EMarchingCubesNormal_MAX       = 3,
};

enum class EMarchingCubesSimplifierType : uint8
{
	Vertex                         = 0,
	Triangle                       = 1,
	EMarchingCubesSimplifierType_MAX = 2,
};

enum class EMarchingCubesSimplifierMethod : uint8
{
	QEM                            = 0,
	VolumePreservation             = 1,
	EMarchingCubesSimplifierMethod_MAX = 2,
};

enum class EMarchingCubesAlgorithm : uint8
{
	Simple                         = 0,
	Dual                           = 1,
	Tetrahedrons                   = 2,
	EMarchingCubesAlgorithm_MAX    = 3,
};

enum class EMultiTask2ScaleType : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EMultiTask2ScaleType_MAX       = 5,
};

enum class ERuntimeStaticMeshCollisionType : uint8
{
	None                           = 0,
	Simple                         = 1,
	Convex                         = 2,
	ERuntimeStaticMeshCollisionType_MAX = 3,
};

enum class EMultiTask2BranchesNoCompleteWithBody : uint8
{
	OnStart                        = 0,
	OnTaskBody                     = 1,
	OnCanceled                     = 2,
	EMultiTask2BranchesNoCompleteWithBody_MAX = 3,
};

enum class EMultiTask2BranchesNoComplete : uint8
{
	OnStart                        = 0,
	OnCanceled                     = 1,
	EMultiTask2BranchesNoComplete_MAX = 2,
};

enum class EMultiTask2BranchesNoCancel : uint8
{
	OnStart                        = 0,
	OnCompleted                    = 1,
	EMultiTask2BranchesNoCancel_MAX = 2,
};

enum class EMultiTask2BranchesWithBody : uint8
{
	OnStart                        = 0,
	OnTaskBody                     = 1,
	OnCompleted                    = 2,
	OnCanceled                     = 3,
	EMultiTask2BranchesWithBody_MAX = 4,
};

enum class EMultiTask2Branches : uint8
{
	OnStart                        = 0,
	OnCompleted                    = 1,
	OnCanceled                     = 2,
	EMultiTask2Branches_MAX        = 3,
};

enum class EMultiTaskThreadPriority : uint8
{
	Normal                         = 0,
	AboveNormal                    = 1,
	BelowNormal                    = 2,
	Highest                        = 3,
	Lowest                         = 4,
	SlightlyBelowNormal            = 5,
	TimeCritical                   = 6,
	EMultiTaskThreadPriority_MAX   = 7,
};

enum class ETaskExecutionType : uint8
{
	TaskGraph                      = 0,
	Thread                         = 1,
	ThreadPool                     = 2,
	ETaskExecutionType_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct MultiTask2.MultiTask2Delaunay2DTriangle
struct FMultiTask2Delaunay2DTriangle
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MultiTask2.MarchingCubesMeshData
struct FMarchingCubesMeshData
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Indices;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UVs;                                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  Colors;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MultiTask2.MarchingCubesSimplifierSettings
struct FMarchingCubesSimplifierSettings
{
public:
	float                                        Quality;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMarchingCubesSimplifierMethod    Method;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMarchingCubesSimplifierType      TargetType;                                        // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForcePreserveBoundaryShape;                       // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2280[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x260 (0x260 - 0x0)
// ScriptStruct MultiTask2.MarchingCubesData
struct FMarchingCubesData
{
public:
	uint8                                        Pad_2289[0x260];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MultiTask2.MarchingCubesDensityPoint
struct FMarchingCubesDensityPoint
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MultiTask2.MarchingCubesSettings
struct FMarchingCubesSettings
{
public:
	struct FIntVector                            Units;                                             // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Resolution;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ISOLevel;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInverted;                                         // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            WorldSize;                                         // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MultiTask2.PixelData
struct FPixelData
{
public:
	uint8                                        Pad_22CE[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MultiTask2.ThreadSafeInteger
struct FThreadSafeInteger
{
public:
	uint8                                        Pad_22DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MultiTask2.ThreadSafeBoolean
struct FThreadSafeBoolean
{
public:
	uint8                                        Pad_22E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


