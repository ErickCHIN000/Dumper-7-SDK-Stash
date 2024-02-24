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

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemEOS.AchievementsUnlockProxy.UnlockAchievements
struct UAchievementsUnlockProxy_UnlockAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AchievementIds;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UAchievementsUnlockProxy*              ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemEOS.GetStatsCallbackProxy.GetStats
struct UGetStatsCallbackProxy_GetStats_Params
{
public:
	struct FProductUserId                        ProductUserId;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StatsName;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetStatsCallbackProxy*                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy.QueryLeaderboardDefinitions
struct ULeaderboardQueryDefinitionProxy_QueryLeaderboardDefinitions_Params
{
public:
	class ULeaderboardQueryDefinitionProxy*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy.QueryLeaderboardRecords
struct ULeaderboardQueryRecordsCallbackProxy_QueryLeaderboardRecords_Params
{
public:
	class FName                                  LeaderboarId;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULeaderboardQueryRecordsCallbackProxy* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy.QueryLeaderboardScore
struct ULeaderboardQueryScoresCallbackProxy_QueryLeaderboardScore_Params
{
public:
	TArray<struct FProductUserId>                ProductUserIds;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  LeaderboarId;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULeaderboardQueryScoresCallbackProxy*  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdToString
struct UOnlineSubsystemEOSFunctionLibrary_ProductUserIdToString_Params
{
public:
	struct FProductUserId                        ProductUserId;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdFromString
struct UOnlineSubsystemEOSFunctionLibrary_ProductUserIdFromString_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProductUserId                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.IsAuthorised
struct UOnlineSubsystemEOSFunctionLibrary_IsAuthorised_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetProductUserId
struct UOnlineSubsystemEOSFunctionLibrary_GetProductUserId_Params
{
public:
	struct FProductUserId                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievements
struct UOnlineSubsystemEOSFunctionLibrary_GetCachedEOSAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerAchievementData>        OutAchievements;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievement
struct UOnlineSubsystemEOSFunctionLibrary_GetCachedEOSAchievement_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AchievementId;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerAchievementData                OutAchievement;                                    // 0x20(0x78)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAchivementsDefinition
struct UOnlineSubsystemEOSFunctionLibrary_GetAchivementsDefinition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAchievementsDef>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAccountId
struct UOnlineSubsystemEOSFunctionLibrary_GetAccountId_Params
{
public:
	struct FAccountId                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdToString
struct UOnlineSubsystemEOSFunctionLibrary_EpicAccountIdToString_Params
{
public:
	struct FAccountId                            AccountId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdFromString
struct UOnlineSubsystemEOSFunctionLibrary_EpicAccountIdFromString_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAccountId                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemEOS.UpdateStatsCallbackProxy.UpdateStats
struct UUpdateStatsCallbackProxy_UpdateStats_Params
{
public:
	struct FProductUserId                        ProductUserId;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatData>                     Stats;                                             // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateStatsCallbackProxy*             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


