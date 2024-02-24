#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELobbyStatus : uint8
{
	Waiting                        = 0,
	Loading                        = 1,
	InGame                         = 2,
	ELobbyStatus_MAX               = 3,
};

enum class ELoginFailure : uint8
{
	LoginFailure_None              = 0,
	LoginFailure_UndefinedID       = 1,
	LoginFailure_EventNameNotSupplied = 2,
	LoginFailure_AuthTokenNotSupplied = 3,
	LoginFailure_UserIDNotSupplied = 4,
	LoginFailure_AuthTypeNotSupplied = 5,
	LoginFailure_VersionNotSuppliedOrLow = 6,
	LoginFailure_InvalidAuthToken  = 7,
	LoginFailure_FailedToLoginThirdParty = 8,
	LoginFailure_MAX               = 9,
};

enum class EThresholdType : uint8
{
	Absoulute                      = 0,
	Relative                       = 1,
	Percent                        = 2,
	EThresholdType_MAX             = 3,
};

enum class EOnlinePresenceStatusIcarus : uint8
{
	ICARUS_PS_Online               = 0,
	ICARUS_PS_Offline              = 1,
	ICARUS_PS_Away                 = 2,
	ICARUS_PS_ExtendedAway         = 3,
	ICARUS_PS_DoNotDisturb         = 4,
	ICARUS_PS_MAX                  = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.MatchMakingRequest
struct FMatchMakingRequest
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MatchCode;                                         // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.MatchUpdate
struct FMatchUpdate
{
public:
	class FString                                MatchID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatchMakingRequest                   MatchReq;                                          // 0x10(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bMatchFound;                                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELobbyStatus                      LobbyStatus;                                       // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayerID>                     PlayerIds;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConnectionString                     ConnectionString;                                  // 0x48(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusChatMessage
struct FIcarusChatMessage
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChatMessage;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.CommonResponse
struct FCommonResponse
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OnlineSubsystemIcarus.CommonStorageResponse
struct FCommonStorageResponse : public FCommonResponse
{
public:
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.ReqCommonStorage
struct FReqCommonStorage
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.StorageInfo
struct FStorageInfo
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HashType;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedLength;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.UpdateLobbyStatus
struct FUpdateLobbyStatus
{
public:
	class FString                                MatchID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELobbyStatus                      LobbyStatus;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.UpdateConnectionString
struct FUpdateConnectionString
{
public:
	class FString                                MatchID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConnectionString                     ConnectionString;                                  // 0x10(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct OnlineSubsystemIcarus.Threshold
struct FThreshold
{
public:
	enum class EThresholdType                    ThresholdType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinScore;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScore;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct OnlineSubsystemIcarus.MatchMakingFilter
struct FMatchMakingFilter : public FTableRowBase
{
public:
	class FString                                MatchName;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MatchCode;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FThreshold                            Threshold;                                         // 0x30(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinPlayer;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayer;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropInAndOut;                                     // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Maps;                                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.PresencePropertyKeyPair
struct FPresencePropertyKeyPair
{
public:
	uint8                                        Pad_10ED[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.OfflineFactionMission
struct FOfflineFactionMission
{
public:
	int32                                        FactionMissionStatus;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusConnectionToken
struct FIcarusConnectionToken
{
public:
	int32                                        ExpiredTime;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Token;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusBuildVersion
struct FIcarusBuildVersion
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Patch;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Changelist;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildType;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusEditorVersion
struct FIcarusEditorVersion
{
public:
	struct FIcarusBuildVersion                   Icarus;                                            // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct OnlineSubsystemIcarus.BackendSchemaVersion
struct FBackendSchemaVersion
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Changelist;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusDataVersion
struct FIcarusDataVersion
{
public:
	int32                                        Changelist;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusVersion
struct FIcarusVersion
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIcarusBuildVersion                   Version;                                           // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBackendSchemaVersion                 BackendSchema;                                     // 0x28(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FIcarusDataVersion                    Data;                                              // 0x34(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.ResUserTicket
struct FResUserTicket
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoginFailure                     LoginFailure;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.ReqUserTicket
struct FReqUserTicket
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ticket;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemIcarus.IcarusProfile
struct FIcarusProfile
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


