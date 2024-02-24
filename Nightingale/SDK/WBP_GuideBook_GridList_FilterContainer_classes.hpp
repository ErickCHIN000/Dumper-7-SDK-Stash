#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x350 - 0x340)
// WidgetBlueprintGeneratedClass WBP_GuideBook_GridList_FilterContainer.WBP_GuideBook_GridList_FilterContainer_C
class UWBP_GuideBook_GridList_FilterContainer_C : public UNWXGuideBookGridListFilters
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              FiltersWrapBox;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_GridList_FilterContainer_C* GetDefaultObj();

	void UpdateFilters(struct FGameplayTag& CategoryTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_GuideBook_GridList_Filter_C* CallFunc_Create_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, TArray<struct FMenuDataRelevantFilter>& CallFunc_GetRelevantFiltersForCategory_ReturnValue, const struct FMenuDataRelevantFilter& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Destruct();
	void Construct();
	void ExecuteUbergraph_WBP_GuideBook_GridList_FilterContainer(int32 EntryPoint, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook_1, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


