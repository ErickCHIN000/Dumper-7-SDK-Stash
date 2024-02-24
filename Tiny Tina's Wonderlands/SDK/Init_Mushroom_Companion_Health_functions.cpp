#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Mushroom_Companion_Health.Init_Mushroom_Companion_Health_C
// (None)

class UClass* UInit_Mushroom_Companion_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Mushroom_Companion_Health_C");

	return Clss;
}


// Init_Mushroom_Companion_Health_C Init_Mushroom_Companion_Health.Default__Init_Mushroom_Companion_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Mushroom_Companion_Health_C* UInit_Mushroom_Companion_Health_C::GetDefaultObj()
{
	static class UInit_Mushroom_Companion_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Mushroom_Companion_Health_C*>(UInit_Mushroom_Companion_Health_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Mushroom_Companion_Health.Init_Mushroom_Companion_Health_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateAttributeInitialValue_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Mushroom_Companion_Health_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_CalculateAttributeInitialValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Mushroom_Companion_Health_C", "CalculateAttributeInitialValue");

	Params::UInit_Mushroom_Companion_Health_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_CalculateAttributeInitialValue_ReturnValue = CallFunc_CalculateAttributeInitialValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


