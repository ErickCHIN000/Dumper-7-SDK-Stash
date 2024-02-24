#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x430 - 0x3F8)
// WidgetBlueprintGeneratedClass WBP_QuestObjectiveComplete.WBP_QuestObjectiveComplete_C
class UWBP_QuestObjectiveComplete_C : public UWBP_NewQuestObjectiveAvailable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  TITLE_0;                                           // 0x400(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Content_0_0;                                       // 0x418(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_QuestObjectiveComplete_C* GetDefaultObj();

	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_QuestObjectiveComplete(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class FText Temp_text_Variable_5, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default_1);
};

}


