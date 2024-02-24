#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x508 - 0x4D8)
// WidgetBlueprintGeneratedClass WBP_GenericContainer.WBP_GenericContainer_C
class UWBP_GenericContainer_C : public UNWXGenericContainerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ItemGrid_C*                       ItemGrid;                                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContainerItemDragged;                              // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_sw_GridEntryItem_C*>       GridEntryWidgets;                                  // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_GenericContainer_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_6(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_5(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_4(struct FItemDataReference& ItemId, bool IsEquipped);
	void CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FItemDataReference& ItemId, bool IsEquipped);
	void OnEntryFocused(const struct FInventoryEntry& InventoryEntry);
	void UpdateSortOrderPersistence(enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void PostIntialize(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void CreateAndAddWidget(struct FInventoryEntry& InventoryEntry, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, bool CallFunc_IsSortingByWeight_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, bool CallFunc_IsSortingByWeight_ReturnValue_1, const struct FVector2D& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue);
	void RefreshGridEntries();
	void CreateAndAddEmptyWidget(class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue);
	class UWidget* GetDefaultFocusWidget(bool CallFunc_HasEntries_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item);
	void OnEntryButtonLeft(const struct FInventoryEntry& InventoryEntry);
	void OnEntryButtonTop(const struct FInventoryEntry& InventoryEntry);
	void OnEntryConfirm(const struct FItemDataReference& ItemId, bool IsEquipped);
	void OnEntryMouseButtonUp(const struct FPointerEvent& Mouse_Event);
	void OnEntryDoubleClicked(const struct FInventoryEntry& ItemEntry);
	void UnbindFromEntryWidgets(class UWBP_sw_GridEntryItem_C* CurrentGridEntryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BindToEntriesWidgets(class UWBP_sw_GridEntryItem_C* EntryWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8);
	void TryGetEntryWidget(const struct FInventoryEntry& InventoryEntry, bool* IsEntryFound, class UWBP_sw_GridEntryItem_C** GridEntryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void GetGridEntryWidgets(TArray<class UWBP_sw_GridEntryItem_C*>* GridEntries);
	void OnEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
	void OnEntryHovered(bool HoverOn, const struct FInventoryEntry& ItemEntry);
	void OnEntrySelected(const struct FInventoryEntry& InventoryEntry);
	void Destruct();
	void ExecuteUbergraph_WBP_GenericContainer(int32 EntryPoint);
	void ContainerItemDragged__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
};

}


