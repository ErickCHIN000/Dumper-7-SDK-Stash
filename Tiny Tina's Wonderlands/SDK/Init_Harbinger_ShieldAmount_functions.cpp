#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Harbinger_ShieldAmount.Init_Harbinger_ShieldAmount_C
// (None)

class UClass* UInit_Harbinger_ShieldAmount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Harbinger_ShieldAmount_C");

	return Clss;
}


// Init_Harbinger_ShieldAmount_C Init_Harbinger_ShieldAmount.Default__Init_Harbinger_ShieldAmount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Harbinger_ShieldAmount_C* UInit_Harbinger_ShieldAmount_C::GetDefaultObj()
{
	static class UInit_Harbinger_ShieldAmount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Harbinger_ShieldAmount_C*>(UInit_Harbinger_ShieldAmount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Harbinger_ShieldAmount.Init_Harbinger_ShieldAmount_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldRegenerationDuration                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Harbinger_ShieldAmount_C::CalculateAttributeInitialValue(class UObject* Context, float ShieldRegenerationDuration, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Harbinger_ShieldAmount_C", "CalculateAttributeInitialValue");

	Params::UInit_Harbinger_ShieldAmount_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.ShieldRegenerationDuration = ShieldRegenerationDuration;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


