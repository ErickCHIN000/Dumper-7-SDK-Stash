#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Challenges.BPFL_Challenges_C
// (None)

class UClass* UBPFL_Challenges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Challenges_C");

	return Clss;
}


// BPFL_Challenges_C BPFL_Challenges.Default__BPFL_Challenges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Challenges_C* UBPFL_Challenges_C::GetDefaultObj()
{
	static class UBPFL_Challenges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Challenges_C*>(UBPFL_Challenges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Challenges.BPFL_Challenges_C.GetProgressPresentationData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ChallengeConditionPresentationBuilder_C*ChallengePresentationBuilder                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeSystemObservable>ChallengeSystemObservable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>ChallengeDefinition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTask                       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NumConditionsComplete                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumConditionsTotal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> ConditionsProgressMap                                            (Parm, OutParm)
// bool                               IsChallengeWatched                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> ConditionsProgress                                               (Edit, BlueprintVisible)
// class FString                      ProgressString                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              ConditionsTotal                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ConditionsCompleted                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  QuestPresentationData                                            (Edit, BlueprintVisible)
// struct FConditionProgressDataList  ProgressData                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetProgressDatafromWatchedChallenge_IsWatched           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetProgressDatafromWatchedChallenge_ProgressDataObj     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeProgress>K2Node_DynamicCast_AsChallenge_Progress                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionProgressDataList  CallFunc_GetProgressData_OutProgressData                         (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionProgressDataList  Temp_struct_Variable                                             (None)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FQuestTaskPresentationData  CallFunc_MakeTaskPresentationData_OutPresentationData            (None)
// bool                               CallFunc_MakeTaskPresentationData_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Challenges_C::GetProgressPresentationData(class UBP_ChallengeConditionPresentationBuilder_C* ChallengePresentationBuilder, TScriptInterface<class IChallengeSystemObservable> ChallengeSystemObservable, TScriptInterface<class IChallengeDefinition> ChallengeDefinition, const struct FTask& Task, class UObject* __WorldContext, int32* NumConditionsComplete, int32* NumConditionsTotal, TMap<class FString, class FString>* ConditionsProgressMap, bool IsChallengeWatched, TMap<class FString, class FString> ConditionsProgress, const class FString& ProgressString, int32 ConditionsTotal, int32 ConditionsCompleted, const struct FQuestTaskPresentationData& QuestPresentationData, const struct FConditionProgressDataList& ProgressData, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_GetProgressDatafromWatchedChallenge_IsWatched, class UObject* CallFunc_GetProgressDatafromWatchedChallenge_ProgressDataObj, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress, bool K2Node_DynamicCast_bSuccess, const struct FConditionProgressDataList& CallFunc_GetProgressData_OutProgressData, int32 CallFunc_Add_IntInt_ReturnValue, const struct FConditionProgressDataList& Temp_struct_Variable, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_MakeTaskPresentationData_OutPresentationData, bool CallFunc_MakeTaskPresentationData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Challenges_C", "GetProgressPresentationData");

	Params::UBPFL_Challenges_C_GetProgressPresentationData_Params Parms{};

	Parms.ChallengePresentationBuilder = ChallengePresentationBuilder;
	Parms.ChallengeSystemObservable = ChallengeSystemObservable;
	Parms.ChallengeDefinition = ChallengeDefinition;
	Parms.Task = Task;
	Parms.__WorldContext = __WorldContext;
	Parms.IsChallengeWatched = IsChallengeWatched;
	Parms.ConditionsProgress = ConditionsProgress;
	Parms.ProgressString = ProgressString;
	Parms.ConditionsTotal = ConditionsTotal;
	Parms.ConditionsCompleted = ConditionsCompleted;
	Parms.QuestPresentationData = QuestPresentationData;
	Parms.ProgressData = ProgressData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetProgressDatafromWatchedChallenge_IsWatched = CallFunc_GetProgressDatafromWatchedChallenge_IsWatched;
	Parms.CallFunc_GetProgressDatafromWatchedChallenge_ProgressDataObj = CallFunc_GetProgressDatafromWatchedChallenge_ProgressDataObj;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsChallenge_Progress = K2Node_DynamicCast_AsChallenge_Progress;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetProgressData_OutProgressData = CallFunc_GetProgressData_OutProgressData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeTaskPresentationData_OutPresentationData = CallFunc_MakeTaskPresentationData_OutPresentationData;
	Parms.CallFunc_MakeTaskPresentationData_ReturnValue = CallFunc_MakeTaskPresentationData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumConditionsComplete != nullptr)
		*NumConditionsComplete = Parms.NumConditionsComplete;

	if (NumConditionsTotal != nullptr)
		*NumConditionsTotal = Parms.NumConditionsTotal;

	if (ConditionsProgressMap != nullptr)
		*ConditionsProgressMap = Parms.ConditionsProgressMap;

}


// Function BPFL_Challenges.BPFL_Challenges_C.GetProgressDatafromWatchedChallenge
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeSystemObservable>ChallengeSystemObserver                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsWatched                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ProgressDataObj                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          ChallengeID                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IChallengeProgress>>WatchedChallenges                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IChallengeProgress>>CallFunc_GetWatchedChallenges_OutChallenges                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeProgress>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue_1                                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FExperienceStateID_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Challenges_C::GetProgressDatafromWatchedChallenge(class UObject* Challenge, TScriptInterface<class IChallengeSystemObservable> ChallengeSystemObserver, class UObject* __WorldContext, bool* IsWatched, class UObject** ProgressDataObj, const struct FExperienceStateID& ChallengeID, const TArray<TScriptInterface<class IChallengeProgress>>& WatchedChallenges, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<TScriptInterface<class IChallengeProgress>>& CallFunc_GetWatchedChallenges_OutChallenges, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IChallengeProgress> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_1, bool CallFunc_EqualEqual_FExperienceStateID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Challenges_C", "GetProgressDatafromWatchedChallenge");

	Params::UBPFL_Challenges_C_GetProgressDatafromWatchedChallenge_Params Parms{};

	Parms.Challenge = Challenge;
	Parms.ChallengeSystemObserver = ChallengeSystemObserver;
	Parms.__WorldContext = __WorldContext;
	Parms.ChallengeID = ChallengeID;
	Parms.WatchedChallenges = WatchedChallenges;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetWatchedChallenges_OutChallenges = CallFunc_GetWatchedChallenges_OutChallenges;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_GetID_ReturnValue_1 = CallFunc_GetID_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FExperienceStateID_ReturnValue = CallFunc_EqualEqual_FExperienceStateID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWatched != nullptr)
		*IsWatched = Parms.IsWatched;

	if (ProgressDataObj != nullptr)
		*ProgressDataObj = Parms.ProgressDataObj;

}

}


