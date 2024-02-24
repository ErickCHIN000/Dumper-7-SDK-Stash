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

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.AccountAPIService.RemoveRoleFromAccount_BP
struct UAccountAPIService_RemoveRoleFromAccount_BP_Params
{
public:
	struct FRemoveRoleFromAccountRequest         Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.AccountAPIService.RemoveProviderByAccountID_BP
struct UAccountAPIService_RemoveProviderByAccountID_BP_Params
{
public:
	struct FRemoveProviderByAccountIDRequest     Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.AccountAPIService.ListRoles_BP
struct UAccountAPIService_ListRoles_BP_Params
{
public:
	struct FListRolesRequest                     Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.AccountAPIService.ListAccountsWithRole_BP
struct UAccountAPIService_ListAccountsWithRole_BP_Params
{
public:
	struct FListAccountsWithRoleRequest          Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AccountAPIService.GetProvidersByAccountID_BP
struct UAccountAPIService_GetProvidersByAccountID_BP_Params
{
public:
	struct FGetProvidersByAccountIDRequest       Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AccountAPIService.GetProviderByAccountID_BP
struct UAccountAPIService_GetProviderByAccountID_BP_Params
{
public:
	struct FGetProviderByAccountIDRequest        Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.AccountAPIService.GetAccountByProviderID_BP
struct UAccountAPIService_GetAccountByProviderID_BP_Params
{
public:
	struct FGetAccountByProviderIDRequest        Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AccountAPIService.GetAccountByID_BP
struct UAccountAPIService_GetAccountByID_BP_Params
{
public:
	struct FGetAccountByIDRequest                Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.AccountAPIService.CreateAccount_BP
struct UAccountAPIService_CreateAccount_BP_Params
{
public:
	struct FCreateAccountRequest                 Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.AccountAPIService.AddRoleToAccount_BP
struct UAccountAPIService_AddRoleToAccount_BP_Params
{
public:
	struct FAddRoleToAccountRequest              Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.AccountAPIService.AddProviderByAccountID_BP
struct UAccountAPIService_AddProviderByAccountID_BP_Params
{
public:
	struct FAddProviderByAccountIDRequest        Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AccountAPIService.AcceptEULAForAccount_BP
struct UAccountAPIService_AcceptEULAForAccount_BP_Params
{
public:
	struct FAcceptEULAForAccountRequest          Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AuthWithXbox_BP
struct UAuthenticateAPIService_AuthWithXbox_BP_Params
{
public:
	struct FAuthWithXboxRequest                  Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AuthWithSteam_BP
struct UAuthenticateAPIService_AuthWithSteam_BP_Params
{
public:
	struct FAuthWithSteamRequest                 Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AuthWithPSN_BP
struct UAuthenticateAPIService_AuthWithPSN_BP_Params
{
public:
	struct FAuthWithPSNRequest                   Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AuthWithGoogle_BP
struct UAuthenticateAPIService_AuthWithGoogle_BP_Params
{
public:
	struct FAuthWithGoogleRequest                Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AuthWithEOS_BP
struct UAuthenticateAPIService_AuthWithEOS_BP_Params
{
public:
	struct FAuthWithEOSRequest                   Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.AuthenticateAPIService.AcceptEULA_BP
struct UAuthenticateAPIService_AcceptEULA_BP_Params
{
public:
	struct FAcceptEULARequest                    Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_685[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction NWXOnlineServices.AuthServiceLibrary.OnFetchSteamAuthBP__DelegateSignature
struct UAuthServiceLibrary_OnFetchSteamAuthBP__DelegateSignature_Params
{
public:
	TArray<uint8>                                AppTicket;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOnlineServiceStatus                  Status;                                            // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction NWXOnlineServices.AuthServiceLibrary.OnFetchEOSAuthBP__DelegateSignature
struct UAuthServiceLibrary_OnFetchEOSAuthBP__DelegateSignature_Params
{
public:
	class FString                                IdToken;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineServiceStatus                  Status;                                            // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.ListDeployments
struct UAuthServiceLibrary_ListDeployments_Params
{
public:
	FDelegateProperty_                           Complete;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.IsSteamAvailable
struct UAuthServiceLibrary_IsSteamAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.IsEosAvailable
struct UAuthServiceLibrary_IsEosAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.IsAutoEnterGameRequested
struct UAuthServiceLibrary_IsAutoEnterGameRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.GetTagValue
struct UAuthServiceLibrary_GetTagValue_Params
{
public:
	TArray<class FString>                        DeploymentTags;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutTagValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludePrefix;                                    // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DefaultValue;                                      // 0x38(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_712[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.GetSteamIdBP
struct UAuthServiceLibrary_GetSteamIdBP_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.GetNetworkCompatibleChangelist
struct UAuthServiceLibrary_GetNetworkCompatibleChangelist_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.FetchSteamAuthBP
struct UAuthServiceLibrary_FetchSteamAuthBP_Params
{
public:
	FDelegateProperty_                           OnComplete;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.FetchEosAuthBP
struct UAuthServiceLibrary_FetchEosAuthBP_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NWXOnlineServices.AuthServiceLibrary.CacheAccountTokens
struct UAuthServiceLibrary_CacheAccountTokens_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.RemovePlayersFromRoom_BP
struct UBailiffAPIService_RemovePlayersFromRoom_BP_Params
{
public:
	struct FRemovePlayersFromRoomRequest         Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.MakeAnnouncement_BP
struct UBailiffAPIService_MakeAnnouncement_BP_Params
{
public:
	struct FMakeAnnouncementRequest              Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.InvitePlayerToRealmViaChat_BP
struct UBailiffAPIService_InvitePlayerToRealmViaChat_BP_Params
{
public:
	struct FInvitePlayerToRealmViaChatRequest    Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.InvitePlayersToRoom_BP
struct UBailiffAPIService_InvitePlayersToRoom_BP_Params
{
public:
	struct FInvitePlayersToRoomRequest           Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.GetRoomsForPlayer_BP
struct UBailiffAPIService_GetRoomsForPlayer_BP_Params
{
public:
	struct FGetRoomsForPlayerRequest             Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.GetPlayersInRoom_BP
struct UBailiffAPIService_GetPlayersInRoom_BP_Params
{
public:
	struct FGetPlayersInRoomRequest              Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.GetPlayerOnlineStatus_BP
struct UBailiffAPIService_GetPlayerOnlineStatus_BP_Params
{
public:
	struct FGetPlayerOnlineStatusRequest         Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function NWXOnlineServices.BailiffAPIService.CreateRoom_BP
struct UBailiffAPIService_CreateRoom_BP_Params
{
public:
	struct FCreateRoomRequest                    Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.BarkerAPIService.GetNews_BP
struct UBarkerAPIService_GetNews_BP_Params
{
public:
	struct FGetNewsRequest                       Request;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_83B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.BarkerAPIService.GetMessageOfTheDay_BP
struct UBarkerAPIService_GetMessageOfTheDay_BP_Params
{
public:
	struct FGetMessageOfTheDayRequest            Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_84F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.StopDeploy_BP
struct UDeployAPIService_StopDeploy_BP_Params
{
public:
	struct FStopDeployRequest                    Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function NWXOnlineServices.DeployAPIService.StopAllDeploys_BP
struct UDeployAPIService_StopAllDeploys_BP_Params
{
public:
	struct FStopAllDeploysRequest                Request;                                           // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.DeployAPIService.SetDeployScore_BP
struct UDeployAPIService_SetDeployScore_BP_Params
{
public:
	struct FSetDeployScoreRequest                Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function NWXOnlineServices.DeployAPIService.SetDeployAnnotations_BP
struct UDeployAPIService_SetDeployAnnotations_BP_Params
{
public:
	struct FSetDeployAnnotationsRequest          Request;                                           // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x60(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.DeployAPIService.RestartDeployOp_BP
struct UDeployAPIService_RestartDeployOp_BP_Params
{
public:
	struct FRestartDeployRequest                 Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.DeployAPIService.RestartDeploy_BP
struct UDeployAPIService_RestartDeploy_BP_Params
{
public:
	struct FRestartDeployRequest                 Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function NWXOnlineServices.DeployAPIService.ResolveDeploySetOp_BP
struct UDeployAPIService_ResolveDeploySetOp_BP_Params
{
public:
	struct FResolveDeploySetRequest              Request;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0xE0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0xF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function NWXOnlineServices.DeployAPIService.ResolveDeploySet_BP
struct UDeployAPIService_ResolveDeploySet_BP_Params
{
public:
	struct FResolveDeploySetRequest              Request;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0xE0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0xF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.DeployAPIService.RecordDeployPlayers_BP
struct UDeployAPIService_RecordDeployPlayers_BP_Params
{
public:
	struct FRecordDeployPlayersRequest           Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.RecordDeployEvents_BP
struct UDeployAPIService_RecordDeployEvents_BP_Params
{
public:
	struct FRecordDeployEventsRequest            Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.DeployAPIService.ListDeployRecords_BP
struct UDeployAPIService_ListDeployRecords_BP_Params
{
public:
	struct FListDeployRecordsRequest             Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.DeployAPIService.ListDeployEvents_BP
struct UDeployAPIService_ListDeployEvents_BP_Params
{
public:
	struct FListDeployEventsRequest              Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.GetOperation_BP
struct UDeployAPIService_GetOperation_BP_Params
{
public:
	struct FGetOperationRequest                  Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.GetDeployRecordByName_BP
struct UDeployAPIService_GetDeployRecordByName_BP_Params
{
public:
	struct FGetDeployRecordByNameRequest         Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.GetDeployRecord_BP
struct UDeployAPIService_GetDeployRecord_BP_Params
{
public:
	struct FGetDeployRecordRequest               Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.DeployAPIService.GetDeploy_BP
struct UDeployAPIService_GetDeploy_BP_Params
{
public:
	struct FGetDeployRequest                     Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function NWXOnlineServices.DeployAPIService.CreateDeployOp_BP
struct UDeployAPIService_CreateDeployOp_BP_Params
{
public:
	struct FCreateDeployRequest                  Request;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0xE0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0xF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function NWXOnlineServices.DeployAPIService.CreateDeploy_BP
struct UDeployAPIService_CreateDeploy_BP_Params
{
public:
	struct FCreateDeployRequest                  Request;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0xE0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0xF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function NWXOnlineServices.DeploymentInformationProvider.GetDeploymentInformation
struct IDeploymentInformationProvider_GetDeploymentInformation_Params
{
public:
	struct FDeploymentInformation                ReturnValue;                                       // 0x0(0x58)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function NWXOnlineServices.DeploymentServiceLibrary.CreateDeployWithTemporalConfigBP
struct UDeploymentServiceLibrary_CreateDeployWithTemporalConfigBP_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemporalConfig                       TemporalConfig;                                    // 0x18(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x90(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutDeploymentName;                                 // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.RemoveProfileEntitlements_BP
struct UEntitlementAPIService_RemoveProfileEntitlements_BP_Params
{
public:
	struct FRemoveProfileEntitlementsRequest     Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.RemoveAccountEntitlements_BP
struct UEntitlementAPIService_RemoveAccountEntitlements_BP_Params
{
public:
	struct FRemoveAccountEntitlementsRequest     Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.ListProfilesWithEntitlement_BP
struct UEntitlementAPIService_ListProfilesWithEntitlement_BP_Params
{
public:
	struct FListProfilesWithEntitlementRequest   Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.ListEntitlements_BP
struct UEntitlementAPIService_ListEntitlements_BP_Params
{
public:
	struct FListEntitlementsRequest              Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.ListAccountsWithEntitlement_BP
struct UEntitlementAPIService_ListAccountsWithEntitlement_BP_Params
{
public:
	struct FListAccountsWithEntitlementRequest   Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.GetProfileEntitlements_BP
struct UEntitlementAPIService_GetProfileEntitlements_BP_Params
{
public:
	struct FGetProfileEntitlementsRequest        Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.GetMyProfileEntitlements_BP
struct UEntitlementAPIService_GetMyProfileEntitlements_BP_Params
{
public:
	struct FGetMyProfileEntitlementsRequest      Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.GetMyAccountEntitlements_BP
struct UEntitlementAPIService_GetMyAccountEntitlements_BP_Params
{
public:
	struct FGetMyAccountEntitlementsRequest      Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.GetAccountEntitlements_BP
struct UEntitlementAPIService_GetAccountEntitlements_BP_Params
{
public:
	struct FGetAccountEntitlementsRequest        Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.DoesProfileHaveEntitlement_BP
struct UEntitlementAPIService_DoesProfileHaveEntitlement_BP_Params
{
public:
	struct FDoesProfileHaveEntitlementRequest    Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.DoesMyProfileHaveEntitlement_BP
struct UEntitlementAPIService_DoesMyProfileHaveEntitlement_BP_Params
{
public:
	struct FDoesMyProfileHaveEntitlementRequest  Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.DoesMyAccountHaveEntitlement_BP
struct UEntitlementAPIService_DoesMyAccountHaveEntitlement_BP_Params
{
public:
	struct FDoesMyAccountHaveEntitlementRequest  Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.DoesAccountHaveEntitlement_BP
struct UEntitlementAPIService_DoesAccountHaveEntitlement_BP_Params
{
public:
	struct FDoesAccountHaveEntitlementRequest    Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.AddProfileEntitlements_BP
struct UEntitlementAPIService_AddProfileEntitlements_BP_Params
{
public:
	struct FAddProfileEntitlementsRequest        Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.EntitlementAPIService.AddAccountEntitlements_BP
struct UEntitlementAPIService_AddAccountEntitlements_BP_Params
{
public:
	struct FAddAccountEntitlementsRequest        Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NWXOnlineServices.FeedbackAPIService.SubmitJira_BP
struct UFeedbackAPIService_SubmitJira_BP_Params
{
public:
	struct FSubmitJiraRequest                    Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NWXOnlineServices.FeedbackAPIService.AttachFileToJira_BP
struct UFeedbackAPIService_AttachFileToJira_BP_Params
{
public:
	struct FAttachFileToJiraRequest              Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.GroupAPIService.RemoveProfile_BP
struct UGroupAPIService_RemoveProfile_BP_Params
{
public:
	struct FRemoveProfileRequest                 Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.GroupAPIService.GetGroupsWithNameForProfile_BP
struct UGroupAPIService_GetGroupsWithNameForProfile_BP_Params
{
public:
	struct FGetGroupsWithNameForProfileRequest   Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.GroupAPIService.GetGroupsForProfile_BP
struct UGroupAPIService_GetGroupsForProfile_BP_Params
{
public:
	struct FGetGroupsForProfileRequest           Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.GroupAPIService.GetGroupDetails_BP
struct UGroupAPIService_GetGroupDetails_BP_Params
{
public:
	struct FGetGroupDetailsRequest               Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.GroupAPIService.Delete_BP
struct UGroupAPIService_Delete_BP_Params
{
public:
	struct FDeleteRequest                        Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.GroupAPIService.Create_BP
struct UGroupAPIService_Create_BP_Params
{
public:
	struct FCreateRequest                        Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.GroupAPIService.AddProfile_BP
struct UGroupAPIService_AddProfile_BP_Params
{
public:
	struct FAddProfileRequest                    Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.JiraBlueprintLibrary.CreateIssue
struct UJiraBlueprintLibrary_CreateIssue_Params
{
public:
	class FString                                Subject;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Body;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        Labels;                                            // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        Attachments;                                       // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Complete;                                          // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.ModerateAPIService.ReportPlayerAction_BP
struct UModerateAPIService_ReportPlayerAction_BP_Params
{
public:
	struct FReportPlayerActionRequest            Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NWXOnlineServices.ModerateAPIService.ReportPlayer_BP
struct UModerateAPIService_ReportPlayer_BP_Params
{
public:
	struct FReportPlayerRequest                  Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NWXOnlineServices.ModerateAPIService.ModerateText_BP
struct UModerateAPIService_ModerateText_BP_Params
{
public:
	struct FModerateTextRequest                  Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.ModerateServiceLibrary.ModerateInGameTextBP
struct UModerateServiceLibrary_ModerateInGameTextBP_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerGeneratedText;                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerProfileId;                                   // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Complete;                                          // 0x28(0x10)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.ValidateProposedProfileName_BP
struct UProfileAPIService_ValidateProposedProfileName_BP_Params
{
public:
	struct FValidateProposedProfileNameRequest   Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.UpdateProfileMetadata_BP
struct UProfileAPIService_UpdateProfileMetadata_BP_Params
{
public:
	struct FUpdateProfileMetadataRequest         Request;                                           // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x60(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.UpdateProfile_BP
struct UProfileAPIService_UpdateProfile_BP_Params
{
public:
	struct FUpdateProfileRequest                 Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.SetRespite_BP
struct UProfileAPIService_SetRespite_BP_Params
{
public:
	struct FSetRespiteRequest                    Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.SetProfileMetadata_BP
struct UProfileAPIService_SetProfileMetadata_BP_Params
{
public:
	struct FSetProfileMetadataRequest            Request;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x68(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x78(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.SearchProfiles_BP
struct UProfileAPIService_SearchProfiles_BP_Params
{
public:
	struct FSearchProfilesRequest                Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x48(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.QueryProfiles_BP
struct UProfileAPIService_QueryProfiles_BP_Params
{
public:
	struct FQueryProfilesRequest                 Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.ListAllProfilesForAccount_BP
struct UProfileAPIService_ListAllProfilesForAccount_BP_Params
{
public:
	struct FListAllProfilesForAccountRequest     Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetRespite_BP
struct UProfileAPIService_GetRespite_BP_Params
{
public:
	struct FGetRespiteRequest                    Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetProfilesForAccount_BP
struct UProfileAPIService_GetProfilesForAccount_BP_Params
{
public:
	struct FGetProfilesForAccountRequest         Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetProfileNamesByIds_BP
struct UProfileAPIService_GetProfileNamesByIds_BP_Params
{
public:
	struct FGetProfileNamesByIdsRequest          Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetProfileNameById_BP
struct UProfileAPIService_GetProfileNameById_BP_Params
{
public:
	struct FGetProfileNameByIdRequest            Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetProfileById_BP
struct UProfileAPIService_GetProfileById_BP_Params
{
public:
	struct FGetProfileByIdRequest                Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetPlayersWithRespite_BP
struct UProfileAPIService_GetPlayersWithRespite_BP_Params
{
public:
	struct FGetPlayersWithRespiteRequest         Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.GetOnlineProfileNamesByIds_BP
struct UProfileAPIService_GetOnlineProfileNamesByIds_BP_Params
{
public:
	struct FGetOnlineProfileNamesByIdsRequest    Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.DeleteProfile_BP
struct UProfileAPIService_DeleteProfile_BP_Params
{
public:
	struct FDeleteProfileRequest                 Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.CreateProfile_BP
struct UProfileAPIService_CreateProfile_BP_Params
{
public:
	struct FCreateProfileRequest                 Request;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0xA0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileAPIService.ClearProfileMetadata_BP
struct UProfileAPIService_ClearProfileMetadata_BP_Params
{
public:
	struct FClearProfileMetadataRequest          Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileNameServiceLibrary.GetPublicNameWithoutDiscriminator
struct UProfileNameServiceLibrary_GetPublicNameWithoutDiscriminator_Params
{
public:
	struct FUniqueName                           UniqueName;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileNameServiceLibrary.GetPublicNameWithDiscriminator
struct UProfileNameServiceLibrary_GetPublicNameWithDiscriminator_Params
{
public:
	struct FUniqueName                           UniqueName;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.ProfileNameServiceLibrary.GetProfileNamesForIds
struct UProfileNameServiceLibrary_GetProfileNamesForIds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        IDs;                                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Complete;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.OnDeleteProfileComplete__DelegateSignature
struct UProfileServiceLibrary_OnDeleteProfileComplete__DelegateSignature_Params
{
public:
	struct FOnlineServiceStatus                  Status;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x278 (0x278 - 0x0)
// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.OnCreateProfileComplete__DelegateSignature
struct UProfileServiceLibrary_OnCreateProfileComplete__DelegateSignature_Params
{
public:
	struct FSelectableProfile                    Profile;                                           // 0x0(0x260)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOnlineServiceStatus                  Status;                                            // 0x260(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction NWXOnlineServices.ProfileServiceLibrary.FetchProfilesComplete__DelegateSignature
struct UProfileServiceLibrary_FetchProfilesComplete__DelegateSignature_Params
{
public:
	TArray<struct FSelectableProfile>            Profiles;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOnlineServiceStatus                  Status;                                            // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ProfileServiceLibrary.FetchProfiles
struct UProfileServiceLibrary_FetchProfiles_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x270 (0x270 - 0x0)
// Function NWXOnlineServices.ProfileServiceLibrary.DeleteProfile
struct UProfileServiceLibrary_DeleteProfile_Params
{
public:
	struct FSelectableProfile                    Profile;                                           // 0x0(0x260)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x260(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.ListRewards_BP
struct URedemptionsAPIService_ListRewards_BP_Params
{
public:
	struct FListRewardsRequest                   Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_112F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.ListRedemptions_BP
struct URedemptionsAPIService_ListRedemptions_BP_Params
{
public:
	struct FListRedemptionsRequest               Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.GetMyClaimableRedemptions_BP
struct URedemptionsAPIService_GetMyClaimableRedemptions_BP_Params
{
public:
	struct FGetMyClaimableRedemptionsRequest     Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1159[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.CreateReward_BP
struct URedemptionsAPIService_CreateReward_BP_Params
{
public:
	struct FCreateRewardRequest                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.CreateRedemptions_BP
struct URedemptionsAPIService_CreateRedemptions_BP_Params
{
public:
	struct FCreateRedemptionsRequest             Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.CreateCode_BP
struct URedemptionsAPIService_CreateCode_BP_Params
{
public:
	struct FCreateCodeRequest                    Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.ClaimRedemptions_BP
struct URedemptionsAPIService_ClaimRedemptions_BP_Params
{
public:
	struct FClaimRedemptionsRequest              Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.ClaimCode_BP
struct URedemptionsAPIService_ClaimCode_BP_Params
{
public:
	struct FClaimCodeRequest                     Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.RedemptionsAPIService.AssignMyTwitchRedemptions_BP
struct URedemptionsAPIService_AssignMyTwitchRedemptions_BP_Params
{
public:
	struct FAssignMyTwitchRedemptionsRequest     Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1223[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.ShardAPIService.UpdateShardVersions_BP
struct UShardAPIService_UpdateShardVersions_BP_Params
{
public:
	struct FUpdateShardVersionsRequest           Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function NWXOnlineServices.ShardAPIService.UpdateShard_BP
struct UShardAPIService_UpdateShard_BP_Params
{
public:
	struct FUpdateShardRequest                   Request;                                           // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x110(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x120(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.ShardAPIService.ListShards_BP
struct UShardAPIService_ListShards_BP_Params
{
public:
	struct FListShardsRequest                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ShardAPIService.GetShardsForClientVersion_BP
struct UShardAPIService_GetShardsForClientVersion_BP_Params
{
public:
	struct FGetShardsForClientVersionRequest     Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ShardAPIService.GetShard_BP
struct UShardAPIService_GetShard_BP_Params
{
public:
	struct FGetShardRequest                      Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.ShardAPIService.DeleteShard_BP
struct UShardAPIService_DeleteShard_BP_Params
{
public:
	struct FDeleteShardRequest                   Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function NWXOnlineServices.ShardAPIService.CreateShard_BP
struct UShardAPIService_CreateShard_BP_Params
{
public:
	struct FCreateShardRequest                   Request;                                           // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x110(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x120(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function NWXOnlineServices.TestAPIService.UnaryCallWithParams_BP
struct UTestAPIService_UnaryCallWithParams_BP_Params
{
public:
	struct FUnaryCallWithParamsRequest           Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXOnlineServices.TestAPIService.UnaryCall_BP
struct UTestAPIService_UnaryCall_BP_Params
{
public:
	struct FUnaryCallRequest                     Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TokenKey;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NWXOnlineServices.WorldStateAPIService.SetWorldState_BP
struct UWorldStateAPIService_SetWorldState_BP_Params
{
public:
	struct FSetWorldStateRequest                 Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXOnlineServices.WorldStateAPIService.GetWorldState_BP
struct UWorldStateAPIService_GetWorldState_BP_Params
{
public:
	struct FGetWorldStateRequest                 Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function NWXOnlineServices.WorldStateAPIService.CopyWorldState_BP
struct UWorldStateAPIService_CopyWorldState_BP_Params
{
public:
	struct FCopyWorldStateRequest                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TokenKey;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnComplete;                                        // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


