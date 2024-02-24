#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x27C - 0x260)
// WidgetBlueprintGeneratedClass UMG_Dialogue.UMG_Dialogue_C
class UUMG_Dialogue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          LineBox;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitleQueue*                        Queue;                                             // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxNumberLines;                                    // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Dialogue_C* GetDefaultObj();

	void AddLineToBox(class UUMG_DialogueLine_C* Line, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ForceFadePlayingLines(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUMG_DialogueLine_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_DialogueLine_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ClearAllDialogue(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUMG_DialogueLine_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_DialogueLine_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void AddLineQuickFade(struct FSubtitle& Subtitle, class UUMG_DialogueLine_C* CallFunc_Create_ReturnValue);
	void AddLine(struct FSubtitle& Subtitle, class UUMG_DialogueLine_C* CallFunc_Create_ReturnValue);
	void AddDialogue(const struct FDialogueRowHandle& DialogueRow, float LengthTally, int32 Total, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasQueuedSubtitles_ReturnValue);
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_Dialogue(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class USubtitleQueue* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


