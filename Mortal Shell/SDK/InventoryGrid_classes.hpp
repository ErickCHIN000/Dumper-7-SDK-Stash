#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB2 (0x2E2 - 0x230)
// WidgetBlueprintGeneratedClass InventoryGrid.InventoryGrid_C
class UInventoryGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          RetainerBox_InventoryGrid;                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_InventoryGrid;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_Inventory;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ScrollDirection;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RetainerMaskMat;                                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGridItemSelected;                                // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemStartedDragging;                             // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<enum class EItemType>                 ItemFilter;                                        // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShowKeyItems;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGridLoaded;                                      // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumColums;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Equipment_InventoryTab_C*          InventoryScreenWidget;                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventoryGridItem_C*>          InventoryGridItems;                                // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         QuickItemAnim;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                InventoryItems;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShowEquipment;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideEquipmentInTutorial;                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UInventoryGrid_C* GetDefaultObj();

	void CheckEquipmentTutorial(struct FInventoryItem& InventoryItem, bool* Add, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CheckForSword(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AddUnlockedKeyItems(TArray<struct FInventoryItem>& Items, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetPreviewGrid(int32 Local_Index, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UInventoryGridItem_C* CallFunc_Create_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsOnGrid(struct FNavDirectionInt2D& NavDirectionInt2D, bool* bOnGrid, int32 CallFunc_GetNumRows_NumRows, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void GetNumRows(int32* NumRows, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FNavDirectionInt2D& CallFunc_IndexToRowColum_RowColumn);
	void RowColumToIndex(const struct FNavDirectionInt2D& RowColumn, int32* Index, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IndexToRowColum(int32 Index, struct FNavDirectionInt2D* RowColumn, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D);
	void GetNextNavGridItem(int32 CurrentIndex, enum class ENavDirection Direction, int32* NextIndex, bool* bIsValidNextItem, bool* bHitLimit, const struct FNavDirectionInt2D& CalculatedColRow, const struct FNavDirectionInt2D& CurrentColumnRow, const struct FNavDirectionInt2D& NavDirection, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D, bool K2Node_SwitchEnum_CmpSuccess, const struct FNavDirectionInt2D& CallFunc_IndexToRowColum_RowColumn, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_1, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_2, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RowColumToIndex_Index, bool CallFunc_IsOnGrid_bOnGrid, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_4);
	void SetFilter(int32 FilterID, TArray<enum class EItemType>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, TArray<enum class EItemType>& K2Node_MakeArray_Array_1, TArray<enum class EItemType>& K2Node_MakeArray_Array_2, TArray<enum class EItemType>& K2Node_MakeArray_Array_3, TArray<enum class EItemType>& K2Node_MakeArray_Array_4, TArray<enum class EItemType>& K2Node_MakeArray_Array_5, TArray<enum class EItemType>& K2Node_MakeArray_Array_6);
	void GetFilteredItems(bool bShowKeyItems, TArray<enum class EItemType>& FilterType, TArray<struct FInventoryItem>* InventoryItems, TArray<int32>* CorrespondingInventorySlot, const TArray<struct FInventoryItem>& Local_InventoryItems, int32 LocIndex, const TArray<int32>& Slots, const TArray<enum class EItemType>& LocFilterType, const TArray<struct FInventoryItem>& FilteredItemList, bool bLocShowKeyItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems);
	void SetRowAndColumn(class UUniformGridSlot* GridSlot, int32 Columns, int32 CurrentIndex, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnGamepadScrollUp();
	void OnGamepadScrolLDown();
	void OnGamepadSCrollUpRelease();
	void OnGamepadScrollDownRelease();
	void OnItemStartedDragging_Event_0(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation);
	void BuildGrid(bool QuickItemAnim);
	void OnSelectedEvent(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 InventorySlot, bool MouseHover);
	void PreConstruct(bool IsDesignTime);
	void PreviewGrid();
	void ExecuteUbergraph_InventoryGrid(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInventoryGridItem_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_CheckEquipmentTutorial_Add, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_InventorySlot_1, class UInventoryGridItem_C* K2Node_CustomEvent_GridItemWidget, class UDragDropOperation* K2Node_CustomEvent_DragDropOperation, bool K2Node_CustomEvent_QuickItemAnim, TArray<struct FInventoryItem>& CallFunc_GetFilteredItems_InventoryItems, TArray<int32>& CallFunc_GetFilteredItems_CorrespondingInventorySlot, int32 CallFunc_Array_Get_Item_1, const struct FInventoryItem& K2Node_CustomEvent_InventoryItem, class UInventoryGridItem_C* K2Node_CustomEvent_HoveredWidget, int32 K2Node_CustomEvent_InventorySlot, bool K2Node_CustomEvent_MouseHover, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void OnGridLoaded__DelegateSignature();
	void OnItemStartedDragging__DelegateSignature(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation);
	void OnGridItemSelected__DelegateSignature(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot);
};

}


