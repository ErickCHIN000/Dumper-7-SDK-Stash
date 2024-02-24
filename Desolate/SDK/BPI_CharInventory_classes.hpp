#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CharInventory.BPI_CharInventory_C
class IBPI_CharInventory_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CharInventory_C* GetDefaultObj();

	void BPI_Get_Character_UI(TScriptInterface<class ICharacterUIInterface_C>* CharacterUI);
	void BPI_Get_External_Trade_Component(class USHTradeComponent** TradeComponent);
	void BPI_Open_NPC(class ABasePeacefulAICharacter_C* NPC);
	void BPI_Open_Trade(class USHTradeComponent* TradeComponent);
	void GetHudWidget(TScriptInterface<class IPlayerHUDInterface_C>* HUDInterface);
	void BPI_Get_Armor_Inventory(class ASHInventory** Inventory);
	void BPI_Get_Quest_Diary(class USHQuestDiaryComponent** Diary);
	void BPI_Get_Weapon_Inventory(class ASHInventory** Inventory);
	void BPI_Get_Inventory(class ASHInventory** Inventory);
	void BPI_Get_External_Inventory(class ASHInventory** Inventory);
	void BPI_Open_External_Inventory(class ASHInventory* Inventory);
	void BPI_Close_HUDInventory();
};

}


