#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C
class UWid_pda_NotesList_Companions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          Entries;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  PositiveTitle;                                     // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NegativeTitle;                                     // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_pda_NotesList_Companions_C* GetDefaultObj();

	void AddDecisions(class FName CompanionID, class FText TitleText, enum class ECompanionDecisionResultType Type, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWid_pda_NotesList_Companions_Decisions_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void SetContent(class FName CompanionID, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_pda_NotesList_Companions(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


