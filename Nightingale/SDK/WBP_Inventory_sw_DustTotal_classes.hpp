#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Inventory_sw_DustTotal.WBP_Inventory_sw_DustTotal_C
class UWBP_Inventory_sw_DustTotal_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               DustTotal_WIP_AdddedicatedWidget;                  // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_65;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_DustTotal;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Inventory_sw_DustTotal_C* GetDefaultObj();

	void RefreshEssenceTotalFromEntry(const struct FInventoryEntry& InventoryEntry, bool* bWasRefreshed, const struct FGameplayTagQuery& DustQuery, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void OnEssencePouchQtyUpdated(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_RefreshEssenceTotalFromEntry_bWasRefreshed);
	void GetEssencePouch(bool* bWasSuccessful, TScriptInterface<class IItemContainer>* EssencePouch, class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	class UWidget* Get_DustTotal_WIP_AdddedicatedWidget_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshEssenceTotalFromInventory(bool bWasRefreshed, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetEssencePouch_bWasSuccessful, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_EssencePouch, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RefreshEssenceTotalFromEntry_bWasRefreshed, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Inventory_sw_DustTotal(int32 EntryPoint, bool CallFunc_GetEssencePouch_bWasSuccessful, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_EssencePouch, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetEssencePouch_bWasSuccessful_1, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_EssencePouch_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


