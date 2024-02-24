#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItemSearch.UMG_FieldGuideItemSearch_C
class UUMG_FieldGuideItemSearch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_ButtonIcon_C*                     ClearSearchButton;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SearchBox_C*                      SearchBar;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FilterItems;                                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPanelWidget*                          ResultsPaneRef;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SwitcherRef;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItemSearch_C* GetDefaultObj();

	void ShowSearchHideAlt(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HideSearchShowAlt(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AttachExternalPanels(class UPanelWidget* Results, class UWidgetSwitcher* Switcher);
	void SelectedItem(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void PerformSearch(const class FString& SearchQuery, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FItemsStaticRowHandle>& CallFunc_GetItemsWithDisplayNameMatchingQuery_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UUMG_FieldGuide_List_Button_Item_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void BndEvt__UMG_FieldGuideItemSearch_ClearSearch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_UMG_FieldGuideItemSearch(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod);
	void FilterItems__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
};

}


