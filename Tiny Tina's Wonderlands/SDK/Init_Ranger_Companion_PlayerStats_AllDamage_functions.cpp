#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ranger_Companion_PlayerStats_AllDamage.Init_Ranger_Companion_PlayerStats_AllDamage_C
// (None)

class UClass* UInit_Ranger_Companion_PlayerStats_AllDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ranger_Companion_PlayerStats_AllDamage_C");

	return Clss;
}


// Init_Ranger_Companion_PlayerStats_AllDamage_C Init_Ranger_Companion_PlayerStats_AllDamage.Default__Init_Ranger_Companion_PlayerStats_AllDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ranger_Companion_PlayerStats_AllDamage_C* UInit_Ranger_Companion_PlayerStats_AllDamage_C::GetDefaultObj()
{
	static class UInit_Ranger_Companion_PlayerStats_AllDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ranger_Companion_PlayerStats_AllDamage_C*>(UInit_Ranger_Companion_PlayerStats_AllDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Ranger_Companion_PlayerStats_AllDamage.Init_Ranger_Companion_PlayerStats_AllDamage_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Ranger_Companion_PlayerStats_AllDamage_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Ranger_Companion_PlayerStats_AllDamage_C", "CalculateAttributeInitialValue");

	Params::UInit_Ranger_Companion_PlayerStats_AllDamage_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue2 = CallFunc_GetValueOfAttribute_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


