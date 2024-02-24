#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormModeMenu.BPI_StormModeMenu_C
class IBPI_StormModeMenu_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormModeMenu_C* GetDefaultObj();

	void GetSelectedCharacter(enum class EArmorTypes* Character);
	void NavSpecialButton();
	void GetVerticalIndex(int32* Index);
	void OnButtonHovered(class UUserWidget* Widget);
	void OnRiposteSelected(enum class ERiposteTypes Riposte);
	void OnRiposteHighlighted(enum class ERiposteTypes Riposte);
	void SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState);
	void OnWeaponSelected(enum class EComboTypes Weapon);
	void OnSettingConfirmed(int32 Value);
	void OnCharacterSelected(enum class EArmorTypes Character);
	void SetSeedManager(class ABP_SeedManager_C* SeedManager);
	void SetParentWidget(class UWidget* Widget);
	void OnClose();
	void OnOpen();
	void NavBack();
	void NavConfirm();
	void NavDown();
	void NavUp();
	void NavRight();
	void OnWeaponHighlighted(enum class EComboTypes Weapon);
	void OnCharacterHighlighted(enum class EArmorTypes Character);
	void NavLeft();
};

}


