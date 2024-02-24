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
// Function BhvrOnlineCore.OnlineBlueprintLibrary.Conv_OnlineStatusToInteger
struct UOnlineBlueprintLibrary_Conv_OnlineStatusToInteger_Params
{
public:
	struct FOnlineStatus                         InOnlineStatus;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BhvrOnlineCore.OnlineBlueprintLibrary.Conv_IntegerToOnlineStatus
struct UOnlineBlueprintLibrary_Conv_IntegerToOnlineStatus_Params
{
public:
	int32                                        InCode;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BhvrOnlineCore.OnlineSdkSubsystem.GetOnlineSdk
struct UOnlineSdkSubsystem_GetOnlineSdk_Params
{
public:
	TSubclassOf<class UOnlineSdkBase>            InOnlineSdkClass;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InGameplayTag;                                     // 0x8(0x8)(Parm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineSdkBase*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


