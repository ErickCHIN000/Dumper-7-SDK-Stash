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
// Function PatreonInfo.PatreonInfoHandler.GetPatreonInfo
struct UPatreonInfoHandler_GetPatreonInfo_Params
{
public:
	class FString                                Token;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PatreonInfo.PatreonInfoLibrary.GetClipboardContents
struct UPatreonInfoLibrary_GetClipboardContents_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PatreonInfo.PatreonInfoLibrary.CreatePatreonInfoHandler
struct UPatreonInfoLibrary_CreatePatreonInfoHandler_Params
{
public:
	class UPatreonInfoHandler*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


