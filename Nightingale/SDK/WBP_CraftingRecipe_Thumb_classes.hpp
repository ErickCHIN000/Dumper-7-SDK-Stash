#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_CraftingRecipe_Thumb.WBP_CraftingRecipe_Thumb_C
class UWBP_CraftingRecipe_Thumb_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_SelectedState;                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_FocusTarget;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FeatherIcon;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedIcon;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RecipeName;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CraftingRecipe_ProgressBar_C*     WBP_CraftingRecipe_ProgressBar;                    // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_StatusIcon;                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuDataEntry_Crafting_C*          CraftingDataEntry;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingCreationComponent_C*       CraftingCreationComponent;                         // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingRecipe_Thumb_C* GetDefaultObj();

	void TryRemoveSelectedCosmetic(bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntry_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnEntrySelected(class UNWXMenuDataEntry* SelectedEntry);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void UpdateUnlockDependantCosmetics(class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FGuid& CallFunc_GetID_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned, bool CallFunc_IsUnlocked_ReturnValue);
	void OnSkillsUnlocked(struct FSkillDataReference& UnlockedSkill);
	void GetEntry(class UNWXMenuDataEntryCrafting** Entry);
	void UpdateTextColor(const TArray<int32>& UnmetSlots, bool Satisfied, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_IsCraftable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SelectEntry(class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntry_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnItemAddedOrRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	class UWidget* CreateTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void CheckPinnedState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsUnlocked_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FGuid& CallFunc_GetID_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned, enum class ESlateVisibility K2Node_Select_Default);
	void SetupGeneralCardCosmetics(class FText CallFunc_GetDisplayName_ReturnValue);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Destruct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnEntryReleased();
	void Construct();
	void BndEvt__WBP_CraftingRecipe_Thumb_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CraftingRecipe_Thumb_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CraftingRecipe_Thumb_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_CraftingRecipe_Thumb(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent_1, class UObject* K2Node_Event_ListItemObject, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container_1, bool CallFunc_GetBackpack_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1);
};

}


