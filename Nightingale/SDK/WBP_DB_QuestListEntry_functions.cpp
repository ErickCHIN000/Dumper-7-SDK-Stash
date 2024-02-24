#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C
// (None)

class UClass* UWBP_DB_QuestListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_QuestListEntry_C");

	return Clss;
}


// WBP_DB_QuestListEntry_C WBP_DB_QuestListEntry.Default__WBP_DB_QuestListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_QuestListEntry_C* UWBP_DB_QuestListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_QuestListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_QuestListEntry_C*>(UWBP_DB_QuestListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.RefreshQuestDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuest                      QuestData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UWBP_DB_QuestListEntry_C::RefreshQuestDetails(const struct FQuest& QuestData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "RefreshQuestDetails");

	Params::UWBP_DB_QuestListEntry_C_RefreshQuestDetails_Params Parms{};

	Parms.QuestData = QuestData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "BP_OnItemExpansionChanged");

	Params::UWBP_DB_QuestListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "OnListItemObjectSet");

	Params::UWBP_DB_QuestListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "BP_OnItemSelectionChanged");

	Params::UWBP_DB_QuestListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "PreConstruct");

	Params::UWBP_DB_QuestListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestListEntry.WBP_DB_QuestListEntry_C.ExecuteUbergraph_WBP_DB_QuestListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestListEntry_C::ExecuteUbergraph_WBP_DB_QuestListEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestListEntry_C", "ExecuteUbergraph_WBP_DB_QuestListEntry");

	Params::UWBP_DB_QuestListEntry_C_ExecuteUbergraph_WBP_DB_QuestListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data = K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


