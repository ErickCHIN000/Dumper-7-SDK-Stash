#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x398 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Guidebook_FlatList.WBP_Guidebook_FlatList_C
class UWBP_Guidebook_FlatList_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                             ListView;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FlatList_ThumbSelected;                            // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            FlatList_ThumbDoubleClicked;                       // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            FlatList_ThumbHover;                               // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_GuideBookComponent_C*              GuideBookComponent;                                // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     LastSelectedEntry;                                 // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Guidebook_FlatList_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(int32 CallFunc_GetNumItems_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void UnbindFromEntryEvents(class UWBP_GuideBook_HorizontalThumb_C* LThumb, const TArray<class UUserWidget*>& LDisplayedEntryWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue);
	void OnEntryReleased(class UUserWidget* Widget, class UWBP_GuideBook_HorizontalThumb_C* LThumb, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnEntryGenerated(class UUserWidget* Widget, class UWBP_GuideBook_HorizontalThumb_C* LThumb, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnEntriesFiltered(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void Refresh(const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, TArray<class UNWXMenuDataEntry*>& CallFunc_GetFilteredEntriesByCategory_OutEntries);
	void OnThumbHovered(bool Hovered, class UNWXMenuDataEntry* MenuDataEntry);
	void OnThumbDoubleClick(class UNWXMenuDataEntry* MenuDataEntry);
	void OnThumbSelected(class UNWXMenuDataEntry* MenuDataEntry);
	void Construct();
	void Destruct();
	void DelayedAutoFocus();
	void ExecuteUbergraph_WBP_Guidebook_FlatList(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetMenuDataEntry_Entry, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FlatList_ThumbHover__DelegateSignature(bool Hover, class UNWXMenuDataEntry* MenuDataEntry);
	void FlatList_ThumbDoubleClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void FlatList_ThumbSelected__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
};

}


