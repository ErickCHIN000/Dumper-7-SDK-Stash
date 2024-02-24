#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2A4 - 0x230)
// WidgetBlueprintGeneratedClass UI_MerchantGrid.UI_MerchantGrid_C
class UUI_MerchantGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          RetainerBox_MerchantGrid;                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_MerchantGrid;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_Merchant;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_MerchantItemNew_C*>         MerchatGridItems;                                  // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class AUsable_Branching_NPC_C*               Trader;                                            // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 Merchant_Available_Items;                          // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 Merchant_Filtered_Items;                           // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<enum class EItemType>                 Filters;                                           // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUI_MerchantPanelNew_C*                UI_MerchantPanel;                                  // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Columns;                                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_MerchantGrid_C* GetDefaultObj();

	void PreviewGrid(class UUI_MerchantItemNew_C* Local_Item, const TArray<struct FMerchantItem>& Local_Preview, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FMerchantItem>& K2Node_MakeArray_Array, const struct FMerchantItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_RowName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUI_MerchantItemNew_C* CallFunc_Create_ReturnValue);
	void SetFilter(int32 ID, TArray<enum class EItemType>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, TArray<enum class EItemType>& K2Node_MakeArray_Array_1, TArray<enum class EItemType>& K2Node_MakeArray_Array_2, TArray<enum class EItemType>& K2Node_MakeArray_Array_3, TArray<enum class EItemType>& K2Node_MakeArray_Array_4, TArray<enum class EItemType>& K2Node_MakeArray_Array_5, TArray<enum class EItemType>& K2Node_MakeArray_Array_6);
	void SetRowAndColumn(class UUniformGridSlot* Grid, int32 Columns, int32 CurrentIndex, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue);
	void GetAvailableItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, int32 CallFunc_Array_Length_ReturnValue, const struct FMerchantItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckRequirements_bAllAdded, int32 CallFunc_Array_Add_ReturnValue);
	void GetFilteredItems(TArray<enum class EItemType>& Filter, TArray<struct FMerchantItem>* FilteredItems, int32 Loca_Index, const TArray<enum class EItemType>& Local_FilterType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMerchantItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void BuildGrid(class UUI_MerchantItemNew_C* Local_Item, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetPlayerCurrency_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUI_MerchantItemNew_C* CallFunc_Create_ReturnValue, TArray<struct FMerchantItem>& CallFunc_GetFilteredItems_FilteredItems, const struct FMerchantItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNotSoldCount_NotSoldCount, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_MerchantGrid(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


