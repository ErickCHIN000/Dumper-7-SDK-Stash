#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C
// (None)

class UClass* UUMG_FieldGuideItems_DamageVariationLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItems_DamageVariationLarge_C");

	return Clss;
}


// UMG_FieldGuideItems_DamageVariationLarge_C UMG_FieldGuideItems_DamageVariationLarge.Default__UMG_FieldGuideItems_DamageVariationLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItems_DamageVariationLarge_C* UUMG_FieldGuideItems_DamageVariationLarge_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItems_DamageVariationLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItems_DamageVariationLarge_C*>(UUMG_FieldGuideItems_DamageVariationLarge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RetrievedDescription                                             (Edit, BlueprintVisible)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_FieldGuideItems_DamageVariationLarge_C::Initialise(int32 Min, int32 Max, class FText Type, class FText RetrievedDescription, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "Initialise");

	Params::UUMG_FieldGuideItems_DamageVariationLarge_C_Initialise_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.Type = Type;
	Parms.RetrievedDescription = RetrievedDescription;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItems_DamageVariationLarge_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_DamageVariationLarge_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "BP_OnItemExpansionChanged");

	Params::UUMG_FieldGuideItems_DamageVariationLarge_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_DamageVariationLarge_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "BP_OnItemSelectionChanged");

	Params::UUMG_FieldGuideItems_DamageVariationLarge_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItems_DamageVariationLarge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_DamageVariationLarge_C::ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_DamageVariationLarge_C", "ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge");

	Params::UUMG_FieldGuideItems_DamageVariationLarge_C_ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


