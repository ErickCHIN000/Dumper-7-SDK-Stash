#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDistanceTypes : uint8
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	DistanceAbsoluteZ              = 3,
	EDistanceTypes_MAX             = 4,
};

enum class EAIFocusPriority_BP : uint8
{
	EFP_None                       = 0,
	EFP_Move                       = 1,
	EFP_Gameplay                   = 2,
	EFP_MAX                        = 3,
};

enum class EPatrolType : uint8
{
	PT_SplineMovement              = 0,
	PT_DefinedPath                 = 1,
	PT_Circular                    = 2,
	PT_MAX                         = 3,
};

enum class EFoVType : uint8
{
	FoV3D                          = 0,
	FoV2D                          = 1,
	EFoVType_MAX                   = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct TwAIFramework.RandomMemory
struct FRandomMemory
{
public:
	float                                        CachedDiceRoll;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDiceRollTimestamp;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


