#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GamePlayPCInterface.GamePlayPCInterface_C
class IGamePlayPCInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGamePlayPCInterface_C* GetDefaultObj();

	bool IsSkinApplied(enum class Enum_Skins Skin);
	bool StormMode_HasLoreEntry(class FName ID);
	void StormMode_UnlockLoreEntry(class FName ID);
	bool GetHideUI();
	void GetMainLevelFromSave_StormMode(class FName* Level);
	void GetMainLevelFromSave(class FName* Level);
	void SetInputBlocked(bool bLock);
	bool GetIsInputBlocked();
	void InventoryUtil_IsTutorialUnlocked_(class FName Tut, bool* Unlocked_);
	bool GetIsInBossFight();
	void GetHadernAbilityTextFromIndex(int32 Index, bool* InvalidIndex, class FText* Text);
	void GetHadernAbilityTextFromSlot(enum class Enum_HadernSkills HadernSlot, class FText* Text);
	void GetCurrentHadernAbilityForSlot(enum class Enum_HadernSkills HadernSlot, class FName* AbilityID);
	void SetNewGamePlusLevel(int32 Level);
	void ResetCheckpointsSave();
	void StormMode_GetCurrentMainLevelFromSave(class FName* Level);
	bool GetEquipmentMenuType(enum class Enum_EquipmentMenuType* Menu);
	bool CanOpenPhotoModeFromPauseMenu();
	void ResetPhotoModeCamera();
	bool GetIsInCutscene();
	void SetShellDyesLockState(const struct FStruct_ShellsDyes_LockState& LockState);
	void GetShellDyesLockState(struct FStruct_ShellsDyes_LockState* LockState);
	void CallPhotoModeClose();
	bool GetHasRenouncedShell();
	void SetShellDyes(const struct FStruct_ShellDyes& Dyes);
	void GetShellDyes(struct FStruct_ShellDyes* Dyes);
	void CallPhotoModeEnter();
	void GetIsInPhotoMode(bool* PhotoMode_);
	void UpdateBallistazookaOpacity(float Opacity);
	void UpdateAspectRationConstraint(int32 Index);
	void UI_DebugLineEntry(class AActor* Actor, const class FString& DebugLine);
	void SetForceFeedback(float Scale);
	void SetCameraShake(float Scale);
	void OnWeaponChange(int32 Index, bool IsChangingWeaponMode);
	void UI_EscapeMenuPressed(bool Closed);
	void GameplayPC_IsInTutorial(bool* IsInTutorial);
	void UI_PauseMenuResume();
	void InventoryUtil_IsUpgradeUnlocked(class FName UnlockID, bool* Unlocked);
	enum class Enum_InventoryItem_CanUse InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm);
	void EquippedShell(class FText ShellName, class FText ShellTagline);
	void OnPairedAnimFinish_WhilePlayerDead();
	void PlayerControllerUtils_SetHadernDefeatCounter(int32 NewCounter);
	void PlayerControllerUtils_SetGhostShellDeteriorationCounter(int32 Count);
	void InventoryUtil_LockUpgrade(class FName ItemName);
	void InventoryUtil_UnlockUpgrade(class FName ItemName);
	void PlayerControllerUtils_SetMaxHP(int32 SetMaxHP);
	void InventoryUtil_SwitchArmor(int32 ArmorID);
	void InventoryUtil_LockWeaponByID(int32 ID);
	void InventoryUtil_UnlockWeaponByID(int32 ID);
	void InventoryUtil_SetInventoryItemByID(int32 WeaponID, int32 Slot, bool IsChangingWeaponMode);
	void Util_SaveGame(bool bShouldRestorePlayerTransformOnLoad);
	void UI_OnInteract();
	void UI_GetContainerItem(int32 ContainerSlot, struct FInventoryItem* InventoryItem);
	void UI_GetInventoryItemFromSlot(int32 InventorySlot, struct FInventoryItem* InventoryItem);
	void UI_OpenStartPortals();
	void UI_GetWasInputKeyJustPressed(bool* WasKeyPressed);
	void UI_GetNumPlayerDeaths(int32* TotalPlayerDeaths);
	void UI_SetUIMode(bool IsUIMode);
	void UI_SetDialogMode(bool IsDialogMode);
};

}


