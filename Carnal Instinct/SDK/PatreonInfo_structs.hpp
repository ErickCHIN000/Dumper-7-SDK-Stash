#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPledgeEventType : uint8
{
	PledgeStart                    = 0,
	PledgeUpgrade                  = 1,
	PledgeDowngrade                = 2,
	PledgeDelete                   = 3,
	Subscription                   = 4,
	Unknown                        = 5,
	EPledgeEventType_MAX           = 6,
};

enum class EPaymentStatus : uint8
{
	Paid                           = 0,
	Declined                       = 1,
	Deleted                        = 2,
	Pending                        = 3,
	Refunded                       = 4,
	Fraud                          = 5,
	Other                          = 6,
	Unknown                        = 7,
	EPaymentStatus_MAX             = 8,
};

enum class EPatronStatus : uint8
{
	NoPatron                       = 0,
	ActivePatron                   = 1,
	DeclinedPatron                 = 2,
	FormerPatron                   = 3,
	EPatronStatus_MAX              = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct PatreonInfo.PatreonTierInfo
struct FPatreonTierInfo
{
public:
	int32                                        AmountCents;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageURL;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PatreonInfo.PatreonPledgeInfo
struct FPatreonPledgeInfo
{
public:
	struct FDateTime                             Date;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPaymentStatus                    PaymentStatus;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TierTitle;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPledgeEventType                  Type;                                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct PatreonInfo.PatreonInfoData
struct FPatreonInfoData
{
public:
	int32                                        UserID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWhitelisted;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlacklisted;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FirstName;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastName;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarURL;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPatronStatus                     PatronStatus;                                      // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPatreonTierInfo>              Tiers;                                             // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             LastChargeDate;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPaymentStatus                    LastChargeStatus;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPatreonPledgeInfo>            PledgeHistory;                                     // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CampaignLifetimeSupportCents;                      // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_225[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PatreonInfo.TierRawData
struct FTierRawData
{
public:
	int32                                        Amount_cents;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image_url;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PatreonInfo.PledgeRawData
struct FPledgeRawData
{
public:
	class FString                                Date;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Payment_status;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tier_title;                                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct PatreonInfo.UserRawData
struct FUserRawData
{
public:
	class FString                                First_name;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Last_name;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Full_name;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image_url;                                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Patron_status;                                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTierRawData>                  Tiers;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        UserID;                                            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Whitelisted;                                       // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         blacklisted;                                       // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Last_charge_date;                                  // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Last_charge_status;                                // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPledgeRawData>                Pledge_history;                                    // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Campaign_lifetime_support_cents;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct PatreonInfo.PatreonUserInfoResponse
struct FPatreonUserInfoResponse
{
public:
	TArray<class FString>                        Errors;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Expired;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserRawData                          Info;                                              // 0x18(0xA0)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PatreonInfo.PatreonUserInfoRequest
struct FPatreonUserInfoRequest
{
public:
	class FString                                Userjwt;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Campaign_id;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_256[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                User_id;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


