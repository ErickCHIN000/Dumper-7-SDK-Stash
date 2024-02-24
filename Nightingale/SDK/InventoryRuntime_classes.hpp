#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x80 - 0x70)
// Class InventoryRuntime.ConditionInventoryEntryUpdate
class UConditionInventoryEntryUpdate : public UConditionBehaviour
{
public:
	uint8                                        Pad_C22[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionInventoryEntryUpdate* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class InventoryRuntime.ConditionInventoryEntryDepleted
class UConditionInventoryEntryDepleted : public UConditionInventoryEntryUpdate
{
public:

	static class UClass* StaticClass();
	static class UConditionInventoryEntryDepleted* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class InventoryRuntime.ConditionInventoryEntryRepaired
class UConditionInventoryEntryRepaired : public UConditionInventoryEntryUpdate
{
public:

	static class UClass* StaticClass();
	static class UConditionInventoryEntryRepaired* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InventoryRuntime.InventoryEntryUpdateEventEmitter
class IInventoryEntryUpdateEventEmitter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInventoryEntryUpdateEventEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InventoryRuntime.ItemContainer
class IItemContainer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IItemContainer* GetDefaultObj();

	bool UpdateItem(struct FInventoryEntry& Entry);
	bool TransferItemToContainer(TScriptInterface<class IItemContainer>& NewContainer, struct FInventoryEntryIdAndQuantity& InstanceToTransfer, int32* AmountTransferred);
	bool TransferItemsToContainer(TScriptInterface<class IItemContainer>& NewContainer, TArray<struct FInventoryEntryIdAndQuantity>& InstancesToTransfer, TArray<struct FInventoryEntryIdAndQuantity>* AmountTransferred);
	bool TransferAllItemsToContainer(TScriptInterface<class IItemContainer>& NewContainer);
	int32 RemoveItemsWithReference(struct FItemDataReference& ItemReference, int32 QuantityToRemove);
	bool RemoveItem(struct FGuid& InstanceID, int32 Amount);
	bool RemoveAllItemsWithReference(struct FItemDataReference& ItemReference);
	bool RemoveAllItems();
	void RegisterItemRemovedDelegate(FDelegateProperty_& Delegate);
	void RegisterItemAddedDelegate(FDelegateProperty_& Delegate);
	int32 GetNumberItemEntriesWithReference(struct FItemDataReference& ItemReference);
	int32 GetNumberItemEntries();
	bool GetItem(struct FGuid& InstanceID, struct FInventoryEntry* Entry);
	uint8 GetContainerId();
	struct FItemContainerHandle GetContainerHandle();
	struct FContainerCapacityData GetContainerCapacityData();
	void GetAllItems(TArray<struct FInventoryEntry>* Entries);
	bool FindFirstItemByItemId(struct FItemDataReference& ItemId, struct FInventoryEntry* Entry);
	TArray<struct FInventoryEntry> FindAllItemsWithReference(struct FItemDataReference& ItemReference);
	void DeRegisterItemRemovedDelegate(FDelegateProperty_& Delegate);
	void DeRegisterItemAddedDelegate(FDelegateProperty_& Delegate);
	bool CanAddItem(struct FInventoryEntry& Entry);
	bool CanAddAnyItem(TArray<struct FInventoryEntry>& Entries);
	bool AddItem(struct FInventoryEntry& Entry, int32* Amount, TArray<struct FGuid>* ModifiedInstances, bool bIgnoreCapacity);
};

// 0x0 (0x28 - 0x28)
// Class InventoryRuntime.ItemContainerProvider
class IItemContainerProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IItemContainerProvider* GetDefaultObj();

	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	bool HasContainer(TScriptInterface<class IItemContainer>& Container);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle);
};

// 0x0 (0x28 - 0x28)
// Class InventoryRuntime.ItemContainerServiceLibrary
class UItemContainerServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemContainerServiceLibrary* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromHandle(struct FItemContainerHandle& Handle);
	bool EqualEqual_FItemContainerHandleFItemContainerHandle(struct FItemContainerHandle& A, struct FItemContainerHandle& B);
	bool AreItemsEquivalent(struct FInventoryEntry& A, struct FInventoryEntry& B);
};

}


