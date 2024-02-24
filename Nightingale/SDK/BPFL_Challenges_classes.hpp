#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Challenges.BPFL_Challenges_C
class UBPFL_Challenges_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Challenges_C* GetDefaultObj();

	void GetProgressPresentationData(class UBP_ChallengeConditionPresentationBuilder_C* ChallengePresentationBuilder, TScriptInterface<class IChallengeSystemObservable> ChallengeSystemObservable, TScriptInterface<class IChallengeDefinition> ChallengeDefinition, const struct FTask& Task, class UObject* __WorldContext, int32* NumConditionsComplete, int32* NumConditionsTotal, TMap<class FString, class FString>* ConditionsProgressMap, bool IsChallengeWatched, TMap<class FString, class FString> ConditionsProgress, const class FString& ProgressString, int32 ConditionsTotal, int32 ConditionsCompleted, const struct FQuestTaskPresentationData& QuestPresentationData, const struct FConditionProgressDataList& ProgressData, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_GetProgressDatafromWatchedChallenge_IsWatched, class UObject* CallFunc_GetProgressDatafromWatchedChallenge_ProgressDataObj, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress, bool K2Node_DynamicCast_bSuccess, const struct FConditionProgressDataList& CallFunc_GetProgressData_OutProgressData, int32 CallFunc_Add_IntInt_ReturnValue, const struct FConditionProgressDataList& Temp_struct_Variable, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_MakeTaskPresentationData_OutPresentationData, bool CallFunc_MakeTaskPresentationData_ReturnValue);
	void GetProgressDatafromWatchedChallenge(class UObject* Challenge, TScriptInterface<class IChallengeSystemObservable> ChallengeSystemObserver, class UObject* __WorldContext, bool* IsWatched, class UObject** ProgressDataObj, const struct FExperienceStateID& ChallengeID, const TArray<TScriptInterface<class IChallengeProgress>>& WatchedChallenges, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<TScriptInterface<class IChallengeProgress>>& CallFunc_GetWatchedChallenges_OutChallenges, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IChallengeProgress> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_1, bool CallFunc_EqualEqual_FExperienceStateID_ReturnValue);
};

}


