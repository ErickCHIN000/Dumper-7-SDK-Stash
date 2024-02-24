#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenAchievementsApi
class UKrakenAchievementsApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenAchievementsApi* GetDefaultObj();

	void K2_IncrementMultipleAchievementContribution(struct FKrakenIncrementMultipleAchievementContributionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultipleAchievementContributionResponse* OutResult);
	void K2_IncrementAchievementContribution(struct FKrakenIncrementAchievementContributionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementState* OutResult);
	void K2_GetAchievements(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementsStateList* OutResult);
	void K2_GetAchievement(struct FKrakenGetAchievementParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementState* OutResult);
	void K2_ClaimAchievement(struct FKrakenClaimAchievementParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementClaim* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenAuthApi
class UKrakenAuthApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenAuthApi* GetDefaultObj();

	void K2_UnlinkXbox(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkWeibo(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkTwitch(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkSteam(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkPsnCode(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkPsn(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkNintendoAccount(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkNintendo(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkHelixTwitch(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkGrdkloginWithGrdk(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkGoogle(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkFacebook(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkCognito(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlinkApple(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_ServerLogin(struct FKrakenServerLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult);
	void K2_PostTwitchOidcToken(struct FKrakenPostTwitchOidcTokenParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTwitchOauthTokenResponse* OutResult);
	void K2_LoginWithZenaptic(struct FKrakenLoginWithZenapticParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithXbox(struct FKrakenLoginWithXboxParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithWeibo(struct FKrakenLoginWithWeiboParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithTwitch(struct FKrakenLoginWithTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithSteamV2(struct FKrakenLoginWithSteamV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithSteam(struct FKrakenLoginWithSteamParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithPsnV3(struct FKrakenLoginWithPsnV3Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithPsnCode(struct FKrakenLoginWithPsnCodeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithPsn(struct FKrakenLoginWithPsnParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithNintendo(struct FKrakenLoginWithNintendoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithKrakenId(struct FKrakenLoginWithKrakenIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLoginWithoutProviderResponse* OutResult);
	void K2_LoginWithKraken(struct FKrakenLoginWithKrakenParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithHelixTwitch(struct FKrakenLoginWithHelixTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithGrdk(struct FKrakenLoginWithGrdkParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithGoogle(struct FKrakenLoginWithGoogleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithFacebook(struct FKrakenLoginWithFacebookParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithEgs(struct FKrakenLoginWithEgsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithCognito(struct FKrakenLoginWithCognitoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LoginWithApple(struct FKrakenLoginWithAppleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult);
	void K2_LinkXbox(struct FKrakenLinkXboxParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkWeibo(struct FKrakenLinkWeiboParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkTwitch(struct FKrakenLinkTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkSteamV2(struct FKrakenLinkSteamV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkSteam(struct FKrakenLinkSteamParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkPsnCode(struct FKrakenLinkPsnCodeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkPsn(struct FKrakenLinkPsnParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkNintendoAccount(struct FKrakenLinkNintendoAccountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkNintendo(struct FKrakenLinkNintendoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkHelixTwitch(struct FKrakenLinkHelixTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkGrdkloginWithGrdk(struct FKrakenLinkGrdkloginWithGrdkParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkGoogle(struct FKrakenLinkGoogleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkFacebook(struct FKrakenLinkFacebookParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkCognito(struct FKrakenLinkCognitoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_LinkApple(struct FKrakenLinkAppleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult);
	void K2_IsUnifiedSteamAccountOnlineV2(struct FKrakenIsUnifiedSteamAccountOnlineV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult);
	void K2_IsUnifiedSteamAccountOnline(struct FKrakenIsUnifiedSteamAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult);
	void K2_IsUnifiedNintendoAccountOnline(struct FKrakenIsUnifiedNintendoAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult);
	void K2_IsUnifiedEgsAccountOnline(struct FKrakenIsUnifiedEgsAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult);
	void K2_GuestToken(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenGuestToken* OutResult);
	void K2_GuestLogin(struct FKrakenGuestLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult);
	void K2_GetUsersWithXuid(struct FKrakenGetUsersWithXuidParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnifiedAccountJweTokenPayload* OutResult);
	void K2_GetTwitchOidcToken(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTwitchOauthTokenResponse* OutResult);
	void K2_GetPublicKeyV2(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthPublicKey* OutResult);
	void K2_GetPublicKey(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
	void K2_CrossAccountLogin(struct FKrakenCrossAccountLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenConfigApi
class UKrakenConfigApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenConfigApi* GetDefaultObj();

	void K2_GetConfigItemRaw(struct FKrakenGetConfigItemRawParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
	void K2_GetConfigItem(struct FKrakenGetConfigItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FJsonObjectWrapper* OutResult);
	void K2_GetConfig(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenCloudConfig>* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenContentApi
class UKrakenContentApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenContentApi* GetDefaultObj();

	void K2_MultiContentimport(struct FKrakenMultiContentimportParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_GetContentUrl(struct FKrakenGetContentUrlParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenContentUrl* OutResult);
	void K2_GetContent(struct FKrakenGetContentParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TMap<class FString, struct FKrakenItem>* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenFeedbackApi
class UKrakenFeedbackApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenFeedbackApi* GetDefaultObj();

	void K2_CreateFeedback(struct FKrakenCreateFeedbackParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFeedback* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenFriendsApi
class UKrakenFriendsApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenFriendsApi* GetDefaultObj();

	void K2_FriendsRichPresence(struct FKrakenFriendsRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenRichPresenceResponse>* OutResult);
	void K2_FriendRichPresence(struct FKrakenFriendRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRichPresenceResponse* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenGameSessionApi
class UKrakenGameSessionApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenGameSessionApi* GetDefaultObj();

	void K2_TerminateGameSession(struct FKrakenTerminateGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RemovePlayerFromGameSessionQueue(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RegisterGameSession(struct FKrakenRegisterGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_QueueForGameSession(struct FKrakenQueueForGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_JoinPlayerInGameSession(struct FKrakenJoinPlayerInGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_GetGameSessionNetworkInformationFallback(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenGetConnectionInformationMessageFallbackResponseBody* OutResult);
	void K2_CreateGameSession(struct FKrakenCreateGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenCreateGameSessionResponseBody* OutResult);
	void K2_CompletePlayerSession(struct FKrakenCompletePlayerSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_ActivePlayerSession(struct FKrakenActivePlayerSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenHealthcheckApi
class UKrakenHealthcheckApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenHealthcheckApi* GetDefaultObj();

	void K2_Checkfull(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFullHealthCheck* OutResult);
	void K2_Check(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenHealthCheck* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenInventoriesApi
class UKrakenInventoriesApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenInventoriesApi* GetDefaultObj();

	void K2_InventoryGet(struct FKrakenInventoryGetParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGet* OutResult);
	void K2_GiftInventory(struct FKrakenGiftInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGift* OutResult);
	void K2_GetInventoryItem(struct FKrakenGetInventoryItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGetByItemId* OutResult);
	void K2_DropInventory(struct FKrakenDropInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryDrop* OutResult);
	void K2_ConsumeInventoryV2(struct FKrakenConsumeInventoryV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryConsumeV2* OutResult);
	void K2_ConsumeInventory(struct FKrakenConsumeInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryConsume* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenLeaderboardsApi
class UKrakenLeaderboardsApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenLeaderboardsApi* GetDefaultObj();

	void K2_SubmitLeaderboardScore(struct FKrakenSubmitLeaderboardScoreParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerScoreResponse* OutResult);
	void K2_ListWindows(struct FKrakenListWindowsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardGetScoresResponse* OutResult);
	void K2_ListLeaderboardScores(struct FKrakenListLeaderboardScoresParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardGetScoresResponse* OutResult);
	void K2_ListLeaderboards(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenLeaderboardInfo>* OutResult);
	void K2_GetLeaderboardStates(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardStates* OutResult);
	void K2_GetLeaderboardState(struct FKrakenGetLeaderboardStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardState* OutResult);
	void K2_GetLeaderboard(struct FKrakenGetLeaderboardParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardInfo* OutResult);
	void K2_ClaimLeaderboardScore(struct FKrakenClaimLeaderboardScoreParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardClaim* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenMeApi
class UKrakenMeApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenMeApi* GetDefaultObj();

	void K2_RichPresence(struct FKrakenRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_Reward(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_Mytime(struct FKrakenMytimeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTime* OutResult);
	void K2_Me(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMe* OutResult);
	void K2_Logout(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_Location(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLocation* OutResult);
	void K2_Heartbeat(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_ActivePlayerSubscription(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenPlayerSubscription>* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenMessagesApi
class UKrakenMessagesApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenMessagesApi* GetDefaultObj();

	void K2_SendMessagesWithProvider(struct FKrakenSendMessagesWithProviderParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageSendWithProviderBody* OutResult);
	void K2_SendMessages(struct FKrakenSendMessagesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageSendList* OutResult);
	void K2_RemoveMessagesList(struct FKrakenRemoveMessagesListParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageRemoveList* OutResult);
	void K2_MarkMessagesAsV2(struct FKrakenMarkMessagesAsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageMarkAs* OutResult);
	void K2_MarkMessagesAs(struct FKrakenMarkMessagesAsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageMarkAs* OutResult);
	void K2_GetMessageV2(struct FKrakenGetMessageV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGet* OutResult);
	void K2_GetMessagesListV2(struct FKrakenGetMessagesListV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGetList* OutResult);
	void K2_GetMessagesList(struct FKrakenGetMessagesListParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGetList* OutResult);
	void K2_GetMessagesCount(struct FKrakenGetMessagesCountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessagesCount* OutResult);
	void K2_GetMessage(struct FKrakenGetMessageParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGet* OutResult);
	void K2_ClaimMessageRewards(struct FKrakenClaimMessageRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageClaimResponse* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPartyApi
class UKrakenPartyApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPartyApi* GetDefaultObj();

	void K2_UpdateParty(struct FKrakenUpdatePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_SetPlayerPartyState(struct FKrakenSetPlayerPartyStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SendPartyChatMessage(struct FKrakenSendPartyChatMessageParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RequestJoinPlayerV2(struct FKrakenRequestJoinPlayerV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyJoinRequestDetails* OutResult);
	void K2_RequestJoinPlayer(struct FKrakenRequestJoinPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_RequestJoinPartyV2(struct FKrakenRequestJoinPartyV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyJoinRequestDetails* OutResult);
	void K2_RequestJoinParty(struct FKrakenRequestJoinPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_RejectPartyInvite(struct FKrakenRejectPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RejectJoinRequest(struct FKrakenRejectJoinRequestParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_PartyLeave(struct FKrakenPartyLeaveParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_InviteToParty(struct FKrakenInviteToPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerInvitationDetails* OutResult);
	void K2_GetParty(struct FKrakenGetPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_GetCurrentPartyDetails(struct FKrakenGetCurrentPartyDetailsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPartyDetails* OutResult);
	void K2_GetCurrentParty(struct FKrakenGetCurrentPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_DelMember(struct FKrakenDelMemberParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_DeleteParty(struct FKrakenDeletePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_CreateParty(struct FKrakenCreatePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_ChangePartyHost(struct FKrakenChangePartyHostParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_CancelRequestJoin(struct FKrakenCancelRequestJoinParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_CancelPartyInvite(struct FKrakenCancelPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AcceptPartyInvite(struct FKrakenAcceptPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult);
	void K2_AcceptJoinRequest(struct FKrakenAcceptJoinRequestParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPlayernameApi
class UKrakenPlayernameApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPlayernameApi* GetDefaultObj();

	void K2_SearchProviderPlayerName(struct FKrakenSearchProviderPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameSearchResponse* OutResult);
	void K2_SearchPlayerNameCrossplatformV2(struct FKrakenSearchPlayerNameCrossplatformV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformSearchResponse* OutResult);
	void K2_SearchPlayerNameCrossplatform(struct FKrakenSearchPlayerNameCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformSearchResponse* OutResult);
	void K2_SearchPlayerName(struct FKrakenSearchPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameSearchResponse* OutResult);
	void K2_RegisterProviderPlayerName(struct FKrakenRegisterProviderPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult);
	void K2_RegisterPlayerName(struct FKrakenRegisterPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult);
	void K2_GetPlayerNameByUserId(struct FKrakenGetPlayerNameByUserIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult);
	void K2_GetPlayerName(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult);
	void K2_GetAPlayerNameCrossplatform(struct FKrakenGetAPlayerNameCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformResponse* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPlayersApi
class UKrakenPlayersApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPlayersApi* GetDefaultObj();

	void K2_UpsertSplinteredState(struct FKrakenUpsertSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpsertSplinteredStateResponse* OutResult);
	void K2_UpsertBatchSplinteredState(struct FKrakenUpsertBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpsertBatchSplinteredStateResponse* OutResult);
	void K2_UploadStateBatch(struct FKrakenUploadStateBatchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateBatchResponse* OutResult);
	void K2_UploadState(struct FKrakenUploadStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateMetaData* OutResult);
	void K2_UnblockPlayer(struct FKrakenUnblockPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SyncFriendsV2(struct FKrakenSyncFriendsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult);
	void K2_StartSyncFriendsV2(struct FKrakenStartSyncFriendsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsStartSyncResponse* OutResult);
	void K2_SetFriendInviteAttributes(struct FKrakenSetFriendInviteAttributesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetFriendFavorite(struct FKrakenSetFriendFavoriteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetFriendAttributes(struct FKrakenSetFriendAttributesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_ResetHackerCounters(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RemoveFriends(struct FKrakenRemoveFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult);
	void K2_PatchState(struct FKrakenPatchStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateMetaData* OutResult);
	void K2_ListPlayerStates(struct FKrakenListPlayerStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenState>* OutResult);
	void K2_IncrementAtomicSplinteredState(struct FKrakenIncrementAtomicSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenIncrementAtomicSplinteredStateResponse* OutResult);
	void K2_GetSplinteredStates(struct FKrakenGetSplinteredStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSplinteredState* OutResult);
	void K2_GetRecentlyPlayedWithPlayers(struct FKrakenGetRecentlyPlayedWithPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNamesResponse* OutResult);
	void K2_GetPlayerStateByKeyBinary(struct FKrakenGetPlayerStateByKeyBinaryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<uint8>* OutResult);
	void K2_GetPlayerStateByKey(struct FKrakenGetPlayerStateByKeyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult);
	void K2_GetPlayerCrossplatform(struct FKrakenGetPlayerCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerCrossplatform* OutResult);
	void K2_GetPlayer(struct FKrakenGetPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayer* OutResult);
	void K2_GetPatches(struct FKrakenGetPatchesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenPlayerState>* OutResult);
	void K2_GetFullState(struct FKrakenGetFullStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerState* OutResult);
	void K2_GetFriendSuggestionsV2(struct FKrakenGetFriendSuggestionsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriendSuggestionsResponseBody>* OutResult);
	void K2_GetFriendSuggestions(struct FKrakenGetFriendSuggestionsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNamesResponse* OutResult);
	void K2_GetFriendInfo(struct FKrakenGetFriendInfoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriend* OutResult);
	void K2_GetBatchSplinteredStates(struct FKrakenGetBatchSplinteredStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSplinteredStateBatch* OutResult);
	void K2_GetBan(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBanResponse* OutResult);
	void K2_FriendsCrossplatform(struct FKrakenFriendsCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriendCrossplatform>* OutResult);
	void K2_Friends(struct FKrakenFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriend>* OutResult);
	void K2_DeleteState(struct FKrakenDeleteStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_DeleteSplinteredState(struct FKrakenDeleteSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteSplinteredStateResponse* OutResult);
	void K2_DeletePlayerStateByKey(struct FKrakenDeletePlayerStateByKeyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_DeleteBatchSplinteredState(struct FKrakenDeleteBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteBatchSplinteredStateResponse* OutResult);
	void K2_ConfirmBanMessage(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBanInfo* OutResult);
	void K2_ClearState(struct FKrakenClearStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_ClearSplinteredState(struct FKrakenClearSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteSplinteredStateResponse* OutResult);
	void K2_ClearBatchSplinteredState(struct FKrakenClearBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteBatchSplinteredStateResponse* OutResult);
	void K2_BlockPlayer(struct FKrakenBlockPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_BlockedPlayersCompleteData(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBlockedPlayersCompleteData* OutResult);
	void K2_BlockedPlayers(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBlockedPlayersResponse* OutResult);
	void K2_AddUserDeviceInfo(struct FKrakenAddUserDeviceInfoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddRecentlyPlayedWithPlayers(struct FKrakenAddRecentlyPlayedWithPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddPlayerStatesBatch(struct FKrakenAddPlayerStatesBatchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenState>* OutResult);
	void K2_AddPlayerStateBinary(struct FKrakenAddPlayerStateBinaryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult);
	void K2_AddPlayerState(struct FKrakenAddPlayerStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult);
	void K2_AddMultipleAnalyticIds(struct FKrakenAddMultipleAnalyticIdsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddFriends(struct FKrakenAddFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult);
	void K2_AddAnalyticId(struct FKrakenAddAnalyticIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPurchasesApi
class UKrakenPurchasesApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPurchasesApi* GetDefaultObj();

	void K2_XboxOnePurchaseCreateTransaction(struct FKrakenXboxOnePurchaseCreateTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_XboxOnePurchaseAbortTransaction(struct FKrakenXboxOnePurchaseAbortTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SubscriptionPurchase(struct FKrakenSubscriptionPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSubscriptionData* OutResult);
	void K2_PurchaseWithConsume(struct FKrakenPurchaseWithConsumeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseWithConsume* OutResult);
	void K2_PurchaseStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseStatus* OutResult);
	void K2_PurchaseRemaining(struct FKrakenPurchaseRemainingParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseRemaining* OutResult);
	void K2_Purchase(struct FKrakenPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult);
	void K2_PremiumXboxOnePurchase(struct FKrakenPremiumXboxOnePurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult);
	void K2_PremiumPurchaseWithConsume(struct FKrakenPremiumPurchaseWithConsumeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPremiumPurchaseWithConsume* OutResult);
	void K2_PremiumPurchase(struct FKrakenPremiumPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPremiumPurchaseResponse* OutResult);
	void K2_NintendoPurchases(struct FKrakenNintendoPurchasesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenNintendoPurchaseResponse>* OutResult);
	void K2_MicrosoftPurchaseCreateTransaction(struct FKrakenMicrosoftPurchaseCreateTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_MicrosoftPurchaseConcludeTransaction(struct FKrakenMicrosoftPurchaseConcludeTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult);
	void K2_MicrosoftPurchaseAbortTransaction(struct FKrakenMicrosoftPurchaseAbortTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPuzzlePerformanceApi
class UKrakenPuzzlePerformanceApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPuzzlePerformanceApi* GetDefaultObj();

	void K2_UpdatePlayerPuzzleStatus(struct FKrakenUpdatePlayerPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_PlayerSolvedPuzzles(struct FKrakenPlayerSolvedPuzzlesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSolvedPuzzles* OutResult);
	void K2_PlayerPuzzleStatus(struct FKrakenPlayerPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPuzzleStatusData* OutResult);
	void K2_MySolvedPuzzles(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSolvedPuzzles* OutResult);
	void K2_MyPuzzleStatus(struct FKrakenMyPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPuzzleStatusData* OutResult);
	void K2_AllPuzzleStatusesForPlayer(struct FKrakenAllPuzzleStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPuzzleStatuses* OutResult);
	void K2_AllMyPuzzleStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPuzzleStatuses* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenPuzzlesApi
class UKrakenPuzzlesApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenPuzzlesApi* GetDefaultObj();

	void K2_UploadSerializedPuzzle(struct FKrakenUploadSerializedPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UploadBinaryPuzzle(struct FKrakenUploadBinaryPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetZone(struct FKrakenSetZoneParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetStatus(struct FKrakenSetStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetDifficulty(struct FKrakenSetDifficultyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetActiveCache(struct FKrakenSetActiveCacheParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetAccessLevel(struct FKrakenSetAccessLevelParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RemoveAccessLevel(struct FKrakenRemoveAccessLevelParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_GetPuzzleSpawnData(struct FKrakenGetPuzzleSpawnDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpawnData* OutResult);
	void K2_GetPuzzleEditorData(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePuzzleEditorData* OutResult);
	void K2_GetPuzzle(struct FKrakenGetPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFullPuzzleDatabaseEntry* OutResult);
	void K2_GetLivePuzzleSpawnData(struct FKrakenGetLivePuzzleSpawnDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePuzzleSpawnData* OutResult);
	void K2_GetKrakenIdFromLocalId(struct FKrakenGetKrakenIdFromLocalIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult);
	void K2_GetAccessLevelDescriptions(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccessLevelDescriptions* OutResult);
	void K2_CreateSerializedPuzzle(struct FKrakenCreateSerializedPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult);
	void K2_CreatePuzzleDatabaseCache(struct FKrakenCreatePuzzleDatabaseCacheParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleCacheInfo* OutResult);
	void K2_CreateBlankPuzzle(struct FKrakenCreateBlankPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult);
	void K2_CreateBinaryPuzzle(struct FKrakenCreateBinaryPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult);
	void K2_BatchSetNonGridPuzzleAccessLevels(struct FKrakenBatchSetNonGridPuzzleAccessLevelsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_BatchSetGridPuzzleAccessLevels(struct FKrakenBatchSetGridPuzzleAccessLevelsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenRealTimeMessagingApi
class UKrakenRealTimeMessagingApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenRealTimeMessagingApi* GetDefaultObj();

	void K2_RealTimeMessagingRebalanceUser(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RealTimeMessagingRebalanceInstances(struct FKrakenRealTimeMessagingRebalanceInstancesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_RealTimeMessagingGetUrl(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRtmGetUrl* OutResult);
	void K2_RealTimeMessagingGetMetrics(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
};

// 0xC0 (0x190 - 0xD0)
// Class Kraken.KrakenSdk
class UKrakenSdk : public UOnlineSdkBase
{
public:
	class UKrakenAchievementsApi*                Achievements;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenAuthApi*                        Auth;                                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenConfigApi*                      Config;                                            // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenContentApi*                     Content;                                           // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenFeedbackApi*                    Feedback;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenFriendsApi*                     Friends;                                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenGameSessionApi*                 GameSession;                                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenHealthcheckApi*                 Healthcheck;                                       // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenInventoriesApi*                 Inventories;                                       // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenLeaderboardsApi*                Leaderboards;                                      // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenMeApi*                          Me;                                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenMessagesApi*                    Messages;                                          // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPartyApi*                       Party;                                             // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPlayernameApi*                  PlayerName;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPlayersApi*                     Players;                                           // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPurchasesApi*                   Purchases;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPuzzlePerformanceApi*           PuzzlePerformance;                                 // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenPuzzlesApi*                     PUZZLES;                                           // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenRealTimeMessagingApi*           RealTimeMessaging;                                 // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenSophiaAnalyticsApi*             SophiaAnalytics;                                   // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenSophiaGameplayApi*              SophiaGameplay;                                    // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenSophiaServerApi*                SophiaServer;                                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenUtilsApi*                       Utils;                                             // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKrakenWalletApi*                      Wallet;                                            // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKrakenSdk* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenSophiaAnalyticsApi
class UKrakenSophiaAnalyticsApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenSophiaAnalyticsApi* GetDefaultObj();

	void K2_SendAnalyticsEntitlements(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenSophiaGameplayApi
class UKrakenSophiaGameplayApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenSophiaGameplayApi* GetDefaultObj();

	void K2_UpdateQuestSate(struct FKrakenUpdateQuestSateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlockProgressionRewardsArray(struct FKrakenUnlockProgressionRewardsArrayParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_UnlockProgressionRewards(struct FKrakenUnlockProgressionRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SolvePuzzle(struct FKrakenSolvePuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetServerVerifiedStatus(struct FKrakenSetServerVerifiedStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetQuestStatus(struct FKrakenSetQuestStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_SetCustomization(struct FKrakenSetCustomizationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_GetUpgradesForPlayer(struct FKrakenGetUpgradesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerUpgrades* OutResult);
	void K2_GetUnlocksForPlayer(struct FKrakenGetUnlocksForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnlocksInCategory* OutResult);
	void K2_GetServerVerifiedStatusForPlayer(struct FKrakenGetServerVerifiedStatusForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerServerVerifiedStatus* OutResult);
	void K2_GetRewardedProgressLevelsForPlayerArray(struct FKrakenGetRewardedProgressLevelsForPlayerArrayParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevelsArray* OutResult);
	void K2_GetRewardedProgressLevelsForPlayer(struct FKrakenGetRewardedProgressLevelsForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevels* OutResult);
	void K2_GetQuestStatusForPlayer(struct FKrakenGetQuestStatusForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerQuestStatus* OutResult);
	void K2_GetPartyMemberIdsForPlayer(struct FKrakenGetPartyMemberIdsForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyMemberIds* OutResult);
	void K2_GetPartyMemberIds(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyMemberIds* OutResult);
	void K2_GetMyUpgrades(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerUpgrades* OutResult);
	void K2_GetMyUnlocks(struct FKrakenGetMyUnlocksParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnlocksInCategory* OutResult);
	void K2_GetMyServerVerifiedStatus(struct FKrakenGetMyServerVerifiedStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerServerVerifiedStatus* OutResult);
	void K2_GetMyRewardedProgressLevelsArray(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevelsArray* OutResult);
	void K2_GetMyRewardedProgressLevels(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevels* OutResult);
	void K2_GetMyQuestStatus(struct FKrakenGetMyQuestStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerQuestStatus* OutResult);
	void K2_GetIdsForPlayers(struct FKrakenGetIdsForPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPlatformIds* OutResult);
	void K2_GetCustomization(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenCustomizationConfiguration* OutResult);
	void K2_GetBasicPlayerData(struct FKrakenGetBasicPlayerDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBasicPlayerData* OutResult);
	void K2_GetAllServerVerifiedStatusesForPlayer(struct FKrakenGetAllServerVerifiedStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleServerVerifiedStatus* OutResult);
	void K2_GetAllQuestStatusesForPlayer(struct FKrakenGetAllQuestStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleQuestStatus* OutResult);
	void K2_GetAllMyServerVerifiedStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleServerVerifiedStatus* OutResult);
	void K2_GetAllMyQuestStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleQuestStatus* OutResult);
	void K2_CheatBasicRewards(struct FKrakenCheatBasicRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddUpgrade(struct FKrakenAddUpgradeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpgradeBuyResults* OutResult);
	void K2_AddUnlockable(struct FKrakenAddUnlockableParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddProgressRewards(struct FKrakenAddProgressRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddMultipleUnlockables(struct FKrakenAddMultipleUnlockablesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddItem(struct FKrakenAddItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_AddBasicRewards(struct FKrakenAddBasicRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenSophiaServerApi
class UKrakenSophiaServerApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenSophiaServerApi* GetDefaultObj();

	void K2_GetInventoryForPlayer(struct FKrakenGetInventoryForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryForPlayer* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenUtilsApi
class UKrakenUtilsApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenUtilsApi* GetDefaultObj();

	void K2_SubscriptionAmazonValidation(struct FKrakenSubscriptionAmazonValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSubscriptionValidation* OutResult);
	void K2_QueueMetrics(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
	void K2_Now(struct FKrakenNowParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTime* OutResult);
	void K2_NotificationSubscriptionValidation(struct FKrakenNotificationSubscriptionValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_NotificationSubscriptionEcho(struct FKrakenNotificationSubscriptionEchoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_NotificationPaymentValidation(struct FKrakenNotificationPaymentValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_NotificationPaymentEcho(struct FKrakenNotificationPaymentEchoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus);
	void K2_GetLatestSupportedVersion(struct FKrakenGetLatestSupportedVersionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLatestContentVersion* OutResult);
	void K2_GetAllAvailableVersions(struct FKrakenGetAllAvailableVersionsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAvailableContentVersions* OutResult);
	void K2_FacebookSubscriptionObject(struct FKrakenFacebookSubscriptionObjectParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
	void K2_FacebookPaymentObject(struct FKrakenFacebookPaymentObjectParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult);
	void K2_ActiveSubscriptionFacebook(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FJsonObjectWrapper* OutResult);
};

// 0x0 (0x28 - 0x28)
// Class Kraken.KrakenWalletApi
class UKrakenWalletApi : public UOnlineApiBase
{
public:

	static class UClass* StaticClass();
	static class UKrakenWalletApi* GetDefaultObj();

	void K2_WithdrawFunds(struct FKrakenWithdrawFundsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBalance* OutResult);
	void K2_GetNextAmountToExpire(struct FKrakenGetNextAmountToExpireParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletCurrencyToExpireResponse* OutResult);
	void K2_GetActiveAccounts(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletAccounts* OutResult);
	void K2_GetAccount(struct FKrakenGetAccountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletEntry* OutResult);
	void K2_ExpireCurrencies(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletAccounts* OutResult);
	void K2_ConvertFundsV2(struct FKrakenConvertFundsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletConvertFundsV2Response* OutResult);
	void K2_ConvertFunds(struct FKrakenConvertFundsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenConversionBalance* OutResult);
};

}


