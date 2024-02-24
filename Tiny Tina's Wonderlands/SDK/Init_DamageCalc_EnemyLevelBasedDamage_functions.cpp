#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_DamageCalc_EnemyLevelBasedDamage.Init_DamageCalc_EnemyLevelBasedDamage_C
// (None)

class UClass* UInit_DamageCalc_EnemyLevelBasedDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_DamageCalc_EnemyLevelBasedDamage_C");

	return Clss;
}


// Init_DamageCalc_EnemyLevelBasedDamage_C Init_DamageCalc_EnemyLevelBasedDamage.Default__Init_DamageCalc_EnemyLevelBasedDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_DamageCalc_EnemyLevelBasedDamage_C* UInit_DamageCalc_EnemyLevelBasedDamage_C::GetDefaultObj()
{
	static class UInit_DamageCalc_EnemyLevelBasedDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_DamageCalc_EnemyLevelBasedDamage_C*>(UInit_DamageCalc_EnemyLevelBasedDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_DamageCalc_EnemyLevelBasedDamage.Init_DamageCalc_EnemyLevelBasedDamage_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_DamageCalc_EnemyLevelBasedDamage_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_DamageCalc_EnemyLevelBasedDamage_C", "CalculateAttributeInitialValue");

	Params::UInit_DamageCalc_EnemyLevelBasedDamage_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


