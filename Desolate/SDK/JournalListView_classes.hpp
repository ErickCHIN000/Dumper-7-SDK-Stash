#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x388 - 0x248)
// WidgetBlueprintGeneratedClass JournalListView.JournalListView_C
class UJournalListView_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          CaptionBox;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         RadioGroup;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_26;                                      // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTitleBar_C*                           TitleBar;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUIJournalContentType             ContentType;                                       // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_144A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    Player;                                            // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJournalMenuButton_C*>          MenuButtons;                                       // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ObserveMenuButton;                                 // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   DataTableJournalCaptions;                          // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                Namespace;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UNoteItem_C*>                   NoteItems;                                         // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ObserveNoteItemButton;                             // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FNoteInfoData                         LearnedCatNotes;                                   // 0x2E0(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UNoteLine_C*>                   NoteLines;                                         // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJournalListView_C* GetDefaultObj();

	void CreateButtonNew(class FText Caption, class FText Progress, int32 QuestID, int32 NoteId, int32 NoteCategory, TArray<struct FNoteInfoData>& LearnedNotes, class UNoteItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UNoteLine_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FNoteInfoData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void UpdateNotesNew(int32 Temp_int_Array_Index_Variable, const struct FNoteInfoData& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, TArray<struct FNoteCategoryData>& CallFunc_GetAllLearnedCategoriesData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNoteCategoryData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSameAsSelfType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetCategoryNotesCount_ReturnValue, TArray<struct FNoteInfoData>& CallFunc_GetAllLearnedNotesInCategoryData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool IsSameAsSelfType(enum class ENoteCategoryType Enumerator, enum class EUIJournalContentType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool Temp_bool_Variable, bool K2Node_Select_Default);
	class FText GetText_0(enum class EUIJournalContentType Temp_byte_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_TextToUpper_ReturnValue_4, class FText K2Node_Select_Default);
	void UpdateNotes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FNoteCategoryData>& CallFunc_GetAllLearnedCategoriesData_ReturnValue, const struct FNoteCategoryData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSameAsSelfType_ReturnValue, int32 CallFunc_GetCategoryNotesCount_ReturnValue, TArray<struct FNoteInfoData>& CallFunc_GetAllLearnedNotesInCategoryData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FNoteInfoData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnButtonClicked(class USHUserWidget* Button, bool IsSelected, class UJournalMenuButton_C* K2Node_DynamicCast_AsJournal_Menu_Button, bool K2Node_DynamicCast_bSuccess, class UNoteItem_C* K2Node_DynamicCast_AsNote_Item, bool K2Node_DynamicCast_bSuccess_1);
	void IfQuestPresentRemoveFromList(int32& QuestID, TArray<struct FQuestView>& QuestViews, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestView& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreateButton(class FText Caption, class FText Progress, int32 QuestID, int32 NoteId, int32 NoteCategory, class UJournalMenuButton_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateTasks(const TArray<class UJournalMenuButton_C*>& RemoveMenuButtons, const TArray<struct FQuestView>& LocalQuestViews, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UJournalMenuButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UJournalMenuButton_C* CallFunc_Array_Get_Item_1, const struct FQuestView& CallFunc_Array_Get_Item_2, bool CallFunc_IfQuestPresentRemoveFromList_Result, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
	void CreateForNotes();
	void Draw(bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void OnSynchronizeProperties();
	void OnQuestListChange();
	void SetupType();
	void OnNotesChange(class ASHPlayerCharacter* Sender, int32 CategoryID, int32 RecipeID);
	void OnNoteLearnedNotify_Event_0();
	void ExecuteUbergraph_JournalListView(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, int32 K2Node_CustomEvent_CategoryID, int32 K2Node_CustomEvent_RecipeID);
	void ObserveNoteItemButton__DelegateSignature(class UNoteItem_C* Button);
	void ObserveMenuButton__DelegateSignature(class UJournalMenuButton_C* Button);
};

}


