#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_HiltMod_06_CritChance.Init_HiltMod_06_CritChance_C
// (None)

class UClass* UInit_HiltMod_06_CritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_HiltMod_06_CritChance_C");

	return Clss;
}


// Init_HiltMod_06_CritChance_C Init_HiltMod_06_CritChance.Default__Init_HiltMod_06_CritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_HiltMod_06_CritChance_C* UInit_HiltMod_06_CritChance_C::GetDefaultObj()
{
	static class UInit_HiltMod_06_CritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_HiltMod_06_CritChance_C*>(UInit_HiltMod_06_CritChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_HiltMod_06_CritChance.Init_HiltMod_06_CritChance_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_HiltMod_06_CritChance_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_HiltMod_06_CritChance_C", "CalculateAttributeInitialValue");

	Params::UInit_HiltMod_06_CritChance_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

