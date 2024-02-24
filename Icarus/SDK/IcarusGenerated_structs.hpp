#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMetaInventoryID : uint8
{
	MetaInventoryID_UndefinedID    = 0,
	MetaInventoryID_Main           = 1,
	MetaInventoryID_DropLoadout    = 2,
	MetaInventoryID_MAX            = 3,
};

enum class EMissionDifficulty : uint8
{
	None                           = 0,
	Easy                           = 1,
	Medium                         = 2,
	Hard                           = 3,
	Extreme                        = 4,
	EMissionDifficulty_MAX         = 5,
};

enum class EProspectLocation : uint8
{
	Unknown                        = 0,
	Hab                            = 1,
	Prospect_Conifer               = 2,
	Prospect_Arctic                = 3,
	Prospect_Cave                  = 4,
	Prospect_Desert                = 5,
	Prospect_Grasslands            = 6,
	Prospect_Volcanic              = 7,
	Prospect_Swamp                 = 8,
	EProspectLocation_MAX          = 9,
};

enum class EProspectState : uint8
{
	Unclaimed                      = 0,
	Claimed                        = 1,
	Active                         = 2,
	Ended                          = 3,
	MaxProspectStates              = 4,
	EProspectState_MAX             = 5,
};

enum class EDropshipType : uint8
{
	DropshipType_UndefinedID       = 0,
	DropshipType_Player            = 1,
	DropshipType_Equipment         = 2,
	DropshipType_MAX               = 3,
};

enum class ENotificationType : uint8
{
	Server                         = 0,
	General                        = 1,
	MissionSummary                 = 2,
	ItemRecovery                   = 3,
	ProspectComplete               = 4,
	MaxNotificationTypes           = 5,
	ENotificationType_MAX          = 6,
};

enum class EUpdateProspectFailure : uint8
{
	UpdateProspectFailure_UndefinedID = 0,
	UpdateProspectFailure_NotHost  = 1,
	UpdateProspectFailure_Expired  = 2,
	UpdateProspectFailure_NotNewer = 3,
	UpdateProspectFailure_Other    = 4,
	UpdateProspectFailure_MAX      = 5,
};

enum class ECharacterAttribute : uint8
{
	Health                         = 0,
	Stamina                        = 1,
	Strength                       = 2,
	Agility                        = 3,
	Perception                     = 4,
	MaxCharacterAttribute          = 5,
	ECharacterAttribute_MAX        = 6,
};

enum class EDropshipPartType : uint8
{
	DropshipPartType_UndefinedID   = 0,
	DropshipType_TOP               = 1,
	DropshipType_MID               = 2,
	DropshipType_BTM               = 3,
	EDropshipPartType_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResAbandonProspect
struct FResAbandonProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResBackToHab
struct FResBackToHab
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResCanJoinProspect
struct FResCanJoinProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct IcarusGenerated.ResCheckProspectExpired
struct FResCheckProspectExpired
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expired;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.DynamicProperty
struct FDynamicProperty
{
public:
	int32                                        Type;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.Stat
struct FStat
{
public:
	int32                                        Type;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.MetaItem
struct FMetaItem
{
public:
	class FString                                ItemStaticRow;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDynamicProperty>              Properties;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStat>                         Stats;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IcarusGenerated.MetaItemDelta
struct FMetaItemDelta
{
public:
	class FString                                ItemUID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaItem                             MetaItem;                                          // 0x10(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.InventoryDelta
struct FInventoryDelta
{
public:
	enum class EMetaInventoryID                  ID;                                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaItemDelta>                Delta;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.MetaResource
struct FMetaResource
{
public:
	class FString                                MetaRow;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IcarusGenerated.ResClaimNotificationAttachments
struct FResClaimNotificationAttachments
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaResourceDelta;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Credits;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1707[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NotificationUID;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.AssociatedMemberInfo
struct FAssociatedMemberInfo
{
public:
	class FString                                AccountName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Experience;                                        // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProspectLocation                 Status;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Settled;                                           // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCurrentlyPlaying;                                // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172C[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct IcarusGenerated.ProspectInfo
struct FProspectInfo
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClaimedAccountID;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClaimedAccountCharacter;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectDTKey;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FactionMissionDTKey;                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyName;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ExpireTime;                                        // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProspectState                    ProspectState;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1752[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAssociatedMemberInfo>         AssociatedMembers;                                 // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Reward;                                            // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionDifficulty                Difficulty;                                        // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Insurance;                                         // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NoRespawns;                                        // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1761[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ElapsedTime;                                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedDropPoint;                                 // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1768[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct IcarusGenerated.ResClaimProspect
struct FResClaimProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1779[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         Prospect;                                          // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct IcarusGenerated.CharacterCosmetics
struct FCharacterCosmetics
{
public:
	int32                                        Customization_Head;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_Hair;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_HairColor;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_Body;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_BodyColor;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_SkinTone;                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_HeadTattoo;                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_HeadScar;                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_HeadFacialHair;                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_CapLogo;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMale;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Customization_Voice;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Customization_EyeColor;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.BackendTalent
struct FBackendTalent
{
public:
	class FString                                RowName;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IcarusGenerated.OnlineProfileCharacter
struct FOnlineProfileCharacter
{
public:
	class FString                                CharacterName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XP;                                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XP_Debt;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDead;                                            // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAbandoned;                                       // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1808[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastProspectId;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProspectLocation                 Location;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1811[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UnlockedFlags;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaResources;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterCosmetics                   Cosmetic;                                          // 0x58(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1820[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBackendTalent>                Talents;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IcarusGenerated.ResCreateCharacter
struct FResCreateCharacter
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1826[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               CreatedCharacter;                                  // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct IcarusGenerated.Dropship
struct FDropship
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropshipType                     Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1833[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropshipID;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InUse;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaItem                             TOP_Part;                                          // 0x20(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMetaItem                             MID_Part;                                          // 0x60(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMetaItem                             BTM_Part;                                          // 0xA0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct IcarusGenerated.DropshipDelta
struct FDropshipDelta
{
public:
	struct FDropship                             Dropship;                                          // 0x0(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct IcarusGenerated.ResCreateDropship
struct FResCreateDropship
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipDelta                        DropshipDelta;                                     // 0x8(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0xE8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResDeleteCharacter
struct FResDeleteCharacter
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ResDeleteDropship
struct FResDeleteDropship
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1891[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropshipRemovedID;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResDeleteNotification
struct FResDeleteNotification
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NotificationUID;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResExchangeCurrency
struct FResExchangeCurrency
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 CurrencyDeltas;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGenerateProspects
struct FResGenerateProspects
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProspectInfo>                 Prospects;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetAllProspects
struct FResGetAllProspects
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProspectInfo>                 Prospects;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetAvailableProspects
struct FResGetAvailableProspects
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProspectInfo>                 Prospects;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ActiveChallenge
struct FActiveChallenge
{
public:
	class FString                                ChallengeUID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Challenge;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetChallenges
struct FResGetChallenges
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveChallenge>              Challenges;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct IcarusGenerated.CharacterLoadout
struct FCharacterLoadout
{
public:
	struct FMetaItem                             EnviroSuit;                                        // 0x0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDropship                             Dropship;                                          // 0x40(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaItem>                     MetaItems;                                         // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct IcarusGenerated.ResGetCharacterLoadout
struct FResGetCharacterLoadout
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1919[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterLoadout                     Loadout;                                           // 0x8(0x138)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IcarusGenerated.ResGetCharacterProfile
struct FResGetCharacterProfile
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1927[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               Character;                                         // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetCharacters
struct FResGetCharacters
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOnlineProfileCharacter>       Characters;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.ResGetCredits
struct FResGetCredits
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1951[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Amount;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetDropships
struct FResGetDropships
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1964[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDropship>                     Dropships;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IcarusGenerated.ResGetLastProspect
struct FResGetLastProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1972[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         ProspectInformation;                               // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        FactionMissionStatus;                              // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResLoadoutInventory
struct FResLoadoutInventory
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaItem>                     Inventory;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ResGetMetaInventory
struct FResGetMetaInventory
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetMetaResources
struct FResGetMetaResources
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 MetaResources;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.Attachment
struct FAttachment
{
public:
	TArray<struct FMetaItem>                     Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 Exotics;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Credits;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IcarusGenerated.Notification
struct FNotification
{
public:
	class FString                                NotificationUID;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENotificationType                 Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProspectID;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachment                           Attachments;                                       // 0x48(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Read;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SentToPlayer;                                      // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetNotifications
struct FResGetNotifications
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CompleteList;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A07[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNotification>                 NotificationDelta;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IcarusGenerated.ResPreparedLoadout
struct FResPreparedLoadout
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropshipID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaItem                             EnviroSuit;                                        // 0x8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A35[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.ProspectBlob
struct FProspectBlob
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalLength;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataLength;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedLength;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BinaryBlob;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct IcarusGenerated.ResGetProspect
struct FResGetProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         Prospect;                                          // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProspectBlob                         ProspectBlob;                                      // 0x98(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct IcarusGenerated.ResGetProspectReport
struct FResGetProspectReport
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         ProspectInfo;                                      // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttachment                           CurrentRewards;                                    // 0x98(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.TrackedStat
struct FTrackedStat
{
public:
	class FString                                StatDTKey;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A79[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct IcarusGenerated.ProspectCompleteInformation
struct FProspectCompleteInformation
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         FactionMissionSuccessful;                          // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttachment                           ProspectRewards;                                   // 0x98(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int64                                        Duration;                                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachment                           FactionMissionRewards;                             // 0xC8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FTrackedStat>                  TrackedStats;                                      // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct IcarusGenerated.ResGetProspectSummary
struct FResGetProspectSummary
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectCompleteInformation          ProspectInformation;                               // 0x8(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IcarusGenerated.OnlineProfileUser
struct FOnlineProfileUser
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaResources;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UnlockedFlags;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBackendTalent>                Talents;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NextChrSlot;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IcarusGenerated.ResGetUserProfile
struct FResGetUserProfile
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileUser                    IcarusProfile;                                     // 0x8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ResHostCandidate
struct FResHostCandidate
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct IcarusGenerated.ResJoinProspect
struct FResJoinProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         Prospect;                                          // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResLobbyMessage
struct FResLobbyMessage
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct IcarusGenerated.ResModifyDropship
struct FResModifyDropship
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipDelta                        DropshipDelta;                                     // 0x8(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0xE8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResMoveMetaInventoryItem
struct FResMoveMetaInventoryItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryDelta>               Delta;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct IcarusGenerated.ResPackageLoadout
struct FResPackageLoadout
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LoadoutIndex;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDropshipDelta                        DropshipDelta;                                     // 0x20(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B69[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResProspectExpired
struct FResProspectExpired
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResReadNotification
struct FResReadNotification
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NotificationUID;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct IcarusGenerated.ResRemoveEnvirosuit
struct FResRemoveEnvirosuit
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaItem                             EnviroSuit;                                        // 0x8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ResRemoveMetaInventoryItem
struct FResRemoveMetaInventoryItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       Delta;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.ResRemoveSelectedDropship
struct FResRemoveSelectedDropship
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropshipID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ResRepairWorkshopItem
struct FResRepairWorkshopItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 CurrencyDelta;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ResReplicateWorkshopItem
struct FResReplicateWorkshopItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 CurrencyDelta;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IcarusGenerated.ResResetCharacter
struct FResResetCharacter
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               Character;                                         // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResResetCharacterProspectState
struct FResResetCharacterProspectState
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct IcarusGenerated.ResResumeProspect
struct FResResumeProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HostID;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProspectInfo                         Prospect;                                          // 0x18(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FProspectBlob                         ProspectBlob;                                      // 0xA8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.ResSelectDropship
struct FResSelectDropship
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropshipID;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct IcarusGenerated.ResSelectEnvirosuit
struct FResSelectEnvirosuit
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaItem                             EnviroSuit;                                        // 0x8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInventoryDelta                       InventoryDelta;                                    // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResSetResourceSplit
struct FResSetResourceSplit
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct IcarusGenerated.ResSettleProspect
struct FResSettleProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         ProspectInfo;                                      // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResSyncAccountFlags
struct FResSyncAccountFlags
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Flags;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResSyncAccountTalents
struct FResSyncAccountTalents
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBackendTalent>                Talents;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResSyncCharacterTalents
struct FResSyncCharacterTalents
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBackendTalent>                Talents;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ResTalentRefund
struct FResTalentRefund
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBackendTalent                        Talent;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 CurrencyDelta;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResUnlockAccountFlags
struct FResUnlockAccountFlags
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UnlockedFlags;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResUnlockCharacterFlags
struct FResUnlockCharacterFlags
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UnlockedFlags;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ResUnlockWorkshopItem
struct FResUnlockWorkshopItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UnlockedTalent;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 CurrencyDelta;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct IcarusGenerated.ResUnpackageLoadout
struct FResUnpackageLoadout
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateChallengeProgress
struct FResUpdateChallengeProgress
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateCharacterLoadout
struct FResUpdateCharacterLoadout
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateCharacterProgress
struct FResUpdateCharacterProgress
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateCharacterProspectLocation
struct FResUpdateCharacterProspectLocation
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateCosmetics
struct FResUpdateCosmetics
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               Character;                                         // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateFactionMissionProgress
struct FResUpdateFactionMissionProgress
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateProspect
struct FResUpdateProspect
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateProspectFailure            FailureReason;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResUpdateTrackedStats
struct FResUpdateTrackedStats
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ConnectionString
struct FConnectionString
{
public:
	class FString                                ExternalIP;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InternalIP;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                P2PAddress;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.PlayerID
struct FPlayerID
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserID;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHost;                                             // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D84[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ActiveFactionMission
struct FActiveFactionMission
{
public:
	class FString                                FactionMission;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.CharacterAttributeProgress
struct FCharacterAttributeProgress
{
public:
	enum class ECharacterAttribute               Attribute;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.CharacterSetup
struct FCharacterSetup
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropLoadout;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.CharacterSplit
struct FCharacterSplit
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Percentage;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.DropshipPartModification
struct FDropshipPartModification
{
public:
	enum class EDropshipPartType                 Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemId;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.DropshipModification
struct FDropshipModification
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDropshipType                     Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDropshipPartModification>     Parts;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IcarusGenerated.ItemStaticRow
struct FItemStaticRow
{
public:
	int32                                        Type;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.MaintenanceStatus
struct FMaintenanceStatus
{
public:
	bool                                         IsMaintenance;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartTime;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndTime;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqAbandonProspect
struct FReqAbandonProspect
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct IcarusGenerated.ReqAddMetaInventoryItem
struct FReqAddMetaInventoryItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaInventoryID                  SrcMetaInventoryID;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaItem                             Item;                                              // 0x18(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ReqAddMetaResource
struct FReqAddMetaResource
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaResource                         MetaResource;                                      // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E42[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IcarusGenerated.ReqBackToHab
struct FReqBackToHab
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LeftWithShip;                                      // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaItem>                     MetaItems;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaResources;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqCanJoinProspect
struct FReqCanJoinProspect
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqCheckProspectExpired
struct FReqCheckProspectExpired
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqClaimNotificationAttachments
struct FReqClaimNotificationAttachments
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NotificationUID;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct IcarusGenerated.ReqClaimProspect
struct FReqClaimProspect
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LobbyName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProspectInfo                         Prospect;                                          // 0x28(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IcarusGenerated.ReqCreateCharacter
struct FReqCreateCharacter
{
public:
	class FString                                CharacterName;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterCosmetics                   CharacterCosmeticsData;                            // 0x10(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E89[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ReqCreateDropship
struct FReqCreateDropship
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropshipModification                 Dropship;                                          // 0x10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IcarusGenerated.ReqDeleteCharacter
struct FReqDeleteCharacter
{
public:
	int32                                        ChrSlot;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqDeleteDropship
struct FReqDeleteDropship
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropshipID;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqDeleteNotification
struct FReqDeleteNotification
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NotificationUID;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ReqExchangeCurrency
struct FReqExchangeCurrency
{
public:
	struct FMetaResource                         StartingCurrencyDelta;                             // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMetaResource                         EndingCurrencyDelta;                               // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGenerateProspects
struct FReqGenerateProspects
{
public:
	TArray<class FString>                        ProspectDTKeys;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetAllProspects
struct FReqGetAllProspects
{
public:
	TArray<int32>                                ChrSlots;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetAvailableProspects
struct FReqGetAvailableProspects
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetChallenges
struct FReqGetChallenges
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetCharacterLoadout
struct FReqGetCharacterLoadout
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetCharacterProfile
struct FReqGetCharacterProfile
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F00[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetCharacters
struct FReqGetCharacters
{
public:
	uint8                                        Pad_1F07[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetCredits
struct FReqGetCredits
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetDropships
struct FReqGetDropships
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetFactionMissionProgress
struct FReqGetFactionMissionProgress
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F21[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetLastProspect
struct FReqGetLastProspect
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetMetaInventory
struct FReqGetMetaInventory
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaInventoryID                  MetaInventoryID;                                   // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetMetaResources
struct FReqGetMetaResources
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetNotifications
struct FReqGetNotifications
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CompleteList;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F47[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetProspect
struct FReqGetProspect
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasProspectBlob;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F57[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetProspectReport
struct FReqGetProspectReport
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectUID;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetProspectSummary
struct FReqGetProspectSummary
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetTrackedStats
struct FReqGetTrackedStats
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F84[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetUserProfile
struct FReqGetUserProfile
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ReqGetWorkshopPacks
struct FReqGetWorkshopPacks
{
public:
	uint8                                        Pad_1F95[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqHostCandidate
struct FReqHostCandidate
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CandidateUserID;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqJoinProspect
struct FReqJoinProspect
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqLoadoutInventory
struct FReqLoadoutInventory
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterSlot;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.ReqLobbyMessage
struct FReqLobbyMessage
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthType;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppId;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.ReqModifyDropship
struct FReqModifyDropship
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropshipID;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropshipModification                 Dropship;                                          // 0x18(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.ReqMoveMetaInventoryItem
struct FReqMoveMetaInventoryItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterSlot;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaInventoryID                  SrcMetaInventoryID;                                // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaInventoryID                  DstMetaInventoryID;                                // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ScrItemId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DstItemId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqPackageLoadout
struct FReqPackageLoadout
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2005[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqPreparedLoadout
struct FReqPreparedLoadout
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2015[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqProspectExpired
struct FReqProspectExpired
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2026[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqPurchaseWorkshopPack
struct FReqPurchaseWorkshopPack
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorkshopPackName;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqReadNotification
struct FReqReadNotification
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NotificationUID;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqRemoveEnvirosuit
struct FReqRemoveEnvirosuit
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqRemoveMetaInventoryItem
struct FReqRemoveMetaInventoryItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetaItemId;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqRemoveSelectedDropship
struct FReqRemoveSelectedDropship
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqRepairWorkshopItem
struct FReqRepairWorkshopItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetaItemId;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqReplicateWorkshopItem
struct FReqReplicateWorkshopItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorkshopTalent;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqResetCharacter
struct FReqResetCharacter
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqResetCharacterProspectState
struct FReqResetCharacterProspectState
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2109[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqResumeProspect
struct FReqResumeProspect
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttemptHostMigration;                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqSelectDropship
struct FReqSelectDropship
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DropshipID;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqSelectEnvirosuit
struct FReqSelectEnvirosuit
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemId;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ReqSetResourceSplit
struct FReqSetResourceSplit
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterSplit>               Split;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqSettleProspect
struct FReqSettleProspect
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProspectID;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Settle;                                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2185[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqSyncAccountFlags
struct FReqSyncAccountFlags
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Flags;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqSyncAccountTalents
struct FReqSyncAccountTalents
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBackendTalent>                Talents;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqSyncCharacterTalents
struct FReqSyncCharacterTalents
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterSlot;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBackendTalent>                Talents;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqTalentRefund
struct FReqTalentRefund
{
public:
	struct FBackendTalent                        Talent;                                            // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        CharacterSlot;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqUnlockAccountFlags
struct FReqUnlockAccountFlags
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                UnlockedFlags;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqUnlockCharacterFlags
struct FReqUnlockCharacterFlags
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UnlockedFlags;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ReqUnlockWorkshopItem
struct FReqUnlockWorkshopItem
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorkshopTalent;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ReqUnpackageLoadout
struct FReqUnpackageLoadout
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateChallengeProgress
struct FReqUpdateChallengeProgress
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChallengeUID;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2219[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateCharacterLoadout
struct FReqUpdateCharacterLoadout
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterLoadout                     Loadout;                                           // 0x18(0x138)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateCharacterProgress
struct FReqUpdateCharacterProgress
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XP;                                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XP_Debt;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2243[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                UnlockedFlags;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsDead;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2246[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateCharacterProspectLocation
struct FReqUpdateCharacterProspectLocation
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProspectLocation                 Location;                                          // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateCosmetics
struct FReqUpdateCosmetics
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterCosmetics                   CharacterCosmeticsData;                            // 0x14(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateFactionMissionProgress
struct FReqUpdateFactionMissionProgress
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2296[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveFactionMission                 MissionProgress;                                   // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateProspect
struct FReqUpdateProspect
{
public:
	class FString                                ProspectID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpdateTime;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElapsedTime;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasProspectBlob;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectBlob                         ProspectBlob;                                      // 0x20(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsLeavingGame;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IcarusGenerated.ReqUpdateTrackedStats
struct FReqUpdateTrackedStats
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChrSlot;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProspectID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTrackedStat>                  TrackedStats;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResAddMetaInventoryItem
struct FResAddMetaInventoryItem
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IcarusGenerated.ResAddMetaResource
struct FResAddMetaResource
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IcarusGenerated.ResGetFactionMissionProgress
struct FResGetFactionMissionProgress
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2303[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveFactionMission                 MissionProgress;                                   // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetTrackedStats
struct FResGetTrackedStats
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2321[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTrackedStat>                  TrackedStats;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct IcarusGenerated.WorkshopPack
struct FWorkshopPack
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Categories;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        WorkshopItemsRow;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaCost;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusGenerated.ResGetWorkshopPacks
struct FResGetWorkshopPacks
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2357[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorkshopPack>                 WorkshopPacks;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ResLobbyStats
struct FResLobbyStats
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2366[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QueueSize;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MessagesReadyRate;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2373[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaintenanceStatus                    Maintenance;                                       // 0x10(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IcarusGenerated.ResPurchaseWorkshopPack
struct FResPurchaseWorkshopPack
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2383[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryDelta                       InventoryDelta;                                    // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMetaResource>                 MetaResourceDelta;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IcarusGenerated.Vector3
struct FVector3
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


