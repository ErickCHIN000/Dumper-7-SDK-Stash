#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x369 - 0x2A8)
// WidgetBlueprintGeneratedClass JournalWidget_v2.JournalWidget_v2_C
class UJournalWidget_v2_C : public UBaseCharacterUIWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ObserverOpacity;                                   // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentBox;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DailyQuestBox;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DailyQuestTitle;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         GroupBox;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsBox_DailyQuest;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsBox_SideQuest;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsBox_Story;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsBox_WorldQuest;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJournalObserver_v2_C*                 JournalObserver_v2;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ObserverSlot;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SideQuestBox;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SideQuestTitle;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StoryBox;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StoryTitle;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WidgetBG;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WorldQuestBox;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WorldQuestTitle;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        GroupFlag;                                         // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelectedFromSave;                                  // 0x354(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NotifyedQuests;                                    // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bFirstRead;                                        // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UJournalWidget_v2_C* GetDefaultObj();

	void CheckVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void CreateButton(const struct FQuestView& Item, int32 QuestID, class UVerticalBox* ItemBox, bool FromSave, int32 ArrayIndex, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UJournalButton_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReadQuests(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetWidgetsCount_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess_1, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return, class FName CallFunc_GetSelectedQuestTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQuestView& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
	enum class ESlateVisibility Get_RetainerBox_0_Visibility_0(float CallFunc_GetScrollOffset_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void OnWidgetSelectedEvent(int32 GroupIndex);
	void OnHidden();
	void Show();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateQuests();
	void ShowInstant();
	void DrawText();
	void OnSynchronizeProperties();
	void UpdateTooltips();
	void OnQuestUpdated(struct FQuestView& QuestView);
	void QuestRemoved(struct FQuestView& QuestView);
	void ExecuteUbergraph_JournalWidget_v2(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_GroupIndex, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UJournalButton_C* K2Node_DynamicCast_AsJournal_Button, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess_1, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer_1, bool K2Node_DynamicCast_bSuccess_3, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, const struct FQuestView& K2Node_CustomEvent_QuestView_1, const struct FTooltipButtonInfo& K2Node_Select_Default, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array, const struct FQuestView& K2Node_CustomEvent_QuestView, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer_2, bool K2Node_DynamicCast_bSuccess_5, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return_2, class FName CallFunc_GetSelectedQuestTag_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
};

}


