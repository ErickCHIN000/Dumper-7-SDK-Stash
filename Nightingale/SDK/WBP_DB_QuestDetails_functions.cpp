#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_QuestDetails.WBP_DB_QuestDetails_C
// (None)

class UClass* UWBP_DB_QuestDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_QuestDetails_C");

	return Clss;
}


// WBP_DB_QuestDetails_C WBP_DB_QuestDetails.Default__WBP_DB_QuestDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_QuestDetails_C* UWBP_DB_QuestDetails_C::GetDefaultObj()
{
	static class UWBP_DB_QuestDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_QuestDetails_C*>(UWBP_DB_QuestDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_QuestDetails.WBP_DB_QuestDetails_C.UpdateTasks
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQuestTask>          QuestTasks                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UBP_DB_QuestTaskListEntryData_C*>QuestTaskItems                                                   (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTask                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestTaskListEntryData_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestDetails_C::UpdateTasks(TArray<struct FQuestTask>& QuestTasks, const TArray<class UBP_DB_QuestTaskListEntryData_C*>& QuestTaskItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestTask& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestTaskListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestDetails_C", "UpdateTasks");

	Params::UWBP_DB_QuestDetails_C_UpdateTasks_Params Parms{};

	Parms.QuestTasks = QuestTasks;
	Parms.QuestTaskItems = QuestTaskItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestDetails.WBP_DB_QuestDetails_C.UpdateRewards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQuestReward>        QuestRewards                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UBP_DB_QuestRewardListEntryData_C*>QuestRewardItems                                                 (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestReward                CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestRewardListEntryData_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestDetails_C::UpdateRewards(TArray<struct FQuestReward>& QuestRewards, const TArray<class UBP_DB_QuestRewardListEntryData_C*>& QuestRewardItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestRewardListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestDetails_C", "UpdateRewards");

	Params::UWBP_DB_QuestDetails_C_UpdateRewards_Params Parms{};

	Parms.QuestRewards = QuestRewards;
	Parms.QuestRewardItems = QuestRewardItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestDetails.WBP_DB_QuestDetails_C.SetQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestHandle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestDetails_C::SetQuest(const struct FQuestAssetReference& QuestHandle, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestDetails_C", "SetQuest");

	Params::UWBP_DB_QuestDetails_C_SetQuest_Params Parms{};

	Parms.QuestHandle = QuestHandle;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


