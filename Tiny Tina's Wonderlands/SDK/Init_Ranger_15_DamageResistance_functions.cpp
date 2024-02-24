#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ranger_15_DamageResistance.Init_Ranger_15_DamageResistance_C
// (None)

class UClass* UInit_Ranger_15_DamageResistance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ranger_15_DamageResistance_C");

	return Clss;
}


// Init_Ranger_15_DamageResistance_C Init_Ranger_15_DamageResistance.Default__Init_Ranger_15_DamageResistance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ranger_15_DamageResistance_C* UInit_Ranger_15_DamageResistance_C::GetDefaultObj()
{
	static class UInit_Ranger_15_DamageResistance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ranger_15_DamageResistance_C*>(UInit_Ranger_15_DamageResistance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Ranger_15_DamageResistance.Init_Ranger_15_DamageResistance_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageResistance                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentStackAmount                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Ranger_15_DamageResistance_C::CalculateAttributeInitialValue(class UObject* Context, float DamageResistance, float CurrentStackAmount, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Ranger_15_DamageResistance_C", "CalculateAttributeInitialValue");

	Params::UInit_Ranger_15_DamageResistance_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.DamageResistance = DamageResistance;
	Parms.CurrentStackAmount = CurrentStackAmount;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


