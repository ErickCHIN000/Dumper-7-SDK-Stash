#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnGroupUp
struct ISimpleProceduralWalkInterface_OnGroupUp_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AverageFeetLocation;                               // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnGroupDown
struct ISimpleProceduralWalkInterface_OnGroupDown_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AverageFeetLocation;                               // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnFootUp
struct ISimpleProceduralWalkInterface_OnFootUp_Params
{
public:
	int32                                        LegIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FootLocation;                                      // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SimpleProceduralWalk.SimpleProceduralWalkInterface.OnFootDown
struct ISimpleProceduralWalkInterface_OnFootDown_Params
{
public:
	int32                                        LegIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_612[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FootLocation;                                      // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


