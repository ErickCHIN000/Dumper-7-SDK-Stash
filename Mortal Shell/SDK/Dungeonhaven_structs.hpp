#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDHTwitchDropQueryResponse : uint8
{
	Success                        = 0,
	RequestFailed                  = 1,
	UserNotFound                   = 2,
	TwitchNoResponse               = 3,
	UnexpectedError                = 4,
	EDHTwitchDropQueryResponse_MAX = 5,
};

enum class EPlatformGamepadType : uint8
{
	PS4                            = 0,
	PS4_Japan                      = 1,
	PS5                            = 2,
	Stadia                         = 3,
	Switch                         = 4,
	XboxOne                        = 5,
	XSX                            = 6,
	EPlatformGamepadType_MAX       = 7,
};

enum class EPlatform : uint8
{
	Unknown                        = 0,
	Switch                         = 1,
	XboxOne                        = 2,
	PS4                            = 3,
	Desktop                        = 4,
	Mobile                         = 5,
	Stadia                         = 6,
	PS5                            = 7,
	XSX                            = 8,
	EPlatform_MAX                  = 9,
};

enum class EBoolean : uint8
{
	IsTrue                         = 1,
	IsFalse                        = 0,
	EBoolean_MAX                   = 2,
};

enum class EDHAchievement : uint8
{
	ForeverAlone                   = 0,
	FaceOff                        = 1,
	SeekerOfFalseTruths            = 2,
	FunGuy                         = 3,
	StepGoal                       = 4,
	LifeIsSuffering                = 5,
	BrigandLife                    = 6,
	BarsTended                     = 7,
	FleshAndInstinct               = 8,
	IsThisASparta                  = 9,
	BringTheGlandsBacktoMe         = 10,
	TheGoodTimesareKillingMe       = 11,
	SugarBaby                      = 12,
	Untarnished                    = 13,
	YouSeemDifferent               = 14,
	DifferentKindsOfGrisha         = 15,
	CrossedTheThreshold            = 16,
	FadedTheFire                   = 17,
	MatryrdTheMartyr               = 18,
	TragicLoss                     = 19,
	FelledTheGlandfather           = 20,
	NailedIt                       = 21,
	ItsAMe                         = 22,
	TheNihilist                    = 23,
	Purrfect                       = 24,
	GatewayDrug                    = 25,
	Seedbearer                     = 26,
	TrueNektar                     = 27,
	FashionShells                  = 28,
	LuteHero                       = 29,
	OPAF                           = 30,
	ChangeOfHeart                  = 31,
	MasterOfNone                   = 32,
	NoLifer                        = 33,
	ThereCanOnlyBeOne              = 34,
	TheAnswer                      = 35,
	SomeAssemblyRequired           = 36,
	ACHIEVEMENT_COUNT              = 37,
	EDHAchievement_MAX             = 38,
};

enum class EPlatformSKU : uint8
{
	ESteamWorld                    = 0,
	EEGSWorld                      = 1,
	EXboxOneWorld                  = 2,
	EPS4EU                         = 3,
	EPS4NA                         = 4,
	EPS4JP                         = 5,
	EXSXWorld                      = 6,
	EPS5EU                         = 7,
	EPS5NA                         = 8,
	EPS5JP                         = 9,
	EStadiaWorld                   = 10,
	EPlatformSKU_MAX               = 11,
};

enum class EDHSignificanceLevel : uint8
{
	Hidden                         = 0,
	Far                            = 1,
	Low                            = 2,
	Medium                         = 3,
	High                           = 4,
	Num                            = 5,
	None                           = 255,
	EDHSignificanceLevel_MAX       = 256,
};

enum class ETrigger : uint8
{
	TriggerLeft                    = 0,
	TriggerRight                   = 1,
	TriggerBoth                    = 2,
	ETrigger_MAX                   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Dungeonhaven.DHAchievementProgress
struct FDHAchievementProgress
{
public:
	enum class EDHAchievement                    M_eAchievment;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2532[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_nProgress;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2535[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Dungeonhaven.DHComponentName
struct FDHComponentName
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           ClassLimit;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Cached;                                            // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.DHGenericDataTableID
struct FDHGenericDataTableID
{
public:
	class UDataTable*                            Table;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowID;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHDataTableID
struct FDHDataTableID
{
public:
	class FName                                  RowID;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Dungeonhaven.DHTwitchDrop
struct FDHTwitchDrop
{
public:
	class FString                                BenefitID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EntitlementID;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Dungeonhaven.DHFrog
struct FDHFrog
{
public:
	class ADHFrogBase*                           Frog;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Counter;                                           // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldPercent;                                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HopCounter;                                        // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Dungeonhaven.DHActorData
struct FDHActorData
{
public:
	TMap<class FName, int32>                     Ints;                                              // 0x0(0x50)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.ActorSignifiganceInfo
struct FActorSignifiganceInfo
{
public:
	uint8                                        Pad_258D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASignificanceActor*                    SignificanceActor;                                 // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.SkelCompSignifiganceInfo
struct FSkelCompSignifiganceInfo
{
public:
	uint8                                        Pad_2597[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.SkelSignifiganceInfo
struct FSkelSignifiganceInfo
{
public:
	uint8                                        Pad_259E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASkeletalMeshActor*                    SkelMeshActor;                                     // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.SignifiganceInfo
struct FSignifiganceInfo
{
public:
	uint8                                        Pad_25A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADHCharacter*                          Character;                                         // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Dungeonhaven.DialogEntry
struct FDialogEntry
{
public:
	class UCertDialog*                           DialogWidget;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B5[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Dungeonhaven.SaveFileBackup
struct FSaveFileBackup
{
public:
	uint8                                        Pad_25C2[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHCharacterFunction
struct FDHCharacterFunction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHGameModeFunction
struct FDHGameModeFunction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHPCDelegateName
struct FDHPCDelegateName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHPCFloatName
struct FDHPCFloatName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHPlayerDelegateName
struct FDHPlayerDelegateName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Dungeonhaven.DHPlayerFloatName
struct FDHPlayerFloatName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Dungeonhaven.DHBoolName
struct FDHBoolName
{
public:
	class UClass*                                OwnerClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoolName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Dungeonhaven.DHDialogueLine
struct FDHDialogueLine
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundCue*                             SoundCue;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Dungeonhaven.DHCenterNotification
struct FDHCenterNotification
{
public:
	class FText                                  Heading;                                           // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Details;                                           // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Flavor;                                            // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2610[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Dungeonhaven.DHEnemyAttack
struct FDHEnemyAttack
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSectionName;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OptimalAttackDistance;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumAttackDistance;                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotTimeBasedAction;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2631[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Dungeonhaven.InputAxis
struct FInputAxis
{
public:
	class FString                                AxisName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Dungeonhaven.InputAction
struct FInputAction
{
public:
	class FString                                ActionName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x10(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2673[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


