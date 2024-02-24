#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x470 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GoalTracker_Panel.WBP_GoalTracker_Panel_C
class UWBP_GoalTracker_Panel_C : public UNWXGoalTrackerPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Show_Notification;                            // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              GoalTrackerPanel;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ico_List_Recipe;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ico_List_Structure;                                // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BlackBg;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_QuestIcon;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Quests;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RecipeShoppingList;                                // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StructureShoppingList;                             // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_QuestBox;                                       // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ShoppingList;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_sw_GoalTrack_Entry_C*         WBP_HUD_sw_GoalTrack_Entry;                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_sw_GoalTrack_Entry_C*         WBP_HUD_sw_GoalTrack_Entry_1;                      // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_sw_GoalTrack_Entry_C*         WBP_HUD_sw_GoalTrack_Entry_2;                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         EnableEditMode;                                    // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6E1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerAddRemoveTrack;                              // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        QuestTrackDisplayMax;                              // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuestMaxReached;                                   // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundTrackToRemove;                                // 0x3ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GoalTrackerBindingComplete;                        // 0x3EE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Preference_SHOW_EntirePanel;                       // 0x3EF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_SavePrefHandle;                              // 0x3F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Time_to_Display;                                   // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FS_UI_HUD_GoalTrackGroup> QuestTracks;                                       // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FS_UI_HUD_GoalTrackGroup>      RecipeTracks;                                      // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FS_UI_HUD_GoalTrackGroup>      StructureTracks;                                   // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_GoalTracker_Panel_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTWBP_GoalTracker_Panel_1();
	void SequenceEvent__ENTRYPOINTWBP_GoalTracker_Panel_0();
	void SequenceEvent__ENTRYPOINTWBP_GoalTracker_Panel();
	void RefreshShoppingListVisiblity(enum class ESlateVisibility RecipeVisibility, enum class ESlateVisibility StructureVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_PanelVisibiltyRefresh_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_PanelVisibiltyRefresh_ReturnValue_1);
	void OnRecipeTracksUpdated(class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, int32 Temp_int_Array_Index_Variable, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, TArray<struct FS_UI_HUD_GoalTrackGroup>& CallFunc_GetRecipeTracks_RecipeTracks);
	void OnStructureTracksUpdated(class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, int32 Temp_int_Array_Index_Variable, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, TArray<struct FS_UI_HUD_GoalTrackGroup>& CallFunc_GetStructureTracks_StructureTracks);
	void OnQuestTracksUpdated(class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, TMap<class FName, struct FS_UI_HUD_GoalTrackGroup> CallFunc_GetQuestTracks_QuestTracks, bool CallFunc_IsValid_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent);
	void Display_Completed_Task_Icon_Animation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnTaskCompleted(struct FOngoingTaskProgress& TaskProgress, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue);
	void Timer_SavePreferences(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void AddShoppingListWidgetsToGroup(class UVerticalBox* GroupBox, class FText SubHeaderText, TArray<struct FS_UI_HUD_GoalTracking>& Tasks, int32 Track_StackCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_UI_HUD_GoalTracking& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWBP_HUD_sw_GoalTrack_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetPreference_ShowPanel(bool Preference_SHOW_EntirePanel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetText_WidgetScale(class UTextBlock* TextWidget, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void RefreshHeaderVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Edit_Mode_Add_Remove_Track(class FName GoalTrackID, const struct FS_UI_HUD_GoalTracking& Track, int32 DesiredTrackCount, bool Adding_);
	void RefreshWindowsVisibility(bool CallFunc_Has_Any_Goals_Or_Shopping_List_Entries_Tracked_HasPersonalTracks);
	void RefreshQuestBox(const TArray<class FName>& QuestKeys, int32 L_GroupDesiredStackCount, int32 Index, class FText L_Header, const struct FS_UI_HUD_GoalTrackGroup& CurrentObj, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_UI_HUD_GoalTrackGroup& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWBP_HUD_sw_GoalTrack_Entry_C* CallFunc_Create_ReturnValue, const struct FS_UI_HUD_GoalTracking& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility CallFunc_PanelVisibiltyRefresh_ReturnValue);
	void Has_Any_Goals_Or_Shopping_List_Entries_Tracked(bool* HasPersonalTracks, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, bool CallFunc_Map_IsNotEmpty_ReturnValue);
	enum class ESlateVisibility PanelVisibiltyRefresh(class UPanelWidget* Target, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Setup_Binding_for_Goal_Tracking_Component(class UBP_HUDGoalTrackingComponent_C* HUDGoalTracking, class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void OnPawnUnpossessed(class APawn* OldPawn);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	class FText GenerateHeader(class FText BaseDisplayText, int32 StackCount, struct FS_UI_HUD_GoalTracking& Track, bool Temp_bool_Variable, enum class E_UI_HudTrackingTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1);
	void SfxTriggerIconWiggle();
	void Construct();
	void SfxInkFadeOut();
	void SfxInkFadeIn();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_GoalTracker_Panel(int32 EntryPoint, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UPanelWidget* CallFunc_GetParent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue);
	void PlayerAddRemoveTrack__DelegateSignature(class FName GoalTrackID, const struct FS_UI_HUD_GoalTracking& Track, int32 DesiredTrackAmount, bool Adding_);
};

}


