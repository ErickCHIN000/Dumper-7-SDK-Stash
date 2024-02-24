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

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.AbandonProspectCallbackProxyGen.AbandonProspect
struct UAbandonProspectCallbackProxyGen_AbandonProspect_Params
{
public:
	struct FReqAbandonProspect                   Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbandonProspectCallbackProxyGen*      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemIcarus.BackToHabCallbackProxyGen.BackToHab
struct UBackToHabCallbackProxyGen_BackToHab_Params
{
public:
	struct FReqBackToHab                         Request;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UBackToHabCallbackProxyGen*            ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen.CanJoinProspect
struct UCanJoinProspectCallbackProxyGen_CanJoinProspect_Params
{
public:
	struct FReqCanJoinProspect                   Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCanJoinProspectCallbackProxyGen*      ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen.CheckProspectExpired
struct UCheckProspectExpiredCallbackProxyGen_CheckProspectExpired_Params
{
public:
	struct FReqCheckProspectExpired              Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCheckProspectExpiredCallbackProxyGen* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen.ClaimNotificationAttachments
struct UClaimNotificationAttachmentsCallbackProxyGen_ClaimNotificationAttachments_Params
{
public:
	struct FReqClaimNotificationAttachments      Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClaimNotificationAttachmentsCallbackProxyGen* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen.ClaimProspect
struct UClaimProspectCallbackProxyGen_ClaimProspect_Params
{
public:
	struct FReqClaimProspect                     Request;                                           // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClaimProspectCallbackProxyGen*        ReturnValue;                                       // 0xB8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen.CreateCharacter
struct UCreateCharacterCallbackProxyGen_CreateCharacter_Params
{
public:
	struct FReqCreateCharacter                   Request;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCreateCharacterCallbackProxyGen*      ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen.CreateDropship
struct UCreateDropshipCallbackProxyGen_CreateDropship_Params
{
public:
	struct FReqCreateDropship                    Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCreateDropshipCallbackProxyGen*       ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen.DeleteCharacter
struct UDeleteCharacterCallbackProxyGen_DeleteCharacter_Params
{
public:
	struct FReqDeleteCharacter                   Request;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDeleteCharacterCallbackProxyGen*      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen.DeleteDropship
struct UDeleteDropshipCallbackProxyGen_DeleteDropship_Params
{
public:
	struct FReqDeleteDropship                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDeleteDropshipCallbackProxyGen*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen.DeleteNotification
struct UDeleteNotificationCallbackProxyGen_DeleteNotification_Params
{
public:
	struct FReqDeleteNotification                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDeleteNotificationCallbackProxyGen*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen.ExchangeCurrency
struct UExchangeCurrencyCallbackProxyGen_ExchangeCurrency_Params
{
public:
	struct FReqExchangeCurrency                  Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UExchangeCurrencyCallbackProxyGen*     ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen.GenerateProspects
struct UGenerateProspectsCallbackProxyGen_GenerateProspects_Params
{
public:
	struct FReqGenerateProspects                 Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGenerateProspectsCallbackProxyGen*    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen.GetAllProspects
struct UGetAllProspectsCallbackProxyGen_GetAllProspects_Params
{
public:
	struct FReqGetAllProspects                   Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetAllProspectsCallbackProxyGen*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen.GetAvailableProspects
struct UGetAvailableProspectsCallbackProxyGen_GetAvailableProspects_Params
{
public:
	struct FReqGetAvailableProspects             Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetAvailableProspectsCallbackProxyGen* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetChallengesCallbackProxyGen.GetChallenges
struct UGetChallengesCallbackProxyGen_GetChallenges_Params
{
public:
	struct FReqGetChallenges                     Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetChallengesCallbackProxyGen*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen.GetCharacterLoadout
struct UGetCharacterLoadoutCallbackProxyGen_GetCharacterLoadout_Params
{
public:
	struct FReqGetCharacterLoadout               Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetCharacterLoadoutCallbackProxyGen*  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen.GetCharacterProfile
struct UGetCharacterProfileCallbackProxyGen_GetCharacterProfile_Params
{
public:
	struct FReqGetCharacterProfile               Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetCharacterProfileCallbackProxyGen*  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.GetCharactersCallbackProxyGen.GetCharacters
struct UGetCharactersCallbackProxyGen_GetCharacters_Params
{
public:
	struct FReqGetCharacters                     Request;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGetCharactersCallbackProxyGen*        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetCreditsCallbackProxyGen.GetCredits
struct UGetCreditsCallbackProxyGen_GetCredits_Params
{
public:
	struct FReqGetCredits                        Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetCreditsCallbackProxyGen*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen.GetDropships
struct UGetDropshipsCallbackProxyGen_GetDropships_Params
{
public:
	struct FReqGetDropships                      Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetDropshipsCallbackProxyGen*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen.GetLastProspect
struct UGetLastProspectCallbackProxyGen_GetLastProspect_Params
{
public:
	struct FReqGetLastProspect                   Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetLastProspectCallbackProxyGen*      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen.GetLoadoutInventory
struct UGetLoadoutInventoryCallbackProxyGen_GetLoadoutInventory_Params
{
public:
	struct FReqLoadoutInventory                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetLoadoutInventoryCallbackProxyGen*  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen.GetMetaInventory
struct UGetMetaInventoryCallbackProxyGen_GetMetaInventory_Params
{
public:
	struct FReqGetMetaInventory                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetMetaInventoryCallbackProxyGen*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen.GetMetaResource
struct UGetMetaResourceCallbackProxyGen_GetMetaResource_Params
{
public:
	struct FReqGetMetaResources                  Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetMetaResourceCallbackProxyGen*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen.GetNotifications
struct UGetNotificationsCallbackProxyGen_GetNotifications_Params
{
public:
	struct FReqGetNotifications                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetNotificationsCallbackProxyGen*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen.GetPreparedLoadout
struct UGetPreparedLoadoutCallbackProxyGen_GetPreparedLoadout_Params
{
public:
	struct FReqPreparedLoadout                   Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetPreparedLoadoutCallbackProxyGen*   ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemIcarus.GetProspectCallbackProxyGen.GetProspect
struct UGetProspectCallbackProxyGen_GetProspect_Params
{
public:
	struct FReqGetProspect                       Request;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetProspectCallbackProxyGen*          ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen.GetProspectReport
struct UGetProspectReportCallbackProxyGen_GetProspectReport_Params
{
public:
	struct FReqGetProspectReport                 Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetProspectReportCallbackProxyGen*    ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen.GetProspectSummary
struct UGetProspectSummaryCallbackProxyGen_GetProspectSummary_Params
{
public:
	struct FReqGetProspectSummary                Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetProspectSummaryCallbackProxyGen*   ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen.GetUserProfile
struct UGetUserProfileCallbackProxyGen_GetUserProfile_Params
{
public:
	struct FReqGetUserProfile                    Request;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetUserProfileCallbackProxyGen*       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.HostCandidateCallbackProxyGen.HostCandidate
struct UHostCandidateCallbackProxyGen_HostCandidate_Params
{
public:
	struct FReqHostCandidate                     Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UHostCandidateCallbackProxyGen*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.IsConnected
struct UIcarusConnectionComponentBase_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectTimer
struct UIcarusConnectionComponentBase_GetReconnectTimer_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetReconnectAttempts
struct UIcarusConnectionComponentBase_GetReconnectAttempts_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetLoginErrorCode
struct UIcarusConnectionComponentBase_GetLoginErrorCode_Params
{
public:
	enum class ELoginFailure                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthType
struct UIcarusConnectionComponentBase_GetAuthType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthToken
struct UIcarusConnectionComponentBase_GetAuthToken_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.IcarusConnectionComponentBase.GetAuthId
struct UIcarusConnectionComponentBase_GetAuthId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase.IsConnected
struct UIcarusLobbyConnectionComponentBase_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.JoinProspectCallbackProxyGen.JoinProspect
struct UJoinProspectCallbackProxyGen_JoinProspect_Params
{
public:
	struct FReqJoinProspect                      Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinProspectCallbackProxyGen*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen.LobbyMessage
struct ULobbyMessageCallbackProxyGen_LobbyMessage_Params
{
public:
	struct FReqLobbyMessage                      Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class ULobbyMessageCallbackProxyGen*         ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen.ModifyDropship
struct UModifyDropshipCallbackProxyGen_ModifyDropship_Params
{
public:
	struct FReqModifyDropship                    Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModifyDropshipCallbackProxyGen*       ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen.MoveMetaInventoryItem
struct UMoveMetaInventoryItemCallbackProxyGen_MoveMetaInventoryItem_Params
{
public:
	struct FReqMoveMetaInventoryItem             Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMoveMetaInventoryItemCallbackProxyGen* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.SetPresence
struct UOnlineSubsystemIcarusFunctionLibrary_SetPresence_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlinePresenceStatusIcarus       NewState;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPresencePropertyKeyPair>      Properties;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.MakeLiteralPresencePropertyString
struct UOnlineSubsystemIcarusFunctionLibrary_MakeLiteralPresencePropertyString_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPresencePropertyKeyPair              ReturnValue;                                       // 0x18(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.IsOnlineSubsystemIcarusEnabled
struct UOnlineSubsystemIcarusFunctionLibrary_IsOnlineSubsystemIcarusEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusVersion
struct UOnlineSubsystemIcarusFunctionLibrary_GetIcarusVersion_Params
{
public:
	struct FIcarusVersion                        Version;                                           // 0x0(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C31[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusMessageListeners
struct UOnlineSubsystemIcarusFunctionLibrary_GetIcarusMessageListeners_Params
{
public:
	class UIcarusMessageListeners*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusLobbyConnectionComponent
struct UOnlineSubsystemIcarusFunctionLibrary_GetIcarusLobbyConnectionComponent_Params
{
public:
	class UIcarusLobbyConnectionComponent*       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetIcarusConnectionComponent
struct UOnlineSubsystemIcarusFunctionLibrary_GetIcarusConnectionComponent_Params
{
public:
	class UIcarusConnectionComponent*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetHash
struct UOnlineSubsystemIcarusFunctionLibrary_GetHash_Params
{
public:
	TArray<uint8>                                Buffer;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary.GetGatewayAddress
struct UOnlineSubsystemIcarusFunctionLibrary_GetGatewayAddress_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.SwitchOnlineMode
struct UOnlineSubsystemIcarusOfflineFunctionLibrary_SwitchOnlineMode_Params
{
public:
	bool                                         bOnlineMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary.IsOnlineMode
struct UOnlineSubsystemIcarusOfflineFunctionLibrary_IsOnlineMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.SendChatMessage
struct UOnlineSubsystemIcarusSessionFunctionLibrary_SendChatMessage_Params
{
public:
	struct FIcarusChatMessage                    ChatMessage;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.ReqUpdateLobbyStatus
struct UOnlineSubsystemIcarusSessionFunctionLibrary_ReqUpdateLobbyStatus_Params
{
public:
	enum class ELobbyStatus                      LobbyStatus;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsValidMatch
struct UOnlineSubsystemIcarusSessionFunctionLibrary_IsValidMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsMatchHost
struct UOnlineSubsystemIcarusSessionFunctionLibrary_IsMatchHost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.IsConnectedIcarusBackend
struct UOnlineSubsystemIcarusSessionFunctionLibrary_IsConnectedIcarusBackend_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetMatchFilters
struct UOnlineSubsystemIcarusSessionFunctionLibrary_GetMatchFilters_Params
{
public:
	TMap<class FName, struct FMatchMakingFilter> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetIcarusPlayerId
struct UOnlineSubsystemIcarusSessionFunctionLibrary_GetIcarusPlayerId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetCurrentMatch
struct UOnlineSubsystemIcarusSessionFunctionLibrary_GetCurrentMatch_Params
{
public:
	struct FMatchUpdate                          ReturnValue;                                       // 0x0(0x80)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetConnectionString
struct UOnlineSubsystemIcarusSessionFunctionLibrary_GetConnectionString_Params
{
public:
	struct FConnectionString                     ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.GetAuthToken
struct UOnlineSubsystemIcarusSessionFunctionLibrary_GetAuthToken_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary.CancelMatchMaking
struct UOnlineSubsystemIcarusSessionFunctionLibrary_CancelMatchMaking_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen.PackageLoadout
struct UPackageLoadoutCallbackProxyGen_PackageLoadout_Params
{
public:
	struct FReqPackageLoadout                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UPackageLoadoutCallbackProxyGen*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen.ProspectExpired
struct UProspectExpiredCallbackProxyGen_ProspectExpired_Params
{
public:
	struct FReqProspectExpired                   Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UProspectExpiredCallbackProxyGen*      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen.ReadNotification
struct UReadNotificationCallbackProxyGen_ReadNotification_Params
{
public:
	struct FReqReadNotification                  Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UReadNotificationCallbackProxyGen*     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen.RemoveEnvirosuit
struct URemoveEnvirosuitCallbackProxyGen_RemoveEnvirosuit_Params
{
public:
	struct FReqRemoveEnvirosuit                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class URemoveEnvirosuitCallbackProxyGen*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen.RemoveMetaItem
struct URemoveMetaItemCallbackProxyGen_RemoveMetaItem_Params
{
public:
	struct FReqRemoveMetaInventoryItem           Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class URemoveMetaItemCallbackProxyGen*       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen.RemoveSelectedDropship
struct URemoveSelectedDropshipCallbackProxyGen_RemoveSelectedDropship_Params
{
public:
	struct FReqRemoveSelectedDropship            Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class URemoveSelectedDropshipCallbackProxyGen* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.RepairWorkshopItemCallbackProxyGen.RepairWorkshopItem
struct URepairWorkshopItemCallbackProxyGen_RepairWorkshopItem_Params
{
public:
	struct FReqRepairWorkshopItem                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class URepairWorkshopItemCallbackProxyGen*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen.ReplicateWorkshopItem
struct UReplicateWorkshopItemCallbackProxyGen_ReplicateWorkshopItem_Params
{
public:
	struct FReqReplicateWorkshopItem             Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UReplicateWorkshopItemCallbackProxyGen* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen.ResetCharacter
struct UResetCharacterCallbackProxyGen_ResetCharacter_Params
{
public:
	struct FReqResetCharacter                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UResetCharacterCallbackProxyGen*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen.ResetCharacterProspectState
struct UResetCharacterProspectStateCallbackProxyGen_ResetCharacterProspectState_Params
{
public:
	struct FReqResetCharacterProspectState       Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UResetCharacterProspectStateCallbackProxyGen* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen.ResumeProspect
struct UResumeProspectCallbackProxyGen_ResumeProspect_Params
{
public:
	struct FReqResumeProspect                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UResumeProspectCallbackProxyGen*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen.SelectDropship
struct USelectDropshipCallbackProxyGen_SelectDropship_Params
{
public:
	struct FReqSelectDropship                    Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USelectDropshipCallbackProxyGen*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen.SelectEnvirosuit
struct USelectEnvirosuitCallbackProxyGen_SelectEnvirosuit_Params
{
public:
	struct FReqSelectEnvirosuit                  Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USelectEnvirosuitCallbackProxyGen*     ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen.SetResourceSplit
struct USetResourceSplitCallbackProxyGen_SetResourceSplit_Params
{
public:
	struct FReqSetResourceSplit                  Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USetResourceSplitCallbackProxyGen*     ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.SettleProspectCallbackProxyGen.SettleProspect
struct USettleProspectCallbackProxyGen_SettleProspect_Params
{
public:
	struct FReqSettleProspect                    Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USettleProspectCallbackProxyGen*       ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.SyncAccountFlagsCallbackProxyGen.SyncAccountFlags
struct USyncAccountFlagsCallbackProxyGen_SyncAccountFlags_Params
{
public:
	struct FReqSyncAccountFlags                  Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USyncAccountFlagsCallbackProxyGen*     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen.SyncAccountTalents
struct USyncAccountTalentsCallbackProxyGen_SyncAccountTalents_Params
{
public:
	struct FReqSyncAccountTalents                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USyncAccountTalentsCallbackProxyGen*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen.SyncCharacterTalents
struct USyncCharacterTalentsCallbackProxyGen_SyncCharacterTalents_Params
{
public:
	struct FReqSyncCharacterTalents              Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USyncCharacterTalentsCallbackProxyGen* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.TalentRefundCallbackProxyGen.TalentRefund
struct UTalentRefundCallbackProxyGen_TalentRefund_Params
{
public:
	struct FReqTalentRefund                      Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTalentRefundCallbackProxyGen*         ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen.UnlockAccountFlags
struct UUnlockAccountFlagsCallbackProxyGen_UnlockAccountFlags_Params
{
public:
	struct FReqUnlockAccountFlags                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUnlockAccountFlagsCallbackProxyGen*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen.UnlockCharacterFlags
struct UUnlockCharacterFlagsCallbackProxyGen_UnlockCharacterFlags_Params
{
public:
	struct FReqUnlockCharacterFlags              Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUnlockCharacterFlagsCallbackProxyGen* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen.UnlockWorkshopItem
struct UUnlockWorkshopItemCallbackProxyGen_UnlockWorkshopItem_Params
{
public:
	struct FReqUnlockWorkshopItem                Request;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUnlockWorkshopItemCallbackProxyGen*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen.UnpackageLoadout
struct UUnpackageLoadoutCallbackProxyGen_UnpackageLoadout_Params
{
public:
	struct FReqUnpackageLoadout                  Request;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUnpackageLoadoutCallbackProxyGen*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen.UpdateChallengeProgress
struct UUpdateChallengeProgressCallbackProxyGen_UpdateChallengeProgress_Params
{
public:
	struct FReqUpdateChallengeProgress           Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateChallengeProgressCallbackProxyGen* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen.UpdateCharacterLoadout
struct UUpdateCharacterLoadoutCallbackProxyGen_UpdateCharacterLoadout_Params
{
public:
	struct FReqUpdateCharacterLoadout            Request;                                           // 0x0(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateCharacterLoadoutCallbackProxyGen* ReturnValue;                                       // 0x150(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen.UpdateCharacterProgress
struct UUpdateCharacterProgressCallbackProxyGen_UpdateCharacterProgress_Params
{
public:
	struct FReqUpdateCharacterProgress           Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateCharacterProgressCallbackProxyGen* ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen.UpdateCharacterProspectLocation
struct UUpdateCharacterProspectLocationCallbackProxyGen_UpdateCharacterProspectLocation_Params
{
public:
	struct FReqUpdateCharacterProspectLocation   Request;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateCharacterProspectLocationCallbackProxyGen* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen.UpdateCosmetics
struct UUpdateCosmeticsCallbackProxyGen_UpdateCosmetics_Params
{
public:
	struct FReqUpdateCosmetics                   Request;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateCosmeticsCallbackProxyGen*      ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen.UpdateFactionMissionProgress
struct UUpdateFactionMissionProgressCallbackProxyGen_UpdateFactionMissionProgress_Params
{
public:
	struct FReqUpdateFactionMissionProgress      Request;                                           // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateFactionMissionProgressCallbackProxyGen* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen.UpdateProspect
struct UUpdateProspectCallbackProxyGen_UpdateProspect_Params
{
public:
	struct FReqUpdateProspect                    Request;                                           // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateProspectCallbackProxyGen*       ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen.UpdateTrackedStats
struct UUpdateTrackedStatsCallbackProxyGen_UpdateTrackedStats_Params
{
public:
	struct FReqUpdateTrackedStats                Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateTrackedStatsCallbackProxyGen*   ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


