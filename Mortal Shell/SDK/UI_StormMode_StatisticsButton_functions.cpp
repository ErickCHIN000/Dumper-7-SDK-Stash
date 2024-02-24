#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C
// (None)

class UClass* UUI_StormMode_StatisticsButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_StatisticsButton_C");

	return Clss;
}


// UI_StormMode_StatisticsButton_C UI_StormMode_StatisticsButton.Default__UI_StormMode_StatisticsButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_StatisticsButton_C* UUI_StormMode_StatisticsButton_C::GetDefaultObj()
{
	static class UUI_StormMode_StatisticsButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_StatisticsButton_C*>(UUI_StormMode_StatisticsButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.SetNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PageIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_StormMode_StatisticsButton_C::SetNumber(int32 PageIndex, int32* Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_StatisticsButton_C", "SetNumber");

	Params::UUI_StormMode_StatisticsButton_C_SetNumber_Params Parms{};

	Parms.PageIndex = PageIndex;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.Populate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_StormModeRun_Data   Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetWeaponNames_ReturnValue                              (None)
// class FText                        CallFunc_GetPlaytimeFromDate_ReturnValue                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_StormMode_StatisticsButton_C::Populate(bool IsValid, const struct FStruct_StormModeRun_Data& Data, class FText Temp_text_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetWeaponNames_ReturnValue, class FText CallFunc_GetPlaytimeFromDate_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, enum class EArmorTypes Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_StatisticsButton_C", "Populate");

	Params::UUI_StormMode_StatisticsButton_C_Populate_Params Parms{};

	Parms.IsValid = IsValid;
	Parms.Data = Data;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetWeaponNames_ReturnValue = CallFunc_GetWeaponNames_ReturnValue;
	Parms.CallFunc_GetPlaytimeFromDate_ReturnValue = CallFunc_GetPlaytimeFromDate_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_StatisticsButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_StatisticsButton_C", "PreConstruct");

	Params::UUI_StormMode_StatisticsButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_StatisticsButton.UI_StormMode_StatisticsButton_C.ExecuteUbergraph_UI_StormMode_StatisticsButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetNumber_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_StatisticsButton_C::ExecuteUbergraph_UI_StormMode_StatisticsButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_SetNumber_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_StatisticsButton_C", "ExecuteUbergraph_UI_StormMode_StatisticsButton");

	Params::UUI_StormMode_StatisticsButton_C_ExecuteUbergraph_UI_StormMode_StatisticsButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetNumber_Index = CallFunc_SetNumber_Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


