#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCDialogue.BPI_NPCDialogue_C
class IBPI_NPCDialogue_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCDialogue_C* GetDefaultObj();

	void SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success);
	void SetDialogue(class UDialogue* Dialogue, bool* Success);
	void SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success);
	void GetAssociatedEncounter(class AEncounterBase** Associated_Encounter);
	void ShowMerchant(bool* bSuccess);
	void RestorePlayer(bool* bSuccess);
	void CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess);
	void RemoveMenus(bool* bSuccess);
	void SetNPCCamera(class AController* Controller, bool* bSuccess);
};

}


