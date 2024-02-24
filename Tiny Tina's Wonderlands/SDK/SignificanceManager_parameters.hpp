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

// 0x8 (0x8 - 0x0)
// Function SignificanceManager.SignificanceManager.UnregisterForTickOptim
struct USignificanceManager_UnregisterForTickOptim_Params
{
public:
	class AActor*                                TickOptimActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SignificanceManager.SignificanceManager.OnTickActorEndPlay
struct USignificanceManager_OnTickActorEndPlay_Params
{
public:
	class AActor*                                TickOptimActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


