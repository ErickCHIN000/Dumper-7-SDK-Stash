#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Gun_Splat_Damage.Init_Gun_Splat_Damage_C
// (None)

class UClass* UInit_Gun_Splat_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Gun_Splat_Damage_C");

	return Clss;
}


// Init_Gun_Splat_Damage_C Init_Gun_Splat_Damage.Default__Init_Gun_Splat_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Gun_Splat_Damage_C* UInit_Gun_Splat_Damage_C::GetDefaultObj()
{
	static class UInit_Gun_Splat_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Gun_Splat_Damage_C*>(UInit_Gun_Splat_Damage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Gun_Splat_Damage.Init_Gun_Splat_Damage_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Gun_Splat_Damage_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Gun_Splat_Damage_C", "CalculateAttributeInitialValue");

	Params::UInit_Gun_Splat_Damage_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


