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

// 0x10 (0x10 - 0x0)
// Function WorldDirectorPRO.WorldDirectorNpcPRO.RestoreNPC_BP
struct AWorldDirectorNpcPRO_RestoreNPC_BP_Params
{
public:
	int32                                        IndexNpc;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorRef;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function WorldDirectorPRO.WorldDirectorNpcPRO.InsertNPCInBackground_BP
struct AWorldDirectorNpcPRO_InsertNPCInBackground_BP_Params
{
public:
	class AActor*                                ActorRef;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function WorldDirectorPRO.WorldDirectorNpcPRO.GetBackgroundNpcCount
struct AWorldDirectorNpcPRO_GetBackgroundNpcCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


