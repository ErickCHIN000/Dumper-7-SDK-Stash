#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemEOS.AchievementsUnlockProxy
class UAchievementsUnlockProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_350[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAchievementsUnlockProxy* GetDefaultObj();

	class UAchievementsUnlockProxy* UnlockAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<class FString>& AchievementIds);
};

// 0x8 (0x1C50 - 0x1C48)
// Class OnlineSubsystemEOS.EOSNetConnection
class UEOSNetConnection : public UIpConnection
{
public:
	bool                                         bIsPassthrough;                                    // 0x1C48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSNetConnection* GetDefaultObj();

};

// 0x8 (0x7D8 - 0x7D0)
// Class OnlineSubsystemEOS.EOSNetDriver
class UEOSNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_36A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSNetDriver* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemEOS.GetStatsCallbackProxy
class UGetStatsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetStatsCallbackProxy* GetDefaultObj();

	class UGetStatsCallbackProxy* GetStats(struct FProductUserId& ProductUserId, TArray<class FString>& StatsName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy
class ULeaderboardQueryDefinitionProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULeaderboardQueryDefinitionProxy* GetDefaultObj();

	class ULeaderboardQueryDefinitionProxy* QueryLeaderboardDefinitions();
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy
class ULeaderboardQueryRecordsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULeaderboardQueryRecordsCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryRecordsCallbackProxy* QueryLeaderboardRecords(class FName LeaderboarId);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy
class ULeaderboardQueryScoresCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULeaderboardQueryScoresCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryScoresCallbackProxy* QueryLeaderboardScore(TArray<struct FProductUserId>& ProductUserIds, class FName LeaderboarId);
};

// 0x98 (0xD0 - 0x38)
// Class OnlineSubsystemEOS.OnlineSubsystemEOSConfig
class UOnlineSubsystemEOSConfig : public UDeveloperSettings
{
public:
	class FString                                ProductName;                                       // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductVersion;                                    // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductId;                                         // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SandboxId;                                         // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentId;                                      // 0x78(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SupportTicketingKey;                               // 0x88(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SupportTicketingURL;                               // 0x98(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientId;                                          // 0xA8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0xB8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELogLevel                         LogLevel;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineSubsystemEOSConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary
class UOnlineSubsystemEOSFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineSubsystemEOSFunctionLibrary* GetDefaultObj();

	class FString ProductUserIdToString(struct FProductUserId& ProductUserId);
	struct FProductUserId ProductUserIdFromString(const class FString& AccountId);
	bool IsAuthorised();
	struct FProductUserId GetProductUserId();
	bool GetCachedEOSAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<struct FPlayerAchievementData>* OutAchievements);
	bool GetCachedEOSAchievement(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& AchievementId, struct FPlayerAchievementData* OutAchievement);
	TArray<struct FAchievementsDef> GetAchivementsDefinition(class UObject* WorldContextObject);
	struct FAccountId GetAccountId();
	class FString EpicAccountIdToString(struct FAccountId& AccountId);
	struct FAccountId EpicAccountIdFromString(const class FString& AccountId);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemEOS.UpdateStatsCallbackProxy
class UUpdateStatsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateStatsCallbackProxy* GetDefaultObj();

	class UUpdateStatsCallbackProxy* UpdateStats(struct FProductUserId& ProductUserId, TArray<struct FStatData>& Stats);
};

}


