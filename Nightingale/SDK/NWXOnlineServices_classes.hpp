#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.AccountAPIService
class UAccountAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAccountAPIService* GetDefaultObj();

	void RemoveRoleFromAccount_BP(struct FRemoveRoleFromAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RemoveProviderByAccountID_BP(struct FRemoveProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListRoles_BP(struct FListRolesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListAccountsWithRole_BP(struct FListAccountsWithRoleRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProvidersByAccountID_BP(struct FGetProvidersByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProviderByAccountID_BP(struct FGetProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetAccountByProviderID_BP(struct FGetAccountByProviderIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetAccountByID_BP(struct FGetAccountByIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateAccount_BP(struct FCreateAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AddRoleToAccount_BP(struct FAddRoleToAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AddProviderByAccountID_BP(struct FAddProviderByAccountIDRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AcceptEULAForAccount_BP(struct FAcceptEULAForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.AuthenticateAPIService
class UAuthenticateAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAuthenticateAPIService* GetDefaultObj();

	void AuthWithXbox_BP(struct FAuthWithXboxRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AuthWithSteam_BP(struct FAuthWithSteamRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AuthWithPSN_BP(struct FAuthWithPSNRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AuthWithGoogle_BP(struct FAuthWithGoogleRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AuthWithEOS_BP(struct FAuthWithEOSRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AcceptEULA_BP(struct FAcceptEULARequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.AuthServiceLibrary
class UAuthServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAuthServiceLibrary* GetDefaultObj();

	void OnFetchSteamAuthBP__DelegateSignature(TArray<uint8>& AppTicket, struct FOnlineServiceStatus& Status);
	void OnFetchEOSAuthBP__DelegateSignature(const class FString& IdToken, struct FOnlineServiceStatus& Status);
	void ListDeployments(FDelegateProperty_& Complete);
	bool IsSteamAvailable();
	bool IsEosAvailable();
	bool IsAutoEnterGameRequested();
	bool GetTagValue(TArray<class FString>& DeploymentTags, const class FString& TagName, class FString* OutTagValue, bool bIncludePrefix, const class FString& DefaultValue);
	class FString GetSteamIdBP();
	class FString GetNetworkCompatibleChangelist();
	void FetchSteamAuthBP(FDelegateProperty_& OnComplete);
	void FetchEosAuthBP(class UObject* WorldContextObject, FDelegateProperty_& OnComplete);
	void CacheAccountTokens(const class FString& AccountId, const class FString& AccessToken);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.BailiffAPIService
class UBailiffAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBailiffAPIService* GetDefaultObj();

	void RemovePlayersFromRoom_BP(struct FRemovePlayersFromRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void MakeAnnouncement_BP(struct FMakeAnnouncementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void InvitePlayerToRealmViaChat_BP(struct FInvitePlayerToRealmViaChatRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void InvitePlayersToRoom_BP(struct FInvitePlayersToRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetRoomsForPlayer_BP(struct FGetRoomsForPlayerRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetPlayersInRoom_BP(struct FGetPlayersInRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetPlayerOnlineStatus_BP(struct FGetPlayerOnlineStatusRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateRoom_BP(struct FCreateRoomRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.BarkerAPIService
class UBarkerAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBarkerAPIService* GetDefaultObj();

	void GetNews_BP(struct FGetNewsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetMessageOfTheDay_BP(struct FGetMessageOfTheDayRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.DeployAPIService
class UDeployAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDeployAPIService* GetDefaultObj();

	void StopDeploy_BP(struct FStopDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void StopAllDeploys_BP(struct FStopAllDeploysRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void SetDeployScore_BP(struct FSetDeployScoreRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void SetDeployAnnotations_BP(struct FSetDeployAnnotationsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RestartDeployOp_BP(struct FRestartDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RestartDeploy_BP(struct FRestartDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ResolveDeploySetOp_BP(struct FResolveDeploySetRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ResolveDeploySet_BP(struct FResolveDeploySetRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RecordDeployPlayers_BP(struct FRecordDeployPlayersRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RecordDeployEvents_BP(struct FRecordDeployEventsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListDeployRecords_BP(struct FListDeployRecordsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListDeployEvents_BP(struct FListDeployEventsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetOperation_BP(struct FGetOperationRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetDeployRecordByName_BP(struct FGetDeployRecordByNameRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetDeployRecord_BP(struct FGetDeployRecordRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetDeploy_BP(struct FGetDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateDeployOp_BP(struct FCreateDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateDeploy_BP(struct FCreateDeployRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.DeploymentInformationProvider
class IDeploymentInformationProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDeploymentInformationProvider* GetDefaultObj();

	struct FDeploymentInformation GetDeploymentInformation();
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.DeploymentServiceLibrary
class UDeploymentServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDeploymentServiceLibrary* GetDefaultObj();

	void CreateDeployWithTemporalConfigBP(class UObject* WorldContextObject, const class FString& MapName, struct FTemporalConfig& TemporalConfig, FDelegateProperty_& OnComplete, class FString* OutDeploymentName);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.EntitlementAPIService
class UEntitlementAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEntitlementAPIService* GetDefaultObj();

	void RemoveProfileEntitlements_BP(struct FRemoveProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void RemoveAccountEntitlements_BP(struct FRemoveAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListProfilesWithEntitlement_BP(struct FListProfilesWithEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListEntitlements_BP(struct FListEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListAccountsWithEntitlement_BP(struct FListAccountsWithEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProfileEntitlements_BP(struct FGetProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetMyProfileEntitlements_BP(struct FGetMyProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetMyAccountEntitlements_BP(struct FGetMyAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetAccountEntitlements_BP(struct FGetAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DoesProfileHaveEntitlement_BP(struct FDoesProfileHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DoesMyProfileHaveEntitlement_BP(struct FDoesMyProfileHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DoesMyAccountHaveEntitlement_BP(struct FDoesMyAccountHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DoesAccountHaveEntitlement_BP(struct FDoesAccountHaveEntitlementRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AddProfileEntitlements_BP(struct FAddProfileEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AddAccountEntitlements_BP(struct FAddAccountEntitlementsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.FeedbackAPIService
class UFeedbackAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFeedbackAPIService* GetDefaultObj();

	void SubmitJira_BP(struct FSubmitJiraRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AttachFileToJira_BP(struct FAttachFileToJiraRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.GroupAPIService
class UGroupAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGroupAPIService* GetDefaultObj();

	void RemoveProfile_BP(struct FRemoveProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetGroupsWithNameForProfile_BP(struct FGetGroupsWithNameForProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetGroupsForProfile_BP(struct FGetGroupsForProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetGroupDetails_BP(struct FGetGroupDetailsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void Delete_BP(struct FDeleteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void Create_BP(struct FCreateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AddProfile_BP(struct FAddProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.JiraBlueprintLibrary
class UJiraBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UJiraBlueprintLibrary* GetDefaultObj();

	void CreateIssue(const class FString& Subject, TArray<class FString>& Body, TArray<class FString>& Labels, TArray<class FString>& Attachments, FDelegateProperty_& Complete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ModerateAPIService
class UModerateAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModerateAPIService* GetDefaultObj();

	void ReportPlayerAction_BP(struct FReportPlayerActionRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ReportPlayer_BP(struct FReportPlayerRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ModerateText_BP(struct FModerateTextRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ModerateServiceLibrary
class UModerateServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModerateServiceLibrary* GetDefaultObj();

	void ModerateInGameTextBP(class UObject* WorldContextObject, const class FString& PlayerGeneratedText, const class FString& PlayerProfileId, FDelegateProperty_ Complete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ProfileAPIService
class UProfileAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProfileAPIService* GetDefaultObj();

	void ValidateProposedProfileName_BP(struct FValidateProposedProfileNameRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void UpdateProfileMetadata_BP(struct FUpdateProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void UpdateProfile_BP(struct FUpdateProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void SetRespite_BP(struct FSetRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void SetProfileMetadata_BP(struct FSetProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void SearchProfiles_BP(struct FSearchProfilesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void QueryProfiles_BP(struct FQueryProfilesRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListAllProfilesForAccount_BP(struct FListAllProfilesForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetRespite_BP(struct FGetRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProfilesForAccount_BP(struct FGetProfilesForAccountRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProfileNamesByIds_BP(struct FGetProfileNamesByIdsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProfileNameById_BP(struct FGetProfileNameByIdRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetProfileById_BP(struct FGetProfileByIdRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetPlayersWithRespite_BP(struct FGetPlayersWithRespiteRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetOnlineProfileNamesByIds_BP(struct FGetOnlineProfileNamesByIdsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DeleteProfile_BP(struct FDeleteProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateProfile_BP(struct FCreateProfileRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ClearProfileMetadata_BP(struct FClearProfileMetadataRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ProfileNameServiceLibrary
class UProfileNameServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProfileNameServiceLibrary* GetDefaultObj();

	class FString GetPublicNameWithoutDiscriminator(struct FUniqueName& UniqueName);
	class FString GetPublicNameWithDiscriminator(struct FUniqueName& UniqueName);
	void GetProfileNamesForIds(class UObject* WorldContextObject, TArray<class FString>& IDs, FDelegateProperty_& Complete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ProfileServiceLibrary
class UProfileServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProfileServiceLibrary* GetDefaultObj();

	void OnDeleteProfileComplete__DelegateSignature(struct FOnlineServiceStatus& Status);
	void OnCreateProfileComplete__DelegateSignature(struct FSelectableProfile& Profile, struct FOnlineServiceStatus& Status);
	void FetchProfilesComplete__DelegateSignature(TArray<struct FSelectableProfile>& Profiles, struct FOnlineServiceStatus& Status);
	void FetchProfiles(const class FString& AccountId, const class FString& ShardId, FDelegateProperty_& OnComplete);
	void DeleteProfile(struct FSelectableProfile& Profile, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ProfileSyncAPIService
class UProfileSyncAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProfileSyncAPIService* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.RedemptionsAPIService
class URedemptionsAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URedemptionsAPIService* GetDefaultObj();

	void ListRewards_BP(struct FListRewardsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListRedemptions_BP(struct FListRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetMyClaimableRedemptions_BP(struct FGetMyClaimableRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateReward_BP(struct FCreateRewardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateRedemptions_BP(struct FCreateRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateCode_BP(struct FCreateCodeRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ClaimRedemptions_BP(struct FClaimRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ClaimCode_BP(struct FClaimCodeRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void AssignMyTwitchRedemptions_BP(struct FAssignMyTwitchRedemptionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.ShardAPIService
class UShardAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UShardAPIService* GetDefaultObj();

	void UpdateShardVersions_BP(struct FUpdateShardVersionsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void UpdateShard_BP(struct FUpdateShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void ListShards_BP(struct FListShardsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetShardsForClientVersion_BP(struct FGetShardsForClientVersionRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetShard_BP(struct FGetShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void DeleteShard_BP(struct FDeleteShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CreateShard_BP(struct FCreateShardRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.TestAPIService
class UTestAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTestAPIService* GetDefaultObj();

	void UnaryCallWithParams_BP(struct FUnaryCallWithParamsRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void UnaryCall_BP(struct FUnaryCallRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.WorldStateAPIService
class UWorldStateAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWorldStateAPIService* GetDefaultObj();

	void SetWorldState_BP(struct FSetWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void GetWorldState_BP(struct FGetWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
	void CopyWorldState_BP(struct FCopyWorldStateRequest& Request, const class FString& TokenKey, FDelegateProperty_& OnComplete);
};

// 0x0 (0x28 - 0x28)
// Class NWXOnlineServices.WorldStateSyncAPIService
class UWorldStateSyncAPIService : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWorldStateSyncAPIService* GetDefaultObj();

};

}


