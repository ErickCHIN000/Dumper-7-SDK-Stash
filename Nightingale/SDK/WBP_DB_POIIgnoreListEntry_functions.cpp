#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C
// (None)

class UClass* UWBP_DB_POIIgnoreListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_POIIgnoreListEntry_C");

	return Clss;
}


// WBP_DB_POIIgnoreListEntry_C WBP_DB_POIIgnoreListEntry.Default__WBP_DB_POIIgnoreListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_POIIgnoreListEntry_C* UWBP_DB_POIIgnoreListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_POIIgnoreListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_POIIgnoreListEntry_C*>(UWBP_DB_POIIgnoreListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.SetEntryData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DB_POIIgnoreListEntryData_C*IgnoreEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_DB_POIIgnoreListEntry_C::SetEntryData(class UBP_DB_POIIgnoreListEntryData_C* IgnoreEntry, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "SetEntryData");

	Params::UWBP_DB_POIIgnoreListEntry_C_SetEntryData_Params Parms{};

	Parms.IgnoreEntry = IgnoreEntry;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_DB_POIIgnoreListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_POIIgnoreListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "BP_OnItemExpansionChanged");

	Params::UWBP_DB_POIIgnoreListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_POIIgnoreListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "BP_OnItemSelectionChanged");

	Params::UWBP_DB_POIIgnoreListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_POIIgnoreListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "OnListItemObjectSet");

	Params::UWBP_DB_POIIgnoreListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BndEvt__WBP_DP_POIIgnoreListEntry_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_POIIgnoreListEntry_C::BndEvt__WBP_DP_POIIgnoreListEntry_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "BndEvt__WBP_DP_POIIgnoreListEntry_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.ExecuteUbergraph_WBP_DB_POIIgnoreListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_POIIgnoreListEntryData_C*K2Node_DynamicCast_AsBP_DB_POIIgnore_List_Entry_Data             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_POIIgnoreListEntry_C::ExecuteUbergraph_WBP_DB_POIIgnoreListEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_DB_POIIgnoreListEntryData_C* K2Node_DynamicCast_AsBP_DB_POIIgnore_List_Entry_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "ExecuteUbergraph_WBP_DB_POIIgnoreListEntry");

	Params::UWBP_DB_POIIgnoreListEntry_C_ExecuteUbergraph_WBP_DB_POIIgnoreListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsBP_DB_POIIgnore_List_Entry_Data = K2Node_DynamicCast_AsBP_DB_POIIgnore_List_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.DeleteEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EntryToDelete                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_POIIgnoreListEntry_C::DeleteEntry__DelegateSignature(const class FString& EntryToDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_POIIgnoreListEntry_C", "DeleteEntry__DelegateSignature");

	Params::UWBP_DB_POIIgnoreListEntry_C_DeleteEntry__DelegateSignature_Params Parms{};

	Parms.EntryToDelete = EntryToDelete;

	UObject::ProcessEvent(Func, &Parms);

}

}


