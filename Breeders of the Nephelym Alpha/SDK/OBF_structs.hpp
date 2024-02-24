#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERoamingAction : uint8
{
	Wander                         = 0,
	FollowBreeder                  = 1,
	FollowRoamer                   = 2,
	CuteThing                      = 3,
	DumbThing                      = 4,
	HornyAggressive                = 5,
	HornyPassive                   = 6,
	ERoamingAction_MAX             = 7,
};

enum class EWorldNodeNotify : uint8
{
	Clear                          = 0,
	ActivateSwitch                 = 1,
	DeactivateSwitch               = 2,
	AddItem                        = 3,
	RemoveItem                     = 4,
	PostMessage                    = 5,
	OpenChest                      = 6,
	EWorldNodeNotify_MAX           = 7,
};

enum class EBodyPointType : uint8
{
	BPT_Null                       = 0,
	BPT_HipR_Apex                  = 1,
	BPT_HipR_Illiac                = 2,
	BPT_HipL_Apex                  = 3,
	BPT_HipL_Illiac                = 4,
	BPT_ButtR_Outer                = 5,
	BPT_ButtR_Center               = 6,
	BPT_ButtR_Upper                = 7,
	BPT_ButtL_Outer                = 8,
	BPT_ButtL_Center               = 9,
	BPT_ButtL_Upper                = 10,
	BPT_Anus_Center                = 11,
	BPT_Groin_Center               = 12,
	BPT_BreastR_Top                = 13,
	BPT_BreastR_MiddleL            = 14,
	BPT_BreastR_MiddleR            = 15,
	BPT_BreastR_Bottom             = 16,
	BPT_BreastL_Top                = 17,
	BPT_BreastL_MiddleL            = 18,
	BPT_BreastL_MiddleR            = 19,
	BPT_BreastL_Bottom             = 20,
	BPT_Breast_Center              = 21,
	BPT_NippleL_Apex               = 22,
	BPT_NippleR_Apex               = 23,
	BPT_BellyR                     = 24,
	BPT_BellyR_LowerR              = 25,
	BPT_BellyL                     = 26,
	BPT_BellyL_LowerL              = 27,
	BPT_Belly_Center               = 28,
	BPT_ThighR_Front               = 29,
	BPT_ThighL_Front               = 30,
	BPT_ThighR_Side                = 31,
	BPT_ThighL_Side                = 32,
	BPT_WaistR                     = 33,
	BPT_WaistL                     = 34,
	BPT_ShoulderR                  = 35,
	BPT_ShoulderL                  = 36,
	BPT_ScapulaR                   = 37,
	BPT_ScapulaL                   = 38,
	BPT_BackUpper                  = 39,
	BPT_BackCenter                 = 40,
	BPT_BackLower                  = 41,
	BPT_Locator                    = 42,
	BPT_MAX                        = 43,
};

enum class EBodySize : uint8
{
	BS_Null                        = 0,
	BS_Tiny                        = 1,
	BS_Small                       = 2,
	BS_Normal                      = 3,
	BS_Large                       = 4,
	BS_Huge                        = 5,
	BS_Massive                     = 6,
	BS_MAX                         = 7,
};

enum class EStat : uint8
{
	Lust                           = 0,
	Fertility                      = 1,
	Aptitude                       = 2,
	EStat_MAX                      = 3,
};

enum class EStatRank : uint8
{
	RankX                          = 0,
	RankS                          = 6,
	RankA                          = 5,
	RankB                          = 4,
	RankC                          = 3,
	RankD                          = 2,
	RankE                          = 1,
	EStatRank_MAX                  = 7,
};

enum class ESexToyCommand : uint8
{
	Stop                           = 0,
	Vibrate                        = 1,
	VibrateLow                     = 2,
	Rotate                         = 3,
	Pump                           = 4,
	Pulse                          = 5,
	Wave                           = 6,
	Fireworks                      = 7,
	Earthquake                     = 8,
	Thrust0                        = 9,
	Thrust1                        = 10,
	Thrust2                        = 11,
	Thrust3                        = 12,
	Thrust4                        = 13,
	Thrust5                        = 14,
	Thrust6                        = 15,
	Thrust7                        = 16,
	Thrust8                        = 17,
	Thrust9                        = 18,
	Thrust10                       = 19,
	Suck0                          = 20,
	Suck1                          = 21,
	Suck2                          = 22,
	Orgasm0                        = 23,
	Orgasm1                        = 24,
	ESexToyCommand_MAX             = 25,
};

enum class ESexToyIndex : uint8
{
	All                            = 0,
	Giver                          = 1,
	Receiver                       = 2,
	ESexToyIndex_MAX               = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.InternalCharacterSchemeContainer
struct FInternalCharacterSchemeContainer
{
public:
	TArray<TSubclassOf<class USexyCharacterScheme>> Schemes;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OBF.UserCharacterSchemeContainer
struct FUserCharacterSchemeContainer
{
public:
	TArray<class FName>                          CommonSchemes;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UncommonSchemes;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          RareSchemes;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UniqueSchemes;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          LegendarySchemes;                                  // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x330 (0x330 - 0x0)
// ScriptStruct OBF.Registry
struct FRegistry
{
public:
	TMap<class FName, TSubclassOf<class USexyCharacterVariant>> Variants;                                          // 0x0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSubclassOf<class USexyItem>> Items;                                             // 0x50(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSubclassOf<class USexyBreedingSession>> BreedingSessions;                                  // 0xA0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, TSubclassOf<class USexyDialogueGroup>> Dialogue;                                          // 0xF0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, TSubclassOf<class USexyQuest>> Quests;                                            // 0x140(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, TSubclassOf<class USexyStore>> Stores;                                            // 0x190(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSubclassOf<class USexyRanchUpgrade>> RanchUpgrades;                                     // 0x1E0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, TSubclassOf<class USexyVariantSexScene>> VariantSexScenes;                                  // 0x230(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, struct FInternalCharacterSchemeContainer> InternalCharacterSchemes;                          // 0x280(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FUserCharacterSchemeContainer> UserCharacterSchemes;                              // 0x2D0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FName>                          UserToyPresets;                                    // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OBF.TravelWidgetStyle
struct FTravelWidgetStyle
{
public:
	class FText                                  ShrineName;                                        // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ShrineImage;                                       // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OBF.RaceHarvestStyle
struct FRaceHarvestStyle
{
public:
	struct FGameplayTag                          RaceTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RaceName;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SemenContainerMaterial;                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MilkContainerMaterial;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct OBF.DisplayedTrait
struct FDisplayedTrait
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Tooltip1;                                          // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Tooltip2;                                          // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Tooltip3;                                          // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OBF.SavedKeyConfiguration
struct FSavedKeyConfiguration
{
public:
	class FName                                  GameActionTag;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  PrimaryKey;                                        // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  SecondaryKey;                                      // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  GamepadKey;                                        // 0x38(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OBF.KeyConfiguration
struct FKeyConfiguration
{
public:
	class FName                                  GameActionTag;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Category;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MenuText;                                          // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FKey                                  PrimaryKey;                                        // 0x28(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  SecondaryKey;                                      // 0x40(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  GamepadKey;                                        // 0x58(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInUI;                                         // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptional;                                         // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E19[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputActionKeyMapping>        ActionMappings;                                    // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>          AxisMappings;                                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.DialogueState
struct FDialogueState
{
public:
	struct FGameplayTagContainer                 NPC;                                               // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OBF.MonsterEssence
struct FMonsterEssence
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  VariantName;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// ScriptStruct OBF.BreedingTask
struct FBreedingTask
{
public:
	struct FGuid                                 TaskID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  QuestGiver;                                        // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  VariantText;                                       // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SexText;                                           // 0x70(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  LevelText;                                         // 0x88(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  StatText;                                          // 0xA0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredVariant;                                   // 0xB8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredStat;                                      // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredStatValue;                                 // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredItem;                                      // 0xE4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredItemCount;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelRequirement;                                  // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E22[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredTraits;                                    // 0xF8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Difficulty;                                        // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardCount;                                       // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Rewards;                                           // 0x120(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        DaysPosted;                                        // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E24[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CompletionTags;                                    // 0x148(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  RewardMessage;                                     // 0x168(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bNoReward;                                         // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccepted;                                         // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E25[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct OBF.SexyWorldState
struct FSexyWorldState
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minute;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hour;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Day;                                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Month;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Year;                                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          QuestID;                                           // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StageID;                                           // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActiveDazeShrine;                                  // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActiveEvents;                                      // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActiveTravelShrines;                               // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AcquiredRanchUpgrades;                             // 0x70(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDialogueState>                DialogueStates;                                    // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TraitLevel;                                        // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FMonsterEssence>  MonsterLevels;                                     // 0xA8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        FernFed;                                           // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBreedingTask>                 BreedingTasks;                                     // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBreedingTask>                 SpecialBreedingTasks;                              // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DaysSinceBreedingTaskRefresh;                      // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct OBF.DickSpline
struct FDickSpline
{
public:
	struct FTransform                            OffsetA;                                           // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetB;                                           // 0x30(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OffsetUp;                                          // 0x60(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              AimOffset;                                         // 0x6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               MidScale;                                          // 0x78(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidParent;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidLerp;                                           // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidSocket;                                         // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Curvature;                                         // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thrust;                                            // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickTipIndex;                                      // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickMidIndex;                                      // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickThrustIndex;                                   // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickThrustIndexForward;                            // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetVaginaSocket;                                // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolveEnds;                                        // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleFromCurve;                                   // 0xAD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E33[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0xB0(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_E35[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct OBF.DickSplineOverride
struct FDickSplineOverride
{
public:
	struct FGameplayTag                          DickTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E36[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDickSpline                           Spline;                                            // 0x10(0x140)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTransform                            DickCorrection;                                    // 0x150(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct OBF.AnimationBounce
struct FAnimationBounce
{
public:
	float                                        Stiffness0;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness1;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness2;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping0;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping1;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping2;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4A0 (0x4A0 - 0x0)
// ScriptStruct OBF.AnimationCorrections
struct FAnimationCorrections
{
public:
	bool                                         bInheritAnimScale;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOwnBodyPoints;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyPointType                    HandIKMode_R;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyPointType                    HandIKMode_L;                                      // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandSocketLockR;                                   // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HandSocketLockL;                                   // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E38[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x20(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseFatRoot;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FatRoot;                                           // 0x54(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Spine;                                             // 0x60(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpineBlend;                                        // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoWingAnim;                                       // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Wings;                                             // 0x98(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bNoTailAnim;                                       // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Tail;                                              // 0xA8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HairBlend;                                         // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockDickToVagina;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDickInMouth;                                      // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDickInheritBaseAnim;                              // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDickInMouthAndThenInherit;                        // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoDickAnim;                                       // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Dick;                                              // 0xC0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDickSpline                           DickSpline;                                        // 0xF0(0x140)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDickSplineOverride>           DickSplineOverrides;                               // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DickBlend;                                         // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArmsInheritBaseAnim;                              // 0x244(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E42[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HandL;                                             // 0x250(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HandBlendL;                                        // 0x280(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E43[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HandR;                                             // 0x290(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HandBlendR;                                        // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandJointTargetL;                                  // 0x2C4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandJointTargetR;                                  // 0x2D0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E49[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LegL;                                              // 0x2E0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LegBlendL;                                         // 0x310(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LegR;                                              // 0x320(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LegBlendR;                                         // 0x350(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4E[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Hips;                                              // 0x360(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HipsBlend;                                         // 0x390(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4F[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Belly;                                             // 0x3A0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BellyBlend;                                        // 0x3D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartZeroPropScale;                               // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E50[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Prop;                                              // 0x3E0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SemenPoolOffset;                                   // 0x410(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SemenPoolScale;                                    // 0x41C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CBAttach;                                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationBounce                      BreastBounce;                                      // 0x430(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimationBounce                      ButtBounce;                                        // 0x44C(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimationBounce                      BellyBounce;                                       // 0x468(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimationBounce                      DickBounce;                                        // 0x484(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OBF.BodyFluidFX
struct FBodyFluidFX
{
public:
	int32                                        LoopCycles;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnRate;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lifetime;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationMin;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationMax;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Drag;                                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityMin;                                       // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Gravity;                                           // 0x38(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVelocityRange;                                    // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDragRange;                                        // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E58[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.SexToyCommandContext
struct FSexToyCommandContext
{
public:
	enum class ESexToyCommand                    Command;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Strength;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopRunDuration;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopPauseDuration;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWithPreset;                               // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OverrideRule;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideStrength;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverrideTime;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB80 (0xB80 - 0x0)
// ScriptStruct OBF.BlessedSexScene
struct FBlessedSexScene
{
public:
	struct FGameplayTag                          SceneTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyBreedingMontage>      MonsterMontage;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyBreedingMontage>      OtherMontage;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBodyFluidFX> OrgasmFluidFX;                                     // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBodyFluidFX> OtherOrgasmFluidFX;                                // 0x68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 MonsterToyPenetration;                             // 0xB8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 OtherToyPenetration;                               // 0xF8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 MonsterToyOrgasm;                                  // 0x138(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 OtherToyOrgasm;                                    // 0x178(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    StaticFluidMaterial;                               // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OtherStaticFluidMaterial;                          // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimationCorrections                 MonsterCorrections;                                // 0x1D0(0x4A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAnimationCorrections                 OtherCorrections;                                  // 0x670(0x4A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      Dialogue;                                          // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      ClimaxDialogue;                                    // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PostSceneTriggers;                                 // 0xB20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PostSceneFlags;                                    // 0xB40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bShowMessage;                                      // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StartMessage;                                      // 0xB68(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.Quest
struct FQuest
{
public:
	struct FGameplayTagContainer                 Type;                                              // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.Conditions
struct FConditions
{
public:
	struct FGameplayTagContainer                 Positive;                                          // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Negative;                                          // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OBF.DialogueEntry
struct FDialogueEntry
{
public:
	struct FConditions                           StateFlags;                                        // 0x0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           GameFlags;                                         // 0x40(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      Session;                                           // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct OBF.ResponseDialogue
struct FResponseDialogue
{
public:
	class FText                                  BreederPrompt;                                     // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      Response;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditions                           StateFlags;                                        // 0x20(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           GameFlags;                                         // 0x60(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueResponse>     GroupedResponses;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct OBF.DialogueSession
struct FDialogueSession
{
public:
	TArray<class FText>                          Lines;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          LinesToFemale;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          LinesToFuta;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          LinesToMale;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueResponse>     BreederResponses;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueResponse>     BreederTResponses;                                 // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueResponse>     BreederMResponses;                                 // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Trigger;                                           // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SexSceneType;                                      // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditions                           StateFlags;                                        // 0x68(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           GameFlags;                                         // 0xA8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0xE8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bLockExit;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E68[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ExitBlockedMessage;                                // 0x108(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Item;                                              // 0x120(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E69[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct OBF.Store
struct FStore
{
public:
	struct FGameplayTagContainer                 OwnerVariant;                                      // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Type;                                              // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ItemFilters;                                       // 0x28(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        DaysUntilReset;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinBaseWealth;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBaseWealth;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct OBF.BlessedInteractionStats
struct FBlessedInteractionStats
{
public:
	int32                                        BasicSexCount;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntimateSexCount;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct OBF.BreedingSession
struct FBreedingSession
{
public:
	struct FGameplayTag                          PositionTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PositionName;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SizePairs;                                         // 0x38(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GiverRestrictions;                                 // 0x58(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReceiverRestrictions;                              // 0x78(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E70[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           PositionImage;                                     // 0xA0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bListForDevelopmentOnly;                           // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E72[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OBF.BreedingPhaseAnimationSet
struct FBreedingPhaseAnimationSet
{
public:
	class UAnimSequence*                         SexAnimation;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         PropAnimation;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ExpressionState;                                   // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E74[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6 (0x6 - 0x0)
// ScriptStruct OBF.CharacterPhysicsFlags
struct FCharacterPhysicsFlags
{
public:
	bool                                         bBelly;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreasts;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bButt;                                             // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThighs;                                           // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDick;                                             // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHair;                                             // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct OBF.BreedingAnimationMontage
struct FBreedingAnimationMontage
{
public:
	struct FBreedingPhaseAnimationSet            PenetrationPhaseSet;                               // 0x0(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBreedingPhaseAnimationSet            ClimaxPhaseSet;                                    // 0x20(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseSemenPool;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventFutaEjaculationOnMales;                    // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBellyInflateMode;                                 // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventCumLeak;                                   // 0x43(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipMoanSound;                                    // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDildoL;                                        // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDildoR;                                        // 0x46(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E79[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CIRate;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CITarget;                                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FluidSources;                                      // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Aftermath;                                         // 0x70(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AftermathWithFuta;                                 // 0x90(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterPhysicsFlags                PhysicsFlags;                                      // 0xB0(0x6)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7C[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct OBF.RanchUpgrade
struct FRanchUpgrade
{
public:
	struct FGameplayTag                          UpgradeTag;                                        // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StoreImage;                                        // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TypeDisplay;                                       // 0xA8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xC0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E80[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OBF.CharacterAppliedScheme
struct FCharacterAppliedScheme
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct OBF.BodyFluidMaterial
struct FBodyFluidMaterial
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Glow;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Metal;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoughnessMin;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoughnessMax;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct OBF.FluidSplatter
struct FFluidSplatter
{
public:
	struct FBodyFluidMaterial                    Material;                                          // 0x0(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VaginaSplatter;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickSplatter;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodySplatter;                                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthSplatter;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OBF.BreastShape
struct FBreastShape
{
public:
	float                                        BreastSize;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastDepth;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastHeight;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastProtrude;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastCleavage;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastVertical;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastWidth;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TinyTitties;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleRadius;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleFat;                                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NipplePerk;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AreolaeRadius;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AreolaeFat;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AreolaeDepth;                                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24C (0x24C - 0x0)
// ScriptStruct OBF.CharacterMorph
struct FCharacterMorph
{
public:
	float                                        FaceDepth;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FaceWidth;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesClose;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesVertical;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesDepth;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesDistance;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyesAngle;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HumanEarSize;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HumanEarPointedA;                                  // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HumanEarPointedB;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HumanEarPointedC;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttachedEarSize;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairSize;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairBack;                                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrowVertical;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrowDepth;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrowInnerVertical;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseBridgeWidth;                                   // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseBridgeDepth;                                   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseWidth;                                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseDepth;                                         // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseVertical;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoseAngle;                                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekboneDepth;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekboneVertical;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekboneWidth;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekboneSize;                                     // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekDepth;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheekWidth;                                        // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthWidth;                                        // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthVertical;                                     // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthDepth;                                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthOpen;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthCornersVertical;                              // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthCornersDepth;                                 // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipUpperFat;                                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipUpperWidth;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipUpperDepth;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipUpperPeakVertical;                              // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipLowerFat;                                       // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipLowerWidth;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipLowerDepth;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipCenterVertical;                                 // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipCurves;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JawCornerWidth;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JawCornerVertical;                                 // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JawWidth;                                          // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JawVertical;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChinWidth;                                         // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChinVertical;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChinDepth;                                         // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChinFat;                                           // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NeckGirth;                                         // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShoulderWidth;                                     // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShoulderSpread;                                    // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShoulderHeight;                                    // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShoulderForward;                                   // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperarmGirth;                                     // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperarmFit;                                       // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperBodyFit;                                      // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForearmGirth;                                      // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBreastShape                          Breasts;                                           // 0xF8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBreastShape                          BreastsClothed;                                    // 0x130(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BellyFat;                                          // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyMega;                                         // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyDepth;                                        // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyWidth;                                        // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyDepth2;                                       // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyWidth2;                                       // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyHeight;                                       // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyVertical;                                     // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyPregnant;                                     // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyFit;                                          // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyPelvisCrease;                                 // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellySmooth;                                       // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavelWidth;                                        // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavelHeight;                                       // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavelVertical;                                     // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavelDepth;                                        // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaistWidth;                                        // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipWidth;                                          // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroinGirth;                                        // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VaginaFat;                                         // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VaginaOpen;                                        // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtSize;                                          // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtDepth;                                         // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtHeight;                                        // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtWidth;                                         // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtCleavage;                                      // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtVertical;                                      // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtProtrude;                                      // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtCrease;                                        // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThighGirth;                                        // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThighFit;                                          // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CalfGirth;                                         // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickBlurSheathOffset;                              // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickBlurSheathTaperA;                              // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickBlurSheathTaperB;                              // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickBlurSheathConstrict;                           // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickHeadGirth;                                     // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickLength;                                        // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickShaftGirth;                                    // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickSize;                                          // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrotumSize;                                       // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeethSharp;                                        // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TailSize;                                          // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WingsSize;                                         // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LegSpread;                                         // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullBodyStacked;                                   // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullBodyBulk;                                      // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullBodyChubby;                                    // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullBodySlender;                                   // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpineAdjust;                                       // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadSize;                                          // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_0;                                        // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_1;                                        // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_2;                                        // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_3;                                        // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_4;                                        // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmScale_5;                                        // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct OBF.BouncePhysics
struct FBouncePhysics
{
public:
	float                                        BellyBounce;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastBounce;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtBounce;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThighBounce;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickBounce;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x980 (0x980 - 0x0)
// ScriptStruct OBF.BodyShape
struct FBodyShape
{
public:
	struct FCharacterMorph                       Morph;                                             // 0x0(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       MorphBusty;                                        // 0x24C(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       MorphBuxom;                                        // 0x498(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       MorphPregnant;                                     // 0x6E4(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncePhysics                        Physics;                                           // 0x930(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncePhysics                        PhysicsBusty;                                      // 0x944(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncePhysics                        PhysicsBuxom;                                      // 0x958(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncePhysics                        PhysicsPregnant;                                   // 0x96C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x9C (0x9C - 0x0)
// ScriptStruct OBF.CharacterAttachmentColor
struct FCharacterAttachmentColor
{
public:
	struct FLinearColor                          ColorA;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorB;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorC;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorD;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlowA;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlowB;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlowC;                                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlowD;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetalA;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetalB;                                            // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetalC;                                            // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetalD;                                            // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoughnessMin;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoughnessMax;                                      // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnderFurAdjust;                                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5A0 (0x5A0 - 0x0)
// ScriptStruct OBF.CharacterMaterial
struct FCharacterMaterial
{
public:
	struct FLinearColor                          LightColor;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightIntensity;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EffectColor;                                       // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectGlow;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkinColor;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MuscleDetails;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoftDetails;                                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyDetails;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkinFadeColor;                                     // 0x44(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkinRoughness;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkinMetal;                                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkinGlow;                                          // 0x5C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkinSSSColor;                                      // 0x6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Specular;                                          // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkinFade;                                          // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimatedGlow;                                      // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NippleColor;                                       // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleRoughness;                                   // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleMetal;                                       // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NippleGlow;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NippleAccentColor;                                 // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleAccentRoughness;                             // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NippleAccentMetal;                                 // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NippleAccentGlow;                                  // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VaginaColor;                                       // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VaginaRoughness;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VaginaMetal;                                       // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VaginaGlow;                                        // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DickBaseColor;                                     // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DickColor;                                         // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickRoughness;                                     // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickMetal;                                         // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DickGlow;                                          // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DickTipColor;                                      // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickTipRoughness;                                  // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickTipMetal;                                      // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DickTipGlow;                                       // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ScrotumColor;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrotumRoughness;                                  // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrotumMetal;                                      // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ScrotumGlow;                                       // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BlurSheathTint;                                    // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AnusColor;                                         // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnusRoughness;                                     // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnusMetal;                                         // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AnusGlow;                                          // 0x1B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LipsColor;                                         // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipsRoughness;                                     // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LipsMetal;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LipsGlow;                                          // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeSocketColor;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeSocketShadow;                                   // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeRimColor;                                       // 0x1FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeRimGlow;                                        // 0x20C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeRimMetal;                                       // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeRimRoughness;                                   // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeRColor;                                         // 0x224(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeRGlow;                                          // 0x234(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeLColor;                                         // 0x244(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeLGlow;                                          // 0x254(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeScleraColor;                                    // 0x264(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyeScleraGlow;                                     // 0x274(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeRoughness;                                      // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeMetal;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WholeEyeMetal;                                     // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WholeEyeGlow;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairColor;                                         // 0x294(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairMetal;                                         // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRoughnessMin;                                  // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRoughnessMax;                                  // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairRootColor;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairTipColor;                                      // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HairGlow;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRoughness;                                     // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairScatter;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairHueVariation;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairValueVariation;                                // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairEdgeMaskContrast;                              // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairEdgeMaskMin;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairDepthContrast;                                 // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairDepthOffset;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FacialHairColor;                                   // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyebrowColor;                                      // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyebrowRoughness;                                  // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyebrowMetal;                                      // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EyebrowGlow;                                       // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FaceDecorColor;                                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FaceDecorRoughness;                                // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FaceDecorMetal;                                    // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FaceDecorGlow;                                     // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodyDecorColor;                                    // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyDecorRoughness;                                // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyDecorMetal;                                    // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodyDecorGlow;                                     // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodyMarksColor;                                    // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyMarksRoughness;                                // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyMarksMetal;                                    // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BodyMarksGlow;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NailsColor;                                        // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NailsGlow;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MawColor;                                          // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MawGlow;                                           // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeethColor;                                        // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FurColorA;                                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FurColorB;                                         // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FurColorC;                                         // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FurColorD;                                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FurTipColor;                                       // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PubicFurColor;                                     // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PubicFurTipColor;                                  // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentColor             BodyAttachmentsColor;                              // 0x470(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdditionalMaterialTile;                            // 0x50C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdditionalMaterialColor;                           // 0x51C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdditionalMaterialGlow;                            // 0x52C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalMaterialUseOffset;                       // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalMaterialOffset;                          // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Glint;                                             // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    MilkMaterial;                                      // 0x548(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    SemenMaterial;                                     // 0x574(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30C (0x30C - 0x0)
// ScriptStruct OBF.CharacterAttachmentScheme
struct FCharacterAttachmentScheme
{
public:
	struct FCharacterAttachmentColor             AccessoryColor;                                    // 0x0(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentColor             UpperClothingColor;                                // 0x9C(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentColor             LowerClothingColor;                                // 0x138(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentColor             UnderwearColor;                                    // 0x1D4(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentColor             BootsColor;                                        // 0x270(0x9C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x31A0 (0x31A0 - 0x0)
// ScriptStruct OBF.CharacterAppearance
struct FCharacterAppearance
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       Morph;                                             // 0x20(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncePhysics                        Physics;                                           // 0x26C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyShape                            BaseShape;                                         // 0x280(0x980)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyShape                            ChubbyShape;                                       // 0xC00(0x980)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyShape                            SlenderShape;                                      // 0x1580(0x980)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyShape                            MeatyShape;                                        // 0x1F00(0x980)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMaterial                    Material;                                          // 0x2880(0x5A0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        EyeRIndex;                                         // 0x2E20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyeLIndex;                                         // 0x2E24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyebrowIndex;                                      // 0x2E28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaceDecorIndex;                                    // 0x2E2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyDecorIndex;                                    // 0x2E30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyMarksIndex;                                    // 0x2E34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalMaterialMaskIndex;                       // 0x2E38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalMaterialIndex;                           // 0x2E3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterAttachmentScheme            AttachmentMaterial;                                // 0x2E40(0x30C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TorsoAttachmentIndex;                              // 0x314C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PubicHairIndex;                                    // 0x3150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadAttachmentIndex;                               // 0x3154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadExtraAttachmentIndex;                          // 0x3158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LegsAttachmentIndex;                               // 0x315C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmsAttachmentIndex;                               // 0x3160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TailAttachmentIndex;                               // 0x3164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WingAttachmentIndex;                               // 0x3168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EarsAttachmentIndex;                               // 0x316C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairAttachmentIndex;                               // 0x3170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FacialHairIndex;                                   // 0x3174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickAttachmentIndex;                               // 0x3178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccessoryAttachmentIndex;                          // 0x317C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollarAttachmentIndex;                             // 0x3180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmbientParticleAttachmentIndex;                    // 0x3184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperClothingIndex;                                // 0x3188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowerClothingIndex;                                // 0x318C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnderwearIndex;                                    // 0x3190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BootsIndex;                                        // 0x3194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IdleAnimationIndex;                                // 0x3198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.CharacterStats
struct FCharacterStats
{
public:
	int32                                        XP;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XPTarget;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Excitement;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lust;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LustMax;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LustRank;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fertility;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FertilityRank;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Aptitude;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AptitudeRank;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DailySexCounter;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DailyFedCounter;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DaysPregnant;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rarity;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x37D8 (0x37D8 - 0x0)
// ScriptStruct OBF.CharacterData
struct FCharacterData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 UniqueID;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Variant;                                           // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  Appearance;                                        // 0x40(0x31A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFluidSplatter                        Splatter;                                          // 0x31E0(0x3C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       CITargetValue;                                     // 0x321C(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMorph                       CIBuffer;                                          // 0x3468(0x24C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CIRate;                                            // 0x36B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CIAlpha;                                           // 0x36B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAppliedScheme               AppliedScheme;                                     // 0x36C0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterStats                       Stats;                                             // 0x36F0(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                 Mother;                                            // 0x3730(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Father;                                            // 0x3740(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Traits;                                            // 0x3750(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DormantTraits;                                     // 0x3770(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 States;                                            // 0x3790(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGuid                                 OffspringID;                                       // 0x37B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LastMateID;                                        // 0x37C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LastMateSexCount;                                  // 0x37D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.CharacterParentData
struct FCharacterParentData
{
public:
	struct FGameplayTagContainer                 Variant;                                           // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 UniqueID;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OBF.CharacterEditorVariant
struct FCharacterEditorVariant
{
public:
	class FString                                VariantName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RaceName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Variant;                                           // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bExotic;                                           // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OBF.ListedVariant
struct FListedVariant
{
public:
	struct FGameplayTag                          Race;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USexyCharacterVariant>> Variants;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OBF.VariantDisplayName
struct FVariantDisplayName
{
public:
	class FString                                RaceName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariantName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RaceNamePlural;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullVariantName;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GalleryVariantName;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.VariantHarvestAssets
struct FVariantHarvestAssets
{
public:
	class UMaterialInterface*                    StaticFluidMaterial;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DynamicFluidMaterial;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OBF.VariantWorldSpawning
struct FVariantWorldSpawning
{
public:
	int32                                        ChubbyChance;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlenderChance;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeatyChance;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SignatureTrait;                                    // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RareTrait;                                         // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TraitBlackList;                                    // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        AppearanceChance;                                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMin;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMax;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OBF.PossibleVariantHybrid
struct FPossibleVariantHybrid
{
public:
	struct FGameplayTagContainer                 OtherParentTags;                                   // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Hybrids;                                           // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OBF.CharacterProxy
struct FCharacterProxy
{
public:
	float                                        CapsuleRadius;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleHeight;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueCapsuleRadius;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueCapsuleHeight;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProximityCapsuleRadius;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProximityCapsuleHeight;                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkSpeed;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunSpeed;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintSpeed;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendSpaceRateScale;                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseMeshLocation;                                  // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FaceFocus;                                         // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpperBodyFocus;                                    // 0x40(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LowerBodyFocus;                                    // 0x4C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DialogueCameraTransform;                           // 0x60(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               EncounterOffset;                                   // 0x90(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OBF.ExpressionAnimations
struct FExpressionAnimations
{
public:
	class UAnimSequence*                         Idle;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Face;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         TailWag;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         WingsHover;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         WingsAlternate;                                    // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DickRelaxed;                                       // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseEyes;                                        // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EyeHaze;                                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3570 (0x3570 - 0x0)
// ScriptStruct OBF.VariantTraitOverride
struct FVariantTraitOverride
{
public:
	struct FGameplayTagContainer                 Traits;                                            // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttributes;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Attributes;                                        // 0x28(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideHarvest;                                  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyFluidMaterial                    BreastMilkMaterial;                                // 0x4C(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    SemenMaterial;                                     // 0x78(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantHarvestAssets                 MilkHarvest;                                       // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantHarvestAssets                 SemenHarvest;                                      // 0xB8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MilkItem;                                          // 0xC8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SemenItem;                                         // 0xD0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideEncounter;                                // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantWorldSpawning                 Spawning;                                          // 0xE0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FavoriteItems;                                     // 0x130(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideStats;                                    // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterStats                       BaseStats;                                         // 0x154(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PossibleOffspring;                                 // 0x198(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FPossibleVariantHybrid>        PossibleHybrids;                                   // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideProxy;                                    // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterProxy                       CharacterProxy;                                    // 0x1D0(0xA0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideDecor;                                    // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USexyCharacterDecor*                   CharacterDecor;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  LowerAppearanceBound;                              // 0x280(0x31A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    AdditionalMaterialMasks;                           // 0x3420(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttachments;                              // 0x3430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USexyCharacterAttachment*>      TorsoAttachments;                                  // 0x3438(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      HeadAttachments;                                   // 0x3448(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      HeadExtraAttachments;                              // 0x3458(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      LegAttachments;                                    // 0x3468(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      ArmAttachments;                                    // 0x3478(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      TailAttachments;                                   // 0x3488(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      WingAttachments;                                   // 0x3498(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      EarAttachments;                                    // 0x34A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      DickAttachments;                                   // 0x34B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      AccessoryAttachments;                              // 0x34C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      CollarAttachments;                                 // 0x34D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNiagaraSystem*>                AmbientParticleAttachments;                        // 0x34E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideAnimations;                               // 0x34F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpaceBase*                       MotionBlendSpace;                                  // 0x3500(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlinkFloor;                                        // 0x3508(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FExpressionAnimations> FullBodyExpressions;                               // 0x3518(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct OBF.VariantEssenceSpawnRanks
struct FVariantEssenceSpawnRanks
{
public:
	enum class EStatRank                         LustRank;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRank                         FertilityRank;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRank                         AptitudeRank;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct OBF.VariantEssenceStats
struct FVariantEssenceStats
{
public:
	enum class EStatRank                         LustMaxRank;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRank                         FertilityMaxRank;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRank                         AptitudeMaxRank;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStat                             StatForLevel2;                                     // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRank                         RankForLevel2;                                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantEssenceSpawnRanks             MaxSpawnRanks1;                                    // 0x5(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantEssenceSpawnRanks             MaxSpawnRanks2;                                    // 0x8(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantEssenceSpawnRanks             MaxSpawnRanks3;                                    // 0xB(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantEssenceSpawnRanks             MaxSpawnRanks4;                                    // 0xE(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantEssenceSpawnRanks             MaxSpawnRanks5;                                    // 0x11(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.RoamerAction
struct FRoamerAction
{
public:
	enum class ERoamingAction                    ActionTag;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chance;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkChance;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WantsBreederChance;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x35F0 (0x35F0 - 0x0)
// ScriptStruct OBF.CharacterVariant
struct FCharacterVariant
{
public:
	struct FGameplayTagContainer                 VariantType;                                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVariantDisplayName                   DisplayName;                                       // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bExposeToCreator;                                  // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFutas;                                    // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVariantTraitOverride>         TraitOverrides;                                    // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultSize;                                       // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Attributes;                                        // 0x90(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVariantWorldSpawning                 Spawning;                                          // 0xB0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    BreastMilkMaterial;                                // 0x100(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    SemenMaterial;                                     // 0x12C(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantHarvestAssets                 MilkHarvest;                                       // 0x158(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantHarvestAssets                 SemenHarvest;                                      // 0x168(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MilkItem;                                          // 0x178(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SemenItem;                                         // 0x180(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurpriseBreederIncrementBase;                      // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurpriseMonsterIncrementBase;                      // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurpriseClimaxBoostChance;                         // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurpriseClimaxBoost;                               // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FavoriteItems;                                     // 0x198(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterStats                       BaseStats;                                         // 0x1B8(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVariantEssenceStats                  EssenceStats;                                      // 0x1F8(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PossibleOffspring;                                 // 0x210(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FPossibleVariantHybrid>        PossibleHybrids;                                   // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCharacterProxy                       CharacterProxy;                                    // 0x240(0xA0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class USexyCharacterDecor*                   CharacterDecor;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  LowerAppearanceBound;                              // 0x2E8(0x31A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    AdditionalMaterialMasks;                           // 0x3488(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      TorsoAttachments;                                  // 0x3498(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      HeadAttachments;                                   // 0x34A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      HeadExtraAttachments;                              // 0x34B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      LegAttachments;                                    // 0x34C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      ArmAttachments;                                    // 0x34D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      TailAttachments;                                   // 0x34E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      WingAttachments;                                   // 0x34F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      EarAttachments;                                    // 0x3508(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      DickAttachments;                                   // 0x3518(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      AccessoryAttachments;                              // 0x3528(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      CollarAttachments;                                 // 0x3538(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNiagaraSystem*>                AmbientParticleAttachments;                        // 0x3548(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       MotionBlendSpace;                                  // 0x3558(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       MotionBlendSpaceChubby;                            // 0x3560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlinkFloor;                                        // 0x3568(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FExpressionAnimations> FullBodyExpressions;                               // 0x3578(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         RoamingBehaviorTree;                               // 0x35C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRoamerAction>                 RoamerActions;                                     // 0x35D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RoamingTimeSeconds;                                // 0x35E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFF[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OBF.RoamerSurprisePair
struct FRoamerSurprisePair
{
public:
	class ASexyRoamingCharacter*                 GiverCharacter;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamingCharacter*                 ReceiverCharacter;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  GiverScene;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  ReceiverScene;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SexTime;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClimaxTime;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SexFinishedTime;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPenetrationTriggered;                             // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClimaxTriggered;                                  // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrgasmTriggered;                                  // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexFinishedTriggered;                             // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F02[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.RoamingNodes
struct FRoamingNodes
{
public:
	TArray<class ASexyRoamerSpawnNode*>          Nodes;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OBF.PossibleStat
struct FPossibleStat
{
public:
	struct FGameplayTag                          Stat;                                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct OBF.PossibleTrait
struct FPossibleTrait
{
public:
	struct FGameplayTag                          Trait;                                             // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chance;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OBF.DebugStats
struct FDebugStats
{
public:
	uint8                                        Pad_F03[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct OBF.CharacterAppearanceLimit
struct FCharacterAppearanceLimit
{
public:
	int32                                        EyeRIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyeLIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyebrowIndex;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaceDecorIndex;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyDecorIndex;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyMarksIndex;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalMaterialMaskIndex;                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AdditionalMaterialIndex;                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TorsoAttachmentIndex;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PubicHairIndex;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadAttachmentIndex;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeadExtraAttachmentIndex;                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LegsAttachmentIndex;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArmsAttachmentIndex;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TailAttachmentIndex;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WingAttachmentIndex;                               // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EarsAttachmentIndex;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HairAttachmentIndex;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FacialHairIndex;                                   // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickAttachmentIndex;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccessoryAttachmentIndex;                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollarAttachmentIndex;                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AmbientParticleAttachmentIndex;                    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperClothingIndex;                                // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowerClothingIndex;                                // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnderwearIndex;                                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BootsIndex;                                        // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IdleAnimationIndex;                                // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OBF.CharacterBlendSpaces
struct FCharacterBlendSpaces
{
public:
	class UBlendSpaceBase*                       Tiny;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       Small;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       Normal;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       Large;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       Huge;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       Massive;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.DecorTextures
struct FDecorTextures
{
public:
	class UTexture2D*                            Lighting;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Normal;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct OBF.CharacterAttachment
struct FCharacterAttachment
{
public:
	struct FGameplayTag                          AttachmentTag;                                     // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         Mesh;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFur*                     FurDataAsset;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            HelperMask;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            SplatterMasks;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ColorMap;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ColorMaskMap;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LightingMap;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            NormalMap;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            FurMasks;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideDick;                                         // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFingerNails;                                  // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideToeNails;                                     // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHead;                                         // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHair;                                         // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInheritsFurColorA;                                // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInheritsFurColorB;                                // 0x56(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInheritsFurColorC;                                // 0x57(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInheritsFurColorD;                                // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideUnderwearBulge;                           // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresUnderwear;                                // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipMaterial;                                     // 0x5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipBodyDetails;                                  // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipBodyDecor;                                    // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBody;                                          // 0x5E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransparent;                                      // 0x5F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPubicFur;                                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DickFluidSocket;                                   // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DominantColor;                                     // 0x6C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DominantFurColor;                                  // 0x74(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OBF.AttachmentHelper
struct FAttachmentHelper
{
public:
	class FName                                  SwitchName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaskName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct OBF.Stagger
struct FStagger
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F13[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Current;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OBF.BodyPoint
struct FBodyPoint
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MorphScalar;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F17[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OBF.LovenseToyData
struct FLovenseToyData
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Battery;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Version;                                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Status;                                            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OBF.FurPhysics
struct FFurPhysics
{
public:
	float                                        VelocityInfluence;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringLengthStiffness;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringAngleStiffness;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDampeningMultiplier;                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityInfluence;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirResistanceMultiplier;                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStretchDistanceMultiplier;                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRotationFromNormal;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadialForceInfluence;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindInfluence;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bendiness;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalDirectionBlend;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct OBF.FurAppearance
struct FFurAppearance
{
public:
	class UTexture2D*                            PatternA;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternAScale;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PatternB;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternBScale;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternCurvePower;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FurGrowthMin;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FurInset;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FurShellCount;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FurShellDistance;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODCurve;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODStartDistance;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODEndDistance;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODMinimumShellCount;                              // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistanceFromCamera;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighNearCompressionMax;                            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighNearCompressionMin;                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowNearCompressionMax;                             // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowNearCompressionMin;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidNearCompressionMax;                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidNearCompressionMin;                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NearDistance;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1288 (0x1290 - 0x8)
// ScriptStruct OBF.SexyUIFullscreenMenu
struct FSexyUIFullscreenMenu : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           MainMenuLogo;                                      // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LightPopupBox;                                     // 0x90(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightPopupDividerColor;                            // 0x118(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DarkPopupBox;                                      // 0x128(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkPopupDividerColor;                             // 0x1B0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GameMenu;                                          // 0x1C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DialogueBox;                                       // 0x248(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlobalMessageBox;                                  // 0x2D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuDividerColor;                                  // 0x358(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CharacterEditorGradientTop;                        // 0x368(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CharacterEditorGradientBottom;                     // 0x378(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SettingsGradientTop;                               // 0x388(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SettingsGradientBottom;                            // 0x398(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InventoryGradientTop;                              // 0x3A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InventoryGradientBottom;                           // 0x3B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          QuestsGradientTop;                                 // 0x3C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          QuestsGradientBottom;                              // 0x3D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarnGradientTop;                                   // 0x3E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarnGradientBottom;                                // 0x3F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuTitleColor;                                    // 0x408(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DayEmblem;                                         // 0x418(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NightEmblem;                                       // 0x4A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SettingsMenuEmblem;                                // 0x528(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InventoryMenuEmblem;                               // 0x5B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           QuestMenuEmblem;                                   // 0x638(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BarnMenuEmblem;                                    // 0x6C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TradingMenuEmblem;                                 // 0x748(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AscendMonsterMenuEmblem;                           // 0x7D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TravelMenuEmblem;                                  // 0x858(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OffspringMenuEmblem;                               // 0x8E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RoamerMenuEmblem;                                  // 0x968(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TaskBoardMenuEmblem;                               // 0x9F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HomesteadShrine;                                   // 0xA78(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HedonShrine;                                       // 0xB00(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LustwoodShrine;                                    // 0xB88(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PasturesShrine;                                    // 0xC10(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BreaksShrine;                                      // 0xC98(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PeakShrine;                                        // 0xD20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GardenShrine;                                      // 0xDA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           JungleShrine;                                      // 0xE30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SandsShrine;                                       // 0xEB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CoveShrine;                                        // 0xF40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GladeShrine;                                       // 0xFC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CavernShrine;                                      // 0x1050(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CragShrine;                                        // 0x10D8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HeavensShrine;                                     // 0x1160(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          SettingsParameterMenu;                             // 0x11E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilterBackground;                                  // 0x11F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DailyTask;                                         // 0x1208(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x2580 (0x2588 - 0x8)
// ScriptStruct OBF.SexyUIIcons
struct FSexyUIIcons : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Null;                                              // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Female;                                            // 0x90(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Futa;                                              // 0x118(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Male;                                              // 0x1A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Return;                                            // 0x228(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Accept;                                            // 0x2B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Save;                                              // 0x338(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Load;                                              // 0x3C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Open;                                              // 0x448(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Copy;                                              // 0x4D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Paste;                                             // 0x558(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PasteShape;                                        // 0x5E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PasteFace;                                         // 0x668(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PasteSurface;                                      // 0x6F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectVariant;                                     // 0x778(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Animation;                                         // 0x800(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Reset;                                             // 0x888(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Random;                                            // 0x910(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ToggleClothing;                                    // 0x998(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Link;                                              // 0xA20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Shape;                                             // 0xAA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Material;                                          // 0xB30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Effects;                                           // 0xBB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Details;                                           // 0xC40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Clothing;                                          // 0xCC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Chubby;                                            // 0xD50(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Meaty;                                             // 0xDD8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Slender;                                           // 0xE60(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Buxom;                                             // 0xEE8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Busty;                                             // 0xF70(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Pregnant;                                          // 0xFF8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Talk;                                              // 0x1080(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TalkGroup;                                         // 0x1108(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Settings;                                          // 0x1190(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Quests;                                            // 0x1218(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Inventory;                                         // 0x12A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart;                                             // 0x1328(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HeartHollow;                                       // 0x13B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Exit;                                              // 0x1438(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Harvest;                                           // 0x14C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DailyRequests;                                     // 0x1548(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SpecialRequests;                                   // 0x15D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Discord;                                           // 0x1658(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Help;                                              // 0x16E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Trash;                                             // 0x1768(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MainMenu;                                          // 0x17F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Orgasium;                                          // 0x1878(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Favor;                                             // 0x1900(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Battery;                                           // 0x1988(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DoubleArrow_L;                                     // 0x1A10(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Arrow_L;                                           // 0x1A98(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DoubleArrow_R;                                     // 0x1B20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Arrow_R;                                           // 0x1BA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SexToy;                                            // 0x1C30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NetworkDevice;                                     // 0x1CB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Stop;                                              // 0x1D40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Play;                                              // 0x1DC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortName;                                          // 0x1E50(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSex;                                           // 0x1ED8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSize;                                          // 0x1F60(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Filter;                                            // 0x1FE8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Forward;                                           // 0x2070(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Bag;                                               // 0x20F8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Buy;                                               // 0x2180(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Sell;                                              // 0x2208(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Ascend;                                            // 0x2290(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Rename;                                            // 0x2318(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SetVagrant;                                        // 0x23A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Clear;                                             // 0x2428(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Increase;                                          // 0x24B0(0x88)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FSlateBrush> Traits;                                            // 0x2538(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x3300 (0x3308 - 0x8)
// ScriptStruct OBF.SexyUIShapes
struct FSexyUIShapes : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Solid;                                             // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule01_L;                                       // 0x90(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule01_M;                                       // 0x118(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule01_R;                                       // 0x1A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule02_L;                                       // 0x228(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule02_M;                                       // 0x2B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Capsule02_R;                                       // 0x338(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CapsuleGlow_L;                                     // 0x3C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CapsuleGlow_M;                                     // 0x448(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CapsuleGlow_R;                                     // 0x4D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Circle01;                                          // 0x558(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Circle02;                                          // 0x5E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Circle03;                                          // 0x668(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CircleGlow;                                        // 0x6F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart01;                                           // 0x778(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart01_Glow;                                      // 0x800(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart02;                                           // 0x888(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart02_Glow;                                      // 0x910(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider01_L;                                       // 0x998(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider01_M;                                       // 0xA20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider01_R;                                       // 0xAA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider02_L;                                       // 0xB30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider02_M;                                       // 0xBB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Divider02_R;                                       // 0xC40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_L;                                        // 0xCC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_M;                                        // 0xD50(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_R;                                        // 0xDD8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_Glow_L;                                   // 0xE60(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_Glow_M;                                   // 0xEE8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed01_Glow_R;                                   // 0xF70(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_L;                                        // 0xFF8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_M;                                        // 0x1080(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_R;                                        // 0x1108(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_Glow_L;                                   // 0x1190(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_Glow_M;                                   // 0x1218(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed02_Glow_R;                                   // 0x12A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_L;                                        // 0x1328(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_M;                                        // 0x13B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_R;                                        // 0x1438(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_Glow_L;                                   // 0x14C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_Glow_M;                                   // 0x1548(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Listed03_Glow_R;                                   // 0x15D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ListedSetting;                                     // 0x1658(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ListedSetting_Glow;                                // 0x16E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Scalar;                                            // 0x1768(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Index;                                             // 0x17F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Wheel;                                             // 0x1878(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorWheelGlyph;                                   // 0x1900(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           QuestStrip;                                        // 0x1988(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           QuestStrip_Glow;                                   // 0x1A10(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCard;                                          // 0x1A98(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCard_Glow;                                     // 0x1B20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCard_Label;                                    // 0x1BA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalDivider;                                   // 0x1C30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCard_Gradient;                                 // 0x1CB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_Solid_TL;                                   // 0x1D40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_Solid_TR;                                   // 0x1DC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_Solid_BL;                                   // 0x1E50(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_Solid_BR;                                   // 0x1ED8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_TL;                                         // 0x1F60(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_T;                                          // 0x1FE8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_TR;                                         // 0x2070(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_L;                                          // 0x20F8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_R;                                          // 0x2180(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_BL;                                         // 0x2208(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_B;                                          // 0x2290(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box128_BR;                                         // 0x2318(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_Solid_TL;                                    // 0x23A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_Solid_TR;                                    // 0x2428(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_Solid_BL;                                    // 0x24B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_Solid_BR;                                    // 0x2538(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_TL;                                          // 0x25C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_T;                                           // 0x2648(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_TR;                                          // 0x26D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_L;                                           // 0x2758(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_R;                                           // 0x27E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_BL;                                          // 0x2868(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_B;                                           // 0x28F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box64_BR;                                          // 0x2978(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_Solid_TL;                                    // 0x2A00(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_Solid_TR;                                    // 0x2A88(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_Solid_BL;                                    // 0x2B10(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_Solid_BR;                                    // 0x2B98(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_TL;                                          // 0x2C20(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_T;                                           // 0x2CA8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_TR;                                          // 0x2D30(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_L;                                           // 0x2DB8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_R;                                           // 0x2E40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_BL;                                          // 0x2EC8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_B;                                           // 0x2F50(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Box32_BR;                                          // 0x2FD8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CommonBox;                                         // 0x3060(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncommonBox;                                       // 0x30E8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RareBox;                                           // 0x3170(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UniqueBox;                                         // 0x31F8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LegendaryBox;                                      // 0x3280(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x370 (0x378 - 0x8)
// ScriptStruct OBF.SexyUIFonts
struct FSexyUIFonts : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Tiny;                                              // 0x8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Small;                                             // 0x60(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Normal;                                            // 0xB8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Heading0;                                          // 0x110(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Heading1;                                          // 0x168(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Heading2;                                          // 0x1C0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Heading3;                                          // 0x218(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Monospace;                                         // 0x270(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        MonospaceSmall;                                    // 0x2C8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        MonospaceTiny;                                     // 0x320(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x29F0 (0x29F8 - 0x8)
// ScriptStruct OBF.SexyUICore
struct FSexyUICore : public FSlateWidgetStyle
{
public:
	class UMaterialInterface*                    VerticalSliderMaterial;                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ProgressBarMaterial;                               // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ProgressBarSmallMaterial;                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextBlock;                                         // 0x20(0x270)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                       ScrollBox;                                         // 0x290(0x228)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBar;                                         // 0x4B8(0x4D0)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 InputBox;                                          // 0x988(0x7F8)(Edit, NativeAccessSpecifierPublic)
	struct FSliderStyle                          HorizontalSlider;                                  // 0x1180(0x340)(Edit, NativeAccessSpecifierPublic)
	struct FSliderStyle                          HorizontalSlider2;                                 // 0x14C0(0x340)(Edit, NativeAccessSpecifierPublic)
	struct FSliderStyle                          VerticalSlider;                                    // 0x1800(0x340)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorWheel;                                        // 0x1B40(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          ProgressBarColor;                                  // 0x1BC8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressBarCapsule;                                // 0x1BD8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressBarCapsuleSmall;                           // 0x1C60(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     ProgressBar;                                       // 0x1CE8(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     LustProgressBar;                                   // 0x1E88(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     SpiritProgressBar;                                 // 0x2028(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     DesireProgressBar;                                 // 0x21C8(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     DesireProgressBarPass;                             // 0x2368(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FProgressBarStyle                     DesireProgressBarFail;                             // 0x2508(0x1A0)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightTextColor;                                    // 0x26A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkTextColor;                                     // 0x26B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GoldTextColor;                                     // 0x26C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightGoldTextColor;                                // 0x26D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DialogueSpeakerColor;                              // 0x26E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DialogueSpeakerTypeColor;                          // 0x26F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DialogueTextColor;                                 // 0x2708(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightButtonNormal;                                 // 0x2718(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightButtonHover;                                  // 0x2728(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightButtonPressed;                                // 0x2738(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightButtonGlow;                                   // 0x2748(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkButtonNormal;                                  // 0x2758(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkButtonHover;                                   // 0x2768(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkButtonPressed;                                 // 0x2778(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkButtonGlow;                                    // 0x2788(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlassButtonNormal;                                 // 0x2798(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlassButtonHover;                                  // 0x27A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlassButtonPressed;                                // 0x27B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlassButtonGlow;                                   // 0x27C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuButtonNormal;                                  // 0x27D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuButtonHover;                                   // 0x27E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuButtonPressed;                                 // 0x27F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuButtonGlow;                                    // 0x2808(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuIconColor;                                     // 0x2818(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuIconHoverColor;                                // 0x2828(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MenuIconPressedColor;                              // 0x2838(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdventureActionNormal;                             // 0x2848(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdventureActionHover;                              // 0x2858(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdventureActionPressed;                            // 0x2868(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SettingsParameterHover;                            // 0x2878(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DarkCapsule;                                       // 0x2888(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilterCapsuleColor;                                // 0x2898(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FemaleColor;                                       // 0x28A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FutaColor;                                         // 0x28B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MaleColor;                                         // 0x28C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SexHeartColor;                                     // 0x28D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TooltipCapsule;                                    // 0x28E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UpgradeCardTop;                                    // 0x28F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UpgradeCardBottom;                                 // 0x2908(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BronzeColor;                                       // 0x2918(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SilverColor;                                       // 0x2928(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GoldColor;                                         // 0x2938(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CommonColor;                                       // 0x2948(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UncommonColor;                                     // 0x2958(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RareColor;                                         // 0x2968(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UniqueColor;                                       // 0x2978(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LegendaryColor;                                    // 0x2988(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SuperDeluxeColor;                                  // 0x2998(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CommonDividerColor;                                // 0x29A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UncommonDividerColor;                              // 0x29B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RareDividerColor;                                  // 0x29C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          UniqueDividerColor;                                // 0x29D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LegendaryDividerColor;                             // 0x29E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x140 - 0x8)
// ScriptStruct OBF.SexyUILoadingScreen
struct FSexyUILoadingScreen : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Normal;                                            // 0x8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Heading;                                           // 0x60(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Heart;                                             // 0xB8(0x88)(Edit, NativeAccessSpecifierPublic)
};

}


