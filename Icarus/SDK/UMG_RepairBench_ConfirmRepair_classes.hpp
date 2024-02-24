#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x31C - 0x260)
// WidgetBlueprintGeneratedClass UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C
class UUMG_RepairBench_ConfirmRepair_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              InventoryOverlay_ConsumedResources;                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InventoryOverlay_MissingResources;                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InventoryOverlay_NoRepair;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InventoryOverlay_ToRepair;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar_Consumed;                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar_Missing;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar_NoRepair;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar_ToRepair;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_RepairableItemList_C*   UMG_Inventory_NonRepairableItemList;               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_RepairableItemList_C*   UMG_Inventory_RepairableItemList;                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_RequiredResources;                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FRepairableItem>               ItemsToRepair;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FRepairableItem>               ItemsNotRepairable;                                // 0x2E8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FQueueItem>                    RequiredResources;                                 // 0x2F8(0x10)(Edit, BlueprintVisible)
	TArray<struct FQueueItem>                    MissingResources;                                  // 0x308(0x10)(Edit, BlueprintVisible)
	int32                                        X;                                                 // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RepairBench_ConfirmRepair_C* GetDefaultObj();

	void Initialise(class AActor* LinkedActor, TArray<struct FRepairableItem>& ItemsToRepair, TArray<struct FRepairableItem>& ItemsNotRepairable, TArray<struct FQueueItem>& RequiredResources, TArray<struct FQueueItem>& MissingResources);
	void Construct();
	void ExecuteUbergraph_UMG_RepairBench_ConfirmRepair(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUMG_RepairItemResource_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_LinkedActor, TArray<struct FRepairableItem>& K2Node_CustomEvent_ItemsToRepair, TArray<struct FRepairableItem>& K2Node_CustomEvent_ItemsNotRepairable, TArray<struct FQueueItem>& K2Node_CustomEvent_RequiredResources, TArray<struct FQueueItem>& K2Node_CustomEvent_MissingResources, const struct FQueueItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_GetQueueItemDetails_Item, int32 CallFunc_GetQueueItemDetails_Count, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


