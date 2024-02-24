#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C
class UBP_ChallengeConditionPresentationBuilder_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ChallengeConditionPresentationBuilder_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UChallengeConditionPresentationMapping* LMappingDA, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UConditionBehaviour> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftClassPtr<class UQuestTaskPresentationDataBuilder> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base, bool K2Node_ClassDynamicCast_bSuccess, class UBP_QuestTaskPresentationBuilder_Base_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData);
	bool MakeTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData, int32 CurrentValue, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData, const struct FQuestTaskPresentationData& CallFunc_MakeCompoundTaskPresentationData_OutPresentationData, bool CallFunc_MakeCompoundTaskPresentationData_ReturnValue, TArray<struct FQuestTaskConditionPresentationData>& K2Node_MakeArray_Array, const struct FQuestTaskPresentationData& K2Node_MakeStruct_QuestTaskPresentationData);
};

}


