#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_QuestDetails.WBP_DB_QuestDetails_C
class UWBP_DB_QuestDetails_C : public UNWXUserWidget
{
public:
	class UListView*                             ListView_Rewards;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Tasks;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_quest_description;                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_QuestName;                               // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_QuestDetails_C* GetDefaultObj();

	void UpdateTasks(TArray<struct FQuestTask>& QuestTasks, const TArray<class UBP_DB_QuestTaskListEntryData_C*>& QuestTaskItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestTask& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestTaskListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateRewards(TArray<struct FQuestReward>& QuestRewards, const TArray<class UBP_DB_QuestRewardListEntryData_C*>& QuestRewardItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestRewardListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetQuest(const struct FQuestAssetReference& QuestHandle, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue);
};

}


