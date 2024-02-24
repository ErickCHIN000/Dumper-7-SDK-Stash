#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GameInstanceHUDInterface.GameInstanceHUDInterface_C
class IGameInstanceHUDInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameInstanceHUDInterface_C* GetDefaultObj();

	void StormMode_SetGiveFullHealth(bool Give_);
	bool StormMode_GetGiveFullHealth();
	void StormMode_UpdateLastSaveSlotIndex(int32 Index);
	void StormMode_GetLastSaveSlotIndex(int32* Index);
	bool TwitchDrop_HasAnySkin();
	bool TwitchDrop_CheckIfAvailable(enum class Enum_Skins ID);
	void StormMode_Notify_RunicFam_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility);
	void StormMode_Notify_RunicFam_SetDuration(enum class Enum_Notify_StormMode_Duration Duration);
	void StormMode_Notify_Instinct_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility);
	void StormMode_Notify_Instinct_SetDuration(enum class Enum_Notify_StormMode_Duration Duration);
	void StormMode_Notify_RunicFam_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility);
	void StormMode_Notify_RunicFam_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration);
	void StormMode_Notify_Instinct_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility);
	void StormMode_Notify_Instinct_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration);
	void Util_SavePlayerSettings();
	int32 GetNewGamePlusLevel();
	void StormMode_SetDifficulty(int32 Difficulty);
	int32 StormMode_GetDifficulty();
	void StormMode_IsUnlockedForSlot(bool* Unlocked_);
	void StormMode_GetIsTesting(bool* Testing_, bool* TestEnemies_);
	void GetCurrentSaveSlot(int32* Slot);
	void StormMode_SetHasJustStartedRun_(bool HasStarted_);
	void StormMode_GetHasJustStartedRun_(bool* Return);
	void StormMode_GetEnteredState(bool* Slot_1, bool* Slot_2, bool* Slot_3);
	void GetDebugXboxSerieSOption(bool* Debug);
	void GetXboxSType(enum class Enum_XboxS_Type* Type);
	void SetXboxSType(enum class Enum_XboxS_Type Type);
	void StormMode_SetHasEnteredOnce(bool HasEntered);
	void StormMode_GetHasEnteredOnce(bool* HasEnteredOnce, struct FStruct_IsStormMode* SlotsData);
	void SetHapticFeedback_Intensity(float Intensity);
	void GetHapticFeedback_Intensity(float* Intensity);
	void SetDualSenseAudio_Enabled(bool Enabled);
	void GetDualSenseAudio_Enabled(bool* Enabled);
	void GetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled* EnableType);
	void SetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled EnableType);
	void DebugDualSense2DAudio(class USoundBase* Sound);
	bool GetDebugDualSenseAudio();
	void StormMode_Deactivate();
	void StormMode_Activate();
	void StormModeContentIsEnabled(bool* Enabled_);
	bool StormModeIsActive();
	void SetHideSacredGland(bool Hidden_);
	void GetHideSacredGland(bool* Hidden_);
	void SetHideTarnishedSeal(bool Hidden_);
	void GetHideTarnishedSeal(bool* Hidden_);
	void SetUIScale(enum class Enum_HUD_Size Scale);
	enum class Enum_HUD_Size GetUIScale();
	void SetRadialBlur(bool Enabled);
	bool GetRadialBlur();
	void SetCutsceneAspectRatio(bool Constrained);
	bool GetCutsceneAspectRatio();
	bool GetSaveRestoreEnabled();
	void GetPhotoModeEnabled(bool* Enabled);
	void GetFoundlingMenuEnabled(bool* Enabled);
	bool GetSeasonalContentButton();
	void SetSeasonalContent(bool ReturnValue);
	bool GetSeasonalContent();
	bool GetMusicDLCEnabled();
	void SetBossSoundtrackType(enum class Enum_BossSoundtrackType Soundtrack);
	void GetBossSoundtrackType(enum class Enum_BossSoundtrackType* Soundtrack);
	bool IsLoadingScreenActive();
	bool GetGorfGiftsEnabled();
	void SetBallistazookaOpacity(float Opacity);
	void GetBallistazookaOpacity(float* Opacity);
	void SetWeaponNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void SetWeaponNotify_Duration(enum class Enum_NotifyDuration Duration);
	void GetWeaponNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void GetWeaponNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void SetShellNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void SetShellNotify_Duration(enum class Enum_NotifyDuration Duration);
	void GetShellNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void GetShellNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void SetItemNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void GetItemNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void SetItemNotify_Duration(enum class Enum_NotifyDuration Duration);
	void GetItemNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void GetAspectRatioConstraint(int32* Index);
	void SetAspectRatioConstraint(int32 Index);
	void SetForceFeedbackScale(float Scale);
	void GetForceFeedbackScale(float* Scale);
	void SetCameraShakeScale(float Scale);
	void GetCameraShakeScale(float* Scale);
	void SetHoldToDismiss(bool Hold);
	void GetHoldToDismiss(bool* Hold);
	void SetDamageNumbers(bool Show);
	void GetDamageNumbers(bool* Show);
	void SetHUDScale(enum class Enum_HUD_Size Size);
	void GetHUDScale(enum class Enum_HUD_Size* Size);
	void SetEnemyHPOpa(enum class Enum_EnemyHPOpacity Opacity);
	void GetEnemyHPOpa(enum class Enum_EnemyHPOpacity* Opacity);
	void SetEnemyHPVis(enum class Enum_EnemyHPVisibility Visiiblity);
	void GetEnemyHPVis(enum class Enum_EnemyHPVisibility* Visibility);
	void GetCurrentFloor(int32* CurrentFloor);
};

}


