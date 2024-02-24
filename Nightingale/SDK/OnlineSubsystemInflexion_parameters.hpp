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

// 0x18 (0x18 - 0x0)
// DelegateFunction OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.OnLoginPlayerWithProfileComplete__DelegateSignature
struct UOnlineIdentityServiceLibrary_OnLoginPlayerWithProfileComplete__DelegateSignature_Params
{
public:
	struct FOnlineServiceStatus                  Status;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.LogoutPlayer
struct UOnlineIdentityServiceLibrary_LogoutPlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x298 (0x298 - 0x0)
// Function OnlineSubsystemInflexion.OnlineIdentityServiceLibrary.LoginPlayerWithProfile
struct UOnlineIdentityServiceLibrary_LoginPlayerWithProfile_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountToken;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSelectableProfile                    Profile;                                           // 0x28(0x260)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x288(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


