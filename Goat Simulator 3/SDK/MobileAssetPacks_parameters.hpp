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
// Function MobileAssetPacks.AssetPacksSubsystem.GetAllAssetPacks
struct UAssetPacksSubsystem_GetAllAssetPacks_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MobileAssetPacks.AssetPacksSubsystem.FetchStatus
struct UAssetPacksSubsystem_FetchStatus_Params
{
public:
	class FString                                AssetPack;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MobileAssetPacks.AssetPacksSubsystem.DownloadPack
struct UAssetPacksSubsystem_DownloadPack_Params
{
public:
	class FString                                AssetPack;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


