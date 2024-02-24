#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x398 - 0x348)
// WidgetBlueprintGeneratedClass WBP_FuelQueue.WBP_FuelQueue_C
class UWBP_FuelQueue_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ItemGrid_C*                       WBP_ItemGrid;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                StructureActor;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotEntryDragged;                                // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             SizeOverride;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotEntryDoubleClicked;                          // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_FuelQueue_C* GetDefaultObj();

	void OnActiveEntryUpdated(struct FInventoryEntry& ActiveItem);
	void CreateEmptyWidgets(int32 NumItemsDisplayed, const struct FInventoryEntry& ItemsBeingDisplayed, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue);
	void GeneratePadding(int32 NumDisplayedStacks, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetPostConstructionResourceRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UnbindFromEntryWidgets(const TArray<class UWidget*>& LAllSlotWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void OnEntryDoubleClicked(const struct FInventoryEntry& ItemEntry);
	void OnEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
	void UpdateQueue(class UWBP_sw_GridEntryItem_C* LEntryWidget, const TArray<struct FInventoryEntry>& LNonBurningEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetNonBurningInventoryEntries_NonBurningEntries);
	void OnFuelUpdated(TArray<struct FInventoryEntry>& AppliedFuelItems);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue);
	void Initialize(class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_FuelQueue(int32 EntryPoint);
	void OnSlotEntryDoubleClicked__DelegateSignature(const struct FInventoryEntry& InventoryEntry);
	void OnSlotEntryDragged__DelegateSignature(const struct FInventoryEntry& InventoryEntry, bool IsDragging);
};

}


