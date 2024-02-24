#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass WBP_DailyQuestRewards.WBP_DailyQuestRewards_C
class UWBP_DailyQuestRewards_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ItemPlaceHolder;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DailyQuestRewards_C* GetDefaultObj();

	void InitializeImageandText(class UWorldQuest* Quest);
	void ExecuteUbergraph_WBP_DailyQuestRewards(int32 EntryPoint, class UWorldQuest* K2Node_CustomEvent_Quest, int32 CallFunc_GetXPReward_ReturnValue, int32 CallFunc_GetGoldReward_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetBlueOrbReward_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
};

}


