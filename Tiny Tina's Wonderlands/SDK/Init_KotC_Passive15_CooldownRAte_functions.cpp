#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_KotC_Passive15_CooldownRAte.Init_KotC_Passive15_CooldownRAte_C
// (None)

class UClass* UInit_KotC_Passive15_CooldownRAte_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_KotC_Passive15_CooldownRAte_C");

	return Clss;
}


// Init_KotC_Passive15_CooldownRAte_C Init_KotC_Passive15_CooldownRAte.Default__Init_KotC_Passive15_CooldownRAte_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_KotC_Passive15_CooldownRAte_C* UInit_KotC_Passive15_CooldownRAte_C::GetDefaultObj()
{
	static class UInit_KotC_Passive15_CooldownRAte_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_KotC_Passive15_CooldownRAte_C*>(UInit_KotC_Passive15_CooldownRAte_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_KotC_Passive15_CooldownRAte.Init_KotC_Passive15_CooldownRAte_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateAttributeInitialValue_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_KotC_Passive15_CooldownRAte_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_CalculateAttributeInitialValue_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_KotC_Passive15_CooldownRAte_C", "CalculateAttributeInitialValue");

	Params::UInit_KotC_Passive15_CooldownRAte_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_CalculateAttributeInitialValue_ReturnValue = CallFunc_CalculateAttributeInitialValue_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


