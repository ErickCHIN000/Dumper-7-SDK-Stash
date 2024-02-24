#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
class UInventoryComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FInventoryItem>                Inventory;                                         // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInventoryComponent_C* GetDefaultObj();

	void ReconstructLoadedItem(struct FInventoryItem& In, struct FInventoryItem* Out, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FInventoryItem& K2Node_MakeStruct_InventoryItem);
	void GetInventoryItems(TArray<struct FInventoryItem>* InventoryItems);
	void LoadInventoryItems(int32 InventorySize, TArray<struct FInventoryItem>& InventoryItems, bool* Success, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInventoryItem& Temp_struct_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, const struct FInventoryItem& CallFunc_ReconstructLoadedItem_Out, int32 Temp_int_Variable, bool CallFunc_SetInventoryItem_Success, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void DecreaseInventorySize(int32 Amount, bool* Success, const TArray<int32>& LocalAmountIndexes, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void IncreaseInventorySize(int32 Amount, bool* Success, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue);
	void GetInventoryItemCount(int32* ItemCount, int32 LocalItemCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetEmptyInventorySpace(int32 IndexToStartSearch, bool* Success, int32* Index, bool LocalSuccess, int32 LocalIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearInventoryItem(int32 InventorySlot, bool* Success, const struct FInventoryItem& Temp_struct_Variable);
	void SetInventoryItem(int32 InventorySlot, const struct FInventoryItem& InventoryItem, bool* Success);
	void GetInventoryItem(int32 InventorySlot, struct FInventoryItem* InventoryItem, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void InitInventory(int32 InventorySize, bool* Success, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue);
	void Server_InitInventory(int32 InventorySize);
	void ExecuteUbergraph_InventoryComponent(int32 EntryPoint, int32 K2Node_CustomEvent_InventorySize, bool CallFunc_InitInventory_Success);
};

}


