#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_DeathlessMantle_WardCapacity.Init_DeathlessMantle_WardCapacity_C
// (None)

class UClass* UInit_DeathlessMantle_WardCapacity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_DeathlessMantle_WardCapacity_C");

	return Clss;
}


// Init_DeathlessMantle_WardCapacity_C Init_DeathlessMantle_WardCapacity.Default__Init_DeathlessMantle_WardCapacity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_DeathlessMantle_WardCapacity_C* UInit_DeathlessMantle_WardCapacity_C::GetDefaultObj()
{
	static class UInit_DeathlessMantle_WardCapacity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_DeathlessMantle_WardCapacity_C*>(UInit_DeathlessMantle_WardCapacity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_DeathlessMantle_WardCapacity.Init_DeathlessMantle_WardCapacity_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_DeathlessMantle_WardCapacity_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_DeathlessMantle_WardCapacity_C", "CalculateAttributeInitialValue");

	Params::UInit_DeathlessMantle_WardCapacity_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


