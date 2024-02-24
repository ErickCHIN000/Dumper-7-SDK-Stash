#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Ballistazooka.Rune_Ballistazooka_C
// (None)

class UClass* URune_Ballistazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Ballistazooka_C");

	return Clss;
}


// Rune_Ballistazooka_C Rune_Ballistazooka.Default__Rune_Ballistazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Ballistazooka_C* URune_Ballistazooka_C::GetDefaultObj()
{
	static class URune_Ballistazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Ballistazooka_C*>(URune_Ballistazooka_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Ballistazooka.Rune_Ballistazooka_C.GetXValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_Ballistazooka_C::GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Ballistazooka_C", "GetXValue");

	Params::URune_Ballistazooka_C_GetXValue_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Ballistazooka.Rune_Ballistazooka_C.GetX%Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_Ballistazooka_C::GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Ballistazooka_C", "GetX%Value");

	Params::URune_Ballistazooka_C_GetX_Value_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Ballistazooka.Rune_Ballistazooka_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Ballistazooka_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Ballistazooka_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Ballistazooka.Rune_Ballistazooka_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Ballistazooka_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Ballistazooka_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Ballistazooka.Rune_Ballistazooka_C.ExecuteUbergraph_Rune_Ballistazooka
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetX_Value_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetXValue_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetXValue_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetXValue_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetX_Value_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetXValue_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_Ballistazooka_C::ExecuteUbergraph_Rune_Ballistazooka(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetX_Value_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetX_Value_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetX_Value_ReturnValue_2, float CallFunc_GetX_Value_ReturnValue_3, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetXValue_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, float CallFunc_GetX_Value_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, float CallFunc_GetXValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, float CallFunc_GetX_Value_ReturnValue_5, float CallFunc_GetXValue_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, float CallFunc_GetX_Value_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_18, float CallFunc_GetXValue_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Ballistazooka_C", "ExecuteUbergraph_Rune_Ballistazooka");

	Params::URune_Ballistazooka_C_ExecuteUbergraph_Rune_Ballistazooka_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetX_Value_ReturnValue = CallFunc_GetX_Value_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetX_Value_ReturnValue_1 = CallFunc_GetX_Value_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetX_Value_ReturnValue_2 = CallFunc_GetX_Value_ReturnValue_2;
	Parms.CallFunc_GetX_Value_ReturnValue_3 = CallFunc_GetX_Value_ReturnValue_3;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetXValue_ReturnValue = CallFunc_GetXValue_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetX_Value_ReturnValue_4 = CallFunc_GetX_Value_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_GetXValue_ReturnValue_1 = CallFunc_GetXValue_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetX_Value_ReturnValue_5 = CallFunc_GetX_Value_ReturnValue_5;
	Parms.CallFunc_GetXValue_ReturnValue_2 = CallFunc_GetXValue_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_GetX_Value_ReturnValue_6 = CallFunc_GetX_Value_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetXValue_ReturnValue_3 = CallFunc_GetXValue_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}

}


