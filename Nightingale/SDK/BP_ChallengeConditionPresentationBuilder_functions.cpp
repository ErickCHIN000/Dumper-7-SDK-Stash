#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C
// (None)

class UClass* UBP_ChallengeConditionPresentationBuilder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ChallengeConditionPresentationBuilder_C");

	return Clss;
}


// BP_ChallengeConditionPresentationBuilder_C BP_ChallengeConditionPresentationBuilder.Default__BP_ChallengeConditionPresentationBuilder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ChallengeConditionPresentationBuilder_C* UBP_ChallengeConditionPresentationBuilder_C::GetDefaultObj()
{
	static class UBP_ChallengeConditionPresentationBuilder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ChallengeConditionPresentationBuilder_C*>(UBP_ChallengeConditionPresentationBuilder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// class UChallengeConditionPresentationMapping*LMappingDA                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UConditionBehaviour>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQuestTaskPresentationDataBuilder>CallFunc_Map_Find_Value                                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestTaskPresentationBuilder_Base_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeTaskConditionPresentationData_bWasCreated           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakeTaskConditionPresentationData_ConditionPresentationData(None)

void UBP_ChallengeConditionPresentationBuilder_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UChallengeConditionPresentationMapping* LMappingDA, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UConditionBehaviour> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftClassPtr<class UQuestTaskPresentationDataBuilder> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base, bool K2Node_ClassDynamicCast_bSuccess, class UBP_QuestTaskPresentationBuilder_Base_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChallengeConditionPresentationBuilder_C", "MakeTaskConditionPresentationData");

	Params::UBP_ChallengeConditionPresentationBuilder_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.LMappingDA = LMappingDA;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base = K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_MakeTaskConditionPresentationData_bWasCreated = CallFunc_MakeTaskConditionPresentationData_bWasCreated;
	Parms.CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData = CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}


// Function BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C.MakeTaskPresentationData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTask                       Task                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FConditionProgressDataList  TaskProgressList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuestTaskPresentationData  OutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeTaskConditionPresentationData_bWasCreated           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_MakeTaskConditionPresentationData_ConditionPresentationData(None)
// struct FQuestTaskPresentationData  CallFunc_MakeCompoundTaskPresentationData_OutPresentationData    (None)
// bool                               CallFunc_MakeCompoundTaskPresentationData_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestTaskConditionPresentationData>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FQuestTaskPresentationData  K2Node_MakeStruct_QuestTaskPresentationData                      (None)

bool UBP_ChallengeConditionPresentationBuilder_C::MakeTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData, int32 CurrentValue, bool CallFunc_MakeTaskConditionPresentationData_bWasCreated, const struct FQuestTaskConditionPresentationData& CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData, const struct FQuestTaskPresentationData& CallFunc_MakeCompoundTaskPresentationData_OutPresentationData, bool CallFunc_MakeCompoundTaskPresentationData_ReturnValue, TArray<struct FQuestTaskConditionPresentationData>& K2Node_MakeArray_Array, const struct FQuestTaskPresentationData& K2Node_MakeStruct_QuestTaskPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChallengeConditionPresentationBuilder_C", "MakeTaskPresentationData");

	Params::UBP_ChallengeConditionPresentationBuilder_C_MakeTaskPresentationData_Params Parms{};

	Parms.Task = Task;
	Parms.TaskProgressList = TaskProgressList;
	Parms.CurrentValue = CurrentValue;
	Parms.CallFunc_MakeTaskConditionPresentationData_bWasCreated = CallFunc_MakeTaskConditionPresentationData_bWasCreated;
	Parms.CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData = CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData;
	Parms.CallFunc_MakeCompoundTaskPresentationData_OutPresentationData = CallFunc_MakeCompoundTaskPresentationData_OutPresentationData;
	Parms.CallFunc_MakeCompoundTaskPresentationData_ReturnValue = CallFunc_MakeCompoundTaskPresentationData_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_QuestTaskPresentationData = K2Node_MakeStruct_QuestTaskPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}

}


