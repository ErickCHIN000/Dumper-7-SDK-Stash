#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMerOctreeDebugDrawMode : uint8
{
	DISABLED                       = 0,
	UNNAVIGABLE                    = 1,
	NAVIGABLE                      = 2,
	BOTH                           = 3,
	REACHABLE                      = 4,
	PATHFIND                       = 5,
	REGION                         = 6,
	EMerOctreeDebugDrawMode_MAX    = 7,
};

enum class EMercunaSplineEvent : uint8
{
	Ready                          = 0,
	Updated                        = 1,
	Invalid                        = 2,
	EMercunaSplineEvent_MAX        = 3,
};

enum class EMercunaMoveResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	Cancelled                      = 2,
	Blocked                        = 3,
	Invalid                        = 4,
	EMercunaMoveResult_MAX         = 5,
};

enum class EMercunaPathEvent : uint8
{
	Ready                          = 0,
	Updated                        = 1,
	Invalid                        = 2,
	EMercunaPathEvent_MAX          = 3,
};

enum class EMercunaPointDistribution : uint8
{
	Uniform                        = 0,
	Random                         = 1,
	EMercunaPointDistribution_MAX  = 2,
};

enum class EMercunaMoveGoal : uint8
{
	Actor                          = 0,
	Vector                         = 1,
	None                           = 2,
	EMercunaMoveGoal_MAX           = 3,
};

enum class EMercunaLevelOfDetail : uint8
{
	Full                           = 0,
	Half                           = 1,
	Quarter                        = 2,
	Eighth                         = 3,
	Sixteenth                      = 4,
	EMercunaLevelOfDetail_MAX      = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct Mercuna.MercunaNavigationConfiguration
struct FMercunaNavigationConfiguration
{
public:
	float                                        MaxPitch;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRoll;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MoveOnlyInLookDirection;                           // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopAtDestination;                                 // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_609[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightChangePenalty;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SmoothPaths;                                       // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAheadTime;                                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollAnticipationTime;                              // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Mercuna.MercunaNavUsageTypes
struct FMercunaNavUsageTypes
{
public:
	uint8                                        bUsageType0 : 1;                                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType1 : 1;                                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType2 : 1;                                   // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType3 : 1;                                   // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType4 : 1;                                   // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType5 : 1;                                   // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType6 : 1;                                   // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType7 : 1;                                   // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType8 : 1;                                   // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType9 : 1;                                   // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType10 : 1;                                  // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType11 : 1;                                  // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType12 : 1;                                  // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType13 : 1;                                  // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType14 : 1;                                  // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType15 : 1;                                  // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType16 : 1;                                  // Mask: 0x1, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType17 : 1;                                  // Mask: 0x2, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType18 : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType19 : 1;                                  // Mask: 0x8, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType20 : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType21 : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType22 : 1;                                  // Mask: 0x40, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType23 : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType24 : 1;                                  // Mask: 0x1, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType25 : 1;                                  // Mask: 0x2, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType26 : 1;                                  // Mask: 0x4, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType27 : 1;                                  // Mask: 0x8, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType28 : 1;                                  // Mask: 0x10, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType29 : 1;                                  // Mask: 0x20, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType30 : 1;                                  // Mask: 0x40, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsageType31 : 1;                                  // Mask: 0x80, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Mercuna.MercunaPawnUsageFlags
struct FMercunaPawnUsageFlags
{
public:
	struct FMercunaNavUsageTypes                 RequiredUsageFlags;                                // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMercunaNavUsageTypes                 AllowedUsageFlags;                                 // 0x4(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Mercuna.MercunaMoveRequest
struct FMercunaMoveRequest
{
public:
	uint8                                        Pad_64A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                GoalActor;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


