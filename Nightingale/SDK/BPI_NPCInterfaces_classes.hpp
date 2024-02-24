#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCInterfaces.BPI_NPCInterfaces_C
class IBPI_NPCInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCInterfaces_C* GetDefaultObj();

	void GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface);
	void GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface);
	void GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface);
	void GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface);
};

}


