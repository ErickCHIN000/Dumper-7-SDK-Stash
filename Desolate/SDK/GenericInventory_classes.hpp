#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// BlueprintGeneratedClass GenericInventory.GenericInventory_C
class AGenericInventory_C : public ASHInventory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Starting_Items;                                    // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class USHInventorySlot*>              HealSlots;                                         // 0x350(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USHInventorySlot*>              HungerSlots;                                       // 0x360(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USHInventorySlot*>              ThirstySlots;                                      // 0x370(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USHInventorySlot*>              StressSlots;                                       // 0x380(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USHInventorySlot*>              TempSlots;                                         // 0x390(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericInventory_C* GetDefaultObj();

	void ItemCanHealTemp(class USHInventoryPlaceholder* ItemPlaceholder, bool* Result, enum class E_MedicineType Temp_byte_Variable, bool Temp_bool_Variable, class UClass* K2Node_ClassDynamicCast_AsGeneric_Medicine, bool K2Node_ClassDynamicCast_bSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Select_Default);
	void GetTotalItemsCount(TArray<class USHInventorySlot*>& Slots, uint8* Result, uint8 TotalCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class USHInventorySlot* CallFunc_Array_Get_Item, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateSortedSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USHInventorySlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue, bool CallFunc_IsNotEmpty_ReturnValue, bool CallFunc_ItemCanHealTemp_Result, bool CallFunc_ItemCanHealStress_Result, bool CallFunc_ItemCanSatisfyThirsty_Result, bool CallFunc_ItemCanSatisfyHunger_Result, bool CallFunc_ItemCanHeal_Result);
	void ItemCanHealStress(class USHInventoryPlaceholder* ItemPlaceholder, bool* Result, class UClass* K2Node_ClassDynamicCast_AsGeneric_Medicine, bool K2Node_ClassDynamicCast_bSuccess);
	void ItemCanSatisfyThirsty(class USHInventoryPlaceholder* ItemPlaceholder, bool* Result, bool CallFunc_ClassIsChildOf_ReturnValue);
	void ItemCanSatisfyHunger(class USHInventoryPlaceholder* ItemPlaceholder, bool* Result, class UClass* K2Node_ClassDynamicCast_AsGeneric_Food, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void ItemCanHeal(class USHInventoryPlaceholder* ItemPlaceholder, bool* Result, enum class E_MedicineType Temp_byte_Variable, bool Temp_bool_Variable, class UClass* K2Node_ClassDynamicCast_AsGeneric_Medicine, bool K2Node_ClassDynamicCast_bSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Select_Default);
	void ShouldGiveItems(bool* Result);
	void OnRep_InventoryItems();
	void ReceiveBeginPlay();
	void OnContentChanged_Event_0(class AActor* Sender);
	void ExecuteUbergraph_GenericInventory(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldGiveItems_Result, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_Sender, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASHItem* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_AddItem_ReturnValue);
};

}


