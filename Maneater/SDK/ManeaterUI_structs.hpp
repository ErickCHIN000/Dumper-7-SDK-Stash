#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAgeTierDiamondState : uint8
{
	EDiamondState_Unfilled         = 0,
	EDiamondState_New              = 1,
	EDiamondState_Filled           = 2,
	EDiamondState_Hidden           = 3,
	EDiamondState_MAX              = 4,
};

enum class ECompassDirection : uint8
{
	INVALID                        = 0,
	NORTH                          = 1,
	SOUTH                          = 2,
	EAST                           = 3,
	WEST                           = 4,
	ECompassDirection_MAX          = 5,
};

enum class EPSPlatform : uint8
{
	PS4                            = 0,
	PS5                            = 1,
	EPSPlatform_MAX                = 2,
};

enum class EXboxPlatform : uint8
{
	XBONE                          = 0,
	XSX                            = 1,
	EXboxPlatform_MAX              = 2,
};

enum class EPlatformFamily : uint8
{
	XBOX                           = 0,
	PLAYSTATION                    = 1,
	EPlatformFamily_MAX            = 2,
};

enum class EDTWidgetType : uint8
{
	Damage                         = 0,
	Healing                        = 1,
	Nutrient_Protein               = 2,
	Nutrient_Fat                   = 3,
	Nutrient_Mineral               = 4,
	CriticalDamage                 = 5,
	Evade                          = 6,
	EDTWidgetType_MAX              = 7,
};

enum class EEnemyWidgetType : uint8
{
	HUMAN                          = 0,
	BOAT                           = 1,
	SCHOOL                         = 2,
	WILDLIFE                       = 3,
	OTHER                          = 4,
	EEnemyWidgetType_MAX           = 5,
};

enum class EMenuPanelIndex : uint8
{
	MAP_INDEX                      = 0,
	LOG_INDEX                      = 1,
	INFAMY_INDEX                   = 2,
	INVENTORY_INDEX                = 3,
	EMenuPanelIndex_MAX            = 4,
};

enum class ELevelProgressWidgetState : uint8
{
	HIDDEN                         = 0,
	FADE_IN                        = 1,
	IDLE                           = 2,
	FADE_OUT                       = 3,
	ELevelProgressWidgetState_MAX  = 4,
};

enum class ESaveTransferState : uint8
{
	STATE_ROOT                     = 0,
	STATE_CONFIRM                  = 1,
	STATE_SAVE_TRANSFER            = 2,
	STATE_DONE                     = 3,
	STATE_ERROR                    = 4,
	STATE_ERROR_DATA_NOT_FOUND     = 5,
	STATE_MAX                      = 6,
};

enum class EMarkerType : uint8
{
	None                           = 0,
	Player                         = 1,
	CustomWaypoint                 = 2,
	Landmark                       = 3,
	NutrientCache                  = 4,
	Terrorize                      = 5,
	PopulationControl              = 6,
	Hunter                         = 7,
	HunterLeader                   = 8,
	ApexPredator                   = 9,
	Boss                           = 10,
	Grotto                         = 11,
	Pete                           = 12,
	Hunt                           = 13,
	Undiscovered                   = 14,
	Collectable                    = 15,
	Landmark_Completed             = 16,
	NutrientCache_Completed        = 17,
	Terrorize_Completed            = 18,
	PopulationControl_Completed    = 19,
	ApexPredator_Completed         = 20,
	Hunt_Completed                 = 21,
	Collectable_Completed          = 22,
	Gates                          = 23,
	Grates                         = 24,
	Breaches                       = 25,
	Gates_Completed                = 26,
	Grates_Completed               = 27,
	Breaches_Completed             = 28,
	StoryEvent                     = 29,
	StoryEvent_Completed           = 30,
	DestroyBreakable               = 31,
	DestroyBreakable_Completed     = 32,
	FailureToCommunicate           = 33,
	FailureToCommunicate_Completed = 34,
	BountyTrigger                  = 35,
	BountyTrigger_Completed        = 36,
	TimeTrial                      = 37,
	TimeTrial_Completed            = 38,
	Teleporter                     = 39,
	TinFoilHat                     = 40,
	TinFoilHat_Completed           = 41,
	Goto                           = 42,
	Goto_Completed                 = 43,
	EMarkerType_MAX                = 44,
};

enum class EStatusChangeType : uint8
{
	Updated                        = 0,
	Completed                      = 1,
	Untracked                      = 2,
	EStatusChangeType_MAX          = 3,
};

enum class EAbilitySlot : uint8
{
	Top                            = 0,
	Right                          = 1,
	Left                           = 2,
	Bottom                         = 3,
	EAbilitySlot_MAX               = 4,
};

enum class ENutrientWidgetState : uint8
{
	HIDDEN                         = 0,
	FADE_IN                        = 1,
	IDLE                           = 2,
	FADE_OUT                       = 3,
	ENutrientWidgetState_MAX       = 4,
};

enum class ETutObjectiveStatus : uint8
{
	DEFAULT                        = 0,
	ACTIVE                         = 1,
	COMPLETE                       = 2,
	ETutObjectiveStatus_MAX        = 3,
};

enum class ETutorialPopupState : uint8
{
	TUT_STATE_OFF                  = 0,
	TUT_STATE_NUTRIENTS            = 1,
	TUT_STATE_EVOLVE               = 2,
	TUT_STATE_MAX                  = 3,
};

enum class EMarkerCompletedFilter : uint8
{
	CompletedOnly                  = 0,
	NonCompletedOnly               = 1,
	EMarkerCompletedFilter_MAX     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct ManeaterUI.RegionToastData
struct FRegionToastData
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldRegion                      Region;                                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1053[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RegionName;                                        // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                            RegionImage;                                       // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstTime;                                        // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1054[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RegionProgress;                                    // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ManeaterUI.CompassDirection
struct FCompassDirection
{
public:
	class UCompassMarkerWidget*                  Widget;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DefaultPos;                                        // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECompassDirection                 Direction;                                         // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1057[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ManeaterUI.TrackedCompassActor
struct FTrackedCompassActor
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ManeaterUI.ME_StoryInfo
struct FME_StoryInfo
{
public:
	int32                                        StoryProgress;                                     // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1059[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StoryName;                                         // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ManeaterUI.MapSettings
struct FMapSettings
{
public:
	TMap<enum class EMarkerType, class UTexture2D*> IconLibrary;                                       // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UTexture2D>> MapBackgroundTexturesByLevel;                      // 0x50(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ManeaterUI.MapMarkerData
struct FMapMarkerData
{
public:
	class FText                                  MarkerName;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EMarkerType                       MarkerType;                                        // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Position;                                          // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             IconOverride;                                      // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ManeaterUI.RegionData
struct FRegionData
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RegionName;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            RegionIcon;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegionCompletionPercentage;                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandmarkCompletionPercentage;                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LandmarkProgressText;                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        TerrorizeCompletionPercentage;                     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PopControlCompletionPercentage;                    // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CacheCompletionPercentage;                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CacheProgressText;                                 // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ApexCompletionPercentage;                          // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HuntCompletionPercentage;                          // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollectionCompletionPercentage;                    // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CollectionProgressText;                            // 0x80(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        TinFoilHatCompletionPercentage;                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1060[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TinFoilHatProgressText;                            // 0xA0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMapMarkerData>                MapMarkerData;                                     // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_PlayerObjective*>           PlayerObjectives;                                  // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandmarkSubObject>            Landmarks;                                         // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_Grotto>             Grotto;                                            // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionCol2DArray                     CollisionData;                                     // 0xF0(0x18)(NativeAccessSpecifierPublic)
	bool                                         bIsRegionPoisoned;                                 // 0x108(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1062[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ManeaterUI.ResolutionValue
struct FResolutionValue
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ManeaterUI.TutorialEntry
struct FTutorialEntry
{
public:
	uint8                                        Pad_1063[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


