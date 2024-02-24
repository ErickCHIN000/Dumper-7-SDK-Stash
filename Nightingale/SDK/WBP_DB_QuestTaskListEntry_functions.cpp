#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C
// (None)

class UClass* UWBP_DB_QuestTaskListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_QuestTaskListEntry_C");

	return Clss;
}


// WBP_DB_QuestTaskListEntry_C WBP_DB_QuestTaskListEntry.Default__WBP_DB_QuestTaskListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_QuestTaskListEntry_C* UWBP_DB_QuestTaskListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_QuestTaskListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_QuestTaskListEntry_C*>(UWBP_DB_QuestTaskListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestTaskListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestTaskListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "BP_OnItemExpansionChanged");

	Params::UWBP_DB_QuestTaskListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestTaskListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "BP_OnItemSelectionChanged");

	Params::UWBP_DB_QuestTaskListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestTaskListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "OnListItemObjectSet");

	Params::UWBP_DB_QuestTaskListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestTaskListEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "Tick");

	Params::UWBP_DB_QuestTaskListEntry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestTaskListEntry.WBP_DB_QuestTaskListEntry_C.ExecuteUbergraph_WBP_DB_QuestTaskListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestTaskListEntryData_C*K2Node_DynamicCast_AsBP_DB_Quest_Task_List_Entry_Data            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        Temp_struct_Variable                                             (ConstParm)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromQuestTask_OutQuestTaskPresentationData(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromQuestTask_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestTaskListEntry_C::ExecuteUbergraph_WBP_DB_QuestTaskListEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_DB_QuestTaskListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_Task_List_Entry_Data, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsExpanded, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FOngoingTaskProgress& Temp_struct_Variable, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromQuestTask_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromQuestTask_ReturnValue, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestTaskListEntry_C", "ExecuteUbergraph_WBP_DB_QuestTaskListEntry");

	Params::UWBP_DB_QuestTaskListEntry_C_ExecuteUbergraph_WBP_DB_QuestTaskListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsBP_DB_Quest_Task_List_Entry_Data = K2Node_DynamicCast_AsBP_DB_Quest_Task_List_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromQuestTask_OutQuestTaskPresentationData = CallFunc_MakeQuestTaskPresentationDataFromQuestTask_OutQuestTaskPresentationData;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromQuestTask_ReturnValue = CallFunc_MakeQuestTaskPresentationDataFromQuestTask_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


