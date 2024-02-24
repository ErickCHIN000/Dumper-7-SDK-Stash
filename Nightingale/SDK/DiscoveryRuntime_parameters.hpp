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

// 0x1 (0x1 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.IsDiscoveryDataLoaded
struct IDiscoverySystemInterface_IsDiscoveryDataLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.IsDiscoveryComplete
struct IDiscoverySystemInterface_IsDiscoveryComplete_Params
{
public:
	class UDiscoveryDataAsset*                   DiscoveryDataAsset;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.IsDataLoadInProgress
struct IDiscoverySystemInterface_IsDataLoadInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.GetConditionHandleFromDiscovery
struct IDiscoverySystemInterface_GetConditionHandleFromDiscovery_Params
{
public:
	class UDiscoveryDataAsset*                   DiscoveryDataAsset;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OutHandle;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.GetAllDiscoveryConditionHandles
struct IDiscoverySystemInterface_GetAllDiscoveryConditionHandles_Params
{
public:
	TArray<struct FGuid>                         OutHandles;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryRuntime.DiscoverySystemInterface.AddDiscoveries
struct IDiscoverySystemInterface_AddDiscoveries_Params
{
public:
	TArray<class UDiscoveryDataAsset*>           TestDiscoveries;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryRuntime.DiscoveryAccessInterface.GetDiscoverySystem
struct IDiscoveryAccessInterface_GetDiscoverySystem_Params
{
public:
	TScriptInterface<class IDiscoverySystemInterface> DiscoverySystemInterface;                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


