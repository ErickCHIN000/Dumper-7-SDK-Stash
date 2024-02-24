#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_Guidebook_QuestTaskConditionEntry.WBP_sw_Guidebook_QuestTaskConditionEntry_C
// (None)

class UClass* UWBP_sw_Guidebook_QuestTaskConditionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_Guidebook_QuestTaskConditionEntry_C");

	return Clss;
}


// WBP_sw_Guidebook_QuestTaskConditionEntry_C WBP_sw_Guidebook_QuestTaskConditionEntry.Default__WBP_sw_Guidebook_QuestTaskConditionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_Guidebook_QuestTaskConditionEntry_C* UWBP_sw_Guidebook_QuestTaskConditionEntry_C::GetDefaultObj()
{
	static class UWBP_sw_Guidebook_QuestTaskConditionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_Guidebook_QuestTaskConditionEntry_C*>(UWBP_sw_Guidebook_QuestTaskConditionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_Guidebook_QuestTaskConditionEntry.WBP_sw_Guidebook_QuestTaskConditionEntry_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_sw_Guidebook_QuestTaskConditionEntry_C::GetTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestTaskConditionEntry_C", "GetTooltipWidget");

	Params::UWBP_sw_Guidebook_QuestTaskConditionEntry_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_sw_Guidebook_QuestTaskConditionEntry.WBP_sw_Guidebook_QuestTaskConditionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_Guidebook_QuestTaskConditionEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestTaskConditionEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Guidebook_QuestTaskConditionEntry.WBP_sw_Guidebook_QuestTaskConditionEntry_C.ExecuteUbergraph_WBP_sw_Guidebook_QuestTaskConditionEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Guidebook_QuestTaskConditionEntry_C::ExecuteUbergraph_WBP_sw_Guidebook_QuestTaskConditionEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Guidebook_QuestTaskConditionEntry_C", "ExecuteUbergraph_WBP_sw_Guidebook_QuestTaskConditionEntry");

	Params::UWBP_sw_Guidebook_QuestTaskConditionEntry_C_ExecuteUbergraph_WBP_sw_Guidebook_QuestTaskConditionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


