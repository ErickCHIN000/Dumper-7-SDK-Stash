#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LoadoutRuntime.LoadoutEquipInterface
class ILoadoutEquipInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadoutEquipInterface* GetDefaultObj();

	class AItem* EquipItemInSpecificLoadoutSlot(struct FInventoryEntry& ItemEntry, struct FGameplayTag& Slot);
	void EquipItemInLoadoutSlot(struct FGuid& InstanceID);
	void ClearEquippedItemFromLoadoutSlot(struct FGameplayTag& Slot);
};

// 0x0 (0x28 - 0x28)
// Class LoadoutRuntime.LoadoutObservableInterface
class ILoadoutObservableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadoutObservableInterface* GetDefaultObj();

	void UnbindDelegate_OnEquippedItemChanged(FDelegateProperty_& Delegate);
	void BindDelegate_OnEquippedItemChanged(FDelegateProperty_& Delegate);
};

// 0x0 (0x28 - 0x28)
// Class LoadoutRuntime.LoadoutReadInterface
class ILoadoutReadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadoutReadInterface* GetDefaultObj();

	class AEquippableItem* GetOffhandEquippedItem();
	class AEquippableItem* GetItemInLoadoutSlot(struct FGameplayTag& Tag);
	class AEquippableItem* GetEquippedItem();
};

}


