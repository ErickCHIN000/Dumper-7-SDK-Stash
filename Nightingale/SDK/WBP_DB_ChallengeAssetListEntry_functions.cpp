#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C
// (None)

class UClass* UWBP_DB_ChallengeAssetListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_ChallengeAssetListEntry_C");

	return Clss;
}


// WBP_DB_ChallengeAssetListEntry_C WBP_DB_ChallengeAssetListEntry.Default__WBP_DB_ChallengeAssetListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_ChallengeAssetListEntry_C* UWBP_DB_ChallengeAssetListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_ChallengeAssetListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_ChallengeAssetListEntry_C*>(UWBP_DB_ChallengeAssetListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengeAssetListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengeAssetListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengeAssetListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengeAssetListEntry_C", "BP_OnItemExpansionChanged");

	Params::UWBP_DB_ChallengeAssetListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengeAssetListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengeAssetListEntry_C", "OnListItemObjectSet");

	Params::UWBP_DB_ChallengeAssetListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengeAssetListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengeAssetListEntry_C", "BP_OnItemSelectionChanged");

	Params::UWBP_DB_ChallengeAssetListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengeAssetListEntry.WBP_DB_ChallengeAssetListEntry_C.ExecuteUbergraph_WBP_DB_ChallengeAssetListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengeAssetListEntry_C::ExecuteUbergraph_WBP_DB_ChallengeAssetListEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, bool K2Node_Event_bIsSelected, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengeAssetListEntry_C", "ExecuteUbergraph_WBP_DB_ChallengeAssetListEntry");

	Params::UWBP_DB_ChallengeAssetListEntry_C_ExecuteUbergraph_WBP_DB_ChallengeAssetListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


