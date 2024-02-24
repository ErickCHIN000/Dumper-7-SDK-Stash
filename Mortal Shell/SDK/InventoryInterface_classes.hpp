#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InventoryInterface.InventoryInterface_C
class IInventoryInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInventoryInterface_C* GetDefaultObj();

	void ContainerLooted(bool* Success);
	void GetCanStoreItems(bool* CanStoreItems);
	void GetPlayersViewing(TArray<class APlayerState*>* PlayersViewing);
	void GetContainerInventory(class UInventoryComponent_C** InventoryComponent);
	void GetContainerProperties(class FText* Name, uint8* SlotsPerRow, bool* IsStorageContainer, int32* InventorySize);
};

}


