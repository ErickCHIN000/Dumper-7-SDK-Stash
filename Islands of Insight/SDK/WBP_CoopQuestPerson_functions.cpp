#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CoopQuestPerson.WBP_CoopQuestPerson_C
// (None)

class UClass* UWBP_CoopQuestPerson_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CoopQuestPerson_C");

	return Clss;
}


// WBP_CoopQuestPerson_C WBP_CoopQuestPerson.Default__WBP_CoopQuestPerson_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CoopQuestPerson_C* UWBP_CoopQuestPerson_C::GetDefaultObj()
{
	static class UWBP_CoopQuestPerson_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CoopQuestPerson_C*>(UWBP_CoopQuestPerson_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CoopQuestPerson.WBP_CoopQuestPerson_C.InitWithPerson_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConquestPersonPerformanceInformationPerson                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoopQuestPerson_C::InitWithPerson_Event(struct FConquestPersonPerformanceInformation& Person)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopQuestPerson_C", "InitWithPerson_Event");

	Params::UWBP_CoopQuestPerson_C_InitWithPerson_Event_Params Parms{};

	Parms.Person = Person;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopQuestPerson.WBP_CoopQuestPerson_C.ExecuteUbergraph_WBP_CoopQuestPerson
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConquestPersonPerformanceInformationK2Node_CustomEvent_Person                                        (None)
// struct FLinearColor                CallFunc_GetRedTeamColor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FLinearColor                CallFunc_GetBlueTeamColor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UWBP_CoopQuestPerson_C::ExecuteUbergraph_WBP_CoopQuestPerson(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, const struct FConquestPersonPerformanceInformation& K2Node_CustomEvent_Person, const struct FLinearColor& CallFunc_GetRedTeamColor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UObject* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& CallFunc_GetBlueTeamColor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopQuestPerson_C", "ExecuteUbergraph_WBP_CoopQuestPerson");

	Params::UWBP_CoopQuestPerson_C_ExecuteUbergraph_WBP_CoopQuestPerson_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_Person = K2Node_CustomEvent_Person;
	Parms.CallFunc_GetRedTeamColor_ReturnValue = CallFunc_GetRedTeamColor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetBlueTeamColor_ReturnValue = CallFunc_GetBlueTeamColor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopQuestPerson.WBP_CoopQuestPerson_C.InitWithPerson__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConquestPersonPerformanceInformationPerson                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoopQuestPerson_C::InitWithPerson__DelegateSignature(struct FConquestPersonPerformanceInformation& Person)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopQuestPerson_C", "InitWithPerson__DelegateSignature");

	Params::UWBP_CoopQuestPerson_C_InitWithPerson__DelegateSignature_Params Parms{};

	Parms.Person = Person;

	UObject::ProcessEvent(Func, &Parms);

}

}


