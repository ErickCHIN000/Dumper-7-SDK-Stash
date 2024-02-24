#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Kotc21_SplatDamage.Init_Kotc21_SplatDamage_C
// (None)

class UClass* UInit_Kotc21_SplatDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Kotc21_SplatDamage_C");

	return Clss;
}


// Init_Kotc21_SplatDamage_C Init_Kotc21_SplatDamage.Default__Init_Kotc21_SplatDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Kotc21_SplatDamage_C* UInit_Kotc21_SplatDamage_C::GetDefaultObj()
{
	static class UInit_Kotc21_SplatDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Kotc21_SplatDamage_C*>(UInit_Kotc21_SplatDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Kotc21_SplatDamage.Init_Kotc21_SplatDamage_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Kotc21_SplatDamage_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Kotc21_SplatDamage_C", "CalculateAttributeInitialValue");

	Params::UInit_Kotc21_SplatDamage_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


