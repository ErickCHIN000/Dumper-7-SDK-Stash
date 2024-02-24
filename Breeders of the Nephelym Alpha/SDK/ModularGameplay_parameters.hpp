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
// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
public:
	class AActor*                                Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
struct UGameFrameworkComponentManager_AddReceiver_Params
{
public:
	class AActor*                                Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddOnlyInGameWorlds;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


