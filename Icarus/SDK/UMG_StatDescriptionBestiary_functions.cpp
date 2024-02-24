#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C
// (None)

class UClass* UUMG_StatDescriptionBestiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_StatDescriptionBestiary_C");

	return Clss;
}


// UMG_StatDescriptionBestiary_C UMG_StatDescriptionBestiary.Default__UMG_StatDescriptionBestiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_StatDescriptionBestiary_C* UUMG_StatDescriptionBestiary_C::GetDefaultObj()
{
	static class UUMG_StatDescriptionBestiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_StatDescriptionBestiary_C*>(UUMG_StatDescriptionBestiary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatsEnum                  Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RetrievedDescription                                             (Edit, BlueprintVisible)
// class FText                        CallFunc_GetStatDescriptionBP_Description                        (None)
// enum class EFunctionOutcome        CallFunc_GetStatDescriptionBP_Outcome                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatDescriptionBestiary_C::Initialise(const struct FStatsEnum& Stat, int32 Value, class FText RetrievedDescription, class FText CallFunc_GetStatDescriptionBP_Description, enum class EFunctionOutcome CallFunc_GetStatDescriptionBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "Initialise");

	Params::UUMG_StatDescriptionBestiary_C_Initialise_Params Parms{};

	Parms.Stat = Stat;
	Parms.Value = Value;
	Parms.RetrievedDescription = RetrievedDescription;
	Parms.CallFunc_GetStatDescriptionBP_Description = CallFunc_GetStatDescriptionBP_Description;
	Parms.CallFunc_GetStatDescriptionBP_Outcome = CallFunc_GetStatDescriptionBP_Outcome;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_StatDescriptionBestiary_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatDescriptionBestiary_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "BP_OnItemExpansionChanged");

	Params::UUMG_StatDescriptionBestiary_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatDescriptionBestiary_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "BP_OnItemSelectionChanged");

	Params::UUMG_StatDescriptionBestiary_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_StatDescriptionBestiary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.Set Active State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatDescriptionBestiary_C::Set_Active_State(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "Set Active State");

	Params::UUMG_StatDescriptionBestiary_C_Set_Active_State_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_StatDescriptionBestiary_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "PreConstruct");

	Params::UUMG_StatDescriptionBestiary_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.ExecuteUbergraph_UMG_StatDescriptionBestiary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void UUMG_StatDescriptionBestiary_C::ExecuteUbergraph_UMG_StatDescriptionBestiary(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_Active, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatDescriptionBestiary_C", "ExecuteUbergraph_UMG_StatDescriptionBestiary");

	Params::UUMG_StatDescriptionBestiary_C_ExecuteUbergraph_UMG_StatDescriptionBestiary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


