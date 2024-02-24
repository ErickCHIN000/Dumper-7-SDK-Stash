#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x4B0 - 0x470)
// BlueprintGeneratedClass ba_aa_Lootbox_00.ba_aa_Lootbox_00_C
class Aba_aa_Lootbox_00_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Cube;                                              // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FSt_LootItem>                  ItemPool;                                          // 0x488(0x10)(Edit, BlueprintVisible)
	int32                                        Item_Count;                                        // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSt_LootItem>                  GivenItemsMap;                                     // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Aba_aa_Lootbox_00_C* GetDefaultObj();

	void ActivateItem();
	void ExecuteUbergraph_ba_aa_Lootbox_00(int32 EntryPoint, TArray<float>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<int32>& Temp_int_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<int32>& Temp_int_Variable_3, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_4, int32 CallFunc_Array_Add_ReturnValue_1, const struct FSt_LootItem& CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FSt_LootSet& K2Node_MakeStruct_st_LootSet, int32 CallFunc_Array_Add_ReturnValue_2, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, const struct FSt_LootItem& CallFunc_Array_Get_Item_3, float CallFunc_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, TArray<float>& K2Node_MakeArray_Array_2, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_ItemEnumToNameID_Name, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, TArray<class FName>& CallFunc_GetRandomUpgrades_RandomUpgrades, float CallFunc_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_4, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess);
};

}


