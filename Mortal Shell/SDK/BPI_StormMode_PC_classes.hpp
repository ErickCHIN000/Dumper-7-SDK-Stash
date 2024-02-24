#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormMode_PC.BPI_StormMode_PC_C
class IBPI_StormMode_PC_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormMode_PC_C* GetDefaultObj();

	void StormMode_GetEquippedLute(class FName* Lute);
	void StormMode_UpdateEquippedLute(class FName Lute);
	void StormMode_GetCurrentUpgradeForSlot(enum class Enum_RuneSlots_IDs Slot, class FName* ID);
	void StormMode_GetEndingProgress(class FName ID, float* Progress);
	void StormMode_UpdateSelectedWeapon(enum class EComboTypes Weapon);
	void StormMode_GetInitialProgress(class FName ID, float* Progress);
	void StormMode_CompleteCycleAndSave();
	void StormMode_ShowCycleCompletedScreen();
	bool StormMode_IsSisterDialogue();
	void StormMode_DebugDialogues(bool* Debug_);
	void StormMode_PlaySister3ChoiceWindowAudio(class USoundBase* Sound, class UAudioComponent** Audio);
	void StormMode_ShowEndWidget();
	void StormMode_FinalBossAsCurrentCheckpoint();
	void StormMode_DebugConcurrentEnemy(bool Remove);
	void StormMode_GetCurrentShadeForCharacter(enum class EArmorTypes Character, enum class Enum_ShellDye* Shade);
	void StormMode_AddShadeAbility();
	void StormMode_AskForRandomWeaponUpgrade(bool* GrantUpgrade_, struct FStruct_Rune* Upgrade);
	void StormMode_GetUnlockedItems(TArray<class FName>* UnlockedItems);
	void UpdateMilestonesOnInstinctGained();
	void SetMilestoneProgressIfLess(class FName ID, int32 NewMinVal);
	void IncreaseMilestoneProgress(class FName ID);
	void IsMilestoneUnlocked(class FName ID, bool* bUnlocked, int32* Current, float* Percent, int32* Tier, TArray<int32>* TiersX, bool* HasTier);
	void StormMode_ResetRunData();
	void StormMode_OnBeaten();
	void StormMode_RemoveItemWithNotify(class FName ID, int32 AmountToRemove);
	void StormMode_UIVisibility(bool Show, bool Instant);
	void StormMode_CheckpointOnGlandTaken();
	void StormMode_CathedralAsCurrentCheckpoint();
	void StormMode_CryptAsCurrentCheckpoint();
	void StormMode_FireLevelAsCurrentCheckpoint();
	void StormMode_TeleportToChalice();
	void StormMode_TeleportToNewArea(class FName ID);
	bool StormMode_StartingRiposteNotDefault_(class FName* StartingRiposte);
	void StormMode_GetNamedInts(TMap<class FName, int32>* NamedInts);
	void StormMode_DisableWeaponNotify();
	void StormMode_AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void StormMode_AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void StormMode_UpdateCheckpointTransform(const struct FTransform& Checkpoint);
	void StormMode_CheckForGlands(bool* HasAny_);
	void StormMode_GetRunPlaytime(struct FDateTime* RunPlaytime);
	void StormMode_ShowRuneNotify(const struct FStruct_Rune& Rune, bool IsBonusRune);
	void StormMode_AskForASeed(int32* Seed);
	void StormModeRunStartOrResume();
	void StormMode_GetSelectedShell(bool* HasSelected, enum class EArmorTypes* Shell);
	void StormMode_SetSelectedShell(enum class EArmorTypes Shell);
	void StormMode_ResetOnEndCredits();
	void StormMode_SetSeeds(const struct FStruct_StormModeSeeds& Seeds);
	void StormMode_GetSeeds(struct FStruct_StormModeSeeds* Seeds);
	void StormMode_SetGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData GlandData);
	void StormMode_GetCurrentGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData* Gland);
	void StormMode_SetFallgrimAsCurrentCheckpoint();
	void SetStormModeEntranceState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState EntranceState);
	bool StormMode_ShouldUnlockChalice_();
	void StormMode_IncrementAreaProgress();
	bool GetStormMode_ShouldOpenArea_();
	void GetStormModeAreaState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState* CurrentState);
	void GetStormModeAllAreasState(TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState>* AreasState);
	void SetStormModeProgress(enum class Enum_StormModeProgress Progress);
	void GetStormModeProgress(enum class Enum_StormModeProgress* Progress);
	void AddNewRune(const struct FStruct_Rune& Rune, bool ShowNotify_, bool IsBonusRune_, bool ForceHealEffect_);
};

}


