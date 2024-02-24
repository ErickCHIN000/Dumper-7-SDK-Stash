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

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenAchievementsApi.K2_IncrementMultipleAchievementContribution
struct UKrakenAchievementsApi_K2_IncrementMultipleAchievementContribution_Params
{
public:
	struct FKrakenIncrementMultipleAchievementContributionParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A84[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultipleAchievementContributionResponse OutResult;                                         // 0x30(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenAchievementsApi.K2_IncrementAchievementContribution
struct UKrakenAchievementsApi_K2_IncrementAchievementContribution_Params
{
public:
	struct FKrakenIncrementAchievementContributionParams InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAchievementState               OutResult;                                         // 0x34(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenAchievementsApi.K2_GetAchievements
struct UKrakenAchievementsApi_K2_GetAchievements_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAchievementsStateList          OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenAchievementsApi.K2_GetAchievement
struct UKrakenAchievementsApi_K2_GetAchievement_Params
{
public:
	struct FKrakenGetAchievementParams           InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAchievementState               OutResult;                                         // 0x2C(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenAchievementsApi.K2_ClaimAchievement
struct UKrakenAchievementsApi_K2_ClaimAchievement_Params
{
public:
	struct FKrakenClaimAchievementParams         InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAchievementClaim               OutResult;                                         // 0x48(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkXbox
struct UKrakenAuthApi_K2_UnlinkXbox_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkWeibo
struct UKrakenAuthApi_K2_UnlinkWeibo_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkTwitch
struct UKrakenAuthApi_K2_UnlinkTwitch_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkSteam
struct UKrakenAuthApi_K2_UnlinkSteam_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkPsnCode
struct UKrakenAuthApi_K2_UnlinkPsnCode_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C18[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkPsn
struct UKrakenAuthApi_K2_UnlinkPsn_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C38[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkNintendoAccount
struct UKrakenAuthApi_K2_UnlinkNintendoAccount_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C51[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkNintendo
struct UKrakenAuthApi_K2_UnlinkNintendo_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkHelixTwitch
struct UKrakenAuthApi_K2_UnlinkHelixTwitch_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkGrdkloginWithGrdk
struct UKrakenAuthApi_K2_UnlinkGrdkloginWithGrdk_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkGoogle
struct UKrakenAuthApi_K2_UnlinkGoogle_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkFacebook
struct UKrakenAuthApi_K2_UnlinkFacebook_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkCognito
struct UKrakenAuthApi_K2_UnlinkCognito_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenAuthApi.K2_UnlinkApple
struct UKrakenAuthApi_K2_UnlinkApple_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_ServerLogin
struct UKrakenAuthApi_K2_ServerLogin_Params
{
public:
	struct FKrakenServerLoginParams              InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAuthToken                      OutResult;                                         // 0x58(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenAuthApi.K2_PostTwitchOidcToken
struct UKrakenAuthApi_K2_PostTwitchOidcToken_Params
{
public:
	struct FKrakenPostTwitchOidcTokenParams      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D75[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenTwitchOauthTokenResponse       OutResult;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithZenaptic
struct UKrakenAuthApi_K2_LoginWithZenaptic_Params
{
public:
	struct FKrakenLoginWithZenapticParams        InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2C8 (0x2C8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithXbox
struct UKrakenAuthApi_K2_LoginWithXbox_Params
{
public:
	struct FKrakenLoginWithXboxParams            InParams;                                          // 0x0(0x198)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x198(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1B0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1B8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2C0 (0x2C0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithWeibo
struct UKrakenAuthApi_K2_LoginWithWeibo_Params
{
public:
	struct FKrakenLoginWithWeiboParams           InParams;                                          // 0x0(0x190)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x190(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1A8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1B0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithTwitch
struct UKrakenAuthApi_K2_LoginWithTwitch_Params
{
public:
	struct FKrakenLoginWithTwitchParams          InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithSteamV2
struct UKrakenAuthApi_K2_LoginWithSteamV2_Params
{
public:
	struct FKrakenLoginWithSteamV2Params         InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithSteam
struct UKrakenAuthApi_K2_LoginWithSteam_Params
{
public:
	struct FKrakenLoginWithSteamParams           InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithPsnV3
struct UKrakenAuthApi_K2_LoginWithPsnV3_Params
{
public:
	struct FKrakenLoginWithPsnV3Params           InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithPsnCode
struct UKrakenAuthApi_K2_LoginWithPsnCode_Params
{
public:
	struct FKrakenLoginWithPsnCodeParams         InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithPsn
struct UKrakenAuthApi_K2_LoginWithPsn_Params
{
public:
	struct FKrakenLoginWithPsnParams             InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E84[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2C8 (0x2C8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithNintendo
struct UKrakenAuthApi_K2_LoginWithNintendo_Params
{
public:
	struct FKrakenLoginWithNintendoParams        InParams;                                          // 0x0(0x198)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x198(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1B0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1B8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithKrakenId
struct UKrakenAuthApi_K2_LoginWithKrakenId_Params
{
public:
	struct FKrakenLoginWithKrakenIdParams        InParams;                                          // 0x0(0x170)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x170(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x188(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLoginWithoutProviderResponse   OutResult;                                         // 0x190(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithKraken
struct UKrakenAuthApi_K2_LoginWithKraken_Params
{
public:
	struct FKrakenLoginWithKrakenParams          InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2E8 (0x2E8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithHelixTwitch
struct UKrakenAuthApi_K2_LoginWithHelixTwitch_Params
{
public:
	struct FKrakenLoginWithHelixTwitchParams     InParams;                                          // 0x0(0x1B8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x1B8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1D0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1D8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2C8 (0x2C8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithGrdk
struct UKrakenAuthApi_K2_LoginWithGrdk_Params
{
public:
	struct FKrakenLoginWithGrdkParams            InParams;                                          // 0x0(0x198)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x198(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1B0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1B8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2E8 (0x2E8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithGoogle
struct UKrakenAuthApi_K2_LoginWithGoogle_Params
{
public:
	struct FKrakenLoginWithGoogleParams          InParams;                                          // 0x0(0x1B8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x1B8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1D0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F11[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1D8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithFacebook
struct UKrakenAuthApi_K2_LoginWithFacebook_Params
{
public:
	struct FKrakenLoginWithFacebookParams        InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithEgs
struct UKrakenAuthApi_K2_LoginWithEgs_Params
{
public:
	struct FKrakenLoginWithEgsParams             InParams;                                          // 0x0(0x188)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x188(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1A0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithCognito
struct UKrakenAuthApi_K2_LoginWithCognito_Params
{
public:
	struct FKrakenLoginWithCognitoParams         InParams;                                          // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x180(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x198(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1A0(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2D8 (0x2D8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LoginWithApple
struct UKrakenAuthApi_K2_LoginWithApple_Params
{
public:
	struct FKrakenLoginWithAppleParams           InParams;                                          // 0x0(0x1A8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x1A8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1C0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUserExt                        OutResult;                                         // 0x1C8(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkXbox
struct UKrakenAuthApi_K2_LinkXbox_Params
{
public:
	struct FKrakenLinkXboxParams                 InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkWeibo
struct UKrakenAuthApi_K2_LinkWeibo_Params
{
public:
	struct FKrakenLinkWeiboParams                InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkTwitch
struct UKrakenAuthApi_K2_LinkTwitch_Params
{
public:
	struct FKrakenLinkTwitchParams               InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkSteamV2
struct UKrakenAuthApi_K2_LinkSteamV2_Params
{
public:
	struct FKrakenLinkSteamV2Params              InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkSteam
struct UKrakenAuthApi_K2_LinkSteam_Params
{
public:
	struct FKrakenLinkSteamParams                InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkPsnCode
struct UKrakenAuthApi_K2_LinkPsnCode_Params
{
public:
	struct FKrakenLinkPsnCodeParams              InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1034[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkPsn
struct UKrakenAuthApi_K2_LinkPsn_Params
{
public:
	struct FKrakenLinkPsnParams                  InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1055[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkNintendoAccount
struct UKrakenAuthApi_K2_LinkNintendoAccount_Params
{
public:
	struct FKrakenLinkNintendoAccountParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkNintendo
struct UKrakenAuthApi_K2_LinkNintendo_Params
{
public:
	struct FKrakenLinkNintendoParams             InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1080[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkHelixTwitch
struct UKrakenAuthApi_K2_LinkHelixTwitch_Params
{
public:
	struct FKrakenLinkHelixTwitchParams          InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1096[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x68(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkGrdkloginWithGrdk
struct UKrakenAuthApi_K2_LinkGrdkloginWithGrdk_Params
{
public:
	struct FKrakenLinkGrdkloginWithGrdkParams    InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkGoogle
struct UKrakenAuthApi_K2_LinkGoogle_Params
{
public:
	struct FKrakenLinkGoogleParams               InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x58(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkFacebook
struct UKrakenAuthApi_K2_LinkFacebook_Params
{
public:
	struct FKrakenLinkFacebookParams             InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkCognito
struct UKrakenAuthApi_K2_LinkCognito_Params
{
public:
	struct FKrakenLinkCognitoParams              InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1112[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_LinkApple
struct UKrakenAuthApi_K2_LinkApple_Params
{
public:
	struct FKrakenLinkAppleParams                InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1130[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccountLinkResponse            OutResult;                                         // 0x58(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenAuthApi.K2_IsUnifiedSteamAccountOnlineV2
struct UKrakenAuthApi_K2_IsUnifiedSteamAccountOnlineV2_Params
{
public:
	struct FKrakenIsUnifiedSteamAccountOnlineV2Params InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAccountOnlineResponse          OutResult;                                         // 0x2C(0x1)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1147[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenAuthApi.K2_IsUnifiedSteamAccountOnline
struct UKrakenAuthApi_K2_IsUnifiedSteamAccountOnline_Params
{
public:
	struct FKrakenIsUnifiedSteamAccountOnlineParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAccountOnlineResponse          OutResult;                                         // 0x2C(0x1)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1161[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B8 (0x1B8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_IsUnifiedNintendoAccountOnline
struct UKrakenAuthApi_K2_IsUnifiedNintendoAccountOnline_Params
{
public:
	struct FKrakenIsUnifiedNintendoAccountOnlineParams InParams;                                          // 0x0(0x198)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x198(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x1B0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAccountOnlineResponse          OutResult;                                         // 0x1B4(0x1)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1187[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenAuthApi.K2_IsUnifiedEgsAccountOnline
struct UKrakenAuthApi_K2_IsUnifiedEgsAccountOnline_Params
{
public:
	struct FKrakenIsUnifiedEgsAccountOnlineParams InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenAccountOnlineResponse          OutResult;                                         // 0x34(0x1)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GuestToken
struct UKrakenAuthApi_K2_GuestToken_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenGuestToken                     OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GuestLogin
struct UKrakenAuthApi_K2_GuestLogin_Params
{
public:
	struct FKrakenGuestLoginParams               InParams;                                          // 0x0(0x170)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x170(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x188(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAuthToken                      OutResult;                                         // 0x190(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GetUsersWithXuid
struct UKrakenAuthApi_K2_GetUsersWithXuid_Params
{
public:
	struct FKrakenGetUsersWithXuidParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1221[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUnifiedAccountJweTokenPayload  OutResult;                                         // 0x30(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GetTwitchOidcToken
struct UKrakenAuthApi_K2_GetTwitchOidcToken_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenTwitchOauthTokenResponse       OutResult;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GetPublicKeyV2
struct UKrakenAuthApi_K2_GetPublicKeyV2_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1254[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAuthPublicKey                  OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenAuthApi.K2_GetPublicKey
struct UKrakenAuthApi_K2_GetPublicKey_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1264[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenAuthApi.K2_CrossAccountLogin
struct UKrakenAuthApi_K2_CrossAccountLogin_Params
{
public:
	struct FKrakenCrossAccountLoginParams        InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAuthToken                      OutResult;                                         // 0x68(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenConfigApi.K2_GetConfigItemRaw
struct UKrakenConfigApi_K2_GetConfigItemRaw_Params
{
public:
	struct FKrakenGetConfigItemRawParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenConfigApi.K2_GetConfigItem
struct UKrakenConfigApi_K2_GetConfigItem_Params
{
public:
	struct FKrakenGetConfigItemParams            InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1304[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    OutResult;                                         // 0x48(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenConfigApi.K2_GetConfig
struct UKrakenConfigApi_K2_GetConfig_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1326[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenCloudConfig>            OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenContentApi.K2_MultiContentimport
struct UKrakenContentApi_K2_MultiContentimport_Params
{
public:
	struct FKrakenMultiContentimportParams       InParams;                                          // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x70(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x88(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenContentApi.K2_GetContentUrl
struct UKrakenContentApi_K2_GetContentUrl_Params
{
public:
	struct FKrakenGetContentUrlParams            InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenContentUrl                     OutResult;                                         // 0x58(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenContentApi.K2_GetContent
struct UKrakenContentApi_K2_GetContent_Params
{
public:
	struct FKrakenGetContentParams               InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FKrakenItem>      OutResult;                                         // 0x40(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function Kraken.KrakenFeedbackApi.K2_CreateFeedback
struct UKrakenFeedbackApi_K2_CreateFeedback_Params
{
public:
	struct FKrakenCreateFeedbackParams           InParams;                                          // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x98(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0xB0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1410[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFeedback                       OutResult;                                         // 0xB8(0xC0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenFriendsApi.K2_FriendsRichPresence
struct UKrakenFriendsApi_K2_FriendsRichPresence_Params
{
public:
	struct FKrakenFriendsRichPresenceParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1463[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenRichPresenceResponse>   OutResult;                                         // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function Kraken.KrakenFriendsApi.K2_FriendRichPresence
struct UKrakenFriendsApi_K2_FriendRichPresence_Params
{
public:
	struct FKrakenFriendRichPresenceParams       InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRichPresenceResponse           OutResult;                                         // 0x30(0x110)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_TerminateGameSession
struct UKrakenGameSessionApi_K2_TerminateGameSession_Params
{
public:
	struct FKrakenTerminateGameSessionParams     InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_RemovePlayerFromGameSessionQueue
struct UKrakenGameSessionApi_K2_RemovePlayerFromGameSessionQueue_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1511[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_RegisterGameSession
struct UKrakenGameSessionApi_K2_RegisterGameSession_Params
{
public:
	struct FKrakenRegisterGameSessionParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_QueueForGameSession
struct UKrakenGameSessionApi_K2_QueueForGameSession_Params
{
public:
	struct FKrakenQueueForGameSessionParams      InParams;                                          // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0xC0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0xD8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1557[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_JoinPlayerInGameSession
struct UKrakenGameSessionApi_K2_JoinPlayerInGameSession_Params
{
public:
	struct FKrakenJoinPlayerInGameSessionParams  InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1572[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_GetGameSessionNetworkInformationFallback
struct UKrakenGameSessionApi_K2_GetGameSessionNetworkInformationFallback_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1594[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenGetConnectionInformationMessageFallbackResponseBody OutResult;                                         // 0x20(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_CreateGameSession
struct UKrakenGameSessionApi_K2_CreateGameSession_Params
{
public:
	struct FKrakenCreateGameSessionParams        InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenCreateGameSessionResponseBody  OutResult;                                         // 0x48(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_CompletePlayerSession
struct UKrakenGameSessionApi_K2_CompletePlayerSession_Params
{
public:
	struct FKrakenCompletePlayerSessionParams    InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenGameSessionApi.K2_ActivePlayerSession
struct UKrakenGameSessionApi_K2_ActivePlayerSession_Params
{
public:
	struct FKrakenActivePlayerSessionParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1613[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenHealthcheckApi.K2_Checkfull
struct UKrakenHealthcheckApi_K2_Checkfull_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFullHealthCheck                OutResult;                                         // 0x20(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenHealthcheckApi.K2_Check
struct UKrakenHealthcheckApi_K2_Check_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1667[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenHealthCheck                    OutResult;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_InventoryGet
struct UKrakenInventoriesApi_K2_InventoryGet_Params
{
public:
	struct FKrakenInventoryGetParams             InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1695[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryGet                   OutResult;                                         // 0x40(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_GiftInventory
struct UKrakenInventoriesApi_K2_GiftInventory_Params
{
public:
	struct FKrakenGiftInventoryParams            InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryGift                  OutResult;                                         // 0x40(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_GetInventoryItem
struct UKrakenInventoriesApi_K2_GetInventoryItem_Params
{
public:
	struct FKrakenGetInventoryItemParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryGetByItemId           OutResult;                                         // 0x30(0xE0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_DropInventory
struct UKrakenInventoriesApi_K2_DropInventory_Params
{
public:
	struct FKrakenDropInventoryParams            InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryDrop                  OutResult;                                         // 0x38(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_ConsumeInventoryV2
struct UKrakenInventoriesApi_K2_ConsumeInventoryV2_Params
{
public:
	struct FKrakenConsumeInventoryV2Params       InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1719[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryConsumeV2             OutResult;                                         // 0x38(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenInventoriesApi.K2_ConsumeInventory
struct UKrakenInventoriesApi_K2_ConsumeInventory_Params
{
public:
	struct FKrakenConsumeInventoryParams         InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1722[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryConsume               OutResult;                                         // 0x38(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_SubmitLeaderboardScore
struct UKrakenLeaderboardsApi_K2_SubmitLeaderboardScore_Params
{
public:
	struct FKrakenSubmitLeaderboardScoreParams   InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1739[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerScoreResponse            OutResult;                                         // 0x38(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_ListWindows
struct UKrakenLeaderboardsApi_K2_ListWindows_Params
{
public:
	struct FKrakenListWindowsParams              InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLeaderboardGetScoresResponse   OutResult;                                         // 0x80(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_ListLeaderboardScores
struct UKrakenLeaderboardsApi_K2_ListLeaderboardScores_Params
{
public:
	struct FKrakenListLeaderboardScoresParams    InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLeaderboardGetScoresResponse   OutResult;                                         // 0x80(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_ListLeaderboards
struct UKrakenLeaderboardsApi_K2_ListLeaderboards_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1764[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenLeaderboardInfo>        OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboardStates
struct UKrakenLeaderboardsApi_K2_GetLeaderboardStates_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1779[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLeaderboardStates              OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboardState
struct UKrakenLeaderboardsApi_K2_GetLeaderboardState_Params
{
public:
	struct FKrakenGetLeaderboardStateParams      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenLeaderboardState               OutResult;                                         // 0x3C(0x2)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1791[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboard
struct UKrakenLeaderboardsApi_K2_GetLeaderboard_Params
{
public:
	struct FKrakenGetLeaderboardParams           InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLeaderboardInfo                OutResult;                                         // 0x30(0x180)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function Kraken.KrakenLeaderboardsApi.K2_ClaimLeaderboardScore
struct UKrakenLeaderboardsApi_K2_ClaimLeaderboardScore_Params
{
public:
	struct FKrakenClaimLeaderboardScoreParams    InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLeaderboardClaim               OutResult;                                         // 0x40(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenMeApi.K2_RichPresence
struct UKrakenMeApi_K2_RichPresence_Params
{
public:
	struct FKrakenRichPresenceParams             InParams;                                          // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x78(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x90(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenMeApi.K2_Reward
struct UKrakenMeApi_K2_Reward_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenMeApi.K2_Mytime
struct UKrakenMeApi_K2_Mytime_Params
{
public:
	struct FKrakenMytimeParams                   InParams;                                          // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenTime                           OutResult;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenMeApi.K2_Me
struct UKrakenMeApi_K2_Me_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMe                             OutResult;                                         // 0x20(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenMeApi.K2_Logout
struct UKrakenMeApi_K2_Logout_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenMeApi.K2_Location
struct UKrakenMeApi_K2_Location_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLocation                       OutResult;                                         // 0x20(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenMeApi.K2_Heartbeat
struct UKrakenMeApi_K2_Heartbeat_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenMeApi.K2_ActivePlayerSubscription
struct UKrakenMeApi_K2_ActivePlayerSubscription_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1809[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenPlayerSubscription>     OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_SendMessagesWithProvider
struct UKrakenMessagesApi_K2_SendMessagesWithProvider_Params
{
public:
	struct FKrakenSendMessagesWithProviderParams InParams;                                          // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x68(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x80(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1828[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageSendWithProviderBody    OutResult;                                         // 0x88(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_SendMessages
struct UKrakenMessagesApi_K2_SendMessages_Params
{
public:
	struct FKrakenSendMessagesParams             InParams;                                          // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x58(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x70(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageSendList                OutResult;                                         // 0x78(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_RemoveMessagesList
struct UKrakenMessagesApi_K2_RemoveMessagesList_Params
{
public:
	struct FKrakenRemoveMessagesListParams       InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenMessageRemoveList              OutResult;                                         // 0x2C(0x1)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_183E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_MarkMessagesAsV2
struct UKrakenMessagesApi_K2_MarkMessagesAsV2_Params
{
public:
	struct FKrakenMarkMessagesAsV2Params         InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageMarkAs                  OutResult;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_MarkMessagesAs
struct UKrakenMessagesApi_K2_MarkMessagesAs_Params
{
public:
	struct FKrakenMarkMessagesAsParams           InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1854[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageMarkAs                  OutResult;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_GetMessageV2
struct UKrakenMessagesApi_K2_GetMessageV2_Params
{
public:
	struct FKrakenGetMessageV2Params             InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1866[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageGet                     OutResult;                                         // 0x38(0x138)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_GetMessagesListV2
struct UKrakenMessagesApi_K2_GetMessagesListV2_Params
{
public:
	struct FKrakenGetMessagesListV2Params        InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageGetList                 OutResult;                                         // 0x48(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_GetMessagesList
struct UKrakenMessagesApi_K2_GetMessagesList_Params
{
public:
	struct FKrakenGetMessagesListParams          InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1875[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageGetList                 OutResult;                                         // 0x48(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_GetMessagesCount
struct UKrakenMessagesApi_K2_GetMessagesCount_Params
{
public:
	struct FKrakenGetMessagesCountParams         InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenMessagesCount                  OutResult;                                         // 0x34(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_GetMessage
struct UKrakenMessagesApi_K2_GetMessage_Params
{
public:
	struct FKrakenGetMessageParams               InParams;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageGet                     OutResult;                                         // 0x28(0x138)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenMessagesApi.K2_ClaimMessageRewards
struct UKrakenMessagesApi_K2_ClaimMessageRewards_Params
{
public:
	struct FKrakenClaimMessageRewardsParams      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1893[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMessageClaimResponse           OutResult;                                         // 0x40(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function Kraken.KrakenPartyApi.K2_UpdateParty
struct UKrakenPartyApi_K2_UpdateParty_Params
{
public:
	struct FKrakenUpdatePartyParams              InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x68(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPartyApi.K2_SetPlayerPartyState
struct UKrakenPartyApi_K2_SetPlayerPartyState_Params
{
public:
	struct FKrakenSetPlayerPartyStateParams      InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPartyApi.K2_SendPartyChatMessage
struct UKrakenPartyApi_K2_SendPartyChatMessage_Params
{
public:
	struct FKrakenSendPartyChatMessageParams     InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RequestJoinPlayerV2
struct UKrakenPartyApi_K2_RequestJoinPlayerV2_Params
{
public:
	struct FKrakenRequestJoinPlayerV2Params      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyJoinRequestDetails        OutResult;                                         // 0x40(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RequestJoinPlayer
struct UKrakenPartyApi_K2_RequestJoinPlayer_Params
{
public:
	struct FKrakenRequestJoinPlayerParams        InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x40(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RequestJoinPartyV2
struct UKrakenPartyApi_K2_RequestJoinPartyV2_Params
{
public:
	struct FKrakenRequestJoinPartyV2Params       InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyJoinRequestDetails        OutResult;                                         // 0x50(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RequestJoinParty
struct UKrakenPartyApi_K2_RequestJoinParty_Params
{
public:
	struct FKrakenRequestJoinPartyParams         InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x50(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RejectPartyInvite
struct UKrakenPartyApi_K2_RejectPartyInvite_Params
{
public:
	struct FKrakenRejectPartyInviteParams        InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPartyApi.K2_RejectJoinRequest
struct UKrakenPartyApi_K2_RejectJoinRequest_Params
{
public:
	struct FKrakenRejectJoinRequestParams        InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPartyApi.K2_PartyLeave
struct UKrakenPartyApi_K2_PartyLeave_Params
{
public:
	struct FKrakenPartyLeaveParams               InParams;                                          // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPartyApi.K2_InviteToParty
struct UKrakenPartyApi_K2_InviteToParty_Params
{
public:
	struct FKrakenInviteToPartyParams            InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerInvitationDetails        OutResult;                                         // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_GetParty
struct UKrakenPartyApi_K2_GetParty_Params
{
public:
	struct FKrakenGetPartyParams                 InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1906[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x40(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function Kraken.KrakenPartyApi.K2_GetCurrentPartyDetails
struct UKrakenPartyApi_K2_GetCurrentPartyDetails_Params
{
public:
	struct FKrakenGetCurrentPartyDetailsParams   InParams;                                          // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_190A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerPartyDetails             OutResult;                                         // 0x28(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenPartyApi.K2_GetCurrentParty
struct UKrakenPartyApi_K2_GetCurrentParty_Params
{
public:
	struct FKrakenGetCurrentPartyParams          InParams;                                          // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1914[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1916[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x28(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenPartyApi.K2_DelMember
struct UKrakenPartyApi_K2_DelMember_Params
{
public:
	struct FKrakenDelMemberParams                InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPartyApi.K2_DeleteParty
struct UKrakenPartyApi_K2_DeleteParty_Params
{
public:
	struct FKrakenDeletePartyParams              InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function Kraken.KrakenPartyApi.K2_CreateParty
struct UKrakenPartyApi_K2_CreateParty_Params
{
public:
	struct FKrakenCreatePartyParams              InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x58(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_ChangePartyHost
struct UKrakenPartyApi_K2_ChangePartyHost_Params
{
public:
	struct FKrakenChangePartyHostParams          InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1932[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x40(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenPartyApi.K2_CancelRequestJoin
struct UKrakenPartyApi_K2_CancelRequestJoin_Params
{
public:
	struct FKrakenCancelRequestJoinParams        InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1938[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPartyApi.K2_CancelPartyInvite
struct UKrakenPartyApi_K2_CancelPartyInvite_Params
{
public:
	struct FKrakenCancelPartyInviteParams        InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenPartyApi.K2_AcceptPartyInvite
struct UKrakenPartyApi_K2_AcceptPartyInvite_Params
{
public:
	struct FKrakenAcceptPartyInviteParams        InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1942[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyDetails                   OutResult;                                         // 0x30(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPartyApi.K2_AcceptJoinRequest
struct UKrakenPartyApi_K2_AcceptJoinRequest_Params
{
public:
	struct FKrakenAcceptJoinRequestParams        InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1947[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_SearchProviderPlayerName
struct UKrakenPlayernameApi_K2_SearchProviderPlayerName_Params
{
public:
	struct FKrakenSearchProviderPlayerNameParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1954[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameSearchResponse       OutResult;                                         // 0x40(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerNameCrossplatformV2
struct UKrakenPlayernameApi_K2_SearchPlayerNameCrossplatformV2_Params
{
public:
	struct FKrakenSearchPlayerNameCrossplatformV2Params InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameCrossplatformSearchResponse OutResult;                                         // 0x30(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerNameCrossplatform
struct UKrakenPlayernameApi_K2_SearchPlayerNameCrossplatform_Params
{
public:
	struct FKrakenSearchPlayerNameCrossplatformParams InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1964[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameCrossplatformSearchResponse OutResult;                                         // 0x58(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerName
struct UKrakenPlayernameApi_K2_SearchPlayerName_Params
{
public:
	struct FKrakenSearchPlayerNameParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameSearchResponse       OutResult;                                         // 0x30(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_RegisterProviderPlayerName
struct UKrakenPlayernameApi_K2_RegisterProviderPlayerName_Params
{
public:
	struct FKrakenRegisterProviderPlayerNameParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameResponse             OutResult;                                         // 0x40(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_RegisterPlayerName
struct UKrakenPlayernameApi_K2_RegisterPlayerName_Params
{
public:
	struct FKrakenRegisterPlayerNameParams       InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameResponse             OutResult;                                         // 0x30(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_GetPlayerNameByUserId
struct UKrakenPlayernameApi_K2_GetPlayerNameByUserId_Params
{
public:
	struct FKrakenGetPlayerNameByUserIdParams    InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameResponse             OutResult;                                         // 0x30(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_GetPlayerName
struct UKrakenPlayernameApi_K2_GetPlayerName_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameResponse             OutResult;                                         // 0x20(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Kraken.KrakenPlayernameApi.K2_GetAPlayerNameCrossplatform
struct UKrakenPlayernameApi_K2_GetAPlayerNameCrossplatform_Params
{
public:
	struct FKrakenGetAPlayerNameCrossplatformParams InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1998[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNameCrossplatformResponse OutResult;                                         // 0x58(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_UpsertSplinteredState
struct UKrakenPlayersApi_K2_UpsertSplinteredState_Params
{
public:
	struct FKrakenUpsertSplinteredStateParams    InParams;                                          // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x68(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x80(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUpsertSplinteredStateResponse  OutResult;                                         // 0x88(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_UpsertBatchSplinteredState
struct UKrakenPlayersApi_K2_UpsertBatchSplinteredState_Params
{
public:
	struct FKrakenUpsertBatchSplinteredStateParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUpsertBatchSplinteredStateResponse OutResult;                                         // 0x40(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_UploadStateBatch
struct UKrakenPlayersApi_K2_UploadStateBatch_Params
{
public:
	struct FKrakenUploadStateBatchParams         InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerStateBatchResponse       OutResult;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_UploadState
struct UKrakenPlayersApi_K2_UploadState_Params
{
public:
	struct FKrakenUploadStateParams              InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerStateMetaData            OutResult;                                         // 0x68(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_UnblockPlayer
struct UKrakenPlayersApi_K2_UnblockPlayer_Params
{
public:
	struct FKrakenUnblockPlayerParams            InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_SyncFriendsV2
struct UKrakenPlayersApi_K2_SyncFriendsV2_Params
{
public:
	struct FKrakenSyncFriendsV2Params            InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFriendsGetList                 OutResult;                                         // 0x80(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_StartSyncFriendsV2
struct UKrakenPlayersApi_K2_StartSyncFriendsV2_Params
{
public:
	struct FKrakenStartSyncFriendsV2Params       InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenFriendsStartSyncResponse       OutResult;                                         // 0x54(0x2)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_SetFriendInviteAttributes
struct UKrakenPlayersApi_K2_SetFriendInviteAttributes_Params
{
public:
	struct FKrakenSetFriendInviteAttributesParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_SetFriendFavorite
struct UKrakenPlayersApi_K2_SetFriendFavorite_Params
{
public:
	struct FKrakenSetFriendFavoriteParams        InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_SetFriendAttributes
struct UKrakenPlayersApi_K2_SetFriendAttributes_Params
{
public:
	struct FKrakenSetFriendAttributesParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ResetHackerCounters
struct UKrakenPlayersApi_K2_ResetHackerCounters_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_RemoveFriends
struct UKrakenPlayersApi_K2_RemoveFriends_Params
{
public:
	struct FKrakenRemoveFriendsParams            InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFriendsGetList                 OutResult;                                         // 0x48(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_PatchState
struct UKrakenPlayersApi_K2_PatchState_Params
{
public:
	struct FKrakenPatchStateParams               InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerStateMetaData            OutResult;                                         // 0x58(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ListPlayerStates
struct UKrakenPlayersApi_K2_ListPlayerStates_Params
{
public:
	struct FKrakenListPlayerStatesParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenState>                  OutResult;                                         // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_IncrementAtomicSplinteredState
struct UKrakenPlayersApi_K2_IncrementAtomicSplinteredState_Params
{
public:
	struct FKrakenIncrementAtomicSplinteredStateParams InParams;                                          // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x68(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x80(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenIncrementAtomicSplinteredStateResponse OutResult;                                         // 0x88(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetSplinteredStates
struct UKrakenPlayersApi_K2_GetSplinteredStates_Params
{
public:
	struct FKrakenGetSplinteredStatesParams      InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSplinteredState                OutResult;                                         // 0x68(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetRecentlyPlayedWithPlayers
struct UKrakenPlayersApi_K2_GetRecentlyPlayedWithPlayers_Params
{
public:
	struct FKrakenGetRecentlyPlayedWithPlayersParams InParams;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNamesResponse            OutResult;                                         // 0x28(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetPlayerStateByKeyBinary
struct UKrakenPlayersApi_K2_GetPlayerStateByKeyBinary_Params
{
public:
	struct FKrakenGetPlayerStateByKeyBinaryParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                OutResult;                                         // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetPlayerStateByKey
struct UKrakenPlayersApi_K2_GetPlayerStateByKey_Params
{
public:
	struct FKrakenGetPlayerStateByKeyParams      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenState                          OutResult;                                         // 0x40(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetPlayerCrossplatform
struct UKrakenPlayersApi_K2_GetPlayerCrossplatform_Params
{
public:
	struct FKrakenGetPlayerCrossplatformParams   InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerCrossplatform            OutResult;                                         // 0x58(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetPlayer
struct UKrakenPlayersApi_K2_GetPlayer_Params
{
public:
	struct FKrakenGetPlayerParams                InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayer                         OutResult;                                         // 0x38(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetPatches
struct UKrakenPlayersApi_K2_GetPatches_Params
{
public:
	struct FKrakenGetPatchesParams               InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenPlayerState>            OutResult;                                         // 0x48(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetFullState
struct UKrakenPlayersApi_K2_GetFullState_Params
{
public:
	struct FKrakenGetFullStateParams             InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerState                    OutResult;                                         // 0x48(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetFriendSuggestionsV2
struct UKrakenPlayersApi_K2_GetFriendSuggestionsV2_Params
{
public:
	struct FKrakenGetFriendSuggestionsV2Params   InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenFriendSuggestionsResponseBody> OutResult;                                         // 0x50(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetFriendSuggestions
struct UKrakenPlayersApi_K2_GetFriendSuggestions_Params
{
public:
	struct FKrakenGetFriendSuggestionsParams     InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerNamesResponse            OutResult;                                         // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetFriendInfo
struct UKrakenPlayersApi_K2_GetFriendInfo_Params
{
public:
	struct FKrakenGetFriendInfoParams            InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFriend                         OutResult;                                         // 0x48(0x178)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetBatchSplinteredStates
struct UKrakenPlayersApi_K2_GetBatchSplinteredStates_Params
{
public:
	struct FKrakenGetBatchSplinteredStatesParams InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSplinteredStateBatch           OutResult;                                         // 0x68(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_GetBan
struct UKrakenPlayersApi_K2_GetBan_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBanResponse                    OutResult;                                         // 0x20(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_FriendsCrossplatform
struct UKrakenPlayersApi_K2_FriendsCrossplatform_Params
{
public:
	struct FKrakenFriendsCrossplatformParams     InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenFriendCrossplatform>    OutResult;                                         // 0x68(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_Friends
struct UKrakenPlayersApi_K2_Friends_Params
{
public:
	struct FKrakenFriendsParams                  InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenFriend>                 OutResult;                                         // 0x58(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_DeleteState
struct UKrakenPlayersApi_K2_DeleteState_Params
{
public:
	struct FKrakenDeleteStateParams              InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_DeleteSplinteredState
struct UKrakenPlayersApi_K2_DeleteSplinteredState_Params
{
public:
	struct FKrakenDeleteSplinteredStateParams    InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenDeleteSplinteredStateResponse  OutResult;                                         // 0x58(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_DeletePlayerStateByKey
struct UKrakenPlayersApi_K2_DeletePlayerStateByKey_Params
{
public:
	struct FKrakenDeletePlayerStateByKeyParams   InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_DeleteBatchSplinteredState
struct UKrakenPlayersApi_K2_DeleteBatchSplinteredState_Params
{
public:
	struct FKrakenDeleteBatchSplinteredStateParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenDeleteBatchSplinteredStateResponse OutResult;                                         // 0x40(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ConfirmBanMessage
struct UKrakenPlayersApi_K2_ConfirmBanMessage_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBanInfo                        OutResult;                                         // 0x20(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ClearState
struct UKrakenPlayersApi_K2_ClearState_Params
{
public:
	struct FKrakenClearStateParams               InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ClearSplinteredState
struct UKrakenPlayersApi_K2_ClearSplinteredState_Params
{
public:
	struct FKrakenClearSplinteredStateParams     InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenDeleteSplinteredStateResponse  OutResult;                                         // 0x58(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_ClearBatchSplinteredState
struct UKrakenPlayersApi_K2_ClearBatchSplinteredState_Params
{
public:
	struct FKrakenClearBatchSplinteredStateParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenDeleteBatchSplinteredStateResponse OutResult;                                         // 0x40(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_BlockPlayer
struct UKrakenPlayersApi_K2_BlockPlayer_Params
{
public:
	struct FKrakenBlockPlayerParams              InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_BlockedPlayersCompleteData
struct UKrakenPlayersApi_K2_BlockedPlayersCompleteData_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBlockedPlayersCompleteData     OutResult;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_BlockedPlayers
struct UKrakenPlayersApi_K2_BlockedPlayers_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBlockedPlayersResponse         OutResult;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddUserDeviceInfo
struct UKrakenPlayersApi_K2_AddUserDeviceInfo_Params
{
public:
	struct FKrakenAddUserDeviceInfoParams        InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B10[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddRecentlyPlayedWithPlayers
struct UKrakenPlayersApi_K2_AddRecentlyPlayedWithPlayers_Params
{
public:
	struct FKrakenAddRecentlyPlayedWithPlayersParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B15[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddPlayerStatesBatch
struct UKrakenPlayersApi_K2_AddPlayerStatesBatch_Params
{
public:
	struct FKrakenAddPlayerStatesBatchParams     InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenState>                  OutResult;                                         // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddPlayerStateBinary
struct UKrakenPlayersApi_K2_AddPlayerStateBinary_Params
{
public:
	struct FKrakenAddPlayerStateBinaryParams     InParams;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x40(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x58(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenState                          OutResult;                                         // 0x60(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddPlayerState
struct UKrakenPlayersApi_K2_AddPlayerState_Params
{
public:
	struct FKrakenAddPlayerStateParams           InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenState                          OutResult;                                         // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddMultipleAnalyticIds
struct UKrakenPlayersApi_K2_AddMultipleAnalyticIds_Params
{
public:
	struct FKrakenAddMultipleAnalyticIdsParams   InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B22[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddFriends
struct UKrakenPlayersApi_K2_AddFriends_Params
{
public:
	struct FKrakenAddFriendsParams               InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFriendsGetList                 OutResult;                                         // 0x40(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPlayersApi.K2_AddAnalyticId
struct UKrakenPlayersApi_K2_AddAnalyticId_Params
{
public:
	struct FKrakenAddAnalyticIdParams            InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_XboxOnePurchaseCreateTransaction
struct UKrakenPurchasesApi_K2_XboxOnePurchaseCreateTransaction_Params
{
public:
	struct FKrakenXboxOnePurchaseCreateTransactionParams InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B34[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_XboxOnePurchaseAbortTransaction
struct UKrakenPurchasesApi_K2_XboxOnePurchaseAbortTransaction_Params
{
public:
	struct FKrakenXboxOnePurchaseAbortTransactionParams InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B36[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_SubscriptionPurchase
struct UKrakenPurchasesApi_K2_SubscriptionPurchase_Params
{
public:
	struct FKrakenSubscriptionPurchaseParams     InParams;                                          // 0x0(0x160)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x160(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x178(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSubscriptionData               OutResult;                                         // 0x180(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PurchaseWithConsume
struct UKrakenPurchasesApi_K2_PurchaseWithConsume_Params
{
public:
	struct FKrakenPurchaseWithConsumeParams      InParams;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x40(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x58(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchaseWithConsume            OutResult;                                         // 0x60(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PurchaseStatuses
struct UKrakenPurchasesApi_K2_PurchaseStatuses_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchaseStatus                 OutResult;                                         // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PurchaseRemaining
struct UKrakenPurchasesApi_K2_PurchaseRemaining_Params
{
public:
	struct FKrakenPurchaseRemainingParams        InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchaseRemaining              OutResult;                                         // 0x30(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_Purchase
struct UKrakenPurchasesApi_K2_Purchase_Params
{
public:
	struct FKrakenPurchaseParams                 InParams;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x40(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x58(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchase                       OutResult;                                         // 0x60(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PremiumXboxOnePurchase
struct UKrakenPurchasesApi_K2_PremiumXboxOnePurchase_Params
{
public:
	struct FKrakenPremiumXboxOnePurchaseParams   InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchase                       OutResult;                                         // 0x70(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x2D8 (0x2D8 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PremiumPurchaseWithConsume
struct UKrakenPurchasesApi_K2_PremiumPurchaseWithConsume_Params
{
public:
	struct FKrakenPremiumPurchaseWithConsumeParams InParams;                                          // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x208(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x220(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPremiumPurchaseWithConsume     OutResult;                                         // 0x228(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x320 (0x320 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_PremiumPurchase
struct UKrakenPurchasesApi_K2_PremiumPurchase_Params
{
public:
	struct FKrakenPremiumPurchaseParams          InParams;                                          // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x208(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x220(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPremiumPurchaseResponse        OutResult;                                         // 0x228(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_NintendoPurchases
struct UKrakenPurchasesApi_K2_NintendoPurchases_Params
{
public:
	struct FKrakenNintendoPurchasesParams        InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKrakenNintendoPurchaseResponse> OutResult;                                         // 0x70(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseCreateTransaction
struct UKrakenPurchasesApi_K2_MicrosoftPurchaseCreateTransaction_Params
{
public:
	struct FKrakenMicrosoftPurchaseCreateTransactionParams InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseConcludeTransaction
struct UKrakenPurchasesApi_K2_MicrosoftPurchaseConcludeTransaction_Params
{
public:
	struct FKrakenMicrosoftPurchaseConcludeTransactionParams InParams;                                          // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x78(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x90(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPurchase                       OutResult;                                         // 0x98(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseAbortTransaction
struct UKrakenPurchasesApi_K2_MicrosoftPurchaseAbortTransaction_Params
{
public:
	struct FKrakenMicrosoftPurchaseAbortTransactionParams InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B64[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_UpdatePlayerPuzzleStatus
struct UKrakenPuzzlePerformanceApi_K2_UpdatePlayerPuzzleStatus_Params
{
public:
	struct FKrakenUpdatePlayerPuzzleStatusParams InParams;                                          // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x58(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x70(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_PlayerSolvedPuzzles
struct UKrakenPuzzlePerformanceApi_K2_PlayerSolvedPuzzles_Params
{
public:
	struct FKrakenPlayerSolvedPuzzlesParams      InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSolvedPuzzles                  OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_PlayerPuzzleStatus
struct UKrakenPuzzlePerformanceApi_K2_PlayerPuzzleStatus_Params
{
public:
	struct FKrakenPlayerPuzzleStatusParams       InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerPuzzleStatusData         OutResult;                                         // 0x50(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_MySolvedPuzzles
struct UKrakenPuzzlePerformanceApi_K2_MySolvedPuzzles_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSolvedPuzzles                  OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_MyPuzzleStatus
struct UKrakenPuzzlePerformanceApi_K2_MyPuzzleStatus_Params
{
public:
	struct FKrakenMyPuzzleStatusParams           InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerPuzzleStatusData         OutResult;                                         // 0x28(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_AllPuzzleStatusesForPlayer
struct UKrakenPuzzlePerformanceApi_K2_AllPuzzleStatusesForPlayer_Params
{
public:
	struct FKrakenAllPuzzleStatusesForPlayerParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultiplePlayerPuzzleStatuses   OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlePerformanceApi.K2_AllMyPuzzleStatuses
struct UKrakenPuzzlePerformanceApi_K2_AllMyPuzzleStatuses_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultiplePlayerPuzzleStatuses   OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_UploadSerializedPuzzle
struct UKrakenPuzzlesApi_K2_UploadSerializedPuzzle_Params
{
public:
	struct FKrakenUploadSerializedPuzzleParams   InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B87[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_UploadBinaryPuzzle
struct UKrakenPuzzlesApi_K2_UploadBinaryPuzzle_Params
{
public:
	struct FKrakenUploadBinaryPuzzleParams       InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_SetZone
struct UKrakenPuzzlesApi_K2_SetZone_Params
{
public:
	struct FKrakenSetZoneParams                  InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_SetStatus
struct UKrakenPuzzlesApi_K2_SetStatus_Params
{
public:
	struct FKrakenSetStatusParams                InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B93[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_SetDifficulty
struct UKrakenPuzzlesApi_K2_SetDifficulty_Params
{
public:
	struct FKrakenSetDifficultyParams            InParams;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B98[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_SetActiveCache
struct UKrakenPuzzlesApi_K2_SetActiveCache_Params
{
public:
	struct FKrakenSetActiveCacheParams           InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_SetAccessLevel
struct UKrakenPuzzlesApi_K2_SetAccessLevel_Params
{
public:
	struct FKrakenSetAccessLevelParams           InParams;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_RemoveAccessLevel
struct UKrakenPuzzlesApi_K2_RemoveAccessLevel_Params
{
public:
	struct FKrakenRemoveAccessLevelParams        InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzleSpawnData
struct UKrakenPuzzlesApi_K2_GetPuzzleSpawnData_Params
{
public:
	struct FKrakenGetPuzzleSpawnDataParams       InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPuzzleSpawnData                OutResult;                                         // 0x28(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzleEditorData
struct UKrakenPuzzlesApi_K2_GetPuzzleEditorData_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultiplePuzzleEditorData       OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzle
struct UKrakenPuzzlesApi_K2_GetPuzzle_Params
{
public:
	struct FKrakenGetPuzzleParams                InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenFullPuzzleDatabaseEntry        OutResult;                                         // 0x28(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetLivePuzzleSpawnData
struct UKrakenPuzzlesApi_K2_GetLivePuzzleSpawnData_Params
{
public:
	struct FKrakenGetLivePuzzleSpawnDataParams   InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultiplePuzzleSpawnData        OutResult;                                         // 0x38(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetKrakenIdFromLocalId
struct UKrakenPuzzlesApi_K2_GetKrakenIdFromLocalId_Params
{
public:
	struct FKrakenGetKrakenIdFromLocalIdParams   InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenPuzzleSpec                     OutResult;                                         // 0x2C(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_GetAccessLevelDescriptions
struct UKrakenPuzzlesApi_K2_GetAccessLevelDescriptions_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAccessLevelDescriptions        OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_CreateSerializedPuzzle
struct UKrakenPuzzlesApi_K2_CreateSerializedPuzzle_Params
{
public:
	struct FKrakenCreateSerializedPuzzleParams   InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenPuzzleSpec                     OutResult;                                         // 0x54(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_CreatePuzzleDatabaseCache
struct UKrakenPuzzlesApi_K2_CreatePuzzleDatabaseCache_Params
{
public:
	struct FKrakenCreatePuzzleDatabaseCacheParams InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPuzzleCacheInfo                OutResult;                                         // 0x28(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_CreateBlankPuzzle
struct UKrakenPuzzlesApi_K2_CreateBlankPuzzle_Params
{
public:
	struct FKrakenCreateBlankPuzzleParams        InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenPuzzleSpec                     OutResult;                                         // 0x44(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_CreateBinaryPuzzle
struct UKrakenPuzzlesApi_K2_CreateBinaryPuzzle_Params
{
public:
	struct FKrakenCreateBinaryPuzzleParams       InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenPuzzleSpec                     OutResult;                                         // 0x54(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_BatchSetNonGridPuzzleAccessLevels
struct UKrakenPuzzlesApi_K2_BatchSetNonGridPuzzleAccessLevels_Params
{
public:
	struct FKrakenBatchSetNonGridPuzzleAccessLevelsParams InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Kraken.KrakenPuzzlesApi.K2_BatchSetGridPuzzleAccessLevels
struct UKrakenPuzzlesApi_K2_BatchSetGridPuzzleAccessLevels_Params
{
public:
	struct FKrakenBatchSetGridPuzzleAccessLevelsParams InParams;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingRebalanceUser
struct UKrakenRealTimeMessagingApi_K2_RealTimeMessagingRebalanceUser_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingRebalanceInstances
struct UKrakenRealTimeMessagingApi_K2_RealTimeMessagingRebalanceInstances_Params
{
public:
	struct FKrakenRealTimeMessagingRebalanceInstancesParams InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingGetUrl
struct UKrakenRealTimeMessagingApi_K2_RealTimeMessagingGetUrl_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRtmGetUrl                      OutResult;                                         // 0x20(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingGetMetrics
struct UKrakenRealTimeMessagingApi_K2_RealTimeMessagingGetMetrics_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Kraken.KrakenSophiaAnalyticsApi.K2_SendAnalyticsEntitlements
struct UKrakenSophiaAnalyticsApi_K2_SendAnalyticsEntitlements_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_UpdateQuestSate
struct UKrakenSophiaGameplayApi_K2_UpdateQuestSate_Params
{
public:
	struct FKrakenUpdateQuestSateParams          InParams;                                          // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x90(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0xA8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_UnlockProgressionRewardsArray
struct UKrakenSophiaGameplayApi_K2_UnlockProgressionRewardsArray_Params
{
public:
	struct FKrakenUnlockProgressionRewardsArrayParams InParams;                                          // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x80(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x98(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_UnlockProgressionRewards
struct UKrakenSophiaGameplayApi_K2_UnlockProgressionRewards_Params
{
public:
	struct FKrakenUnlockProgressionRewardsParams InParams;                                          // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x80(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x98(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_SolvePuzzle
struct UKrakenSophiaGameplayApi_K2_SolvePuzzle_Params
{
public:
	struct FKrakenSolvePuzzleParams              InParams;                                          // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x98(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0xB0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_SetServerVerifiedStatus
struct UKrakenSophiaGameplayApi_K2_SetServerVerifiedStatus_Params
{
public:
	struct FKrakenSetServerVerifiedStatusParams  InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_SetQuestStatus
struct UKrakenSophiaGameplayApi_K2_SetQuestStatus_Params
{
public:
	struct FKrakenSetQuestStatusParams           InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C02[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_SetCustomization
struct UKrakenSophiaGameplayApi_K2_SetCustomization_Params
{
public:
	struct FKrakenSetCustomizationParams         InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetUpgradesForPlayer
struct UKrakenSophiaGameplayApi_K2_GetUpgradesForPlayer_Params
{
public:
	struct FKrakenGetUpgradesForPlayerParams     InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerUpgrades                 OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetUnlocksForPlayer
struct UKrakenSophiaGameplayApi_K2_GetUnlocksForPlayer_Params
{
public:
	struct FKrakenGetUnlocksForPlayerParams      InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUnlocksInCategory              OutResult;                                         // 0x40(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetServerVerifiedStatusForPlayer
struct UKrakenSophiaGameplayApi_K2_GetServerVerifiedStatusForPlayer_Params
{
public:
	struct FKrakenGetServerVerifiedStatusForPlayerParams InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerServerVerifiedStatus     OutResult;                                         // 0x40(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetRewardedProgressLevelsForPlayerArray
struct UKrakenSophiaGameplayApi_K2_GetRewardedProgressLevelsForPlayerArray_Params
{
public:
	struct FKrakenGetRewardedProgressLevelsForPlayerArrayParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRewardedProgressLevelsArray    OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetRewardedProgressLevelsForPlayer
struct UKrakenSophiaGameplayApi_K2_GetRewardedProgressLevelsForPlayer_Params
{
public:
	struct FKrakenGetRewardedProgressLevelsForPlayerParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRewardedProgressLevels         OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetQuestStatusForPlayer
struct UKrakenSophiaGameplayApi_K2_GetQuestStatusForPlayer_Params
{
public:
	struct FKrakenGetQuestStatusForPlayerParams  InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerQuestStatus              OutResult;                                         // 0x40(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetPartyMemberIdsForPlayer
struct UKrakenSophiaGameplayApi_K2_GetPartyMemberIdsForPlayer_Params
{
public:
	struct FKrakenGetPartyMemberIdsForPlayerParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyMemberIds                 OutResult;                                         // 0x30(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetPartyMemberIds
struct UKrakenSophiaGameplayApi_K2_GetPartyMemberIds_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPartyMemberIds                 OutResult;                                         // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyUpgrades
struct UKrakenSophiaGameplayApi_K2_GetMyUpgrades_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerUpgrades                 OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyUnlocks
struct UKrakenSophiaGameplayApi_K2_GetMyUnlocks_Params
{
public:
	struct FKrakenGetMyUnlocksParams             InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenUnlocksInCategory              OutResult;                                         // 0x30(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyServerVerifiedStatus
struct UKrakenSophiaGameplayApi_K2_GetMyServerVerifiedStatus_Params
{
public:
	struct FKrakenGetMyServerVerifiedStatusParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerServerVerifiedStatus     OutResult;                                         // 0x30(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyRewardedProgressLevelsArray
struct UKrakenSophiaGameplayApi_K2_GetMyRewardedProgressLevelsArray_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRewardedProgressLevelsArray    OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyRewardedProgressLevels
struct UKrakenSophiaGameplayApi_K2_GetMyRewardedProgressLevels_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenRewardedProgressLevels         OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyQuestStatus
struct UKrakenSophiaGameplayApi_K2_GetMyQuestStatus_Params
{
public:
	struct FKrakenGetMyQuestStatusParams         InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerQuestStatus              OutResult;                                         // 0x30(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetIdsForPlayers
struct UKrakenSophiaGameplayApi_K2_GetIdsForPlayers_Params
{
public:
	struct FKrakenGetIdsForPlayersParams         InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenMultiplePlayerPlatformIds      OutResult;                                         // 0x38(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetCustomization
struct UKrakenSophiaGameplayApi_K2_GetCustomization_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenCustomizationConfiguration     OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetBasicPlayerData
struct UKrakenSophiaGameplayApi_K2_GetBasicPlayerData_Params
{
public:
	struct FKrakenGetBasicPlayerDataParams       InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBasicPlayerData                OutResult;                                         // 0x30(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllServerVerifiedStatusesForPlayer
struct UKrakenSophiaGameplayApi_K2_GetAllServerVerifiedStatusesForPlayer_Params
{
public:
	struct FKrakenGetAllServerVerifiedStatusesForPlayerParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerMultipleServerVerifiedStatus OutResult;                                         // 0x30(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllQuestStatusesForPlayer
struct UKrakenSophiaGameplayApi_K2_GetAllQuestStatusesForPlayer_Params
{
public:
	struct FKrakenGetAllQuestStatusesForPlayerParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerMultipleQuestStatus      OutResult;                                         // 0x30(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllMyServerVerifiedStatuses
struct UKrakenSophiaGameplayApi_K2_GetAllMyServerVerifiedStatuses_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerMultipleServerVerifiedStatus OutResult;                                         // 0x20(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllMyQuestStatuses
struct UKrakenSophiaGameplayApi_K2_GetAllMyQuestStatuses_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenPlayerMultipleQuestStatus      OutResult;                                         // 0x20(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_CheatBasicRewards
struct UKrakenSophiaGameplayApi_K2_CheatBasicRewards_Params
{
public:
	struct FKrakenCheatBasicRewardsParams        InParams;                                          // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x70(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x88(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C58[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddUpgrade
struct UKrakenSophiaGameplayApi_K2_AddUpgrade_Params
{
public:
	struct FKrakenAddUpgradeParams               InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenUpgradeBuyResults              OutResult;                                         // 0x4C(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C60[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddUnlockable
struct UKrakenSophiaGameplayApi_K2_AddUnlockable_Params
{
public:
	struct FKrakenAddUnlockableParams            InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddProgressRewards
struct UKrakenSophiaGameplayApi_K2_AddProgressRewards_Params
{
public:
	struct FKrakenAddProgressRewardsParams       InParams;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x60(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x78(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C70[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddMultipleUnlockables
struct UKrakenSophiaGameplayApi_K2_AddMultipleUnlockables_Params
{
public:
	struct FKrakenAddMultipleUnlockablesParams   InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C76[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddItem
struct UKrakenSophiaGameplayApi_K2_AddItem_Params
{
public:
	struct FKrakenAddItemParams                  InParams;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x38(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C81[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function Kraken.KrakenSophiaGameplayApi.K2_AddBasicRewards
struct UKrakenSophiaGameplayApi_K2_AddBasicRewards_Params
{
public:
	struct FKrakenAddBasicRewardsParams          InParams;                                          // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x68(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x80(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C88[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenSophiaServerApi.K2_GetInventoryForPlayer
struct UKrakenSophiaServerApi_K2_GetInventoryForPlayer_Params
{
public:
	struct FKrakenGetInventoryForPlayerParams    InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenInventoryForPlayer             OutResult;                                         // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_SubscriptionAmazonValidation
struct UKrakenUtilsApi_K2_SubscriptionAmazonValidation_Params
{
public:
	struct FKrakenSubscriptionAmazonValidationParams InParams;                                          // 0x0(0x128)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x128(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x140(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenSubscriptionValidation         OutResult;                                         // 0x148(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_QueueMetrics
struct UKrakenUtilsApi_K2_QueueMetrics_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_Now
struct UKrakenUtilsApi_K2_Now_Params
{
public:
	struct FKrakenNowParams                      InParams;                                          // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x20(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenTime                           OutResult;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_NotificationSubscriptionValidation
struct UKrakenUtilsApi_K2_NotificationSubscriptionValidation_Params
{
public:
	struct FKrakenNotificationSubscriptionValidationParams InParams;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x48(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_NotificationSubscriptionEcho
struct UKrakenUtilsApi_K2_NotificationSubscriptionEcho_Params
{
public:
	struct FKrakenNotificationSubscriptionEchoParams InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_NotificationPaymentValidation
struct UKrakenUtilsApi_K2_NotificationPaymentValidation_Params
{
public:
	struct FKrakenNotificationPaymentValidationParams InParams;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x38(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x50(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_NotificationPaymentEcho
struct UKrakenUtilsApi_K2_NotificationPaymentEcho_Params
{
public:
	struct FKrakenNotificationPaymentEchoParams  InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x48(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x60(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_GetLatestSupportedVersion
struct UKrakenUtilsApi_K2_GetLatestSupportedVersion_Params
{
public:
	struct FKrakenGetLatestSupportedVersionParams InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenLatestContentVersion           OutResult;                                         // 0x30(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_GetAllAvailableVersions
struct UKrakenUtilsApi_K2_GetAllAvailableVersions_Params
{
public:
	struct FKrakenGetAllAvailableVersionsParams  InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenAvailableContentVersions       OutResult;                                         // 0x38(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_FacebookSubscriptionObject
struct UKrakenUtilsApi_K2_FacebookSubscriptionObject_Params
{
public:
	struct FKrakenFacebookSubscriptionObjectParams InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_FacebookPaymentObject
struct UKrakenUtilsApi_K2_FacebookPaymentObject_Params
{
public:
	struct FKrakenFacebookPaymentObjectParams    InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutResult;                                         // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Kraken.KrakenUtilsApi.K2_ActiveSubscriptionFacebook
struct UKrakenUtilsApi_K2_ActiveSubscriptionFacebook_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    OutResult;                                         // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Kraken.KrakenWalletApi.K2_WithdrawFunds
struct UKrakenWalletApi_K2_WithdrawFunds_Params
{
public:
	struct FKrakenWithdrawFundsParams            InParams;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x50(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x68(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenBalance                        OutResult;                                         // 0x70(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Kraken.KrakenWalletApi.K2_GetNextAmountToExpire
struct UKrakenWalletApi_K2_GetNextAmountToExpire_Params
{
public:
	struct FKrakenGetNextAmountToExpireParams    InParams;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x18(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x30(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenWalletCurrencyToExpireResponse OutResult;                                         // 0x38(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenWalletApi.K2_GetActiveAccounts
struct UKrakenWalletApi_K2_GetActiveAccounts_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenWalletAccounts                 OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Kraken.KrakenWalletApi.K2_GetAccount
struct UKrakenWalletApi_K2_GetAccount_Params
{
public:
	struct FKrakenGetAccountParams               InParams;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x28(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenWalletEntry                    OutResult;                                         // 0x30(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Kraken.KrakenWalletApi.K2_ExpireCurrencies
struct UKrakenWalletApi_K2_ExpireCurrencies_Params
{
public:
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x18(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenWalletAccounts                 OutResult;                                         // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Kraken.KrakenWalletApi.K2_ConvertFundsV2
struct UKrakenWalletApi_K2_ConvertFundsV2_Params
{
public:
	struct FKrakenConvertFundsV2Params           InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKrakenWalletConvertFundsV2Response   OutResult;                                         // 0x48(0x170)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Kraken.KrakenWalletApi.K2_ConvertFunds
struct UKrakenWalletApi_K2_ConvertFunds_Params
{
public:
	struct FKrakenConvertFundsParams             InParams;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     InLatentActionInfo;                                // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOnlineStatus                         OutOnlineStatus;                                   // 0x40(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKrakenConversionBalance              OutResult;                                         // 0x44(0xC)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


