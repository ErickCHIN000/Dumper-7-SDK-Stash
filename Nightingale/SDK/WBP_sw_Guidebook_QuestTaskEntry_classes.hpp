#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x428 - 0x348)
// WidgetBlueprintGeneratedClass WBP_sw_Guidebook_QuestTaskEntry.WBP_sw_Guidebook_QuestTaskEntry_C
class UWBP_sw_Guidebook_QuestTaskEntry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_goal;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_taskAction;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Value;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_task_conditions;                                // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestTaskPresentationData            TaskPresentationData;                              // 0x370(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	double                                       EntryPadding;                                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_Guidebook_QuestTaskEntry_C* GetDefaultObj();

	void InitializeDesignerPreview(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_sw_Guidebook_QuestTaskConditionEntry_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, float K2Node_MakeStruct_Top_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_sw_Guidebook_QuestTaskEntry(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQuestTaskCompletionRequirements Temp_byte_Variable, class UWBP_sw_Guidebook_QuestTaskConditionEntry_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


