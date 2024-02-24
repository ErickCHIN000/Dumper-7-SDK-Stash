#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x358 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C
class UWid_DialogueTimelinePayload_C : public UCGTimelinePayloadWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        AffectedByContainer;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            AffectedByLabel;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          AffectedByList;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CompanionLeftList;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CompanionReactionsList;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainContainer;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_DialogueTimelinePayload_Entry_C*  NARActivityEntry;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OutcomeContainer;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutcomeLabel;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestName;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDialogueTimelinePayloadData          Payload;                                           // 0x2C8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CompanionPositiveText;                             // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CompanionNegativeText;                             // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CompanionLeftText;                                 // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_DialogueTimelinePayload_C* GetDefaultObj();

	void CreateAffectedTextEntry(class FText Text, enum class EBasicResultType ReactionType, class UPanelWidget* Container, bool IsBold, class UWid_DialogueTimelinePayload_AffectedEntry_C** Widget, class UWid_DialogueTimelinePayload_AffectedEntry_C* CreatedWidget, class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateLabels(class FText CallFunc_FormatText_Output, class FText CallFunc_FormatText_Output_1);
	void AddDashToString(class FText Text, class FText* Result, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void AddCompanionLeft(class FName CompanionID, class FText NewText, class FText CallFunc_ReplaceStringWithCompanionName_ReturnValue, class FText CallFunc_AddDashToString_Result, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_CreateTextEntry_Widget);
	class FText ReplaceStringWithCompanionName(class FText Text, const class FString& ToReplace, class FName CompanionID, class FText CompanionName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue);
	void IsCompanionEmployed(class FName CompanionID, bool* Result, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchName_CmpSuccess, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_1, bool CallFunc_PermanentDataGetValue_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue_2, bool CallFunc_IsCompanionEmployed_ReturnValue);
	void AddCompanionReaction(const struct FDialogueTimelinePayloadCompanionReaction& CompnionInfo, class FText NewText, enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable, enum class EBasicResultType Temp_byte_Variable_1, bool CallFunc_IsCompanionEmployed_Result, enum class EBasicResultType Temp_byte_Variable_2, enum class EBasicResultType K2Node_Select_Default, enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable_3, class FText K2Node_Select_Default_1, class FText CallFunc_ReplaceStringWithCompanionName_ReturnValue, class FText CallFunc_AddDashToString_Result, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_CreateTextEntry_Widget);
	void UpdateContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void GetQuestName(class FName QuestID, class FText* Text, bool* Result, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue);
	void CreateTextEntry(class FText Text, enum class EBasicResultType ReactionType, class UPanelWidget* Container, bool IsBold, class UWid_DialogueTimelinePayload_Entry_C** Widget, class UWid_DialogueTimelinePayload_Entry_C* CreatedWidget, class UWid_DialogueTimelinePayload_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AddAffectedText(const struct FDialogueTimelinePayloadAffectedQuestInfo& AffectedInfo, class FText NewText, bool Temp_bool_Variable, class FText CallFunc_GetQuestName_Text, bool CallFunc_GetQuestName_Result, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatText_Output, bool CallFunc_NotEqual_TextText_ReturnValue, class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_CreateAffectedTextEntry_Widget, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default);
	void UpdateCompanionLeft(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateCompanionReactions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDialogueTimelinePayloadCompanionReaction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateNAR(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_AddDashToString_Result, class FText CallFunc_AddDashToString_Result_1, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateAffectedInfo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDialogueTimelinePayloadAffectedQuestInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateQuestName(class FText CallFunc_GetQuestName_Text, bool CallFunc_GetQuestName_Result, class FText CallFunc_FormatText_Output);
	void InitPayload(struct FDialogueTimelinePayloadData& Payload);
	void Construct();
	void RequestDestruct();
	void PreConstruct(bool IsDesignTime);
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void Destruct();
	void ExecuteUbergraph_wid_DialogueTimelinePayload(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FDialogueTimelinePayloadData& K2Node_Event_Payload, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default);
};

}


