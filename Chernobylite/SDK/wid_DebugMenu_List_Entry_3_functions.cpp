#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C
// (None)

class UClass* UWid_DebugMenu_List_Entry_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DebugMenu_List_Entry_3_C");

	return Clss;
}


// wid_DebugMenu_List_Entry_3_C wid_DebugMenu_List_Entry_3.Default__wid_DebugMenu_List_Entry_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DebugMenu_List_Entry_3_C* UWid_DebugMenu_List_Entry_3_C::GetDefaultObj()
{
	static class UWid_DebugMenu_List_Entry_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DebugMenu_List_Entry_3_C*>(UWid_DebugMenu_List_Entry_3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Enumerator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_DebugMenu_List_Entry_3_C::SetText(enum class EEventMap Enumerator, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "SetText");

	Params::UWid_DebugMenu_List_Entry_3_C_SetText_Params Parms{};

	Parms.Enumerator = Enumerator;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UWid_DebugMenu_List_Entry_3_C::Select(bool Select, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "Select");

	Params::UWid_DebugMenu_List_Entry_3_C_Select_Params Parms{};

	Parms.Select = Select;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_List_Entry_3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugMenu_List_Entry_3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "PreConstruct");

	Params::UWid_DebugMenu_List_Entry_3_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DebugMenu_List_Entry_3_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "OnListItemObjectSet");

	Params::UWid_DebugMenu_List_Entry_3_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugMenu_List_Entry_3_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "BP_OnItemSelectionChanged");

	Params::UWid_DebugMenu_List_Entry_3_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugMenu_List_Entry_3_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "BP_OnItemExpansionChanged");

	Params::UWid_DebugMenu_List_Entry_3_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_List_Entry_3_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu_List_Entry_3.wid_DebugMenu_List_Entry_3_C.ExecuteUbergraph_wid_DebugMenu_List_Entry_3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DebugMenu_List_Entry_3_C*K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugMenu_List_Entry_3_C::ExecuteUbergraph_wid_DebugMenu_List_Entry_3(int32 EntryPoint, class UWid_DebugMenu_List_Entry_3_C* K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry_3, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_List_Entry_3_C", "ExecuteUbergraph_wid_DebugMenu_List_Entry_3");

	Params::UWid_DebugMenu_List_Entry_3_C_ExecuteUbergraph_wid_DebugMenu_List_Entry_3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry_3 = K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


