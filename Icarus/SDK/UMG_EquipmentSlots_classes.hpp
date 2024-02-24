#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_EquipmentSlots.UMG_EquipmentSlots_C
class UUMG_EquipmentSlots_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_InventoryItem_C*                  Equipment;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EquipmentSlot;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SlotText;                                          // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_EquipmentSlots_C* GetDefaultObj();

	void UpdateInventoryItem();
	void Initialize(class UInventory* Inventory, int32 Location);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_EquipmentSlots(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


