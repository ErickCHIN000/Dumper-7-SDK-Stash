#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDeployStatus : uint8
{
	DEPLOY_STATUS_INVALID          = 0,
	DEPLOY_STATUS_STARTING         = 1,
	DEPLOY_STATUS_RUNNING          = 2,
	DEPLOY_STATUS_STOPPING         = 3,
	DEPLOY_STATUS_STOPPED          = 4,
	DEPLOY_STATUS_ERROR            = 5,
	DEPLOY_STATUS_MAX              = 6,
};

enum class EEventType : uint8
{
	EVENT_TYPE_INVALID             = 0,
	EVENT_TYPE_CREATE              = 1,
	EVENT_TYPE_STARTING            = 2,
	EVENT_TYPE_RUNNING             = 3,
	EVENT_TYPE_STOPPED             = 4,
	EVENT_TYPE_ERROR               = 5,
	EVENT_TYPE_MAX                 = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AcceptEULAResponse
struct FAcceptEULAResponse
{
public:
	class FString                                AccessToken;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.Account
struct FAccount
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Roles;                                             // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             AcceptedEulaAt;                                    // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.AcceptEULAForAccountResponse
struct FAcceptEULAForAccountResponse
{
public:
	struct FAccount                              Account;                                           // 0x0(0x28)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AddAccountEntitlementsResponse
struct FAddAccountEntitlementsResponse
{
public:
	uint8                                        Pad_142E[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AddProfileResponse
struct FAddProfileResponse
{
public:
	uint8                                        Pad_1430[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AddProfileEntitlementsResponse
struct FAddProfileEntitlementsResponse
{
public:
	uint8                                        Pad_1439[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AddProviderByAccountIDResponse
struct FAddProviderByAccountIDResponse
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AddRoleToAccountResponse
struct FAddRoleToAccountResponse
{
public:
	uint8                                        Pad_1445[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AssignMyTwitchRedemptionsResponse
struct FAssignMyTwitchRedemptionsResponse
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AttachFileToJiraResponse
struct FAttachFileToJiraResponse
{
public:
	uint8                                        Pad_1450[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.Cluster
struct FCluster
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PingEndpoint;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PingPort;                                          // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1458[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Platform;                                          // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDeploys;                                        // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.Region
struct FRegion
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCluster>                      Clusters;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithEOSResponse
struct FAuthWithEOSResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithGoogleResponse
struct FAuthWithGoogleResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithPSNResponse
struct FAuthWithPSNResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithSteamResponse
struct FAuthWithSteamResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithXboxResponse
struct FAuthWithXboxResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRegion>                       Regions;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.ClaimCodeResponse
struct FClaimCodeResponse
{
public:
	uint8                                        Pad_148B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.ClaimRedemptionsResponse
struct FClaimRedemptionsResponse
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWXOnlineServices.ClearProfileMetadataResponse
struct FClearProfileMetadataResponse
{
public:
	int32                                        ItemsDeleted;                                      // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.CopyWorldStateResponse
struct FCopyWorldStateResponse
{
public:
	uint8                                        Pad_1494[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.CreateAccountResponse
struct FCreateAccountResponse
{
public:
	struct FAccount                              Account;                                           // 0x0(0x28)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.CreateCodeResponse
struct FCreateCodeResponse
{
public:
	uint8                                        Pad_149B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.CreateResponse
struct FCreateResponse
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.CreateDeployResponse
struct FCreateDeployResponse
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWXOnlineServices.Operation
struct FOperation
{
public:
	uint8                                        Pad_14AA[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.MetadataNamespace
struct FMetadataNamespace
{
public:
	TMap<class FString, class FString>           MetaData;                                          // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWXOnlineServices.Profile
struct FProfile
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FMetadataNamespace> MetaData;                                          // 0x30(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Jwt;                                               // 0x80(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x90(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChatJwt;                                           // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DeletedAt;                                         // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Respite;                                           // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWXOnlineServices.CreateProfileResponse
struct FCreateProfileResponse
{
public:
	struct FProfile                              Profile;                                           // 0x0(0xD8)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRedemptionsResponse
struct FCreateRedemptionsResponse
{
public:
	uint8                                        Pad_14D1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRewardResponse
struct FCreateRewardResponse
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRoomResponse
struct FCreateRoomResponse
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.CreateShardResponse
struct FCreateShardResponse
{
public:
	uint8                                        Pad_14DE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteResponse
struct FDeleteResponse
{
public:
	uint8                                        Pad_14E6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteProfileResponse
struct FDeleteProfileResponse
{
public:
	uint8                                        Pad_14E7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteShardResponse
struct FDeleteShardResponse
{
public:
	uint8                                        Pad_14EB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DoesAccountHaveEntitlementResponse
struct FDoesAccountHaveEntitlementResponse
{
public:
	bool                                         HasEntitlement;                                    // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DoesMyAccountHaveEntitlementResponse
struct FDoesMyAccountHaveEntitlementResponse
{
public:
	bool                                         HasEntitlement;                                    // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DoesMyProfileHaveEntitlementResponse
struct FDoesMyProfileHaveEntitlementResponse
{
public:
	bool                                         HasEntitlement;                                    // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.DoesProfileHaveEntitlementResponse
struct FDoesProfileHaveEntitlementResponse
{
public:
	bool                                         HasEntitlement;                                    // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountByIDResponse
struct FGetAccountByIDResponse
{
public:
	struct FAccount                              Account;                                           // 0x0(0x28)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountByProviderIDResponse
struct FGetAccountByProviderIDResponse
{
public:
	struct FAccount                              Account;                                           // 0x0(0x28)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountEntitlementsResponse
struct FGetAccountEntitlementsResponse
{
public:
	TArray<class FString>                        Entitlements;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXOnlineServices.Deploy
struct FDeploy
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Shard;                                             // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Players;                                           // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1519[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Map;                                               // 0x38(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeployStatus                     Status;                                            // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Tags;                                              // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Annotations;                                       // 0x60(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PlayerIds;                                         // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployResponse
struct FGetDeployResponse
{
public:
	struct FDeploy                               Deploy;                                            // 0x0(0xD0)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Locator;                                           // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXOnlineServices.DeployRecord
struct FDeployRecord
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Shard;                                             // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Map;                                               // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CreatedAt;                                         // 0x40(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x48(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Annotations;                                       // 0x68(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0xB8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             UpdatedAt;                                         // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployRecordByNameResponse
struct FGetDeployRecordByNameResponse
{
public:
	struct FDeployRecord                         Record;                                            // 0x0(0xD0)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployRecordResponse
struct FGetDeployRecordResponse
{
public:
	struct FDeployRecord                         Record;                                            // 0x0(0xD0)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.Member
struct FMember
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Role;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.Group
struct FGroup
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMember>                       Members;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupDetailsResponse
struct FGetGroupDetailsResponse
{
public:
	struct FGroup                                Group;                                             // 0x0(0x30)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupsForProfileResponse
struct FGetGroupsForProfileResponse
{
public:
	TArray<class FString>                        Groups;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.GroupIdName
struct FGroupIdName
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupsWithNameForProfileResponse
struct FGetGroupsWithNameForProfileResponse
{
public:
	TArray<struct FGroupIdName>                  Groups;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.MessageOfTheDay
struct FMessageOfTheDay
{
public:
	class FString                                MessageOfTheDay;                                   // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetMessageOfTheDayResponse
struct FGetMessageOfTheDayResponse
{
public:
	struct FMessageOfTheDay                      Motd;                                              // 0x0(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyAccountEntitlementsResponse
struct FGetMyAccountEntitlementsResponse
{
public:
	TArray<class FString>                        Entitlements;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NWXOnlineServices.Redemption
struct FRedemption
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RewardSku;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFinite;                                          // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceType;                                        // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceId;                                          // 0x38(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyClaimableRedemptionsResponse
struct FGetMyClaimableRedemptionsResponse
{
public:
	TArray<struct FRedemption>                   Redemptions;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyProfileEntitlementsResponse
struct FGetMyProfileEntitlementsResponse
{
public:
	TArray<class FString>                        Entitlements;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.NewsItem
struct FNewsItem
{
public:
	class FString                                Title;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Time;                                              // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetNewsResponse
struct FGetNewsResponse
{
public:
	TArray<struct FNewsItem>                     NewsItems;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.GetOnlineProfileNamesByIdsResponse
struct FGetOnlineProfileNamesByIdsResponse
{
public:
	TMap<class FString, class FString>           OnlineIdsToNames;                                  // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayerOnlineStatusResponse
struct FGetPlayerOnlineStatusResponse
{
public:
	TMap<class FString, bool>                    IsOnline;                                          // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayersInRoomResponse
struct FGetPlayersInRoomResponse
{
public:
	TArray<class FString>                        ProfileIds;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayersWithRespiteResponse
struct FGetPlayersWithRespiteResponse
{
public:
	TArray<struct FProfile>                      Profiles;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileByIdResponse
struct FGetProfileByIdResponse
{
public:
	struct FProfile                              Profile;                                           // 0x0(0xD8)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileEntitlementsResponse
struct FGetProfileEntitlementsResponse
{
public:
	TArray<class FString>                        Entitlements;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileNameByIdResponse
struct FGetProfileNameByIdResponse
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileNamesByIdsResponse
struct FGetProfileNamesByIdsResponse
{
public:
	TArray<class FString>                        Names;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfilesForAccountResponse
struct FGetProfilesForAccountResponse
{
public:
	TArray<struct FProfile>                      Profiles;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.GetProviderByAccountIDResponse
struct FGetProviderByAccountIDResponse
{
public:
	class FString                                ProviderAccountId;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.GetProvidersByAccountIDResponse
struct FGetProvidersByAccountIDResponse
{
public:
	TMap<class FString, class FString>           Providers;                                         // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetRespiteResponse
struct FGetRespiteResponse
{
public:
	class FString                                Respite;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetRoomsForPlayerResponse
struct FGetRoomsForPlayerResponse
{
public:
	TArray<class FString>                        Rooms;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWXOnlineServices.DeploymentSet
struct FDeploymentSet
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Map;                                               // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Capacity;                                          // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Tags;                                              // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Annotations;                                       // 0x38(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTimespan                             ReservationTime;                                   // 0x88(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct NWXOnlineServices.Shard
struct FShard
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientVersion;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerVersion;                                     // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Featureset;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Entitlement;                                       // 0x40(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tag;                                               // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             ExpiresAt;                                         // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        InitialMaplist;                                    // 0x68(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                InitialBootstrapConfig;                            // 0x78(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnforceSupportRoles;                               // 0x88(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Ttl;                                               // 0x8C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseFleets;                                         // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CreatedAt;                                         // 0x98(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             UpdatedAt;                                         // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDeploymentSet>                DeploymentSets;                                    // 0xA8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Annotations;                                       // 0xB8(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x108(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1647[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct NWXOnlineServices.GetShardResponse
struct FGetShardResponse
{
public:
	struct FShard                                Shard;                                             // 0x0(0x110)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ClientShard
struct FClientShard
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Featureset;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWXOnlineServices.GetShardsForClientVersionResponse
struct FGetShardsForClientVersionResponse
{
public:
	TArray<class FString>                        Shards;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FClientShard>     ShardDetails;                                      // 0x10(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.GetWorldStateResponse
struct FGetWorldStateResponse
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.InvitePlayersToRoomResponse
struct FInvitePlayersToRoomResponse
{
public:
	uint8                                        Pad_166B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.InvitePlayerToRealmViaChatResponse
struct FInvitePlayerToRealmViaChatResponse
{
public:
	uint8                                        Pad_1674[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListAccountsWithEntitlementResponse
struct FListAccountsWithEntitlementResponse
{
public:
	TArray<class FString>                        Accounts;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAssociatedAccounts;                             // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListAccountsWithRoleResponse
struct FListAccountsWithRoleResponse
{
public:
	TArray<class FString>                        Accounts;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAssociatedAccounts;                             // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ListAllProfilesForAccountResponse
struct FListAllProfilesForAccountResponse
{
public:
	TArray<struct FProfile>                      Profiles;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.DeployEvent
struct FDeployEvent
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeployId;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CreatedAt;                                         // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventType                        EventType;                                         // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Platform;                                          // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameServer;                                        // 0x40(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListDeployEventsResponse
struct FListDeployEventsResponse
{
public:
	TArray<struct FDeployEvent>                  DeployEvents;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListDeployRecordsResponse
struct FListDeployRecordsResponse
{
public:
	TArray<struct FDeployRecord>                 DeployRecords;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListEntitlementsResponse
struct FListEntitlementsResponse
{
public:
	TArray<class FString>                        Entitlements;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListProfilesWithEntitlementResponse
struct FListProfilesWithEntitlementResponse
{
public:
	TArray<class FString>                        Profiles;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ListRedemptionsResponse
struct FListRedemptionsResponse
{
public:
	TArray<struct FRedemption>                   Redemptions;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.Reward
struct FReward
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFinite;                                          // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ListRewardsResponse
struct FListRewardsResponse
{
public:
	TArray<struct FReward>                       Rewards;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListRolesResponse
struct FListRolesResponse
{
public:
	TArray<class FString>                        Roles;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ListShardsResponse
struct FListShardsResponse
{
public:
	TArray<struct FShard>                        Shards;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextPageToken;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.MakeAnnouncementResponse
struct FMakeAnnouncementResponse
{
public:
	uint8                                        Pad_16FD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.ModerateTextResponse
struct FModerateTextResponse
{
public:
	class FString                                ModeratedText;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OriginalText;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Severity;                                          // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.Deployment
struct FDeployment
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Players;                                           // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRunning;                                        // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Capacity;                                          // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.UniqueName
struct FUniqueName
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Discriminator;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.ProfileNamesMapWrapper
struct FProfileNamesMapWrapper
{
public:
	TMap<class FString, struct FUniqueName>      IdsToNames;                                        // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.QueryProfilesResponse
struct FQueryProfilesResponse
{
public:
	class FString                                NextPageToken;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfile>                      Profiles;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RecordDeployEventsResponse
struct FRecordDeployEventsResponse
{
public:
	uint8                                        Pad_173D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RecordDeployPlayersResponse
struct FRecordDeployPlayersResponse
{
public:
	uint8                                        Pad_173F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveAccountEntitlementsResponse
struct FRemoveAccountEntitlementsResponse
{
public:
	uint8                                        Pad_1745[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemovePlayersFromRoomResponse
struct FRemovePlayersFromRoomResponse
{
public:
	uint8                                        Pad_174B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProfileResponse
struct FRemoveProfileResponse
{
public:
	uint8                                        Pad_1753[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProfileEntitlementsResponse
struct FRemoveProfileEntitlementsResponse
{
public:
	uint8                                        Pad_1755[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProviderByAccountIDResponse
struct FRemoveProviderByAccountIDResponse
{
public:
	uint8                                        Pad_175B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveRoleFromAccountResponse
struct FRemoveRoleFromAccountResponse
{
public:
	uint8                                        Pad_175F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.ReportPlayerActionResponse
struct FReportPlayerActionResponse
{
public:
	uint8                                        Pad_1762[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.ReportPlayerResponse
struct FReportPlayerResponse
{
public:
	uint8                                        Pad_176B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ResolveDeploySetResponse
struct FResolveDeploySetResponse
{
public:
	class FString                                DeploymentId;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RestartDeployResponse
struct FRestartDeployResponse
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.SearchProfilesResponse
struct FSearchProfilesResponse
{
public:
	class FString                                NextPageToken;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfile>                      Profiles;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.SetDeployAnnotationsResponse
struct FSetDeployAnnotationsResponse
{
public:
	uint8                                        Pad_1785[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.SetDeployScoreResponse
struct FSetDeployScoreResponse
{
public:
	uint8                                        Pad_178B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWXOnlineServices.SetProfileMetadataResponse
struct FSetProfileMetadataResponse
{
public:
	int64                                        MetadataUid;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.SetRespiteResponse
struct FSetRespiteResponse
{
public:
	uint8                                        Pad_1793[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.SetWorldStateResponse
struct FSetWorldStateResponse
{
public:
	uint8                                        Pad_1799[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.StopAllDeploysResponse
struct FStopAllDeploysResponse
{
public:
	uint8                                        Pad_179E[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.StopDeployResponse
struct FStopDeployResponse
{
public:
	uint8                                        Pad_17A3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.SubmitJiraResponse
struct FSubmitJiraResponse
{
public:
	class FString                                IssueId;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.UnaryCallResponse
struct FUnaryCallResponse
{
public:
	uint8                                        Pad_17AD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.UnaryCallWithParamsResponse
struct FUnaryCallWithParamsResponse
{
public:
	class FString                                AResponseString;                                   // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnResponseInt;                                     // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateProfileResponse
struct FUpdateProfileResponse
{
public:
	struct FProfile                              Profile;                                           // 0x0(0xD8)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateProfileMetadataResponse
struct FUpdateProfileMetadataResponse
{
public:
	uint8                                        Pad_17C7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateShardResponse
struct FUpdateShardResponse
{
public:
	uint8                                        Pad_17C8[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateShardVersionsResponse
struct FUpdateShardVersionsResponse
{
public:
	uint8                                        Pad_17CC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.ValidateProposedProfileNameResponse
struct FValidateProposedProfileNameResponse
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ValidationErrors;                                  // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x260 (0x260 - 0x0)
// ScriptStruct NWXOnlineServices.SelectableProfile
struct FSelectableProfile
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueName                           UniquePlayerName;                                  // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                PrivatePlayerName;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           AppearanceMetadata;                                // 0x40(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           InventoryMetadata;                                 // 0x90(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           LoadoutMetadata;                                   // 0xE0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSet<class FName>                            Roles;                                             // 0x130(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int64                                        LastSpawnedTimestamp;                              // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E3[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NWXOnlineServices.TemporalConfig
struct FTemporalConfig
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseRealmPower;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RealmDifficulty;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurated;                                        // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HumanInfluenceLevel;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NatureInfluenceLevel;                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreatureInfluenceLevel;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AstrologicalInfluenceLevel;                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RealmTags;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         RealmCards;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class FString                                PortalTargetDeploymentID;                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PortalTargetPlayerStartTag;                        // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDebugRealm;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1811[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                POIDistributionKey;                                // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWXOnlineServices.DeploymentInformation
struct FDeploymentInformation
{
public:
	class FString                                DeploymentId;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredRegion;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPublicRealm;                                    // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.CreateAccountRequest
struct FCreateAccountRequest
{
public:
	class FString                                ProviderAccountId;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountByProviderIDRequest
struct FGetAccountByProviderIDRequest
{
public:
	class FString                                ProviderAccountId;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProviderByAccountIDRequest
struct FGetProviderByAccountIDRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountByIDRequest
struct FGetAccountByIDRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.AddRoleToAccountRequest
struct FAddRoleToAccountRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Role;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveRoleFromAccountRequest
struct FRemoveRoleFromAccountRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Role;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AcceptEULAForAccountRequest
struct FAcceptEULAForAccountRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.ListRolesRequest
struct FListRolesRequest
{
public:
	int32                                        PageSize;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1874[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListAccountsWithRoleRequest
struct FListAccountsWithRoleRequest
{
public:
	class FString                                Role;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1881[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.AddProviderByAccountIDRequest
struct FAddProviderByAccountIDRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderAccountId;                                 // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProvidersByAccountIDRequest
struct FGetProvidersByAccountIDRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProviderByAccountIDRequest
struct FRemoveProviderByAccountIDRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.Regions
struct FRegions
{
public:
	TArray<struct FRegion>                       Regions;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithSteamRequest
struct FAuthWithSteamRequest
{
public:
	TArray<uint8>                                EncryptedAppTicket;                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithEOSRequest
struct FAuthWithEOSRequest
{
public:
	class FString                                IdToken;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithXboxRequest
struct FAuthWithXboxRequest
{
public:
	class FString                                Token;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithPSNRequest
struct FAuthWithPSNRequest
{
public:
	class FString                                IdToken;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.AuthWithGoogleRequest
struct FAuthWithGoogleRequest
{
public:
	class FString                                AccessToken;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AcceptEULARequest
struct FAcceptEULARequest
{
public:
	uint8                                        Pad_18DF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.PlayerIdentityTokenDetails
struct FPlayerIdentityTokenDetails
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Project;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRoomRequest
struct FCreateRoomRequest
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoomCapacity;                                      // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ProfileIds;                                        // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.InvitePlayersToRoomRequest
struct FInvitePlayersToRoomRequest
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ProfileIds;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemovePlayersFromRoomRequest
struct FRemovePlayersFromRoomRequest
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ProfileIds;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayersInRoomRequest
struct FGetPlayersInRoomRequest
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetRoomsForPlayerRequest
struct FGetRoomsForPlayerRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.MakeAnnouncementRequest
struct FMakeAnnouncementRequest
{
public:
	class FString                                ShardId;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.InvitePlayerToRealmViaChatRequest
struct FInvitePlayerToRealmViaChatRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayerOnlineStatusRequest
struct FGetPlayerOnlineStatusRequest
{
public:
	TArray<class FString>                        ProfileIds;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NWXOnlineServices.GetNewsRequest
struct FGetNewsRequest
{
public:
	int32                                        NumItemsRequested;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.GetMessageOfTheDayRequest
struct FGetMessageOfTheDayRequest
{
public:
	uint8                                        Pad_1945[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.LoginCredentials
struct FLoginCredentials
{
public:
	class FString                                LoginToken;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Locator;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Fingerprint;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Featureset;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct NWXOnlineServices.CreateDeployRequest
struct FCreateDeployRequest
{
public:
	struct FDeploy                               Deploy;                                            // 0x0(0xD0)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                PreferredRegion;                                   // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RestartDeployRequest
struct FRestartDeployRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredRegion;                                   // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.StopDeployRequest
struct FStopDeployRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NWXOnlineServices.StopAllDeploysRequest
struct FStopAllDeploysRequest
{
public:
	TMap<class FString, class FString>           Selectors;                                         // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployRequest
struct FGetDeployRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.FindDeployByNameRequest
struct FFindDeployByNameRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct NWXOnlineServices.FindDeployByNameResponse
struct FFindDeployByNameResponse
{
public:
	struct FDeploy                               Deploy;                                            // 0x0(0xD0)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployRecordRequest
struct FGetDeployRecordRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetDeployRecordByNameRequest
struct FGetDeployRecordByNameRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListDeployRecordsRequest
struct FListDeployRecordsRequest
{
public:
	class FString                                Shard;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.RecordDeployEventsRequest
struct FRecordDeployEventsRequest
{
public:
	TArray<struct FDeployEvent>                  Events;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListDeployEventsRequest
struct FListDeployEventsRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct NWXOnlineServices.ResolveDeploySetRequest
struct FResolveDeploySetRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PartyId;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Shard;                                             // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploySet;                                         // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeploymentSet                        DesiredDeploySet;                                  // 0x40(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                PreferredRegion;                                   // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.SetDeployScoreRequest
struct FSetDeployScoreRequest
{
public:
	class FString                                DeployName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetOperationRequest
struct FGetOperationRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWXOnlineServices.DeployReadyResponse
struct FDeployReadyResponse
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLoginCredentials                     Credentials;                                       // 0x20(0x40)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWXOnlineServices.SetDeployAnnotationsRequest
struct FSetDeployAnnotationsRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Annotations;                                       // 0x10(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.RecordDeployPlayersRequest
struct FRecordDeployPlayersRequest
{
public:
	class FString                                Shard;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeployName;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ProfileIds;                                        // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NWXOnlineServices.BootstrapDeploymentResponse
struct FBootstrapDeploymentResponse
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F2[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyAccountEntitlementsRequest
struct FGetMyAccountEntitlementsRequest
{
public:
	uint8                                        Pad_19F7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyProfileEntitlementsRequest
struct FGetMyProfileEntitlementsRequest
{
public:
	uint8                                        Pad_19FA[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetAccountEntitlementsRequest
struct FGetAccountEntitlementsRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileEntitlementsRequest
struct FGetProfileEntitlementsRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.DoesMyAccountHaveEntitlementRequest
struct FDoesMyAccountHaveEntitlementRequest
{
public:
	class FString                                Entitlement;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.DoesMyProfileHaveEntitlementRequest
struct FDoesMyProfileHaveEntitlementRequest
{
public:
	class FString                                Entitlement;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.DoesAccountHaveEntitlementRequest
struct FDoesAccountHaveEntitlementRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Entitlement;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.DoesProfileHaveEntitlementRequest
struct FDoesProfileHaveEntitlementRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Entitlement;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.AddAccountEntitlementsRequest
struct FAddAccountEntitlementsRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Entitlements;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.AddProfileEntitlementsRequest
struct FAddProfileEntitlementsRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Entitlements;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveAccountEntitlementsRequest
struct FRemoveAccountEntitlementsRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Entitlements;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProfileEntitlementsRequest
struct FRemoveProfileEntitlementsRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Entitlements;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.ListEntitlementsRequest
struct FListEntitlementsRequest
{
public:
	int32                                        PageSize;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListAccountsWithEntitlementRequest
struct FListAccountsWithEntitlementRequest
{
public:
	class FString                                Entitlement;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PageToken;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A57[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.ListProfilesWithEntitlementRequest
struct FListProfilesWithEntitlementRequest
{
public:
	class FString                                Entitlement;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PageToken;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A60[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.SubmitJiraRequest
struct FSubmitJiraRequest
{
public:
	class FString                                Subject;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Body;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Log;                                               // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Labels;                                            // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.AttachFileToJiraRequest
struct FAttachFileToJiraRequest
{
public:
	class FString                                IssueId;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRequest
struct FCreateRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteRequest
struct FDeleteRequest
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.AddProfileRequest
struct FAddProfileRequest
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.RemoveProfileRequest
struct FRemoveProfileRequest
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupsForProfileRequest
struct FGetGroupsForProfileRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupDetailsRequest
struct FGetGroupDetailsRequest
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetGroupsWithNameForProfileRequest
struct FGetGroupsWithNameForProfileRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.ModerateTextRequest
struct FModerateTextRequest
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextInputContext;                                  // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.ReportPlayerRequest
struct FReportPlayerRequest
{
public:
	class FString                                ReporteeProfileId;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Category;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.ReportPlayerActionRequest
struct FReportPlayerActionRequest
{
public:
	class FString                                ReporteeProfileId;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Category;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeploymentName;                                    // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfilesForAccountRequest
struct FGetProfilesForAccountRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ListAllProfilesForAccountRequest
struct FListAllProfilesForAccountRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileByIdRequest
struct FGetProfileByIdRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ExpectedMetadataUid;                               // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileNameByIdRequest
struct FGetProfileNameByIdRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetProfileNamesByIdsRequest
struct FGetProfileNamesByIdsRequest
{
public:
	TArray<class FString>                        IDs;                                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetOnlineProfileNamesByIdsRequest
struct FGetOnlineProfileNamesByIdsRequest
{
public:
	TArray<class FString>                        IDs;                                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NWXOnlineServices.CreateProfileRequest
struct FCreateProfileRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           AppearanceMetadata;                                // 0x30(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x80(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteProfileRequest
struct FDeleteProfileRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateProfileRequest
struct FUpdateProfileRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateProfileMetadataRequest
struct FUpdateProfileMetadataRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FMetadataNamespace> MetaData;                                          // 0x10(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NWXOnlineServices.SetProfileMetadataRequest
struct FSetProfileMetadataRequest
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FMetadataNamespace> MetaData;                                          // 0x10(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	int64                                        ExpectedMetadataUid;                               // 0x60(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ClearProfileMetadataRequest
struct FClearProfileMetadataRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWXOnlineServices.SearchProfilesRequest
struct FSearchProfilesRequest
{
public:
	int32                                        PageSize;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShardId;                                           // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.QueryProfilesRequest
struct FQueryProfilesRequest
{
public:
	int32                                        PageSize;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ValidateProposedProfileNameRequest
struct FValidateProposedProfileNameRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateName;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.SetRespiteRequest
struct FSetRespiteRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Respite;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetRespiteRequest
struct FGetRespiteRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetPlayersWithRespiteRequest
struct FGetPlayersWithRespiteRequest
{
public:
	class FString                                Respite;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRewardRequest
struct FCreateRewardRequest
{
public:
	class FString                                RewardSku;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFinite;                                          // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B80[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.AssignMyTwitchRedemptionsRequest
struct FAssignMyTwitchRedemptionsRequest
{
public:
	uint8                                        Pad_1B89[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.GetMyClaimableRedemptionsRequest
struct FGetMyClaimableRedemptionsRequest
{
public:
	uint8                                        Pad_1B8F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ClaimRedemptionsRequest
struct FClaimRedemptionsRequest
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RedemptionIds;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.ListRewardsRequest
struct FListRewardsRequest
{
public:
	uint8                                        Pad_1B9C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXOnlineServices.CreateCodeRequest
struct FCreateCodeRequest
{
public:
	class FString                                RewardId;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ExpiryDate;                                        // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Code;                                              // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.ClaimCodeRequest
struct FClaimCodeRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Code;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.ListRedemptionsRequest
struct FListRedemptionsRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NWXOnlineServices.CreateRedemptionsRequest
struct FCreateRedemptionsRequest
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RewardIds;                                         // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SourceId;                                          // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceType;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct NWXOnlineServices.CreateShardRequest
struct FCreateShardRequest
{
public:
	struct FShard                                Shard;                                             // 0x0(0x110)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetShardRequest
struct FGetShardRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.DeleteShardRequest
struct FDeleteShardRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateShardVersionsRequest
struct FUpdateShardVersionsRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientVersion;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerVersion;                                     // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.ListShardsRequest
struct FListShardsRequest
{
public:
	int32                                        PageSize;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PageToken;                                         // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetShardsForClientVersionRequest
struct FGetShardsForClientVersionRequest
{
public:
	class FString                                ClientVersion;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct NWXOnlineServices.UpdateShardRequest
struct FUpdateShardRequest
{
public:
	struct FShard                                Shard;                                             // 0x0(0x110)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXOnlineServices.UnaryCallRequest
struct FUnaryCallRequest
{
public:
	uint8                                        Pad_1BEE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXOnlineServices.UnaryCallWithParamsRequest
struct FUnaryCallWithParamsRequest
{
public:
	class FString                                AString;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnInt;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.GetWorldStateRequest
struct FGetWorldStateRequest
{
public:
	class FString                                DeployName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXOnlineServices.SetWorldStateRequest
struct FSetWorldStateRequest
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                DeployName;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXOnlineServices.CopyWorldStateRequest
struct FCopyWorldStateRequest
{
public:
	class FString                                SourceDeployName;                                  // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DestinationDeployName;                             // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXOnlineServices.PartyInviteDetails
struct FPartyInviteDetails
{
public:
	class FString                                From;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


