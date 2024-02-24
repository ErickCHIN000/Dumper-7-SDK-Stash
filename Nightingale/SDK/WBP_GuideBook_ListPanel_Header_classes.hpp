#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x418 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GuideBook_ListPanel_Header.WBP_GuideBook_ListPanel_Header_C
class UWBP_GuideBook_ListPanel_Header_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               bu_panel;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_NewGlimmer;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedState;                             // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Tracked;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_countTotal;                                    // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_countTotal_tracked;                            // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHeaderClicked;                                   // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UNWXMenuDataEntry*>             EntriesInGroup;                                    // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUIGroupInfo                          GroupInfo;                                         // 0x3A8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UNWXMenuDataEntry>       CraftingEntryClass;                                // 0x3C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UNWXMenuDataEntry>       StructureEntryClass;                               // 0x3F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_ListPanel_Header_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void UpdateKnownEntryCounter(int32 LTotalKnown, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EEntryProgressionStates CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnSkillUnlocked(struct FSkillDataReference& UnlockedSkill);
	void UpdateNewEntryCounter(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsObservable_ReturnValue);
	void OnObservationStateUpdated(bool IsObservable);
	void RemoveEntryObservationStateBindings(class UNWXMenuDataEntryObservedStateTracker* LStateTracker, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetupEntryObservationStateBindings(class UNWXMenuDataEntryObservedStateTracker* LStateTracker, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateTrackedCounter(int32 LTotalTracked, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEntityPinned_IsPinned, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void RemoveBindings(class UBP_HUDGoalTrackingComponent_C* HUDGoalTracking, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SetupBindings(class UNWXMenuDataEntry* FirstEntry, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent_1, bool CallFunc_IsObjectOfClass_ReturnValue, bool CallFunc_IsObjectOfClass_ReturnValue_1, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Initialize(TArray<class UNWXMenuDataEntry*>& AllEntriesInGroup, struct FUIGroupInfo& GroupInfo);
	void BndEvt__WBP_GuideBook_ListPanel_Header_bu_panel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Destruct();
	void ExecuteUbergraph_WBP_GuideBook_ListPanel_Header(int32 EntryPoint, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnHeaderClicked__DelegateSignature();
};

}


