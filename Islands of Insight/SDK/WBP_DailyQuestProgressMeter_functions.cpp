#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DailyQuestProgressMeter.WBP_DailyQuestProgressMeter_C
// (None)

class UClass* UWBP_DailyQuestProgressMeter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DailyQuestProgressMeter_C");

	return Clss;
}


// WBP_DailyQuestProgressMeter_C WBP_DailyQuestProgressMeter.Default__WBP_DailyQuestProgressMeter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DailyQuestProgressMeter_C* UWBP_DailyQuestProgressMeter_C::GetDefaultObj()
{
	static class UWBP_DailyQuestProgressMeter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DailyQuestProgressMeter_C*>(UWBP_DailyQuestProgressMeter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DailyQuestProgressMeter.WBP_DailyQuestProgressMeter_C.InitializeObjectiveDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestObjective*             Objective                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DailyQuestProgressMeter_C::InitializeObjectiveDisplay(class UQuestObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestProgressMeter_C", "InitializeObjectiveDisplay");

	Params::UWBP_DailyQuestProgressMeter_C_InitializeObjectiveDisplay_Params Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DailyQuestProgressMeter.WBP_DailyQuestProgressMeter_C.ExecuteUbergraph_WBP_DailyQuestProgressMeter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestObjective*             K2Node_CustomEvent_Objective                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetProgressMessage_ReturnValue                          (None)
// class FText                        CallFunc_GetDisplayMessage_ReturnValue                           (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_DailyQuestProgressMeter_C::ExecuteUbergraph_WBP_DailyQuestProgressMeter(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UQuestObjective* K2Node_CustomEvent_Objective, class FText CallFunc_GetProgressMessage_ReturnValue, class FText CallFunc_GetDisplayMessage_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestProgressMeter_C", "ExecuteUbergraph_WBP_DailyQuestProgressMeter");

	Params::UWBP_DailyQuestProgressMeter_C_ExecuteUbergraph_WBP_DailyQuestProgressMeter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_Objective = K2Node_CustomEvent_Objective;
	Parms.CallFunc_GetProgressMessage_ReturnValue = CallFunc_GetProgressMessage_ReturnValue;
	Parms.CallFunc_GetDisplayMessage_ReturnValue = CallFunc_GetDisplayMessage_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


