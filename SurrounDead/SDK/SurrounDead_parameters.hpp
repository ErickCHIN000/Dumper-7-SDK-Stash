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

// 0x30 (0x30 - 0x0)
// Function SurrounDead.DistanceSort.Distance_Sort
struct UDistanceSort_Distance_Sort_Params
{
public:
	TArray<class AActor*>                        Array_To_Sort;                                     // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                From_Actor;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Descending;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActor_Dist>                   Sorted_Array;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SurrounDead.GetStreamedLevel.GetActorStreamingLevelName
struct UGetStreamedLevel_GetActorStreamingLevelName_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


