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

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetGiveFullHealth
struct IGameInstanceHUDInterface_C_StormMode_SetGiveFullHealth_Params
{
public:
	bool                                         Give_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetGiveFullHealth
struct IGameInstanceHUDInterface_C_StormMode_GetGiveFullHealth_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_UpdateLastSaveSlotIndex
struct IGameInstanceHUDInterface_C_StormMode_UpdateLastSaveSlotIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetLastSaveSlotIndex
struct IGameInstanceHUDInterface_C_StormMode_GetLastSaveSlotIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.TwitchDrop_HasAnySkin
struct IGameInstanceHUDInterface_C_TwitchDrop_HasAnySkin_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.TwitchDrop_CheckIfAvailable
struct IGameInstanceHUDInterface_C_TwitchDrop_CheckIfAvailable_Params
{
public:
	enum class Enum_Skins                        ID;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_SetVisibility
struct IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_SetVisibility_Params
{
public:
	enum class Enum_Notify_StormMode_Visibility  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_SetDuration
struct IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_SetDuration_Params
{
public:
	enum class Enum_Notify_StormMode_Duration    Duration;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_SetVisibility
struct IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_SetVisibility_Params
{
public:
	enum class Enum_Notify_StormMode_Visibility  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_SetDuration
struct IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_SetDuration_Params
{
public:
	enum class Enum_Notify_StormMode_Duration    Duration;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_GetVisibility
struct IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_GetVisibility_Params
{
public:
	enum class Enum_Notify_StormMode_Visibility  Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_GetDuration
struct IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_GetDuration_Params
{
public:
	enum class Enum_Notify_StormMode_Duration    Duration;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_GetVisibility
struct IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_GetVisibility_Params
{
public:
	enum class Enum_Notify_StormMode_Visibility  Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_GetDuration
struct IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_GetDuration_Params
{
public:
	enum class Enum_Notify_StormMode_Duration    Duration;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetNewGamePlusLevel
struct IGameInstanceHUDInterface_C_GetNewGamePlusLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetDifficulty
struct IGameInstanceHUDInterface_C_StormMode_SetDifficulty_Params
{
public:
	int32                                        Difficulty;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetDifficulty
struct IGameInstanceHUDInterface_C_StormMode_GetDifficulty_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_IsUnlockedForSlot
struct IGameInstanceHUDInterface_C_StormMode_IsUnlockedForSlot_Params
{
public:
	bool                                         Unlocked_;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetIsTesting
struct IGameInstanceHUDInterface_C_StormMode_GetIsTesting_Params
{
public:
	bool                                         Testing_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TestEnemies_;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCurrentSaveSlot
struct IGameInstanceHUDInterface_C_GetCurrentSaveSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetHasJustStartedRun?
struct IGameInstanceHUDInterface_C_StormMode_SetHasJustStartedRun__Params
{
public:
	bool                                         HasStarted_;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetHasJustStartedRun?
struct IGameInstanceHUDInterface_C_StormMode_GetHasJustStartedRun__Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetEnteredState
struct IGameInstanceHUDInterface_C_StormMode_GetEnteredState_Params
{
public:
	bool                                         Slot_1;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Slot_2;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Slot_3;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDebugXboxSerieSOption
struct IGameInstanceHUDInterface_C_GetDebugXboxSerieSOption_Params
{
public:
	bool                                         Debug;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetXboxSType
struct IGameInstanceHUDInterface_C_GetXboxSType_Params
{
public:
	enum class Enum_XboxS_Type                   Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetXboxSType
struct IGameInstanceHUDInterface_C_SetXboxSType_Params
{
public:
	enum class Enum_XboxS_Type                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetHasEnteredOnce
struct IGameInstanceHUDInterface_C_StormMode_SetHasEnteredOnce_Params
{
public:
	bool                                         HasEntered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetHasEnteredOnce
struct IGameInstanceHUDInterface_C_StormMode_GetHasEnteredOnce_Params
{
public:
	bool                                         HasEnteredOnce;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStruct_IsStormMode                   SlotsData;                                         // 0x1(0x3)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHapticFeedback_Intensity
struct IGameInstanceHUDInterface_C_SetHapticFeedback_Intensity_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHapticFeedback_Intensity
struct IGameInstanceHUDInterface_C_GetHapticFeedback_Intensity_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetDualSenseAudio_Enabled
struct IGameInstanceHUDInterface_C_SetDualSenseAudio_Enabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDualSenseAudio_Enabled
struct IGameInstanceHUDInterface_C_GetDualSenseAudio_Enabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetAdaptiveTriggersEnabled
struct IGameInstanceHUDInterface_C_GetAdaptiveTriggersEnabled_Params
{
public:
	enum class Enum_AdaptiveTriggers_Enabled     EnableType;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetAdaptiveTriggersEnabled
struct IGameInstanceHUDInterface_C_SetAdaptiveTriggersEnabled_Params
{
public:
	enum class Enum_AdaptiveTriggers_Enabled     EnableType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.DebugDualSense2DAudio
struct IGameInstanceHUDInterface_C_DebugDualSense2DAudio_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDebugDualSenseAudio
struct IGameInstanceHUDInterface_C_GetDebugDualSenseAudio_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormModeContentIsEnabled
struct IGameInstanceHUDInterface_C_StormModeContentIsEnabled_Params
{
public:
	bool                                         Enabled_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormModeIsActive
struct IGameInstanceHUDInterface_C_StormModeIsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHideSacredGland
struct IGameInstanceHUDInterface_C_SetHideSacredGland_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHideSacredGland
struct IGameInstanceHUDInterface_C_GetHideSacredGland_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHideTarnishedSeal
struct IGameInstanceHUDInterface_C_SetHideTarnishedSeal_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHideTarnishedSeal
struct IGameInstanceHUDInterface_C_GetHideTarnishedSeal_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetUIScale
struct IGameInstanceHUDInterface_C_SetUIScale_Params
{
public:
	enum class Enum_HUD_Size                     Scale;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetUIScale
struct IGameInstanceHUDInterface_C_GetUIScale_Params
{
public:
	enum class Enum_HUD_Size                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetRadialBlur
struct IGameInstanceHUDInterface_C_SetRadialBlur_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetRadialBlur
struct IGameInstanceHUDInterface_C_GetRadialBlur_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetCutsceneAspectRatio
struct IGameInstanceHUDInterface_C_SetCutsceneAspectRatio_Params
{
public:
	bool                                         Constrained;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCutsceneAspectRatio
struct IGameInstanceHUDInterface_C_GetCutsceneAspectRatio_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSaveRestoreEnabled
struct IGameInstanceHUDInterface_C_GetSaveRestoreEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetPhotoModeEnabled
struct IGameInstanceHUDInterface_C_GetPhotoModeEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetFoundlingMenuEnabled
struct IGameInstanceHUDInterface_C_GetFoundlingMenuEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSeasonalContentButton
struct IGameInstanceHUDInterface_C_GetSeasonalContentButton_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetSeasonalContent
struct IGameInstanceHUDInterface_C_SetSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSeasonalContent
struct IGameInstanceHUDInterface_C_GetSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetMusicDLCEnabled
struct IGameInstanceHUDInterface_C_GetMusicDLCEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetBossSoundtrackType
struct IGameInstanceHUDInterface_C_SetBossSoundtrackType_Params
{
public:
	enum class Enum_BossSoundtrackType           Soundtrack;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetBossSoundtrackType
struct IGameInstanceHUDInterface_C_GetBossSoundtrackType_Params
{
public:
	enum class Enum_BossSoundtrackType           Soundtrack;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.IsLoadingScreenActive
struct IGameInstanceHUDInterface_C_IsLoadingScreenActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetGorfGiftsEnabled
struct IGameInstanceHUDInterface_C_GetGorfGiftsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetBallistazookaOpacity
struct IGameInstanceHUDInterface_C_SetBallistazookaOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetBallistazookaOpacity
struct IGameInstanceHUDInterface_C_GetBallistazookaOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetWeaponNotify_Visibility
struct IGameInstanceHUDInterface_C_SetWeaponNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetWeaponNotify_Duration
struct IGameInstanceHUDInterface_C_SetWeaponNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetWeaponNotify_Visibility
struct IGameInstanceHUDInterface_C_GetWeaponNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetWeaponNotify_Duration
struct IGameInstanceHUDInterface_C_GetWeaponNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetShellNotify_Visibility
struct IGameInstanceHUDInterface_C_SetShellNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetShellNotify_Duration
struct IGameInstanceHUDInterface_C_SetShellNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetShellNotify_Visibility
struct IGameInstanceHUDInterface_C_GetShellNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetShellNotify_Duration
struct IGameInstanceHUDInterface_C_GetShellNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetItemNotify_Visibility
struct IGameInstanceHUDInterface_C_SetItemNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetItemNotify_Visibility
struct IGameInstanceHUDInterface_C_GetItemNotify_Visibility_Params
{
public:
	enum class Enum_NotifyVisibility             Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetItemNotify_Duration
struct IGameInstanceHUDInterface_C_SetItemNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetItemNotify_Duration
struct IGameInstanceHUDInterface_C_GetItemNotify_Duration_Params
{
public:
	enum class Enum_NotifyDuration               Duration;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetAspectRatioConstraint
struct IGameInstanceHUDInterface_C_GetAspectRatioConstraint_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetAspectRatioConstraint
struct IGameInstanceHUDInterface_C_SetAspectRatioConstraint_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetForceFeedbackScale
struct IGameInstanceHUDInterface_C_SetForceFeedbackScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetForceFeedbackScale
struct IGameInstanceHUDInterface_C_GetForceFeedbackScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetCameraShakeScale
struct IGameInstanceHUDInterface_C_SetCameraShakeScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCameraShakeScale
struct IGameInstanceHUDInterface_C_GetCameraShakeScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHoldToDismiss
struct IGameInstanceHUDInterface_C_SetHoldToDismiss_Params
{
public:
	bool                                         Hold;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHoldToDismiss
struct IGameInstanceHUDInterface_C_GetHoldToDismiss_Params
{
public:
	bool                                         Hold;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetDamageNumbers
struct IGameInstanceHUDInterface_C_SetDamageNumbers_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDamageNumbers
struct IGameInstanceHUDInterface_C_GetDamageNumbers_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHUDScale
struct IGameInstanceHUDInterface_C_SetHUDScale_Params
{
public:
	enum class Enum_HUD_Size                     Size;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHUDScale
struct IGameInstanceHUDInterface_C_GetHUDScale_Params
{
public:
	enum class Enum_HUD_Size                     Size;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetEnemyHPOpa
struct IGameInstanceHUDInterface_C_SetEnemyHPOpa_Params
{
public:
	enum class Enum_EnemyHPOpacity               Opacity;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetEnemyHPOpa
struct IGameInstanceHUDInterface_C_GetEnemyHPOpa_Params
{
public:
	enum class Enum_EnemyHPOpacity               Opacity;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetEnemyHPVis
struct IGameInstanceHUDInterface_C_SetEnemyHPVis_Params
{
public:
	enum class Enum_EnemyHPVisibility            Visiiblity;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetEnemyHPVis
struct IGameInstanceHUDInterface_C_GetEnemyHPVis_Params
{
public:
	enum class Enum_EnemyHPVisibility            Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCurrentFloor
struct IGameInstanceHUDInterface_C_GetCurrentFloor_Params
{
public:
	int32                                        CurrentFloor;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


