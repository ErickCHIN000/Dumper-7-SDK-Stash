#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x340 (0xA20 - 0x6E0)
// WidgetBlueprintGeneratedClass WBP_StoragePanel.WBP_StoragePanel_C
class UWBP_StoragePanel_C : public UNWXStoragePanelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_CapacityInfo;                                  // 0x6E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ContainerLabel;                                // 0x6F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GenericContainer_C*               WBP_GenericContainer;                              // 0x6F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inv_StatsCounter_C*               WBP_Inv_StatsCounter;                              // 0x700(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEntryDragged;                                    // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                        ItemFilters;                                       // 0x718(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         AllowDragging;                                     // 0x728(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       LastSelectedEntry;                                 // 0x730(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_StoragePanel_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry);
	void InitializeFilters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateSelectedWidgetCosmetic(bool LHasAnyFocus, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_FInventoryEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnInitialize(class FText& PanelLabel);
	class UWidget* GetDefaultFocusWidget(bool CallFunc_HasEntries_HasEntries);
	void OnGridItemButtonLeft(const struct FInventoryEntry& InventoryEntry);
	void OnGridItemButtonTop(const struct FInventoryEntry& InventoryEntry);
	void OnGridItemConfirm(struct FItemDataReference& ItemId, bool IsEquipped);
	void HasEntries(bool* HasEntries, bool CallFunc_HasEntries_ReturnValue);
	void OnSortOrderUpdated(enum class EEntrySortOrder SortOrder);
	void OnGridItemSelected(struct FInventoryEntry& InventoryEntry);
	void On_Grid_Item_Hovered(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource);
	void OnGridItemDoubleClicked(struct FInventoryEntry& InventoryEntry);
	void InitializeWeightCounter();
	void UpdateWeightCounter(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetCurrentWeightOfContainer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_UpdateCount_CurrentValue_ImplicitCast, double CallFunc_UpdateCount_MaxValue_ImplicitCast);
	void OnGridUpdated();
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8);
	void UpdateCapacityCounter(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FContainerCapacityData& CallFunc_GetContainerCapacityData_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnGridItemDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
	void ValidateSelectedEntry(const struct FInventoryEntry& EmptyEntry, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_StoragePanel(int32 EntryPoint);
	void OnEntryDragged__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
};

}


