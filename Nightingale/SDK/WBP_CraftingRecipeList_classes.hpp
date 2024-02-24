#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF1 (0x489 - 0x398)
// WidgetBlueprintGeneratedClass WBP_CraftingRecipeList.WBP_CraftingRecipeList_C
class UWBP_CraftingRecipeList_C : public UNWXCraftingRecipeListWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_2;                                          // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               bu_ClearSearch;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              FiltersWrapBox;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GridLists_Decor;                                   // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GridLists_ItemBench;                               // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GridLists_RecipeBench;                             // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Search;                                       // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_footer;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_footer_1;                                      // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Recipe;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RecipeListContents;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         SearchBar;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SearchButtonSwitcher;                              // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_Description;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Horizontal_AutoScrollingText_C*   Txt_header;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_NoKnownEntries;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_recipeHeader;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SelectedRecipeTitle;                           // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ItemDetails;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ItemList;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_RecipeList;                                     // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Traits;                                         // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_DisplayedEntries;                   // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Filters;                            // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ColumnCount;                                       // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ClickedOnList;                                     // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_CraftingCreationComponent_C*       CraftingCreationComponent;                         // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StructureActor;                                    // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSelectedFirstEntry;                             // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingRecipeList_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* DefaultTarget, class UUserWidget* CurrentWidget, const TArray<class UUserWidget*>& DisplayedEntryWidgets, class UNWXMenuDataEntry* CandidateEntry, int32 Temp_int_Array_Index_Variable, enum class ECraftingScreenState Temp_byte_Variable, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTargetFromWidget_OutFocusTarget, class UWidget* CallFunc_GetFocusTargetFromWidget_OutFocusTarget_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNWXMenuDataEntry* CallFunc_GetEntryFromWidget_OutMenuDataEntry, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetCandidateEntry_ReturnValue, class UPanelWidget* CallFunc_GetPopulatedVB_PanelWidget, class UPanelWidget* K2Node_Select_Default, class UUserWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWidget* CallFunc_GetFocusTargetFromWidget_OutFocusTarget_2, class UWBP_RecipeList_ListPanel_C* K2Node_DynamicCast_AsWBP_Recipe_List_List_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UListViewBase* K2Node_DynamicCast_AsList_View_Base, bool K2Node_DynamicCast_bSuccess_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void GetEntryFromWidget(class UUserWidget* UserWidget, class UNWXMenuDataEntry** OutMenuDataEntry, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, class UWBP_CraftingRecipe_Thumb_C* K2Node_DynamicCast_AsWBP_Crafting_Recipe_Thumb, bool K2Node_DynamicCast_bSuccess_1, class UNWXMenuDataEntry* CallFunc_GetMenuDataEntry_NewParam, class UNWXMenuDataEntryCrafting* CallFunc_GetEntry_Entry);
	void GetFocusTargetFromWidget(class UUserWidget* UserWidget, class UWidget** OutFocusTarget, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, class UWBP_CraftingRecipe_Thumb_C* K2Node_DynamicCast_AsWBP_Crafting_Recipe_Thumb, bool K2Node_DynamicCast_bSuccess_1);
	void GenerateListPanels(struct FUIGroupInfo& GroupInfo, TArray<class UNWXMenuDataEntry*>& Entries, bool IsDefaultStationGroup, class UWBP_RecipeList_ListPanel_C* LRecipeListPanel, class UWBP_RecipeList_ListPanel_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
	void OnWorkbenchRecipesUpdated(TArray<struct FCraftingRecipeReference>& UpdatedCraftingRecipes);
	void ShowTraits();
	void HideTraits();
	void GetPopulatedVB(class UPanelWidget** PanelWidget, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, class UPanelWidget* K2Node_Select_Default);
	void OnEntrySelected(class UNWXMenuDataEntry* SelectedEntry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void OnScreenStateUpdated(enum class ECraftingScreenState NewScreenState, bool K2Node_SwitchEnum_CmpSuccess);
	void GetSortingTags(class UNWXMenuDataEntry* Entry, struct FGameplayTagContainer* SortingTagContainer, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetSortingGroups_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetDisciplinesForEntry_ReturnValue);
	void RefreshMenu(bool CallFunc_IsValid_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyChildren_ReturnValue);
	void InitializeFilters(const TArray<struct FMenuDataRelevantFilter>& LRelevantFilters, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_CraftingFilter_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FMenuDataRelevantFilter>& CallFunc_GetRelevantFilters_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FMenuDataRelevantFilter& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CheckSearchStringLength(class FText SearchText, int32 MaxSearchStringLength, const class FString& SearchSubstring, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnEntryFilteringComplete(int32 TotalFilteredResults);
	void SetupStructureUIData(struct FStructureUIData& StructureUIData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupActorData(class APlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, TScriptInterface<class IControllerInteractionInterface> K2Node_DynamicCast_AsController_Interaction_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetDisciplinesFromCraftingData_OutGameplayTagContainer, bool CallFunc_GetDisciplinesFromCraftingData_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	struct FEventReply OnMouseButtonDown_Border_2(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetTraitNames(int32 Temp_int_Array_Index_Variable, class UWBP_sw_BuildingTrait_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void BndEvt__SearchHere_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void Construct();
	void Destruct();
	void BndEvt__WBP_CraftingRecipeList_bu_ClearSearch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_CraftingRecipeList(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, const class FString& CallFunc_GetSearchString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, const class FString& CallFunc_GetSearchString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2);
	void ClickedOnList__DelegateSignature();
};

}


