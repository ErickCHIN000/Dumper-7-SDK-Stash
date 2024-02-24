#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x410 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GuideBook_HorizontalThumb.WBP_GuideBook_HorizontalThumb_C
class UWBP_GuideBook_HorizontalThumb_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_DarkHighlight;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_FocusTarget;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_Challenge_Completed;                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_Challenge_RewardUnclaimed;                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_newstate;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MouseHitBox;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedState;                             // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Name;                                          // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     MenuDataEntry;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ThumbHovered;                                      // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ThumbDoubleClick;                                  // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ThumbSelected;                                     // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          ClickedEventTag;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_GuideBookComponent_C*              GuideBookComponent;                                // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IChallengeSystemObservable> ChallengeSystemObservable;                         // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChallengeDataAsset*                   ChallengeData;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTilePressed;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ThumbRightClicked;                                 // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_HorizontalThumb_C* GetDefaultObj();

	void HandleObservationStateChanged(bool IsObservable);
	void RefreshNewState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsObservable_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnMouseButtonDown_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FGameplayTag& RightClickEvent_Tag, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	class UWidget* BP_GetDesiredFocusTarget();
	void UnbindFromChallengeSystemEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateChallengeIconsForID(struct FExperienceStateID& ChallengeID, TScriptInterface<class IChallengeDefinition> CallFunc_GetID_self_CastInput, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FExperienceStateID_ReturnValue);
	void OnEntrySelected(class UNWXMenuDataEntry* Entry, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void TryRemoveFocusHighlight(const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void InitializeDesignerPreview();
	void GetMenuDataEntry(class UNWXMenuDataEntry** Entry);
	void TryFocusOnWidget(bool CallFunc_IsSearching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnThumbSelected(bool CallFunc_IsUnlocked_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateSelectedCosmetic(bool ShowOutline, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateChallengeCosmetics(const struct FExperienceStateID& LChallengeID, bool LIsChallengeComplete, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IChallengeDefinition> CallFunc_GetID_self_CastInput, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsChallengeComplete_ReturnValue, bool CallFunc_AreRewardsGranted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void TrySetupChallengeCosmetics(bool LIsChallengeComplete, TSubclassOf<class IInterface> Temp_class_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXMenuDataEntryChallenge* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge, bool K2Node_DynamicCast_bSuccess_1, class UChallengeDataAsset* CallFunc_GetChallengeDataAsset_ReturnValue);
	void SetupGeneralCardCosmetics(class FText CallFunc_GetDisplayName_ReturnValue);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseDoubleClick_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Construct();
	void BndEvt__WBP_GuideBook_HorizontalThumb_CBU_FocusTarget_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GuideBook_HorizontalThumb_CBU_FocusTarget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GuideBook_HorizontalThumb_CBU_FocusTarget_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnEntryReleased();
	void Destruct();
	void ExecuteUbergraph_WBP_GuideBook_HorizontalThumb(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UObject* K2Node_Event_ListItemObject, class UNWXMenuDataEntry* K2Node_DynamicCast_AsNWXMenu_Data_Entry, bool K2Node_DynamicCast_bSuccess, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_HoverStartEventTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void ThumbRightClicked__DelegateSignature(class UNWXMenuDataEntry* InMenuDataEntry);
	void OnTilePressed__DelegateSignature(class UNWXMenuDataEntry* NewParam);
	void ThumbSelected__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ThumbDoubleClick__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ThumbHovered__DelegateSignature(bool IsHovered, class UNWXMenuDataEntry* MenuDataEntry);
};

}


