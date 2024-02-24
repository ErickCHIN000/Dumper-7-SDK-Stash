#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_EquippedItems.BPI_EquippedItems_C
class IBPI_EquippedItems_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_EquippedItems_C* GetDefaultObj();

	void GetItemConst(const struct FGameplayTag& ContextTag, class AEquippableItem** Weapon);
	void ConsumeItemProxy(class AActor* ItemProxyActor, bool* Success);
	void PickUpItemProxy(class AActor* ItemProxyActor, bool* Success);
	void WithdrawItemFromContainerByTag(TScriptInterface<class IItemContainer> ItemContainer, const struct FGameplayTag& GameplayTag, bool* Success);
	void UnequipEquippedItem(bool* Success);
	void CreateAndEquipItemFromEntry(const struct FInventoryEntry& Entry, bool* bSuccess);
	void CreateAndEquipItemFromItemID(const struct FItemDataReference& ItemId, bool* Success);
	void TransferItemToWorldItemContainerActor(class AActor* ToActor, class AEquippableItem* Item, bool* Success);
	void TransferItemFromWorldItemContainerActor(class AActor* FromActor, class AEquippableItem* Item, bool* Success);
	void GetItem(const struct FGameplayTag& ContextTag, class AEquippableItem** Weapon);
};

}


