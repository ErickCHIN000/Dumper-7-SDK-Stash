#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3C0 - 0x3B0)
// WidgetBlueprintGeneratedClass WBP_QuestComplete.WBP_QuestComplete_C
class UWBP_QuestComplete_C : public UWBP_NewQuestAvailable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODEvent*                            Event;                                             // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_QuestComplete_C* GetDefaultObj();

	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_QuestComplete(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, enum class EQuestType Temp_byte_Variable, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


