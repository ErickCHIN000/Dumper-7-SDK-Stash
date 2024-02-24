#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C
// (None)

class UClass* URune_DeductStaminaInsteadOfHP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_DeductStaminaInsteadOfHP_C");

	return Clss;
}


// Rune_DeductStaminaInsteadOfHP_C Rune_DeductStaminaInsteadOfHP.Default__Rune_DeductStaminaInsteadOfHP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_DeductStaminaInsteadOfHP_C* URune_DeductStaminaInsteadOfHP_C::GetDefaultObj()
{
	static class URune_DeductStaminaInsteadOfHP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_DeductStaminaInsteadOfHP_C*>(URune_DeductStaminaInsteadOfHP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C.GetXValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_DeductStaminaInsteadOfHP_C::GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_DeductStaminaInsteadOfHP_C", "GetXValue");

	Params::URune_DeductStaminaInsteadOfHP_C_GetXValue_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C.GetChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_DeductStaminaInsteadOfHP_C::GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_DeductStaminaInsteadOfHP_C", "GetChance");

	Params::URune_DeductStaminaInsteadOfHP_C_GetChance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_DeductStaminaInsteadOfHP_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_DeductStaminaInsteadOfHP_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_DeductStaminaInsteadOfHP_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_DeductStaminaInsteadOfHP_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C.ExecuteUbergraph_Rune_DeductStaminaInsteadOfHP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetXValue_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChance_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetXValue_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChance_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_DeductStaminaInsteadOfHP_C::ExecuteUbergraph_Rune_DeductStaminaInsteadOfHP(int32 EntryPoint, float CallFunc_GetXValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetChance_ReturnValue, float CallFunc_GetXValue_ReturnValue_1, float CallFunc_GetChance_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_DeductStaminaInsteadOfHP_C", "ExecuteUbergraph_Rune_DeductStaminaInsteadOfHP");

	Params::URune_DeductStaminaInsteadOfHP_C_ExecuteUbergraph_Rune_DeductStaminaInsteadOfHP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetXValue_ReturnValue = CallFunc_GetXValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetChance_ReturnValue = CallFunc_GetChance_ReturnValue;
	Parms.CallFunc_GetXValue_ReturnValue_1 = CallFunc_GetXValue_ReturnValue_1;
	Parms.CallFunc_GetChance_ReturnValue_1 = CallFunc_GetChance_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


