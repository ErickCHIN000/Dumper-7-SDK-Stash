#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x294 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C
class UUMG_SentryReportDialogContent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*             ReportInput;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CharacterCount;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExternalTitleButton_C*            UMG_ExternalDiscord;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExternalTitleButton_C*            UMG_ExternaUpvote;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MoodRow_C*                        UMG_MoodRow;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ReportMaxCharacterLength;                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SentryReportDialogContent_C* GetDefaultObj();

	void UpdateCharacterLimit(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_SentryReportDialogContent(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1);
};

}


