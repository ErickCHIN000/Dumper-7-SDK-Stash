#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Companion_Owner_DamageMultiplier_Poison.Init_Companion_Owner_DamageMultiplier_Poison_C
// (None)

class UClass* UInit_Companion_Owner_DamageMultiplier_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Companion_Owner_DamageMultiplier_Poison_C");

	return Clss;
}


// Init_Companion_Owner_DamageMultiplier_Poison_C Init_Companion_Owner_DamageMultiplier_Poison.Default__Init_Companion_Owner_DamageMultiplier_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Companion_Owner_DamageMultiplier_Poison_C* UInit_Companion_Owner_DamageMultiplier_Poison_C::GetDefaultObj()
{
	static class UInit_Companion_Owner_DamageMultiplier_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Companion_Owner_DamageMultiplier_Poison_C*>(UInit_Companion_Owner_DamageMultiplier_Poison_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Companion_Owner_DamageMultiplier_Poison.Init_Companion_Owner_DamageMultiplier_Poison_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Companion_Owner_DamageMultiplier_Poison_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Companion_Owner_DamageMultiplier_Poison_C", "CalculateAttributeInitialValue");

	Params::UInit_Companion_Owner_DamageMultiplier_Poison_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


