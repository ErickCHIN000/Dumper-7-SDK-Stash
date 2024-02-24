#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.AbandonProspectCallbackProxyGen
class UAbandonProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_33B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbandonProspectCallbackProxyGen* GetDefaultObj();

	class UAbandonProspectCallbackProxyGen* AbandonProspect(struct FReqAbandonProspect& Request);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemIcarus.BackToHabCallbackProxyGen
class UBackToHabCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_359[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBackToHabCallbackProxyGen* GetDefaultObj();

	class UBackToHabCallbackProxyGen* BackToHab(struct FReqBackToHab& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen
class UCanJoinProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_382[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCanJoinProspectCallbackProxyGen* GetDefaultObj();

	class UCanJoinProspectCallbackProxyGen* CanJoinProspect(struct FReqCanJoinProspect& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen
class UCheckProspectExpiredCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCheckProspectExpiredCallbackProxyGen* GetDefaultObj();

	class UCheckProspectExpiredCallbackProxyGen* CheckProspectExpired(struct FReqCheckProspectExpired& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen
class UClaimNotificationAttachmentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClaimNotificationAttachmentsCallbackProxyGen* GetDefaultObj();

	class UClaimNotificationAttachmentsCallbackProxyGen* ClaimNotificationAttachments(struct FReqClaimNotificationAttachments& Request);
};

// 0xD8 (0x108 - 0x30)
// Class OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen
class UClaimProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_402[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClaimProspectCallbackProxyGen* GetDefaultObj();

	class UClaimProspectCallbackProxyGen* ClaimProspect(struct FReqClaimProspect& Request);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen
class UCreateCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateCharacterCallbackProxyGen* GetDefaultObj();

	class UCreateCharacterCallbackProxyGen* CreateCharacter(struct FReqCreateCharacter& Request);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen
class UCreateDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_457[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateDropshipCallbackProxyGen* GetDefaultObj();

	class UCreateDropshipCallbackProxyGen* CreateDropship(struct FReqCreateDropship& Request);
};

// 0x28 (0x58 - 0x30)
// Class OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen
class UDeleteCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_481[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeleteCharacterCallbackProxyGen* GetDefaultObj();

	class UDeleteCharacterCallbackProxyGen* DeleteCharacter(struct FReqDeleteCharacter& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen
class UDeleteDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeleteDropshipCallbackProxyGen* GetDefaultObj();

	class UDeleteDropshipCallbackProxyGen* DeleteDropship(struct FReqDeleteDropship& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen
class UDeleteNotificationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeleteNotificationCallbackProxyGen* GetDefaultObj();

	class UDeleteNotificationCallbackProxyGen* DeleteNotification(struct FReqDeleteNotification& Request);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen
class UExchangeCurrencyCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E7[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExchangeCurrencyCallbackProxyGen* GetDefaultObj();

	class UExchangeCurrencyCallbackProxyGen* ExchangeCurrency(struct FReqExchangeCurrency& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen
class UGenerateProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGenerateProspectsCallbackProxyGen* GetDefaultObj();

	class UGenerateProspectsCallbackProxyGen* GenerateProspects(struct FReqGenerateProspects& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen
class UGetAllProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_512[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetAllProspectsCallbackProxyGen* GetDefaultObj();

	class UGetAllProspectsCallbackProxyGen* GetAllProspects(struct FReqGetAllProspects& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen
class UGetAvailableProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_546[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetAvailableProspectsCallbackProxyGen* GetDefaultObj();

	class UGetAvailableProspectsCallbackProxyGen* GetAvailableProspects(struct FReqGetAvailableProspects& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetChallengesCallbackProxyGen
class UGetChallengesCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_559[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetChallengesCallbackProxyGen* GetDefaultObj();

	class UGetChallengesCallbackProxyGen* GetChallenges(struct FReqGetChallenges& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen
class UGetCharacterLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_585[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetCharacterLoadoutCallbackProxyGen* GetDefaultObj();

	class UGetCharacterLoadoutCallbackProxyGen* GetCharacterLoadout(struct FReqGetCharacterLoadout& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen
class UGetCharacterProfileCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetCharacterProfileCallbackProxyGen* GetDefaultObj();

	class UGetCharacterProfileCallbackProxyGen* GetCharacterProfile(struct FReqGetCharacterProfile& Request);
};

// 0x28 (0x58 - 0x30)
// Class OnlineSubsystemIcarus.GetCharactersCallbackProxyGen
class UGetCharactersCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetCharactersCallbackProxyGen* GetDefaultObj();

	class UGetCharactersCallbackProxyGen* GetCharacters(struct FReqGetCharacters& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetCreditsCallbackProxyGen
class UGetCreditsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_632[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetCreditsCallbackProxyGen* GetDefaultObj();

	class UGetCreditsCallbackProxyGen* GetCredits(struct FReqGetCredits& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen
class UGetDropshipsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_66E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetDropshipsCallbackProxyGen* GetDefaultObj();

	class UGetDropshipsCallbackProxyGen* GetDropships(struct FReqGetDropships& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen
class UGetLastProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetLastProspectCallbackProxyGen* GetDefaultObj();

	class UGetLastProspectCallbackProxyGen* GetLastProspect(struct FReqGetLastProspect& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen
class UGetLoadoutInventoryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F3[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetLoadoutInventoryCallbackProxyGen* GetDefaultObj();

	class UGetLoadoutInventoryCallbackProxyGen* GetLoadoutInventory(struct FReqLoadoutInventory& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen
class UGetMetaInventoryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_746[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetMetaInventoryCallbackProxyGen* GetDefaultObj();

	class UGetMetaInventoryCallbackProxyGen* GetMetaInventory(struct FReqGetMetaInventory& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen
class UGetMetaResourceCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_77F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetMetaResourceCallbackProxyGen* GetDefaultObj();

	class UGetMetaResourceCallbackProxyGen* GetMetaResource(struct FReqGetMetaResources& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen
class UGetNotificationsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BD[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetNotificationsCallbackProxyGen* GetDefaultObj();

	class UGetNotificationsCallbackProxyGen* GetNotifications(struct FReqGetNotifications& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen
class UGetPreparedLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F5[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetPreparedLoadoutCallbackProxyGen* GetDefaultObj();

	class UGetPreparedLoadoutCallbackProxyGen* GetPreparedLoadout(struct FReqPreparedLoadout& Request);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemIcarus.GetProspectCallbackProxyGen
class UGetProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetProspectCallbackProxyGen* GetDefaultObj();

	class UGetProspectCallbackProxyGen* GetProspect(struct FReqGetProspect& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen
class UGetProspectReportCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_872[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetProspectReportCallbackProxyGen* GetDefaultObj();

	class UGetProspectReportCallbackProxyGen* GetProspectReport(struct FReqGetProspectReport& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen
class UGetProspectSummaryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetProspectSummaryCallbackProxyGen* GetDefaultObj();

	class UGetProspectSummaryCallbackProxyGen* GetProspectSummary(struct FReqGetProspectSummary& Request);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen
class UGetUserProfileCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetUserProfileCallbackProxyGen* GetDefaultObj();

	class UGetUserProfileCallbackProxyGen* GetUserProfile(struct FReqGetUserProfile& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.HostCandidateCallbackProxyGen
class UHostCandidateCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_95D[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHostCandidateCallbackProxyGen* GetDefaultObj();

	class UHostCandidateCallbackProxyGen* HostCandidate(struct FReqHostCandidate& Request);
};

// 0x1B0 (0x1D8 - 0x28)
// Class OnlineSubsystemIcarus.IcarusConnectionComponentBase
class UIcarusConnectionComponentBase : public UObject
{
public:
	uint8                                        Pad_A38[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AddressAndPort;                                    // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3A[0x158];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusConnectionComponentBase* GetDefaultObj();

	bool IsConnected();
	float GetReconnectTimer();
	int32 GetReconnectAttempts();
	enum class ELoginFailure GetLoginErrorCode();
	class FString GetAuthType();
	class FString GetAuthToken();
	class FString GetAuthId();
};

// 0x420 (0x5F8 - 0x1D8)
// Class OnlineSubsystemIcarus.IcarusConnectionComponentGen
class UIcarusConnectionComponentGen : public UIcarusConnectionComponentBase
{
public:
	uint8                                        Pad_A55[0x420];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusConnectionComponentGen* GetDefaultObj();

};

// 0x108 (0x700 - 0x5F8)
// Class OnlineSubsystemIcarus.IcarusConnectionComponent
class UIcarusConnectionComponent : public UIcarusConnectionComponentGen
{
public:
	uint8                                        Pad_A68[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusConnectionComponent* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase
class UIcarusLobbyConnectionComponentBase : public UObject
{
public:
	class FString                                AddressAndPort;                                    // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x188];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusLobbyConnectionComponentBase* GetDefaultObj();

	bool IsConnected();
};

// 0x10 (0x1D0 - 0x1C0)
// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponentGen
class UIcarusLobbyConnectionComponentGen : public UIcarusLobbyConnectionComponentBase
{
public:
	uint8                                        Pad_AA0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusLobbyConnectionComponentGen* GetDefaultObj();

};

// 0x58 (0x228 - 0x1D0)
// Class OnlineSubsystemIcarus.IcarusLobbyConnectionComponent
class UIcarusLobbyConnectionComponent : public UIcarusLobbyConnectionComponentGen
{
public:
	uint8                                        Pad_AB5[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusLobbyConnectionComponent* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemIcarus.IcarusMessageListeners
class UIcarusMessageListeners : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnConnectMessage;                                  // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginFailMessage;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMatchUpdateMessage;                              // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateConnectionStringMessage;                   // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatMessage;                                     // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIcarusMessageListeners* GetDefaultObj();

};

// 0x60 (0x760 - 0x700)
// Class OnlineSubsystemIcarus.IcarusOfflineConnectionComponentGen
class UIcarusOfflineConnectionComponentGen : public UIcarusConnectionComponent
{
public:
	uint8                                        Pad_AF4[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIcarusOfflineConnectionComponentGen* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.JoinProspectCallbackProxyGen
class UJoinProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJoinProspectCallbackProxyGen* GetDefaultObj();

	class UJoinProspectCallbackProxyGen* JoinProspect(struct FReqJoinProspect& Request);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen
class ULobbyMessageCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4C[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULobbyMessageCallbackProxyGen* GetDefaultObj();

	class ULobbyMessageCallbackProxyGen* LobbyMessage(struct FReqLobbyMessage& Request);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen
class UModifyDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModifyDropshipCallbackProxyGen* GetDefaultObj();

	class UModifyDropshipCallbackProxyGen* ModifyDropship(struct FReqModifyDropship& Request);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen
class UMoveMetaInventoryItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoveMetaInventoryItemCallbackProxyGen* GetDefaultObj();

	class UMoveMetaInventoryItemCallbackProxyGen* MoveMetaInventoryItem(struct FReqMoveMetaInventoryItem& Request);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary
class UOnlineSubsystemIcarusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineSubsystemIcarusFunctionLibrary* GetDefaultObj();

	void SetPresence(class APlayerController* PlayerController, enum class EOnlinePresenceStatusIcarus NewState, TArray<struct FPresencePropertyKeyPair>& Properties);
	struct FPresencePropertyKeyPair MakeLiteralPresencePropertyString(class FName Key, const class FString& Value);
	bool IsOnlineSubsystemIcarusEnabled();
	bool GetIcarusVersion(struct FIcarusVersion* Version);
	class UIcarusMessageListeners* GetIcarusMessageListeners();
	class UIcarusLobbyConnectionComponent* GetIcarusLobbyConnectionComponent();
	class UIcarusConnectionComponent* GetIcarusConnectionComponent();
	class FString GetHash(TArray<uint8>& Buffer);
	class FString GetGatewayAddress();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary
class UOnlineSubsystemIcarusOfflineFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineSubsystemIcarusOfflineFunctionLibrary* GetDefaultObj();

	bool SwitchOnlineMode(bool bOnlineMode);
	bool IsOnlineMode();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary
class UOnlineSubsystemIcarusSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineSubsystemIcarusSessionFunctionLibrary* GetDefaultObj();

	void SendChatMessage(struct FIcarusChatMessage& ChatMessage);
	void ReqUpdateLobbyStatus(enum class ELobbyStatus LobbyStatus);
	void RequestConnectionString();
	bool IsValidMatch();
	bool IsMatchHost();
	bool IsConnectedIcarusBackend();
	TMap<class FName, struct FMatchMakingFilter> GetMatchFilters();
	class FString GetIcarusPlayerId();
	struct FMatchUpdate GetCurrentMatch();
	struct FConnectionString GetConnectionString();
	class FString GetAuthToken(int32 LocalUserNum);
	void CancelMatchMaking(class FName SessionName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen
class UPackageLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D64[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPackageLoadoutCallbackProxyGen* GetDefaultObj();

	class UPackageLoadoutCallbackProxyGen* PackageLoadout(struct FReqPackageLoadout& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen
class UProspectExpiredCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProspectExpiredCallbackProxyGen* GetDefaultObj();

	class UProspectExpiredCallbackProxyGen* ProspectExpired(struct FReqProspectExpired& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen
class UReadNotificationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReadNotificationCallbackProxyGen* GetDefaultObj();

	class UReadNotificationCallbackProxyGen* ReadNotification(struct FReqReadNotification& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen
class URemoveEnvirosuitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC7[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveEnvirosuitCallbackProxyGen* GetDefaultObj();

	class URemoveEnvirosuitCallbackProxyGen* RemoveEnvirosuit(struct FReqRemoveEnvirosuit& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen
class URemoveMetaItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE9[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveMetaItemCallbackProxyGen* GetDefaultObj();

	class URemoveMetaItemCallbackProxyGen* RemoveMetaItem(struct FReqRemoveMetaInventoryItem& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen
class URemoveSelectedDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E08[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveSelectedDropshipCallbackProxyGen* GetDefaultObj();

	class URemoveSelectedDropshipCallbackProxyGen* RemoveSelectedDropship(struct FReqRemoveSelectedDropship& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.RepairWorkshopItemCallbackProxyGen
class URepairWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URepairWorkshopItemCallbackProxyGen* GetDefaultObj();

	class URepairWorkshopItemCallbackProxyGen* RepairWorkshopItem(struct FReqRepairWorkshopItem& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen
class UReplicateWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E47[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReplicateWorkshopItemCallbackProxyGen* GetDefaultObj();

	class UReplicateWorkshopItemCallbackProxyGen* ReplicateWorkshopItem(struct FReqReplicateWorkshopItem& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen
class UResetCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResetCharacterCallbackProxyGen* GetDefaultObj();

	class UResetCharacterCallbackProxyGen* ResetCharacter(struct FReqResetCharacter& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen
class UResetCharacterProspectStateCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E87[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResetCharacterProspectStateCallbackProxyGen* GetDefaultObj();

	class UResetCharacterProspectStateCallbackProxyGen* ResetCharacterProspectState(struct FReqResetCharacterProspectState& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen
class UResumeProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E99[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResumeProspectCallbackProxyGen* GetDefaultObj();

	class UResumeProspectCallbackProxyGen* ResumeProspect(struct FReqResumeProspect& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen
class USelectDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA6[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelectDropshipCallbackProxyGen* GetDefaultObj();

	class USelectDropshipCallbackProxyGen* SelectDropship(struct FReqSelectDropship& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen
class USelectEnvirosuitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBF[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelectEnvirosuitCallbackProxyGen* GetDefaultObj();

	class USelectEnvirosuitCallbackProxyGen* SelectEnvirosuit(struct FReqSelectEnvirosuit& Request);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen
class USetResourceSplitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED0[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetResourceSplitCallbackProxyGen* GetDefaultObj();

	class USetResourceSplitCallbackProxyGen* SetResourceSplit(struct FReqSetResourceSplit& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.SettleProspectCallbackProxyGen
class USettleProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDA[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USettleProspectCallbackProxyGen* GetDefaultObj();

	class USettleProspectCallbackProxyGen* SettleProspect(struct FReqSettleProspect& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.SyncAccountFlagsCallbackProxyGen
class USyncAccountFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF6[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USyncAccountFlagsCallbackProxyGen* GetDefaultObj();

	class USyncAccountFlagsCallbackProxyGen* SyncAccountFlags(struct FReqSyncAccountFlags& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen
class USyncAccountTalentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F37[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USyncAccountTalentsCallbackProxyGen* GetDefaultObj();

	class USyncAccountTalentsCallbackProxyGen* SyncAccountTalents(struct FReqSyncAccountTalents& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen
class USyncCharacterTalentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F69[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USyncCharacterTalentsCallbackProxyGen* GetDefaultObj();

	class USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalents(struct FReqSyncCharacterTalents& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.TalentRefundCallbackProxyGen
class UTalentRefundCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTalentRefundCallbackProxyGen* GetDefaultObj();

	class UTalentRefundCallbackProxyGen* TalentRefund(struct FReqTalentRefund& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen
class UUnlockAccountFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnlockAccountFlagsCallbackProxyGen* GetDefaultObj();

	class UUnlockAccountFlagsCallbackProxyGen* UnlockAccountFlags(struct FReqUnlockAccountFlags& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen
class UUnlockCharacterFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC2[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnlockCharacterFlagsCallbackProxyGen* GetDefaultObj();

	class UUnlockCharacterFlagsCallbackProxyGen* UnlockCharacterFlags(struct FReqUnlockCharacterFlags& Request);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen
class UUnlockWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDE[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnlockWorkshopItemCallbackProxyGen* GetDefaultObj();

	class UUnlockWorkshopItemCallbackProxyGen* UnlockWorkshopItem(struct FReqUnlockWorkshopItem& Request);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen
class UUnpackageLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnpackageLoadoutCallbackProxyGen* GetDefaultObj();

	class UUnpackageLoadoutCallbackProxyGen* UnpackageLoadout(struct FReqUnpackageLoadout& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen
class UUpdateChallengeProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_100A[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateChallengeProgressCallbackProxyGen* GetDefaultObj();

	class UUpdateChallengeProgressCallbackProxyGen* UpdateChallengeProgress(struct FReqUpdateChallengeProgress& Request);
};

// 0x170 (0x1A0 - 0x30)
// Class OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen
class UUpdateCharacterLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_102D[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateCharacterLoadoutCallbackProxyGen* GetDefaultObj();

	class UUpdateCharacterLoadoutCallbackProxyGen* UpdateCharacterLoadout(struct FReqUpdateCharacterLoadout& Request);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen
class UUpdateCharacterProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1047[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateCharacterProgressCallbackProxyGen* GetDefaultObj();

	class UUpdateCharacterProgressCallbackProxyGen* UpdateCharacterProgress(struct FReqUpdateCharacterProgress& Request);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen
class UUpdateCharacterProspectLocationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1062[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateCharacterProspectLocationCallbackProxyGen* GetDefaultObj();

	class UUpdateCharacterProspectLocationCallbackProxyGen* UpdateCharacterProspectLocation(struct FReqUpdateCharacterProspectLocation& Request);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen
class UUpdateCosmeticsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1080[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateCosmeticsCallbackProxyGen* GetDefaultObj();

	class UUpdateCosmeticsCallbackProxyGen* UpdateCosmetics(struct FReqUpdateCosmetics& Request);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen
class UUpdateFactionMissionProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1095[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateFactionMissionProgressCallbackProxyGen* GetDefaultObj();

	class UUpdateFactionMissionProgressCallbackProxyGen* UpdateFactionMissionProgress(struct FReqUpdateFactionMissionProgress& Request);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen
class UUpdateProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A5[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateProspectCallbackProxyGen* GetDefaultObj();

	class UUpdateProspectCallbackProxyGen* UpdateProspect(struct FReqUpdateProspect& Request);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen
class UUpdateTrackedStatsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B5[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateTrackedStatsCallbackProxyGen* GetDefaultObj();

	class UUpdateTrackedStatsCallbackProxyGen* UpdateTrackedStats(struct FReqUpdateTrackedStats& Request);
};

}


